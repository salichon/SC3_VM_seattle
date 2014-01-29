/********************************************************************************
** Form generated from reading UI file 'xmlview.ui'
**
** Created: Thu Jan 23 14:38:31 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XMLVIEW_H
#define UI_XMLVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XMLViewDialog
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *XMLViewDialog)
    {
        if (XMLViewDialog->objectName().isEmpty())
            XMLViewDialog->setObjectName(QString::fromUtf8("XMLViewDialog"));
        XMLViewDialog->resize(336, 330);
        gridLayout = new QGridLayout(XMLViewDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidget = new QTreeWidget(XMLViewDialog);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setIndentation(10);

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);


        retranslateUi(XMLViewDialog);

        QMetaObject::connectSlotsByName(XMLViewDialog);
    } // setupUi

    void retranslateUi(QWidget *XMLViewDialog)
    {
        XMLViewDialog->setWindowTitle(QApplication::translate("XMLViewDialog", "XMLView", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class XMLViewDialog: public Ui_XMLViewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XMLVIEW_H
