import os

'''
Plugin handler for the Quanterra/330 plugin.
'''
class SeedlinkPluginHandler:
  # Create defaults
  def __init__(self): pass

  def push(self, seedlink):
    # Check and set defaults
    try: seedlink.param('sources.q330.port')
    except: seedlink.setParam('sources.q330.port', 5330)

    try: seedlink.param('sources.q330.udpport')
    except: seedlink.setParam('sources.q330.udpport', "auto")

    try: seedlink.param('sources.q330.slot') is None
    except: seedlink.setParam('sources.q330.slot', 1)

    try: seedlink.param('sources.q330.serial')
    except: seedlink.setParam('sources.q330.serial', '0x0100000123456789')

    try: seedlink.param('sources.q330.auth')
    except: seedlink.setParam('sources.q330.auth', '0x00')

    # Evaluate udp port
    if seedlink._get('sources.q330.udpport').lower() == "auto":
      try: udpbase = int(seedlink._get('plugins.q330.udpbase', False))
      except: udpbase = 5500;
      seedlink.setParam('sources.q330.udpport', udpbase + 2*seedlink.station_count)

    # Key is per station (one instance per station)
    return seedlink.net + "." + seedlink.sta + "." + seedlink._get('seedlink.source.id')

  # Flush does nothing
  def flush(self, seedlink):
    pass
