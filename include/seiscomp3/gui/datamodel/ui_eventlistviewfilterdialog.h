/********************************************************************************
** Form generated from reading UI file 'eventlistviewfilterdialog.ui'
**
** Created: Thu Jan 23 14:38:31 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTLISTVIEWFILTERDIALOG_H
#define UI_EVENTLISTVIEWFILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EventListViewFilterDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_2;
    QComboBox *cbRegions;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QHBoxLayout *hboxLayout;
    QLineEdit *edMinLat;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_8;
    QHBoxLayout *hboxLayout1;
    QLineEdit *edMinLon;
    QLabel *label_9;
    QHBoxLayout *hboxLayout2;
    QLineEdit *edMaxLat;
    QLabel *label_10;
    QHBoxLayout *hboxLayout3;
    QLineEdit *edMaxLon;
    QLabel *label_11;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout4;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *EventListViewFilterDialog)
    {
        if (EventListViewFilterDialog->objectName().isEmpty())
            EventListViewFilterDialog->setObjectName(QString::fromUtf8("EventListViewFilterDialog"));
        EventListViewFilterDialog->resize(380, 161);
        vboxLayout = new QVBoxLayout(EventListViewFilterDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(EventListViewFilterDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        cbRegions = new QComboBox(groupBox);
        cbRegions->setObjectName(QString::fromUtf8("cbRegions"));

        gridLayout->addWidget(cbRegions, 0, 1, 1, 4);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        edMinLat = new QLineEdit(groupBox);
        edMinLat->setObjectName(QString::fromUtf8("edMinLat"));
        edMinLat->setMaxLength(10);
        edMinLat->setAlignment(Qt::AlignRight);

        hboxLayout->addWidget(edMinLat);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout->addWidget(label_3);


        gridLayout->addLayout(hboxLayout, 1, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 3, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 3, 1, 1);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        edMinLon = new QLineEdit(groupBox);
        edMinLon->setObjectName(QString::fromUtf8("edMinLon"));
        edMinLon->setMaxLength(11);
        edMinLon->setAlignment(Qt::AlignRight);

        hboxLayout1->addWidget(edMinLon);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        hboxLayout1->addWidget(label_9);


        gridLayout->addLayout(hboxLayout1, 2, 2, 1, 1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        edMaxLat = new QLineEdit(groupBox);
        edMaxLat->setObjectName(QString::fromUtf8("edMaxLat"));
        edMaxLat->setMaxLength(10);
        edMaxLat->setAlignment(Qt::AlignRight);

        hboxLayout2->addWidget(edMaxLat);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        hboxLayout2->addWidget(label_10);


        gridLayout->addLayout(hboxLayout2, 1, 4, 1, 1);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        edMaxLon = new QLineEdit(groupBox);
        edMaxLon->setObjectName(QString::fromUtf8("edMaxLon"));
        edMaxLon->setMaxLength(11);
        edMaxLon->setAlignment(Qt::AlignRight);

        hboxLayout3->addWidget(edMaxLon);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        hboxLayout3->addWidget(label_11);


        gridLayout->addLayout(hboxLayout3, 2, 4, 1, 1);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        spacerItem1 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem1);

        okButton = new QPushButton(EventListViewFilterDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout4->addWidget(okButton);

        cancelButton = new QPushButton(EventListViewFilterDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout4->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout4);

        QWidget::setTabOrder(cbRegions, edMinLat);
        QWidget::setTabOrder(edMinLat, edMaxLat);
        QWidget::setTabOrder(edMaxLat, edMinLon);
        QWidget::setTabOrder(edMinLon, edMaxLon);
        QWidget::setTabOrder(edMaxLon, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(EventListViewFilterDialog);
        QObject::connect(okButton, SIGNAL(clicked()), EventListViewFilterDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), EventListViewFilterDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EventListViewFilterDialog);
    } // setupUi

    void retranslateUi(QDialog *EventListViewFilterDialog)
    {
        EventListViewFilterDialog->setWindowTitle(QApplication::translate("EventListViewFilterDialog", "Edit region", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("EventListViewFilterDialog", "Region", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("EventListViewFilterDialog", "from", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("EventListViewFilterDialog", "from", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EventListViewFilterDialog", "Template", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("EventListViewFilterDialog", "Latitude range", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("EventListViewFilterDialog", "Longitude range", 0, QApplication::UnicodeUTF8));
        edMinLat->setText(QString());
        label_3->setText(QApplication::translate("EventListViewFilterDialog", "\302\260 ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("EventListViewFilterDialog", "to", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("EventListViewFilterDialog", "to", 0, QApplication::UnicodeUTF8));
        edMinLon->setText(QString());
        label_9->setText(QApplication::translate("EventListViewFilterDialog", "\302\260 ", 0, QApplication::UnicodeUTF8));
        edMaxLat->setText(QString());
        label_10->setText(QApplication::translate("EventListViewFilterDialog", "\302\260 ", 0, QApplication::UnicodeUTF8));
        edMaxLon->setText(QString());
        label_11->setText(QApplication::translate("EventListViewFilterDialog", "\302\260 ", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("EventListViewFilterDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("EventListViewFilterDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EventListViewFilterDialog: public Ui_EventListViewFilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTLISTVIEWFILTERDIALOG_H
