################################################################################
# Copyright (C) 2013 by gempa GmbH
#
# Common utility functions
#
# Author:  Stephan Herrnkind
# Email:   herrnkind@gempa.de
################################################################################

import socket, sys, traceback

from twisted.internet import reactor
from twisted.web import http

from seiscomp3 import Logging
from seiscomp3.Client import Application
from seiscomp3.Core import Time, TimeSpan
from seiscomp3.IO import ExportSink


#-------------------------------------------------------------------------------
# Filtered network iterator which yields networks matching request options
def networkIter(inv, ro):
	for i in xrange(inv.networkCount()):
		net = inv.network(i)

		# network code
		if ro.channel and not ro.channel.matchNet(net.code()):
			continue

		# start and end time
		if ro.time:
			try: end = net.end()
			except: end = None
			if not ro.time.match(net.start(), end):
				continue

		yield net


#-------------------------------------------------------------------------------
# Filtered station iterator which yields stations of a particular network
# matching request options
def stationIter(net, ro, matchGeo=False):
	for i in xrange(net.stationCount()):
		sta = net.station(i)

		# station code
		if ro.channel and not ro.channel.matchSta(sta.code()):
			continue

		# start and end time
		if ro.time:
			try: end = sta.end()
			except: end = None
			if not ro.time.match(sta.start(), end):
				continue

		# geographic location
		if matchGeo and ro.geo:
			try:
				lat = sta.latitude()
				lon = sta.longitude()
			except: continue
			if not ro.geo.match(lat, lon):
				continue

		yield sta


#-------------------------------------------------------------------------------
# Filtered location iterator which yields locations of a particular station
# matching request options
def locationIter(sta, ro):
	for i in xrange(sta.sensorLocationCount()):
		loc = sta.sensorLocation(i)

		# location code
		if ro.channel and not ro.channel.matchLoc(loc.code()):
			continue

		# start and end time
		if ro.time:
			try: end = loc.end()
			except: end = None
			if not ro.time.match(loc.start(), end):
				continue

		yield loc

#-------------------------------------------------------------------------------
# Filtered stream iterator which yields channels of a particular location
# matching request options
def streamIter(loc, ro):
	for i in xrange(loc.streamCount()):
		stream = loc.stream(i)

		# stream code
		if ro.channel and not ro.channel.matchCha(stream.code()):
			continue

		# start and end time
		if ro.time:
			try: end = stream.end()
			except: end = None
			if not ro.time.match(stream.start(), end):
				continue

		yield stream


#-------------------------------------------------------------------------------
# Thread-safe write of data using reactor main thread
def writeTS(req, data):
	reactor.callFromThread(req.write, data)


#-------------------------------------------------------------------------------
# Finish served requests
def onRequestServed(success, req):
	if req._disconnected:
		Logging.debug("request aborted")
		return

	if success:
		Logging.debug("request successfully served")
	else:
		Logging.debug("request failed")
	reactor.callFromThread(req.finish)


#-------------------------------------------------------------------------------
# Handle request errors
def onRequestError(failure, req):
	Logging.error("%s %s" % (failure.getErrorMessage(),
	              traceback.format_tb(failure.getTracebackObject())))

	reactor.callFromThread(req.processingFailed, failure)
	return failure


#-------------------------------------------------------------------------------
# Renders error page if the result set exceeds the configured maximum number
# objects
def accessLog(req, ro, code, length, err):
	logger = Application.Instance()._accessLog
	if logger is None:
		return

	logger.log(AccessLogEntry(req, ro, code, length, err))


################################################################################
class Sink(ExportSink):
	def __init__(self, request):
		ExportSink.__init__(self)
		self.request = request
		self.written = 0

	def write(self, data, size):
		if self.request._disconnected:
			return -1
		writeTS(self.request, data[:size])
		self.written += size
		return size

################################################################################
class AccessLogEntry:
	def __init__(self, req, ro, code, length, err):
		# user agent
		agent = req.getHeader("User-Agent")
		if agent is None:
			agent = ""
		else:
			agent = agent[:100].replace('|', ' ')

		if err is None:
			err = ""

		service, user, accessTime, procTime = "", "", "", 0
		net, sta, loc, cha = "", "", "", ""
		if ro is not None:
			# processing time in milliseconds
			procTime = int((Time.GMT() - ro.accessTime).length() * 1000.0)

			service = ro.service
			if ro.userName is not None:
				user = ro.userName
			accessTime = str(ro.accessTime)

			if ro.channel is not None:
				if ro.channel.net is not None:
					net = ",".join(ro.channel.net)
				if ro.channel.sta is not None:
					sta = ",".join(ro.channel.sta)
				if ro.channel.loc is not None:
					loc = ",".join(ro.channel.loc)
				if ro.channel.cha is not None:
					cha = ",".join(ro.channel.cha)

		# The host name of the client is resolved in the __str__ method by the
		# logging thread so that a long running DNS reverse lookup may not slow
		# down the request
		self.msgPrefix = "%s|%s|%s|" % (service, req.getRequestHostname(),
		                                accessTime)
		self.clientIP = req.getClientIP()
		self.msgSuffix = "|%s|%i|%i|%s|%s|%i|%s|%s|%s|%s|%s||" % (
		                 self.clientIP, length, procTime, err, agent, code,
		                 user, net, sta, loc, cha)

	def __str__(self):
		try:
			clientName = socket.gethostbyaddr(self.clientIP)[0]
		except socket.herror:
			clientName = ""
		return self.msgPrefix + clientName + self.msgSuffix


