/********************************************************************************
** Form generated from reading UI file 'eventsummary.ui'
**
** Created: Thu Jan 23 14:38:32 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTSUMMARY_H
#define UI_EVENTSUMMARY_H

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

class Ui_EventSummary
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *originTime;
    QLabel *timeAgo;
    QHBoxLayout *hboxLayout;
    QLabel *magnitudeText;
    QLabel *magnitude;
    QLabel *region;
    QLabel *nearestCity;
    QHBoxLayout *hboxLayout1;
    QLabel *depthText;
    QLabel *depth;
    QHBoxLayout *hboxLayout2;
    QLabel *latitude;
    QSpacerItem *spacerItem;
    QLabel *longitude;
    QSpacerItem *spacerItem1;
    QFrame *map;
    QLabel *labelOpComment;
    QFrame *labelOpCommentSeparator;
    QFrame *magnitudes;
    QFrame *separator1;
    QLabel *thisLocationText;
    QHBoxLayout *hboxLayout3;
    QLabel *phaseCountText;
    QLabel *phaseCount;
    QHBoxLayout *hboxLayout4;
    QLabel *azimuthalGapText;
    QLabel *azimuthalGap;
    QHBoxLayout *hboxLayout5;
    QLabel *rmsText;
    QLabel *rms;
    QHBoxLayout *hboxLayout6;
    QLabel *minimumDistanceText;
    QLabel *minimumDistance;
    QHBoxLayout *hboxLayout7;
    QLabel *maximumDistanceText;
    QLabel *maximumDistance;
    QFrame *separator2;
    QHBoxLayout *hboxLayout8;
    QLabel *firstLocationText;
    QLabel *firstLocation;
    QHBoxLayout *hboxLayout9;
    QLabel *eventIDText;
    QLabel *eventID;
    QHBoxLayout *hboxLayout10;
    QLabel *originIDText;
    QLabel *originID;
    QHBoxLayout *hboxLayout11;
    QLabel *originIDText_2;
    QLabel *agencyID;
    QHBoxLayout *hboxLayout12;
    QLabel *state;
    QLabel *mode;
    QFrame *focalMechanism;
    QVBoxLayout *vboxLayout1;
    QFrame *separator3;
    QHBoxLayout *hboxLayout13;
    QVBoxLayout *vboxLayout2;
    QFrame *frame;
    QHBoxLayout *hboxLayout14;
    QLabel *momentTensor;
    QLabel *label;
    QSpacerItem *spacerItem2;
    QVBoxLayout *vboxLayout3;
    QVBoxLayout *vboxLayout4;
    QLabel *mw;
    QLabel *fmDepth;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout15;
    QSpacerItem *spacerItem5;
    QPushButton *exportButton;

    void setupUi(QWidget *EventSummary)
    {
        if (EventSummary->objectName().isEmpty())
            EventSummary->setObjectName(QString::fromUtf8("EventSummary"));
        EventSummary->resize(215, 729);
        vboxLayout = new QVBoxLayout(EventSummary);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        originTime = new QLabel(EventSummary);
        originTime->setObjectName(QString::fromUtf8("originTime"));

        vboxLayout->addWidget(originTime);

        timeAgo = new QLabel(EventSummary);
        timeAgo->setObjectName(QString::fromUtf8("timeAgo"));

        vboxLayout->addWidget(timeAgo);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        magnitudeText = new QLabel(EventSummary);
        magnitudeText->setObjectName(QString::fromUtf8("magnitudeText"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(magnitudeText->sizePolicy().hasHeightForWidth());
        magnitudeText->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(magnitudeText);

        magnitude = new QLabel(EventSummary);
        magnitude->setObjectName(QString::fromUtf8("magnitude"));

        hboxLayout->addWidget(magnitude);


        vboxLayout->addLayout(hboxLayout);

        region = new QLabel(EventSummary);
        region->setObjectName(QString::fromUtf8("region"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(13), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(region->sizePolicy().hasHeightForWidth());
        region->setSizePolicy(sizePolicy1);

        vboxLayout->addWidget(region);

        nearestCity = new QLabel(EventSummary);
        nearestCity->setObjectName(QString::fromUtf8("nearestCity"));

        vboxLayout->addWidget(nearestCity);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        depthText = new QLabel(EventSummary);
        depthText->setObjectName(QString::fromUtf8("depthText"));
        sizePolicy.setHeightForWidth(depthText->sizePolicy().hasHeightForWidth());
        depthText->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(depthText);

        depth = new QLabel(EventSummary);
        depth->setObjectName(QString::fromUtf8("depth"));

        hboxLayout1->addWidget(depth);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        latitude = new QLabel(EventSummary);
        latitude->setObjectName(QString::fromUtf8("latitude"));

        hboxLayout2->addWidget(latitude);

        spacerItem = new QSpacerItem(2, 5, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem);

        longitude = new QLabel(EventSummary);
        longitude->setObjectName(QString::fromUtf8("longitude"));

        hboxLayout2->addWidget(longitude);

        spacerItem1 = new QSpacerItem(2, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout2);

        map = new QFrame(EventSummary);
        map->setObjectName(QString::fromUtf8("map"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(map->sizePolicy().hasHeightForWidth());
        map->setSizePolicy(sizePolicy2);
        map->setFrameShape(QFrame::NoFrame);
        map->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(map);

        labelOpComment = new QLabel(EventSummary);
        labelOpComment->setObjectName(QString::fromUtf8("labelOpComment"));
        sizePolicy1.setHeightForWidth(labelOpComment->sizePolicy().hasHeightForWidth());
        labelOpComment->setSizePolicy(sizePolicy1);
        labelOpComment->setWordWrap(true);

        vboxLayout->addWidget(labelOpComment);

        labelOpCommentSeparator = new QFrame(EventSummary);
        labelOpCommentSeparator->setObjectName(QString::fromUtf8("labelOpCommentSeparator"));
        labelOpCommentSeparator->setFrameShape(QFrame::HLine);
        labelOpCommentSeparator->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(labelOpCommentSeparator);

        magnitudes = new QFrame(EventSummary);
        magnitudes->setObjectName(QString::fromUtf8("magnitudes"));
        magnitudes->setFrameShape(QFrame::NoFrame);
        magnitudes->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(magnitudes);

        separator1 = new QFrame(EventSummary);
        separator1->setObjectName(QString::fromUtf8("separator1"));
        separator1->setFrameShape(QFrame::HLine);
        separator1->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(separator1);

        thisLocationText = new QLabel(EventSummary);
        thisLocationText->setObjectName(QString::fromUtf8("thisLocationText"));

        vboxLayout->addWidget(thisLocationText);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        phaseCountText = new QLabel(EventSummary);
        phaseCountText->setObjectName(QString::fromUtf8("phaseCountText"));

        hboxLayout3->addWidget(phaseCountText);

        phaseCount = new QLabel(EventSummary);
        phaseCount->setObjectName(QString::fromUtf8("phaseCount"));

        hboxLayout3->addWidget(phaseCount);


        vboxLayout->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        azimuthalGapText = new QLabel(EventSummary);
        azimuthalGapText->setObjectName(QString::fromUtf8("azimuthalGapText"));

        hboxLayout4->addWidget(azimuthalGapText);

        azimuthalGap = new QLabel(EventSummary);
        azimuthalGap->setObjectName(QString::fromUtf8("azimuthalGap"));

        hboxLayout4->addWidget(azimuthalGap);


        vboxLayout->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout5->setSpacing(6);
#endif
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        rmsText = new QLabel(EventSummary);
        rmsText->setObjectName(QString::fromUtf8("rmsText"));

        hboxLayout5->addWidget(rmsText);

        rms = new QLabel(EventSummary);
        rms->setObjectName(QString::fromUtf8("rms"));

        hboxLayout5->addWidget(rms);


        vboxLayout->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout6->setSpacing(6);
#endif
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        minimumDistanceText = new QLabel(EventSummary);
        minimumDistanceText->setObjectName(QString::fromUtf8("minimumDistanceText"));

        hboxLayout6->addWidget(minimumDistanceText);

        minimumDistance = new QLabel(EventSummary);
        minimumDistance->setObjectName(QString::fromUtf8("minimumDistance"));

        hboxLayout6->addWidget(minimumDistance);


        vboxLayout->addLayout(hboxLayout6);

        hboxLayout7 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout7->setSpacing(6);
#endif
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        maximumDistanceText = new QLabel(EventSummary);
        maximumDistanceText->setObjectName(QString::fromUtf8("maximumDistanceText"));

        hboxLayout7->addWidget(maximumDistanceText);

        maximumDistance = new QLabel(EventSummary);
        maximumDistance->setObjectName(QString::fromUtf8("maximumDistance"));

        hboxLayout7->addWidget(maximumDistance);


        vboxLayout->addLayout(hboxLayout7);

        separator2 = new QFrame(EventSummary);
        separator2->setObjectName(QString::fromUtf8("separator2"));
        separator2->setFrameShape(QFrame::HLine);
        separator2->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(separator2);

        hboxLayout8 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout8->setSpacing(6);
#endif
        hboxLayout8->setContentsMargins(0, 0, 0, 0);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        firstLocationText = new QLabel(EventSummary);
        firstLocationText->setObjectName(QString::fromUtf8("firstLocationText"));

        hboxLayout8->addWidget(firstLocationText);

        firstLocation = new QLabel(EventSummary);
        firstLocation->setObjectName(QString::fromUtf8("firstLocation"));

        hboxLayout8->addWidget(firstLocation);


        vboxLayout->addLayout(hboxLayout8);

        hboxLayout9 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout9->setSpacing(6);
#endif
        hboxLayout9->setContentsMargins(0, 0, 0, 0);
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        eventIDText = new QLabel(EventSummary);
        eventIDText->setObjectName(QString::fromUtf8("eventIDText"));

        hboxLayout9->addWidget(eventIDText);

        eventID = new QLabel(EventSummary);
        eventID->setObjectName(QString::fromUtf8("eventID"));
        sizePolicy1.setHeightForWidth(eventID->sizePolicy().hasHeightForWidth());
        eventID->setSizePolicy(sizePolicy1);

        hboxLayout9->addWidget(eventID);


        vboxLayout->addLayout(hboxLayout9);

        hboxLayout10 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout10->setSpacing(6);
#endif
        hboxLayout10->setContentsMargins(0, 0, 0, 0);
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        originIDText = new QLabel(EventSummary);
        originIDText->setObjectName(QString::fromUtf8("originIDText"));

        hboxLayout10->addWidget(originIDText);

        originID = new QLabel(EventSummary);
        originID->setObjectName(QString::fromUtf8("originID"));
        sizePolicy1.setHeightForWidth(originID->sizePolicy().hasHeightForWidth());
        originID->setSizePolicy(sizePolicy1);

        hboxLayout10->addWidget(originID);


        vboxLayout->addLayout(hboxLayout10);

        hboxLayout11 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout11->setSpacing(6);
#endif
        hboxLayout11->setContentsMargins(0, 0, 0, 0);
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        originIDText_2 = new QLabel(EventSummary);
        originIDText_2->setObjectName(QString::fromUtf8("originIDText_2"));

        hboxLayout11->addWidget(originIDText_2);

        agencyID = new QLabel(EventSummary);
        agencyID->setObjectName(QString::fromUtf8("agencyID"));
        sizePolicy1.setHeightForWidth(agencyID->sizePolicy().hasHeightForWidth());
        agencyID->setSizePolicy(sizePolicy1);

        hboxLayout11->addWidget(agencyID);


        vboxLayout->addLayout(hboxLayout11);

        hboxLayout12 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout12->setSpacing(6);
#endif
        hboxLayout12->setContentsMargins(0, 0, 0, 0);
        hboxLayout12->setObjectName(QString::fromUtf8("hboxLayout12"));
        state = new QLabel(EventSummary);
        state->setObjectName(QString::fromUtf8("state"));

        hboxLayout12->addWidget(state);

        mode = new QLabel(EventSummary);
        mode->setObjectName(QString::fromUtf8("mode"));
        sizePolicy1.setHeightForWidth(mode->sizePolicy().hasHeightForWidth());
        mode->setSizePolicy(sizePolicy1);

        hboxLayout12->addWidget(mode);


        vboxLayout->addLayout(hboxLayout12);

        focalMechanism = new QFrame(EventSummary);
        focalMechanism->setObjectName(QString::fromUtf8("focalMechanism"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(focalMechanism->sizePolicy().hasHeightForWidth());
        focalMechanism->setSizePolicy(sizePolicy3);
        focalMechanism->setMinimumSize(QSize(16, 60));
        focalMechanism->setFrameShape(QFrame::NoFrame);
        focalMechanism->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(focalMechanism);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        separator3 = new QFrame(focalMechanism);
        separator3->setObjectName(QString::fromUtf8("separator3"));
        separator3->setFrameShape(QFrame::HLine);
        separator3->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(separator3);

        hboxLayout13 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout13->setSpacing(6);
#endif
        hboxLayout13->setContentsMargins(0, 0, 0, 0);
        hboxLayout13->setObjectName(QString::fromUtf8("hboxLayout13"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(0);
#ifndef Q_OS_MAC
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        frame = new QFrame(focalMechanism);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout14 = new QHBoxLayout(frame);
        hboxLayout14->setSpacing(0);
        hboxLayout14->setContentsMargins(0, 0, 0, 0);
        hboxLayout14->setObjectName(QString::fromUtf8("hboxLayout14"));
        momentTensor = new QLabel(frame);
        momentTensor->setObjectName(QString::fromUtf8("momentTensor"));
        momentTensor->setEnabled(true);
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(momentTensor->sizePolicy().hasHeightForWidth());
        momentTensor->setSizePolicy(sizePolicy4);
        momentTensor->setMinimumSize(QSize(42, 42));
        momentTensor->setMaximumSize(QSize(42, 42));
        momentTensor->setFrameShape(QFrame::NoFrame);
        momentTensor->setFrameShadow(QFrame::Sunken);

        hboxLayout14->addWidget(momentTensor);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout14->addWidget(label);


        vboxLayout2->addWidget(frame);

        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem2);


        hboxLayout13->addLayout(vboxLayout2);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(0);
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout4 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        mw = new QLabel(focalMechanism);
        mw->setObjectName(QString::fromUtf8("mw"));
        QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mw->sizePolicy().hasHeightForWidth());
        mw->setSizePolicy(sizePolicy5);

        vboxLayout4->addWidget(mw);

        fmDepth = new QLabel(focalMechanism);
        fmDepth->setObjectName(QString::fromUtf8("fmDepth"));
        sizePolicy5.setHeightForWidth(fmDepth->sizePolicy().hasHeightForWidth());
        fmDepth->setSizePolicy(sizePolicy5);

        vboxLayout4->addWidget(fmDepth);


        vboxLayout3->addLayout(vboxLayout4);

        spacerItem3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem3);


        hboxLayout13->addLayout(vboxLayout3);


        vboxLayout1->addLayout(hboxLayout13);


        vboxLayout->addWidget(focalMechanism);

        spacerItem4 = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem4);

        hboxLayout15 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout15->setSpacing(6);
#endif
        hboxLayout15->setContentsMargins(0, 0, 0, 0);
        hboxLayout15->setObjectName(QString::fromUtf8("hboxLayout15"));
        spacerItem5 = new QSpacerItem(10, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout15->addItem(spacerItem5);

        exportButton = new QPushButton(EventSummary);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        exportButton->setIconSize(QSize(46, 32));

        hboxLayout15->addWidget(exportButton);


        vboxLayout->addLayout(hboxLayout15);


        retranslateUi(EventSummary);

        QMetaObject::connectSlotsByName(EventSummary);
    } // setupUi

    void retranslateUi(QWidget *EventSummary)
    {
        EventSummary->setWindowTitle(QApplication::translate("EventSummary", "Form", 0, QApplication::UnicodeUTF8));
        originTime->setText(QApplication::translate("EventSummary", "1970/01/01 - 00:00:00", 0, QApplication::UnicodeUTF8));
        timeAgo->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        magnitudeText->setText(QApplication::translate("EventSummary", "M", 0, QApplication::UnicodeUTF8));
        magnitude->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        region->setText(QApplication::translate("EventSummary", "...", 0, QApplication::UnicodeUTF8));
        nearestCity->setText(QApplication::translate("EventSummary", "200 km SW of City XYZ", 0, QApplication::UnicodeUTF8));
        depthText->setText(QApplication::translate("EventSummary", "Depth", 0, QApplication::UnicodeUTF8));
        depth->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        latitude->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        longitude->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        labelOpComment->setText(QString());
        thisLocationText->setText(QApplication::translate("EventSummary", "Location:", 0, QApplication::UnicodeUTF8));
        phaseCountText->setText(QApplication::translate("EventSummary", "Phases:", 0, QApplication::UnicodeUTF8));
        phaseCount->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        azimuthalGapText->setText(QApplication::translate("EventSummary", "Az. Gap:", 0, QApplication::UnicodeUTF8));
        azimuthalGap->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        rmsText->setText(QApplication::translate("EventSummary", "RMS Res.:", 0, QApplication::UnicodeUTF8));
        rms->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        minimumDistanceText->setText(QApplication::translate("EventSummary", "Min. Dist.:", 0, QApplication::UnicodeUTF8));
        minimumDistance->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        maximumDistanceText->setText(QApplication::translate("EventSummary", "Max. Dist.:", 0, QApplication::UnicodeUTF8));
        maximumDistance->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        firstLocationText->setText(QApplication::translate("EventSummary", "First Location:", 0, QApplication::UnicodeUTF8));
        firstLocation->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        eventIDText->setText(QApplication::translate("EventSummary", "Event ID:", 0, QApplication::UnicodeUTF8));
        eventID->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        originIDText->setText(QApplication::translate("EventSummary", "Origin ID:", 0, QApplication::UnicodeUTF8));
        originID->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        originIDText_2->setText(QApplication::translate("EventSummary", "Agency ID:", 0, QApplication::UnicodeUTF8));
        agencyID->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        state->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        mode->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        momentTensor->setText(QString());
        label->setText(QString());
        mw->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
        fmDepth->setText(QApplication::translate("EventSummary", "-", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        exportButton->setToolTip(QApplication::translate("EventSummary", "Run configured script with current event", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        exportButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EventSummary: public Ui_EventSummary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTSUMMARY_H
