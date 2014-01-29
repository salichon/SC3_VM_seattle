/********************************************************************************
** Form generated from reading UI file 'diagramfilter.ui'
**
** Created: Thu Jan 23 14:38:31 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAGRAMFILTER_H
#define UI_DIAGRAMFILTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FilterSettings
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QComboBox *comboFilter;
    QFrame *line;
    QFrame *frameNoFilter;
    QVBoxLayout *vboxLayout1;
    QLabel *label_7;
    QSpacerItem *spacerItem;
    QFrame *frameAzimuthAroundEpicenter;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QDoubleSpinBox *spinAzimuthCenter;
    QLabel *label_3;
    QSpacerItem *spacerItem1;
    QLabel *label_4;
    QLabel *label_6;
    QDoubleSpinBox *spinAzimuthExtent;
    QLabel *label_5;
    QSpacerItem *spacerItem2;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem3;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *FilterSettings)
    {
        if (FilterSettings->objectName().isEmpty())
            FilterSettings->setObjectName(QString::fromUtf8("FilterSettings"));
        FilterSettings->resize(317, 132);
        vboxLayout = new QVBoxLayout(FilterSettings);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(FilterSettings);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(label);

        comboFilter = new QComboBox(FilterSettings);
        comboFilter->setObjectName(QString::fromUtf8("comboFilter"));

        hboxLayout->addWidget(comboFilter);


        vboxLayout->addLayout(hboxLayout);

        line = new QFrame(FilterSettings);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        frameNoFilter = new QFrame(FilterSettings);
        frameNoFilter->setObjectName(QString::fromUtf8("frameNoFilter"));
        frameNoFilter->setFrameShape(QFrame::NoFrame);
        frameNoFilter->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frameNoFilter);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label_7 = new QLabel(frameNoFilter);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        vboxLayout1->addWidget(label_7);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        vboxLayout->addWidget(frameNoFilter);

        frameAzimuthAroundEpicenter = new QFrame(FilterSettings);
        frameAzimuthAroundEpicenter->setObjectName(QString::fromUtf8("frameAzimuthAroundEpicenter"));
        frameAzimuthAroundEpicenter->setFrameShape(QFrame::NoFrame);
        frameAzimuthAroundEpicenter->setFrameShadow(QFrame::Raised);
        vboxLayout2 = new QVBoxLayout(frameAzimuthAroundEpicenter);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(frameAzimuthAroundEpicenter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(label_2);

        spinAzimuthCenter = new QDoubleSpinBox(frameAzimuthAroundEpicenter);
        spinAzimuthCenter->setObjectName(QString::fromUtf8("spinAzimuthCenter"));
        spinAzimuthCenter->setDecimals(1);
        spinAzimuthCenter->setMaximum(360);
        spinAzimuthCenter->setMinimum(-360);

        hboxLayout1->addWidget(spinAzimuthCenter);

        label_3 = new QLabel(frameAzimuthAroundEpicenter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(label_3);

        spacerItem1 = new QSpacerItem(10, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        label_4 = new QLabel(frameAzimuthAroundEpicenter);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(label_4);

        label_6 = new QLabel(frameAzimuthAroundEpicenter);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(label_6);

        spinAzimuthExtent = new QDoubleSpinBox(frameAzimuthAroundEpicenter);
        spinAzimuthExtent->setObjectName(QString::fromUtf8("spinAzimuthExtent"));
        spinAzimuthExtent->setDecimals(1);
        spinAzimuthExtent->setMaximum(180);
        spinAzimuthExtent->setMinimum(0);
        spinAzimuthExtent->setValue(45);

        hboxLayout1->addWidget(spinAzimuthExtent);

        label_5 = new QLabel(frameAzimuthAroundEpicenter);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(label_5);


        vboxLayout2->addLayout(hboxLayout1);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem2);


        vboxLayout->addWidget(frameAzimuthAroundEpicenter);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem3 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem3);

        okButton = new QPushButton(FilterSettings);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout2->addWidget(okButton);

        cancelButton = new QPushButton(FilterSettings);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout2->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(FilterSettings);
        QObject::connect(okButton, SIGNAL(clicked()), FilterSettings, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), FilterSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(FilterSettings);
    } // setupUi

    void retranslateUi(QDialog *FilterSettings)
    {
        FilterSettings->setWindowTitle(QApplication::translate("FilterSettings", "Filter settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FilterSettings", "Filter:", 0, QApplication::UnicodeUTF8));
        comboFilter->clear();
        comboFilter->insertItems(0, QStringList()
         << QApplication::translate("FilterSettings", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FilterSettings", "Azimuth around epicenter", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("FilterSettings", "No filter. Displays all values.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FilterSettings", "Center:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FilterSettings", "deg", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FilterSettings", "Extent:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FilterSettings", "+/-", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FilterSettings", "deg", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("FilterSettings", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("FilterSettings", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FilterSettings: public Ui_FilterSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAGRAMFILTER_H
