/********************************************************************************
** Form generated from reading UI file 'maglistview.ui'
**
** Created: Thu Jan 23 14:38:32 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGLISTVIEW_H
#define UI_MAGLISTVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OriginListView
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *treeWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClear;
    QSpacerItem *spacerItem;
    QPushButton *btnDbRead;

    void setupUi(QWidget *OriginListView)
    {
        if (OriginListView->objectName().isEmpty())
            OriginListView->setObjectName(QString::fromUtf8("OriginListView"));
        OriginListView->resize(448, 649);
        vboxLayout = new QVBoxLayout(OriginListView);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        treeWidget = new QTreeWidget(OriginListView);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        vboxLayout->addWidget(treeWidget);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnClear = new QPushButton(OriginListView);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setEnabled(false);

        hboxLayout->addWidget(btnClear);

        spacerItem = new QSpacerItem(201, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnDbRead = new QPushButton(OriginListView);
        btnDbRead->setObjectName(QString::fromUtf8("btnDbRead"));
        btnDbRead->setEnabled(false);

        hboxLayout->addWidget(btnDbRead);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(OriginListView);

        QMetaObject::connectSlotsByName(OriginListView);
    } // setupUi

    void retranslateUi(QWidget *OriginListView)
    {
        OriginListView->setWindowTitle(QApplication::translate("OriginListView", "OriginList", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("OriginListView", "Clear", 0, QApplication::UnicodeUTF8));
        btnDbRead->setText(QApplication::translate("OriginListView", "Read from DB", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OriginListView: public Ui_OriginListView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGLISTVIEW_H
