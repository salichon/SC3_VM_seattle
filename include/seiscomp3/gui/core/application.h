/***************************************************************************
 *   Copyright (C) by GFZ Potsdam                                          *
 *                                                                         *
 *   You can redistribute and/or modify this program under the             *
 *   terms of the SeisComP Binary License.                                 *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   SeisComP Binary License for more details.                             *
 ***************************************************************************/



#ifndef __SEISCOMP_GUI_APPLICATION_H__
#define __SEISCOMP_GUI_APPLICATION_H__

#include <QApplication>
#include <QString>
#include <QRectF>

#include <seiscomp3/client/application.h>
#include <seiscomp3/gui/core/maps.h>
#include <seiscomp3/gui/core/scheme.h>
#include <seiscomp3/gui/core/messagethread.h>
#include <seiscomp3/gui/core/messages.h>

#include <seiscomp3/gui/core/ui_showplugins.h>


#define SCApp (Seiscomp::Gui::Application::Instance())
#define SCScheme (SCApp->scheme())

class QSplashScreen;

namespace Seiscomp {

namespace Core {

DEFINE_SMARTPOINTER(Message);

}

namespace Communication {

DEFINE_SMARTPOINTER(Connection);

}

namespace IO {

DEFINE_SMARTPOINTER(DatabaseInterface);

}

namespace Logging {

class FileOutput;

}

namespace DataModel {

DEFINE_SMARTPOINTER(DatabaseQuery);
DEFINE_SMARTPOINTER(Network);
DEFINE_SMARTPOINTER(Station);
DEFINE_SMARTPOINTER(Notifier);
DEFINE_SMARTPOINTER(Object);

}


namespace Gui {


class ConnectionDialog;


class SC_GUI_API Application : public QApplication,
                                    public Client::Application {
	Q_OBJECT

	public:
		//! Application flags
		enum Flags {
			//! Show splash screen on startup
			SHOW_SPLASH            = 0x001,
			//! The application wants a database connection
			WANT_DATABASE          = 0x002,
			//! The application wants a messaging connection
			WANT_MESSAGING         = 0x004,
			//! The connection dialog should be opened when
			//! either one of the connections that has been
			//! requested with 'WANT_[SERVICE]' failed to create
			OPEN_CONNECTION_DIALOG = 0x008,
			//! If WANT_DATABASE is enabled and no custom settings
			//! are provided in the configuration file it tries to
			//! fetch the database connection from the messaging
			FETCH_DATABASE         = 0x010,
			//! Should received notifier messages be applied or not
			AUTO_APPLY_NOTIFIER    = 0x020,
			//! Should received notifier messages be interpreted or not
			//! When this flag is not set the signals 'addObject',
			//! 'removeObject' and 'updateObject' are not fired
			INTERPRETE_NOTIFIER    = 0x040,
			LOAD_STATIONS          = 0x080,
			LOAD_INVENTORY         = 0x100,
			LOAD_CONFIGMODULE      = 0x200,
			DEFAULT                = SHOW_SPLASH |
			                         WANT_DATABASE |
			                         WANT_MESSAGING |
			                         OPEN_CONNECTION_DIALOG |
			                         FETCH_DATABASE |
			                         AUTO_APPLY_NOTIFIER |
			                         INTERPRETE_NOTIFIER
		};


	public:
		Application(int& argc, char **argv, int flags = DEFAULT, Type type = QApplication::GuiClient);
		virtual ~Application();


	public:
		//! Returns the pointer to the application's instance.
		static Application* Instance();

		//! Checks if the installed Qt version is at least the
		//! one passed in 'ver'
		static bool minQtVersion(const char *ver);

		//! Copies all selected items of specified item view to clipboard as CSV
		static void copyToClipboard(const QAbstractItemView* view);

		void setDatabaseSOHInterval(int secs);

		Scheme& scheme();

		QSettings &settings();
		const QSettings &settings() const;

		bool startFullScreen() const;
		bool nonInteractive() const;

		const MapsDesc &mapsDesc() const;

		Core::TimeSpan maxEventAge() const;

		QColor configGetColor(const std::string& query, const QColor& base) const;
		Gradient configGetColorGradient(const std::string& query, const Gradient& base) const;
		QFont configGetFont(const std::string& query, const QFont& base) const;
		QPen configGetPen(const std::string& query, const QPen& base) const;
		QBrush configGetBrush(const std::string& query, const QBrush& base) const;

		void setFilterCommandsEnabled(bool);

		const std::string& commandTarget() const;

		void sendCommand(Command command, const std::string& parameter);
		void sendCommand(Command command, const std::string& parameter, Core::BaseObject*);

		//! Sets the mainwidget which is used as hint to close the
		//! splashscreen when the widget is shown
		void setMainWidget(QWidget*);

		void showMessage(const char*);
		void showWarning(const char*);

		bool notify(QObject *receiver, QEvent *e);

		bool sendMessage(Seiscomp::Core::Message* msg);
		bool sendMessage(const char* group, Seiscomp::Core::Message* msg);

		//! This method allows to emit notifier locally. They are not being sent over
		//! the messaging but interpreted and signalled to other local components.
		void emitNotifier(Seiscomp::DataModel::Notifier* n);

	protected:
		bool init();
		bool run();
		void done();

		void exit(int returnCode);

		void createCommandLineDescription();

		bool initConfiguration();
		bool initSubscriptions();

		bool validateParameters();

		bool handleInitializationError(Stage);

		virtual QString splashImagePath() const;


	signals:
		void changedConnection();
		void changedDatabase();

		void connectionEstablished();
		void connectionLost();

		void messageSkipped(Seiscomp::Communication::NetworkMessage*);
		void messageAvailable(Seiscomp::Core::Message*, Seiscomp::Communication::NetworkMessage*);

		void notifierAvailable(Seiscomp::DataModel::Notifier*);

		void addObject(const QString& parentID, Seiscomp::DataModel::Object*);
		void removeObject(const QString& parentID, Seiscomp::DataModel::Object*);
		void updateObject(const QString& parentID, Seiscomp::DataModel::Object*);


	public slots:
		void showSettings();


	private slots:
		void createConnection(QString host, QString user, QString group, int TimeOut);
		void destroyConnection();
		void databaseChanged();

		void messagesAvailable();

		void onConnectionEstablished();
		void onConnectionLost();
		void connectionError(int code);

		void objectDestroyed(QObject*);
		void closedLastWindow();

		void showAbout();
		void showHelpIndex();
		void showAppHelp();
		void showPlugins();

		void timerSOH();


	private:
		void startMessageThread();
		void closeMessageThread();
		void createSettingsDialog();
		ConnectionDialog* cdlg();


	private:
		static Application* _instance;

		Scheme              _scheme;
		mutable QSettings  *_settings;
		QTimer              _timerSOH;
		Core::Time          _lastSOH;
		int                 _intervalSOH;

		bool                _startFullScreen;
		bool                _nonInteractive;
		Core::TimeSpan      _eventTimeAgo;
		MapsDesc            _mapsDesc;
		std::string         _guiGroup;
		std::string         _commandTargetClient;

		QWidget*            _mainWidget;
		QSplashScreen*      _splash;
		ConnectionDialog*   _dlgConnection;
		bool                _settingsOpened;
		bool                _filterCommands;

		MessageThread*      _thread;
		int                 _flags;
};


template <typename T>
class Kicker : public Application {
	public:
		Kicker(int& argc, char **argv, int flags = DEFAULT)
			: Application(argc, argv, flags) {}


	protected:
		virtual void setupUi(T*) {}
		virtual bool initUi(T*) { return true; }

		virtual bool run() {
			showMessage("Setup user interface");

			T* w = new T;
			if ( !initUi(w) ) {
				showMessage("Kicker initialization failed, abort");
				delete w;
				return false;
			}

			setupUi(w);
			setMainWidget(w);

			if ( startFullScreen() )
				w->showFullScreen();
			else
				w->showNormal();

			return Application::run();
		}
};


}
}


#endif
