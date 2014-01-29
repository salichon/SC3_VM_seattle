/********************************************************************************
** Form generated from reading UI file 'origintime.ui'
**
** Created: Thu Jan 23 14:38:33 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIGINTIME_H
#define UI_ORIGINTIME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OriginTimeDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *vboxLayout2;
    QLabel *labelLatitude;
    QLabel *labelLongitude;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout1;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OriginTimeDialog)
    {
        if (OriginTimeDialog->objectName().isEmpty())
            OriginTimeDialog->setObjectName(QString::fromUtf8("OriginTimeDialog"));
        OriginTimeDialog->resize(229, 209);
        vboxLayout = new QVBoxLayout(OriginTimeDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(OriginTimeDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout1->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout1->addWidget(label_2);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        labelLatitude = new QLabel(groupBox);
        labelLatitude->setObjectName(QString::fromUtf8("labelLatitude"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelLatitude->sizePolicy().hasHeightForWidth());
        labelLatitude->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        labelLatitude->setFont(font1);

        vboxLayout2->addWidget(labelLatitude);

        labelLongitude = new QLabel(groupBox);
        labelLongitude->setObjectName(QString::fromUtf8("labelLongitude"));
        sizePolicy.setHeightForWidth(labelLongitude->sizePolicy().hasHeightForWidth());
        labelLongitude->setSizePolicy(sizePolicy);
        labelLongitude->setFont(font1);

        vboxLayout2->addWidget(labelLongitude);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(OriginTimeDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        hboxLayout1 = new QHBoxLayout(groupBox_2);
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        timeEdit = new QTimeEdit(groupBox_2);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        hboxLayout1->addWidget(timeEdit);

        dateEdit = new QDateEdit(groupBox_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCurrentSection(QDateTimeEdit::DaySection);

        hboxLayout1->addWidget(dateEdit);


        vboxLayout->addWidget(groupBox_2);

        spacerItem = new QSpacerItem(211, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem1 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        okButton = new QPushButton(OriginTimeDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout2->addWidget(okButton);

        cancelButton = new QPushButton(OriginTimeDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout2->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(OriginTimeDialog);
        QObject::connect(okButton, SIGNAL(clicked()), OriginTimeDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), OriginTimeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OriginTimeDialog);
    } // setupUi

    void retranslateUi(QDialog *OriginTimeDialog)
    {
        OriginTimeDialog->setWindowTitle(QApplication::translate("OriginTimeDialog", "OriginTime", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("OriginTimeDialog", "Location", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OriginTimeDialog", "Latitude:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OriginTimeDialog", "Longitude:", 0, QApplication::UnicodeUTF8));
        labelLatitude->setText(QApplication::translate("OriginTimeDialog", "--.- \302\260", 0, QApplication::UnicodeUTF8));
        labelLongitude->setText(QApplication::translate("OriginTimeDialog", "--.- \302\260", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("OriginTimeDialog", "Time", 0, QApplication::UnicodeUTF8));
        timeEdit->setDisplayFormat(QApplication::translate("OriginTimeDialog", "hh:mm:ss", 0, QApplication::UnicodeUTF8));
        dateEdit->setDisplayFormat(QApplication::translate("OriginTimeDialog", "dd-MM-yyyy", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("OriginTimeDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("OriginTimeDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OriginTimeDialog: public Ui_OriginTimeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIGINTIME_H
