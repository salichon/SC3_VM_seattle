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


#ifndef __SEISCOMP_SELECTSTATION_H__
#define __SEISCOMP_SELECTSTATION_H__

#include <QDialog>
#include <QAbstractTableModel>

#include <seiscomp3/core/datetime.h>
#include <seiscomp3/datamodel/station.h>
#include <seiscomp3/gui/qt4.h>

#include <seiscomp3/gui/datamodel/ui_selectstation.h>


namespace Seiscomp {
namespace Gui {


class SC_GUI_API SelectStation : public QDialog {
	Q_OBJECT

	// ------------------------------------------------------------------
	// X'struction
	// ------------------------------------------------------------------
	public:
		SelectStation(Core::Time time, QWidget* parent = 0, Qt::WFlags f = 0);
		SelectStation(Core::Time time,
		              const QSet<QString> &blackList,
		              QWidget* parent = 0, Qt::WFlags f = 0);
		~SelectStation();

		QList<DataModel::Station*> selectedStations() const;

		void setReferenceLocation(double lat, double lon);


	// ------------------------------------------------------------------
	// Private Interface
	// ------------------------------------------------------------------
	private slots:
		void listMatchingStations(const QString& substr);


	private:
		void init(Core::Time, const QSet<QString> *blackList);


	// ------------------------------------------------------------------
	// Private data members
	// ------------------------------------------------------------------
	private:
		Ui::SelectStation _ui;
};

} // namespace Gui
} // namespace Seiscomp

#endif
