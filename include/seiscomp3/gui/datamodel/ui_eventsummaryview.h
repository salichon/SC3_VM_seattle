/********************************************************************************
** Form generated from reading UI file 'eventsummaryview.ui'
**
** Created: Thu Jan 23 14:38:32 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTSUMMARYVIEW_H
#define UI_EVENTSUMMARYVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventSummaryView
{
public:
    QAction *actionShowInvisibleMagnitudes;
    QHBoxLayout *hboxLayout;
    QFrame *frameRegion;
    QVBoxLayout *vboxLayout;
    QLabel *_lbOriginTime;
    QLabel *_lbOriginTimeAutomatic;
    QLabel *_lbTimeAgo;
    QLabel *_lbRegion;
    QLabel *_lbRegionExtra;
    QFrame *frameMap;
    QFrame *frameHDistance;
    QVBoxLayout *vboxLayout1;
    QFrame *frameMagnitudes;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QLabel *_lbPreMagType;
    QLabel *_lbPreMagVal;
    QSpacerItem *spacerItem;
    QLabel *labelDepth;
    QHBoxLayout *hboxLayout2;
    QLabel *labelCustomName;
    QLabel *labelCustomValue;
    QFrame *frameMagnitudeDistance;
    QFrame *frameVDistance;
    QFrame *frameEpicenterInformation;
    QFrame *frameProcessing;
    QHBoxLayout *hboxLayout3;
    QPushButton *btnSwitchToAutomatic;
    QSpacerItem *spacerItem1;
    QPushButton *btnShowDetails;
    QFrame *framePlugable;
    QHBoxLayout *hboxLayout4;
    QPushButton *btnPlugable0;
    QSpacerItem *spacerItem2;
    QPushButton *btnPlugable1;

    void setupUi(QWidget *EventSummaryView)
    {
        if (EventSummaryView->objectName().isEmpty())
            EventSummaryView->setObjectName(QString::fromUtf8("EventSummaryView"));
        EventSummaryView->resize(772, 520);
        actionShowInvisibleMagnitudes = new QAction(EventSummaryView);
        actionShowInvisibleMagnitudes->setObjectName(QString::fromUtf8("actionShowInvisibleMagnitudes"));
        actionShowInvisibleMagnitudes->setCheckable(true);
        actionShowInvisibleMagnitudes->setChecked(false);
        hboxLayout = new QHBoxLayout(EventSummaryView);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        frameRegion = new QFrame(EventSummaryView);
        frameRegion->setObjectName(QString::fromUtf8("frameRegion"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(frameRegion->sizePolicy().hasHeightForWidth());
        frameRegion->setSizePolicy(sizePolicy);
        frameRegion->setMaximumSize(QSize(16777215, 16777215));
        frameRegion->setBaseSize(QSize(0, 0));
        frameRegion->setFrameShape(QFrame::StyledPanel);
        frameRegion->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frameRegion);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        _lbOriginTime = new QLabel(frameRegion);
        _lbOriginTime->setObjectName(QString::fromUtf8("_lbOriginTime"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(4));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(_lbOriginTime->sizePolicy().hasHeightForWidth());
        _lbOriginTime->setSizePolicy(sizePolicy1);

        vboxLayout->addWidget(_lbOriginTime);

        _lbOriginTimeAutomatic = new QLabel(frameRegion);
        _lbOriginTimeAutomatic->setObjectName(QString::fromUtf8("_lbOriginTimeAutomatic"));

        vboxLayout->addWidget(_lbOriginTimeAutomatic);

        _lbTimeAgo = new QLabel(frameRegion);
        _lbTimeAgo->setObjectName(QString::fromUtf8("_lbTimeAgo"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(4));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(_lbTimeAgo->sizePolicy().hasHeightForWidth());
        _lbTimeAgo->setSizePolicy(sizePolicy2);

        vboxLayout->addWidget(_lbTimeAgo);

        _lbRegion = new QLabel(frameRegion);
        _lbRegion->setObjectName(QString::fromUtf8("_lbRegion"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(13), static_cast<QSizePolicy::Policy>(4));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(_lbRegion->sizePolicy().hasHeightForWidth());
        _lbRegion->setSizePolicy(sizePolicy3);
        _lbRegion->setScaledContents(false);

        vboxLayout->addWidget(_lbRegion);

        _lbRegionExtra = new QLabel(frameRegion);
        _lbRegionExtra->setObjectName(QString::fromUtf8("_lbRegionExtra"));

        vboxLayout->addWidget(_lbRegionExtra);

        frameMap = new QFrame(frameRegion);
        frameMap->setObjectName(QString::fromUtf8("frameMap"));
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(3));
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(frameMap->sizePolicy().hasHeightForWidth());
        frameMap->setSizePolicy(sizePolicy4);
        frameMap->setFrameShape(QFrame::NoFrame);
        frameMap->setFrameShadow(QFrame::Raised);

        vboxLayout->addWidget(frameMap);


        hboxLayout->addWidget(frameRegion);

        frameHDistance = new QFrame(EventSummaryView);
        frameHDistance->setObjectName(QString::fromUtf8("frameHDistance"));
        QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(frameHDistance->sizePolicy().hasHeightForWidth());
        frameHDistance->setSizePolicy(sizePolicy5);
        frameHDistance->setMinimumSize(QSize(8, 16));
        frameHDistance->setFrameShape(QFrame::NoFrame);
        frameHDistance->setFrameShadow(QFrame::Plain);

        hboxLayout->addWidget(frameHDistance);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        frameMagnitudes = new QFrame(EventSummaryView);
        frameMagnitudes->setObjectName(QString::fromUtf8("frameMagnitudes"));
        sizePolicy2.setHeightForWidth(frameMagnitudes->sizePolicy().hasHeightForWidth());
        frameMagnitudes->setSizePolicy(sizePolicy2);
        frameMagnitudes->setMaximumSize(QSize(16777215, 400));
        frameMagnitudes->setBaseSize(QSize(0, 0));
        frameMagnitudes->setFrameShape(QFrame::StyledPanel);
        frameMagnitudes->setFrameShadow(QFrame::Raised);
        vboxLayout2 = new QVBoxLayout(frameMagnitudes);
        vboxLayout2->setSpacing(4);
        vboxLayout2->setContentsMargins(4, 4, 4, 4);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(10);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        _lbPreMagType = new QLabel(frameMagnitudes);
        _lbPreMagType->setObjectName(QString::fromUtf8("_lbPreMagType"));
        QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(4));
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(_lbPreMagType->sizePolicy().hasHeightForWidth());
        _lbPreMagType->setSizePolicy(sizePolicy6);

        hboxLayout1->addWidget(_lbPreMagType);

        _lbPreMagVal = new QLabel(frameMagnitudes);
        _lbPreMagVal->setObjectName(QString::fromUtf8("_lbPreMagVal"));
        QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(4));
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(_lbPreMagVal->sizePolicy().hasHeightForWidth());
        _lbPreMagVal->setSizePolicy(sizePolicy7);

        hboxLayout1->addWidget(_lbPreMagVal);

        spacerItem = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        labelDepth = new QLabel(frameMagnitudes);
        labelDepth->setObjectName(QString::fromUtf8("labelDepth"));
        labelDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout1->addWidget(labelDepth);


        vboxLayout2->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(10);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        labelCustomName = new QLabel(frameMagnitudes);
        labelCustomName->setObjectName(QString::fromUtf8("labelCustomName"));
        sizePolicy5.setHeightForWidth(labelCustomName->sizePolicy().hasHeightForWidth());
        labelCustomName->setSizePolicy(sizePolicy5);

        hboxLayout2->addWidget(labelCustomName);

        labelCustomValue = new QLabel(frameMagnitudes);
        labelCustomValue->setObjectName(QString::fromUtf8("labelCustomValue"));
        QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(13), static_cast<QSizePolicy::Policy>(5));
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(labelCustomValue->sizePolicy().hasHeightForWidth());
        labelCustomValue->setSizePolicy(sizePolicy8);

        hboxLayout2->addWidget(labelCustomValue);


        vboxLayout2->addLayout(hboxLayout2);

        frameMagnitudeDistance = new QFrame(frameMagnitudes);
        frameMagnitudeDistance->setObjectName(QString::fromUtf8("frameMagnitudeDistance"));
        frameMagnitudeDistance->setFrameShape(QFrame::NoFrame);
        frameMagnitudeDistance->setFrameShadow(QFrame::Raised);

        vboxLayout2->addWidget(frameMagnitudeDistance);


        vboxLayout1->addWidget(frameMagnitudes);

        frameVDistance = new QFrame(EventSummaryView);
        frameVDistance->setObjectName(QString::fromUtf8("frameVDistance"));
        frameVDistance->setMinimumSize(QSize(8, 8));
        frameVDistance->setFrameShape(QFrame::NoFrame);
        frameVDistance->setFrameShadow(QFrame::Plain);

        vboxLayout1->addWidget(frameVDistance);

        frameEpicenterInformation = new QFrame(EventSummaryView);
        frameEpicenterInformation->setObjectName(QString::fromUtf8("frameEpicenterInformation"));
        QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(3));
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(frameEpicenterInformation->sizePolicy().hasHeightForWidth());
        frameEpicenterInformation->setSizePolicy(sizePolicy9);
        frameEpicenterInformation->setFrameShape(QFrame::NoFrame);

        vboxLayout1->addWidget(frameEpicenterInformation);

        frameProcessing = new QFrame(EventSummaryView);
        frameProcessing->setObjectName(QString::fromUtf8("frameProcessing"));
        frameProcessing->setEnabled(true);
        sizePolicy2.setHeightForWidth(frameProcessing->sizePolicy().hasHeightForWidth());
        frameProcessing->setSizePolicy(sizePolicy2);
        frameProcessing->setFrameShape(QFrame::StyledPanel);
        frameProcessing->setFrameShadow(QFrame::Raised);
        hboxLayout3 = new QHBoxLayout(frameProcessing);
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        btnSwitchToAutomatic = new QPushButton(frameProcessing);
        btnSwitchToAutomatic->setObjectName(QString::fromUtf8("btnSwitchToAutomatic"));
        btnSwitchToAutomatic->setEnabled(false);

        hboxLayout3->addWidget(btnSwitchToAutomatic);

        spacerItem1 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem1);

        btnShowDetails = new QPushButton(frameProcessing);
        btnShowDetails->setObjectName(QString::fromUtf8("btnShowDetails"));
        btnShowDetails->setEnabled(false);
        QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(0));
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(btnShowDetails->sizePolicy().hasHeightForWidth());
        btnShowDetails->setSizePolicy(sizePolicy10);

        hboxLayout3->addWidget(btnShowDetails);


        vboxLayout1->addWidget(frameProcessing);

        framePlugable = new QFrame(EventSummaryView);
        framePlugable->setObjectName(QString::fromUtf8("framePlugable"));
        framePlugable->setFrameShape(QFrame::StyledPanel);
        framePlugable->setFrameShadow(QFrame::Raised);
        hboxLayout4 = new QHBoxLayout(framePlugable);
        hboxLayout4->setSpacing(6);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        btnPlugable0 = new QPushButton(framePlugable);
        btnPlugable0->setObjectName(QString::fromUtf8("btnPlugable0"));
        btnPlugable0->setEnabled(false);
        sizePolicy10.setHeightForWidth(btnPlugable0->sizePolicy().hasHeightForWidth());
        btnPlugable0->setSizePolicy(sizePolicy10);
        btnPlugable0->setMinimumSize(QSize(0, 0));

        hboxLayout4->addWidget(btnPlugable0);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem2);

        btnPlugable1 = new QPushButton(framePlugable);
        btnPlugable1->setObjectName(QString::fromUtf8("btnPlugable1"));
        btnPlugable1->setEnabled(false);
        sizePolicy10.setHeightForWidth(btnPlugable1->sizePolicy().hasHeightForWidth());
        btnPlugable1->setSizePolicy(sizePolicy10);
        btnPlugable1->setMinimumSize(QSize(0, 0));

        hboxLayout4->addWidget(btnPlugable1);


        vboxLayout1->addWidget(framePlugable);


        hboxLayout->addLayout(vboxLayout1);


        retranslateUi(EventSummaryView);

        QMetaObject::connectSlotsByName(EventSummaryView);
    } // setupUi

    void retranslateUi(QWidget *EventSummaryView)
    {
        EventSummaryView->setWindowTitle(QApplication::translate("EventSummaryView", "EventSummaryView", 0, QApplication::UnicodeUTF8));
        actionShowInvisibleMagnitudes->setText(QApplication::translate("EventSummaryView", "Show invisible magnitudes", 0, QApplication::UnicodeUTF8));
        actionShowInvisibleMagnitudes->setShortcut(QApplication::translate("EventSummaryView", "Ctrl+Alt+Shift+I", 0, QApplication::UnicodeUTF8));
        _lbOriginTime->setText(QApplication::translate("EventSummaryView", "0000/00/00 - 00.00.00.000 UTC", 0, QApplication::UnicodeUTF8));
        _lbOriginTimeAutomatic->setText(QApplication::translate("EventSummaryView", "0000/00/00 - 00.00.00.000 UTC", 0, QApplication::UnicodeUTF8));
        _lbTimeAgo->setText(QApplication::translate("EventSummaryView", "00 Min. 00 Sec. ago", 0, QApplication::UnicodeUTF8));
        _lbRegion->setText(QApplication::translate("EventSummaryView", "region", 0, QApplication::UnicodeUTF8));
        _lbRegionExtra->setText(QApplication::translate("EventSummaryView", "regionInformation", 0, QApplication::UnicodeUTF8));
        _lbPreMagType->setText(QApplication::translate("EventSummaryView", "mb", 0, QApplication::UnicodeUTF8));
        _lbPreMagVal->setText(QApplication::translate("EventSummaryView", "---", 0, QApplication::UnicodeUTF8));
        labelDepth->setText(QApplication::translate("EventSummaryView", "0 km", 0, QApplication::UnicodeUTF8));
        labelCustomName->setText(QApplication::translate("EventSummaryView", "...", 0, QApplication::UnicodeUTF8));
        labelCustomValue->setText(QApplication::translate("EventSummaryView", "-", 0, QApplication::UnicodeUTF8));
        btnSwitchToAutomatic->setText(QApplication::translate("EventSummaryView", "Fix automatic solutions", 0, QApplication::UnicodeUTF8));
        btnShowDetails->setText(QApplication::translate("EventSummaryView", "Show Details", 0, QApplication::UnicodeUTF8));
        btnPlugable0->setText(QApplication::translate("EventSummaryView", "Button0", 0, QApplication::UnicodeUTF8));
        btnPlugable1->setText(QApplication::translate("EventSummaryView", "Button1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EventSummaryView: public Ui_EventSummaryView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTSUMMARYVIEW_H
