/********************************************************************************
** Form generated from reading UI file 'locatorsettings.ui'
**
** Created: Thu Jan 23 14:38:33 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATORSETTINGS_H
#define UI_LOCATORSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LocatorSettings
{
public:
    QVBoxLayout *vboxLayout;
    QTableWidget *tableParameters;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *LocatorSettings)
    {
        if (LocatorSettings->objectName().isEmpty())
            LocatorSettings->setObjectName(QString::fromUtf8("LocatorSettings"));
        LocatorSettings->resize(453, 455);
        vboxLayout = new QVBoxLayout(LocatorSettings);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(6, 6, 6, 6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tableParameters = new QTableWidget(LocatorSettings);
        tableParameters->setObjectName(QString::fromUtf8("tableParameters"));
        tableParameters->setAlternatingRowColors(true);
        tableParameters->setSelectionMode(QAbstractItemView::SingleSelection);
        tableParameters->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableParameters->setSortingEnabled(true);

        vboxLayout->addWidget(tableParameters);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(LocatorSettings);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(LocatorSettings);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(LocatorSettings);
        QObject::connect(okButton, SIGNAL(clicked()), LocatorSettings, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), LocatorSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(LocatorSettings);
    } // setupUi

    void retranslateUi(QDialog *LocatorSettings)
    {
        LocatorSettings->setWindowTitle(QApplication::translate("LocatorSettings", "Dialog", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("LocatorSettings", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("LocatorSettings", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LocatorSettings: public Ui_LocatorSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATORSETTINGS_H
