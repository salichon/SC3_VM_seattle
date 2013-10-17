import os, sys, time, subprocess, seiscomp3.Kernel


def check_output(cmd):
  proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True)
  out = proc.communicate()
  return [out[0], out[1], proc.returncode]


def createMYSQLDB(db, rwuser, rwpwd, rouser, ropwd, rwhost, rootpwd, drop, schemapath):
  cmd = "mysql -u root"
  if rootpwd: cmd += " -p" + rootpwd

  sys.stdout.write("+ Create MYSQL database\n")

  out = check_output(cmd + " -s --skip-column-names -e \"select version()\"")
  version = out[0].strip()
  err = out[1]
  if not version and err:
    sys.stdout.write("  %s\n"\
                     "  Could not determine MYSQL server version. Is the root password correct\n"\
                     "  and MYSQL is running and the client installed on this machine?\n" % err.strip())
    return False

  sys.stdout.write("  + Found MYSQL server version %s\n" % version)

  if drop:
    q = "DROP DATABASE IF EXISTS %s;" % db
    sys.stdout.write("  + Drop database %s\n" % db)
    out = check_output(cmd + " -e \"%s\"" % q)
    if out[1]:
      sys.stdout.write("  %s\n" % out[1].strip())
      return False

  sys.stdout.write("  + Create database %s\n" % db)
  q = "CREATE DATABASE %s CHARACTER SET utf8 COLLATE utf8_bin;" % db
  out = check_output(cmd + " -e \"%s\"" % q)
  if out[1]:
    sys.stdout.write("  %s\n" % out[1].strip())
    return False

  sys.stdout.write("  + Setup user roles\n")
  q = "GRANT ALL ON %s.* TO '%s'@'localhost' IDENTIFIED BY '%s';" % (db, rwuser, rwpwd)
  q += "GRANT ALL ON %s.* TO '%s'@'%%' IDENTIFIED BY '%s';" % (db, rwuser, rwpwd)

  if rwuser != rouser:
    q += "GRANT SELECT ON %s.* TO '%s'@'localhost' IDENTIFIED BY '%s';" % (db, rouser, ropwd)
    q += "GRANT SELECT ON %s.* TO '%s'@'%%' IDENTIFIED BY '%s';" % (db, rouser, ropwd)

  out = check_output(cmd + " -e \"%s\"" % q)
  if out[1]:
    sys.stdout.write("  %s\n" % out[1].strip())
    return False

  sys.stdout.write("  + Create tables\n")
  q = "USE %s; source %s;" % (db, os.path.join(schemapath, "mysql.sql"))
  out = check_output(cmd + " -e \"%s\"" % q)
  if out[1]:
    sys.stdout.write("  %s\n" % out[1].strip())
    return False

  return True


# The kernel module which starts scmaster if enabled
class Module(seiscomp3.Kernel.CoreModule):
  def __init__(self, env):
    seiscomp3.Kernel.CoreModule.__init__(self, env, env.moduleName(__file__))
    # High priority
    self.order = -1

    # Default values
    self.messaging = True
    self.messagingPort = 4803

    try: self.messaging = self.env.getBool("messaging.enable")
    except: pass
    try: self.messagingPort = self.env.getInt("messaging.port")
    except: pass

  # Add master port
  def _get_start_params(self):
    return seiscomp3.Kernel.Module._get_start_params(self) + " -H localhost:%d" % self.messagingPort


  def start(self):
    if not self.messaging:
      print "[kernel] %s is disabled by config" % self.name
      return 0

    seiscomp3.Kernel.CoreModule.start(self)

  def check(self):
    if not self.messaging:
      print "[kernel] %s is disabled by config" % self.name
      return 0

    return seiscomp3.Kernel.CoreModule.check(self)

  def status(self, shouldRun):
    if not self.messaging: shouldRun = False
    return seiscomp3.Kernel.CoreModule.status(self, shouldRun)

  def setup(self, setup_config):
    cfgfile = os.path.join(self.env.SEISCOMP_ROOT, "etc", self.name + ".cfg")
    schemapath = os.path.join(self.env.SEISCOMP_ROOT, "share", "db")

    cfg = seiscomp3.Config.Config()
    cfg.readConfig(cfgfile)
    try:
      dbenable = setup_config.getBool(self.name + ".database.enable")
    except:
      sys.stderr.write("  - database.enable not set, ignoring setup\n")
      return 0

    dbBackend = None

    if not dbenable:
      cfg.setString("plugins", "")
    else:
      try: dbBackend = setup_config.getString(self.name + ".database.enable.backend")
      except:
        sys.stderr.write("  - database backend not set, ignoring setup\n")
        return 1

      cfg.setString("plugins", "dbplugin")
      # Configure db backend for scmaster
      cfg.setString("core.plugins", "db" + dbBackend)

      try: db = setup_config.getString(self.name + ".database.enable.db")
      except:
        sys.stderr.write("  - database name not set, ignoring setup\n")
        return 1

      try: rwhost = setup_config.getString(self.name + ".database.enable.rwhost")
      except:
        sys.stderr.write("  - database host (rw) not set, ignoring setup\n")
        return 1

      try: rwuser = setup_config.getString(self.name + ".database.enable.rwuser")
      except:
        sys.stderr.write("  - database user (rw) not set, ignoring setup\n")
        return 1

      try: rwpwd = setup_config.getString(self.name + ".database.enable.rwpwd")
      except:
        sys.stderr.write("  - database password (rw) not set, ignoring setup\n")
        return 1

      try: rohost = setup_config.getString(self.name + ".database.enable.rohost")
      except:
        sys.stderr.write("  - database host (ro) not set, ignoring setup\n")
        return 1

      try: rouser = setup_config.getString(self.name + ".database.enable.rouser")
      except:
        sys.stderr.write("  - database user (ro) not set, ignoring setup\n")
        return 1

      try: ropwd = setup_config.getString(self.name + ".database.enable.ropwd")
      except:
        sys.stderr.write("  - database password (ro) not set, ignoring setup\n")
        return 1

      if dbBackend == "mysql":
        try: create = setup_config.getBool(self.name + ".database.enable.backend.create")
        except: create = False
        try: drop = setup_config.getBool(self.name + ".database.enable.backend.create.drop")
        except: drop = False
        try: rootpwd = setup_config.getString(self.name + ".database.enable.backend.create.rootpw")
        except: rootpwd = ""

        if create:
          if not createMYSQLDB(db, rwuser, rwpwd, rouser, ropwd, rwhost, rootpwd, drop, schemapath):
            sys.stdout.write("  - Failed to setup database\n")
            return 1
          #sys.stderr.write("Sorry, creation of the database is currently not supported\n")

      cfg.setString("plugins.dbPlugin.dbDriver", dbBackend)
      cfg.setString("plugins.dbPlugin.readConnection", rouser + ":" + ropwd + "@" + rohost + "/" + db)
      cfg.setString("plugins.dbPlugin.writeConnection", rwuser + ":" + rwpwd + "@" + rwhost + "/" + db)

    cfg.writeConfig()

    # Now we need to insert the corresponding plugin to etc/global.cfg
    # that all connected local clients can handle the database backend
    if dbBackend:
        cfgfile = os.path.join(self.env.SEISCOMP_ROOT, "etc", "global.cfg")
        cfg = seiscomp3.Config.Config()
        cfg.readConfig(cfgfile)
        cfg.setString("core.plugins", "db" + dbBackend)
        cfg.writeConfig()

    return 0
