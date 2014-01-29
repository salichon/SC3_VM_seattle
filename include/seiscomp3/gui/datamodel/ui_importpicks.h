/********************************************************************************
** Form generated from reading UI file 'importpicks.ui'
**
** Created: Thu Jan 23 14:38:33 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTPICKS_H
#define UI_IMPORTPICKS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportPicks
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QRadioButton *radioLatestOrigin;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QRadioButton *radioLatestAutomaticOrigin;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QLabel *label_5;
    QRadioButton *radioMaxPhaseOrigin;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem2;
    QLabel *label_3;
    QRadioButton *radioAllOrigins;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem3;
    QLabel *label_4;
    QSpacerItem *spacerItem4;
    QCheckBox *checkAllAgencies;
    QCheckBox *checkAllPhases;
    QCheckBox *checkPreferTargetPhases;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem5;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ImportPicks)
    {
        if (ImportPicks->objectName().isEmpty())
            ImportPicks->setObjectName(QString::fromUtf8("ImportPicks"));
        ImportPicks->resize(415, 499);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImportPicks->sizePolicy().hasHeightForWidth());
        ImportPicks->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(ImportPicks);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label = new QLabel(ImportPicks);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        vboxLayout->addWidget(label);

        radioLatestOrigin = new QRadioButton(ImportPicks);
        radioLatestOrigin->setObjectName(QString::fromUtf8("radioLatestOrigin"));
        radioLatestOrigin->setChecked(true);

        vboxLayout->addWidget(radioLatestOrigin);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label_2 = new QLabel(ImportPicks);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        hboxLayout->addWidget(label_2);


        vboxLayout->addLayout(hboxLayout);

        radioLatestAutomaticOrigin = new QRadioButton(ImportPicks);
        radioLatestAutomaticOrigin->setObjectName(QString::fromUtf8("radioLatestAutomaticOrigin"));

        vboxLayout->addWidget(radioLatestAutomaticOrigin);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        label_5 = new QLabel(ImportPicks);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        hboxLayout1->addWidget(label_5);


        vboxLayout->addLayout(hboxLayout1);

        radioMaxPhaseOrigin = new QRadioButton(ImportPicks);
        radioMaxPhaseOrigin->setObjectName(QString::fromUtf8("radioMaxPhaseOrigin"));

        vboxLayout->addWidget(radioMaxPhaseOrigin);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        label_3 = new QLabel(ImportPicks);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        hboxLayout2->addWidget(label_3);


        vboxLayout->addLayout(hboxLayout2);

        radioAllOrigins = new QRadioButton(ImportPicks);
        radioAllOrigins->setObjectName(QString::fromUtf8("radioAllOrigins"));

        vboxLayout->addWidget(radioAllOrigins);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);

        label_4 = new QLabel(ImportPicks);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        hboxLayout3->addWidget(label_4);


        vboxLayout->addLayout(hboxLayout3);

        spacerItem4 = new QSpacerItem(397, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem4);

        checkAllAgencies = new QCheckBox(ImportPicks);
        checkAllAgencies->setObjectName(QString::fromUtf8("checkAllAgencies"));

        vboxLayout->addWidget(checkAllAgencies);

        checkAllPhases = new QCheckBox(ImportPicks);
        checkAllPhases->setObjectName(QString::fromUtf8("checkAllPhases"));
        checkAllPhases->setChecked(true);

        vboxLayout->addWidget(checkAllPhases);

        checkPreferTargetPhases = new QCheckBox(ImportPicks);
        checkPreferTargetPhases->setObjectName(QString::fromUtf8("checkPreferTargetPhases"));
        checkPreferTargetPhases->setChecked(true);

        vboxLayout->addWidget(checkPreferTargetPhases);

        hboxLayout4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        spacerItem5 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem5);

        okButton = new QPushButton(ImportPicks);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout4->addWidget(okButton);

        cancelButton = new QPushButton(ImportPicks);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout4->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout4);


        retranslateUi(ImportPicks);
        QObject::connect(okButton, SIGNAL(clicked()), ImportPicks, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), ImportPicks, SLOT(reject()));

        QMetaObject::connectSlotsByName(ImportPicks);
    } // setupUi

    void retranslateUi(QDialog *ImportPicks)
    {
        ImportPicks->setWindowTitle(QApplication::translate("ImportPicks", "Import picks", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ImportPicks", "Please select the picks of the origin(s) you want to import. Streams that are picked already are going to be ignored.", 0, QApplication::UnicodeUTF8));
        radioLatestOrigin->setText(QApplication::translate("ImportPicks", "Latest origin", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ImportPicks", "Imports the picks and corresponding weights of the latest origin belonging to the event including manual solutions (e.g. created by another operator).", 0, QApplication::UnicodeUTF8));
        radioLatestAutomaticOrigin->setText(QApplication::translate("ImportPicks", "Latest automatic origin", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ImportPicks", "Imports the picks and corresponding weights of the latest automatic origin belonging to the event. Manual solutions are going to be ignored.", 0, QApplication::UnicodeUTF8));
        radioMaxPhaseOrigin->setText(QApplication::translate("ImportPicks", "Origin with maximum phase count", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ImportPicks", "Imports the picks and corresponding weights of the latest origin with the most phases belonging to the event.", 0, QApplication::UnicodeUTF8));
        radioAllOrigins->setText(QApplication::translate("ImportPicks", "All origins referenced by this event", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ImportPicks", "Imports the picks of all origins of the event. Duplicates are going to be removed. All picks are associated to the origin with a weight of 0!", 0, QApplication::UnicodeUTF8));
        checkAllAgencies->setText(QApplication::translate("ImportPicks", "Import picks from all agencies instead of using only own picks.", 0, QApplication::UnicodeUTF8));
        checkAllPhases->setText(QApplication::translate("ImportPicks", "Import all phases and do not map only to P and S.", 0, QApplication::UnicodeUTF8));
        checkPreferTargetPhases->setText(QApplication::translate("ImportPicks", "Prefer phases of target in case of duplicates.", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ImportPicks", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("ImportPicks", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ImportPicks: public Ui_ImportPicks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTPICKS_H
