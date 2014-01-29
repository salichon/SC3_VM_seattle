/********************************************************************************
** Form generated from reading UI file 'inspector.ui'
**
** Created: Thu Jan 23 14:38:31 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSPECTOR_H
#define UI_INSPECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QSplitter>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inspector
{
public:
    QVBoxLayout *vboxLayout;
    QToolButton *buttonBack;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Inspector)
    {
        if (Inspector->objectName().isEmpty())
            Inspector->setObjectName(QString::fromUtf8("Inspector"));
        Inspector->resize(657, 498);
        vboxLayout = new QVBoxLayout(Inspector);
        vboxLayout->setSpacing(4);
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        buttonBack = new QToolButton(Inspector);
        buttonBack->setObjectName(QString::fromUtf8("buttonBack"));
        buttonBack->setEnabled(false);
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/icons/undo.png"));
        buttonBack->setIcon(icon);

        vboxLayout->addWidget(buttonBack);

        splitter = new QSplitter(Inspector);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeWidget = new QTreeWidget(splitter);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        splitter->addWidget(treeWidget);
        tableWidget = new QTableWidget(splitter);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setAlternatingRowColors(true);
        splitter->addWidget(tableWidget);

        vboxLayout->addWidget(splitter);


        retranslateUi(Inspector);

        QMetaObject::connectSlotsByName(Inspector);
    } // setupUi

    void retranslateUi(QWidget *Inspector)
    {
        Inspector->setWindowTitle(QApplication::translate("Inspector", "Inspector", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonBack->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        buttonBack->setText(QApplication::translate("Inspector", "...", 0, QApplication::UnicodeUTF8));
        buttonBack->setShortcut(QApplication::translate("Inspector", "Backspace", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Inspector: public Ui_Inspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSPECTOR_H
