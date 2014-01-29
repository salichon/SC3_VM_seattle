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



#ifndef __SC_GUI_INSPECTOR_H__
#define __SC_GUI_INSPECTOR_H__

#include <QTreeWidget>
#include <QTableWidget>
#include <QStack>

#include <seiscomp3/gui/core/ui_inspector.h>
#include <seiscomp3/core/baseobject.h>
#include <seiscomp3/gui/qt4.h>


namespace Seiscomp {
namespace Gui {


class SC_GUI_API Inspector : public QWidget {

	Q_OBJECT

	public:
		Inspector(QWidget * parent = 0, Qt::WFlags f = 0);
		~Inspector();


	public:
		void setObject(Core::BaseObject *obj);
		void selectObject(Core::BaseObject *obj);


	private:
		void addObject(QTreeWidgetItem *parent);
		void addProperty(const std::string &name, const std::string &type,
		                 const std::string &value, bool isIndex = false,
		                 bool isOptional = false, bool isReference = false);
		void selectObject(QTreeWidgetItem *parent, Core::BaseObject *obj);


	private slots:
		void selectionChanged();
		void linkClicked(QString);
		void back();


	private:
		typedef QPair<Core::BaseObject*, Core::BaseObject*> State;

		Core::BaseObject           *_object;
		Core::BaseObject           *_currentSelection;
		Ui::Inspector               _ui;
		QStack<State>               _history;
};


}
}

#endif
