/********************************************************************************
** Form generated from reading UI file 'eventsummaryview_hypocenter.ui'
**
** Created: Thu Jan 23 14:38:32 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTSUMMARYVIEW_HYPOCENTER_H
#define UI_EVENTSUMMARYVIEW_HYPOCENTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hypocenter
{
public:
    QGridLayout *gridLayout;
    QFrame *fmFrameInformation;
    QGridLayout *gridLayout1;
    QLabel *labelStatus;
    QLabel *labelLatitude;
    QLabel *labelNP0;
    QLabel *labelNP1;
    QLabel *labelLongitudeError;
    QLabel *labelPhasesTxt;
    QLabel *labelLongitude;
    QLabel *labelStatusTxt;
    QLabel *labelLongitudeUnit;
    QLabel *labelLatitudeTxt;
    QLabel *labelDepthUnit;
    QLabel *labelDepthTxt;
    QLabel *fmLabelVDistance;
    QLabel *labelAgencyTxt;
    QLabel *labelTypeTxt;
    QLabel *labelAgency;
    QLabel *labelLongitudeTxt;
    QLabel *labelMisfit;
    QLabel *labelMwTxt;
    QLabel *labelThisSolutionTxt;
    QLabel *labelDepth;
    QLabel *labelType;
    QLabel *labelNPTxt;
    QLabel *labelMisfitTxt;
    QLabel *labelLatitudeError;
    QLabel *labelMw;
    QLabel *labelPhases;
    QLabel *labelCLVD;
    QLabel *labelMinDist;
    QLabel *labelMinDistUnit;
    QLabel *labelMaxDist;
    QLabel *labelMaxDistUnit;
    QLabel *labelThisSolution;
    QLabel *labelDepthError;
    QLabel *labelCLVDTxt;
    QLabel *labelMinDistTxt;
    QLabel *labelMaxDistTxt;
    QLabel *labelLatitudeUnit;
    QLabel *labelMomentTxt;
    QLabel *labelMoment;
    QLabel *labelMomentUnit;
    QLabel *labelFMSeparator;
    QFrame *frameInformationAutomatic;
    QGridLayout *gridLayout2;
    QLabel *_lbOriginStatusAutomatic;
    QLabel *labelVDistanceAutomatic;
    QLabel *_lbCommentAutomatic;
    QLabel *_lbDepthUnitAutomatic;
    QLabel *_lbLongErrorAutomatic;
    QLabel *_lbLatErrorAutomatic;
    QLabel *_lbLatitudeAutomatic;
    QLabel *_lbNoPhasesAutomatic;
    QSpacerItem *spacerItem;
    QLabel *_lbLongitudeAutomatic;
    QLabel *_lbRMSAutomatic;
    QLabel *_lbDepthErrorAutomatic;
    QLabel *_lbDepthAutomatic;
    QLabel *_lbLatitudeUnitAutomatic;
    QLabel *_lbLongitudeUnitAutomatic;
    QLabel *_lbAgencyAutomatic;
    QLabel *fmLabelFrameInfoSpacer;
    QFrame *fmFrameInformationAutomatic;
    QGridLayout *gridLayout3;
    QLabel *labelNP0Automatic;
    QLabel *labelNP1Automatic;
    QLabel *labelDepthErrorAutomatic;
    QLabel *labelCLVDAutomatic;
    QLabel *labelMinDistAutomatic;
    QLabel *labelMinDistUnitAutomatic;
    QLabel *labelMaxDistAutomatic;
    QLabel *labelMaxDistUnitAutomatic;
    QLabel *labelLongitudeAutomatic;
    QLabel *labelDepthAutomatic;
    QLabel *labelLongitudeUnitAutomatic;
    QLabel *labelLatitudeUnitAutomatic;
    QLabel *labelTypeAutomatic;
    QLabel *labelPhasesAutomatic;
    QLabel *fmLabelVDistanceAutomatic;
    QLabel *labelLongitudeErrorAutomatic;
    QLabel *labelAgencyAutomatic;
    QLabel *labelThisSolutionAutomatic;
    QLabel *labelDepthUnitAutomatic;
    QLabel *labelLatitudeAutomatic;
    QLabel *labelStatusAutomatic;
    QLabel *labelMwAutomatic;
    QLabel *labelLatitudeErrorAutomatic;
    QLabel *labelMisfitAutomatic;
    QLabel *labelMomentAutomatic;
    QLabel *labelMomentUnitAutomatic;
    QLabel *labelFrameInfoSpacer;
    QFrame *frameInformation;
    QGridLayout *gridLayout4;
    QLabel *labelVDistance;
    QSpacerItem *spacerItem1;
    QLabel *_lbComment;
    QLabel *_lbCommentTxt;
    QLabel *_lbLongitudeUnit;
    QLabel *_lbRMSTxt;
    QLabel *_lbEventID;
    QLabel *_lbNoPhasesTxt;
    QLabel *_lbThisLocTxt;
    QLabel *_lbLatitudeTxt;
    QLabel *_lbDepth;
    QLabel *_lbOriginStatus;
    QLabel *_lbEventIDTxt;
    QLabel *_lbOriginStatusTxt;
    QLabel *_lbLongError;
    QLabel *_lbLatError;
    QLabel *_lbDepthUnit;
    QLabel *_lbNoPhases;
    QLabel *_lbFirstLocTxt;
    QLabel *_lbLongitudeTxt;
    QLabel *_lbAgency;
    QLabel *_lbRMS;
    QLabel *_lbLongitude;
    QLabel *_lbLatitudeUnit;
    QLabel *_lbDepthError;
    QLabel *_lbAgencyTxt;
    QLabel *_lbThisLocation;
    QLabel *_lbDepthTxt;
    QLabel *_lbFirstLocation;
    QLabel *_lbLatitude;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *Hypocenter)
    {
        if (Hypocenter->objectName().isEmpty())
            Hypocenter->setObjectName(QString::fromUtf8("Hypocenter"));
        Hypocenter->resize(487, 663);
        gridLayout = new QGridLayout(Hypocenter);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        fmFrameInformation = new QFrame(Hypocenter);
        fmFrameInformation->setObjectName(QString::fromUtf8("fmFrameInformation"));
        fmFrameInformation->setFrameShape(QFrame::StyledPanel);
        fmFrameInformation->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(fmFrameInformation);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        labelStatus = new QLabel(fmFrameInformation);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        labelStatus->setFont(font);
        labelStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelStatus, 15, 1, 1, 3);

        labelLatitude = new QLabel(fmFrameInformation);
        labelLatitude->setObjectName(QString::fromUtf8("labelLatitude"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelLatitude->sizePolicy().hasHeightForWidth());
        labelLatitude->setSizePolicy(sizePolicy);
        labelLatitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitude, 0, 1, 1, 1);

        labelNP0 = new QLabel(fmFrameInformation);
        labelNP0->setObjectName(QString::fromUtf8("labelNP0"));

        gridLayout1->addWidget(labelNP0, 11, 1, 1, 3);

        labelNP1 = new QLabel(fmFrameInformation);
        labelNP1->setObjectName(QString::fromUtf8("labelNP1"));

        gridLayout1->addWidget(labelNP1, 12, 1, 1, 3);

        labelLongitudeError = new QLabel(fmFrameInformation);
        labelLongitudeError->setObjectName(QString::fromUtf8("labelLongitudeError"));
        labelLongitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeError, 1, 3, 1, 1);

        labelPhasesTxt = new QLabel(fmFrameInformation);
        labelPhasesTxt->setObjectName(QString::fromUtf8("labelPhasesTxt"));

        gridLayout1->addWidget(labelPhasesTxt, 7, 0, 1, 1);

        labelLongitude = new QLabel(fmFrameInformation);
        labelLongitude->setObjectName(QString::fromUtf8("labelLongitude"));
        labelLongitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitude, 1, 1, 1, 1);

        labelStatusTxt = new QLabel(fmFrameInformation);
        labelStatusTxt->setObjectName(QString::fromUtf8("labelStatusTxt"));
        labelStatusTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelStatusTxt, 15, 0, 1, 1);

        labelLongitudeUnit = new QLabel(fmFrameInformation);
        labelLongitudeUnit->setObjectName(QString::fromUtf8("labelLongitudeUnit"));
        labelLongitudeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeUnit, 1, 2, 1, 1);

        labelLatitudeTxt = new QLabel(fmFrameInformation);
        labelLatitudeTxt->setObjectName(QString::fromUtf8("labelLatitudeTxt"));
        labelLatitudeTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeTxt, 0, 0, 1, 1);

        labelDepthUnit = new QLabel(fmFrameInformation);
        labelDepthUnit->setObjectName(QString::fromUtf8("labelDepthUnit"));
        labelDepthUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthUnit, 2, 2, 1, 1);

        labelDepthTxt = new QLabel(fmFrameInformation);
        labelDepthTxt->setObjectName(QString::fromUtf8("labelDepthTxt"));
        labelDepthTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthTxt, 2, 0, 1, 1);

        fmLabelVDistance = new QLabel(fmFrameInformation);
        fmLabelVDistance->setObjectName(QString::fromUtf8("fmLabelVDistance"));

        gridLayout1->addWidget(fmLabelVDistance, 10, 0, 1, 4);

        labelAgencyTxt = new QLabel(fmFrameInformation);
        labelAgencyTxt->setObjectName(QString::fromUtf8("labelAgencyTxt"));
        labelAgencyTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelAgencyTxt, 14, 0, 1, 1);

        labelTypeTxt = new QLabel(fmFrameInformation);
        labelTypeTxt->setObjectName(QString::fromUtf8("labelTypeTxt"));

        gridLayout1->addWidget(labelTypeTxt, 13, 0, 1, 1);

        labelAgency = new QLabel(fmFrameInformation);
        labelAgency->setObjectName(QString::fromUtf8("labelAgency"));
        labelAgency->setFont(font);
        labelAgency->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelAgency, 14, 1, 1, 3);

        labelLongitudeTxt = new QLabel(fmFrameInformation);
        labelLongitudeTxt->setObjectName(QString::fromUtf8("labelLongitudeTxt"));
        labelLongitudeTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeTxt, 1, 0, 1, 1);

        labelMisfit = new QLabel(fmFrameInformation);
        labelMisfit->setObjectName(QString::fromUtf8("labelMisfit"));
        labelMisfit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMisfit, 5, 1, 1, 1);

        labelMwTxt = new QLabel(fmFrameInformation);
        labelMwTxt->setObjectName(QString::fromUtf8("labelMwTxt"));

        gridLayout1->addWidget(labelMwTxt, 4, 0, 1, 1);

        labelThisSolutionTxt = new QLabel(fmFrameInformation);
        labelThisSolutionTxt->setObjectName(QString::fromUtf8("labelThisSolutionTxt"));
        labelThisSolutionTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelThisSolutionTxt, 16, 0, 1, 1);

        labelDepth = new QLabel(fmFrameInformation);
        labelDepth->setObjectName(QString::fromUtf8("labelDepth"));
        labelDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepth, 2, 1, 1, 1);

        labelType = new QLabel(fmFrameInformation);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        gridLayout1->addWidget(labelType, 13, 1, 1, 3);

        labelNPTxt = new QLabel(fmFrameInformation);
        labelNPTxt->setObjectName(QString::fromUtf8("labelNPTxt"));

        gridLayout1->addWidget(labelNPTxt, 11, 0, 1, 1);

        labelMisfitTxt = new QLabel(fmFrameInformation);
        labelMisfitTxt->setObjectName(QString::fromUtf8("labelMisfitTxt"));
        labelMisfitTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMisfitTxt, 5, 0, 1, 1);

        labelLatitudeError = new QLabel(fmFrameInformation);
        labelLatitudeError->setObjectName(QString::fromUtf8("labelLatitudeError"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelLatitudeError->sizePolicy().hasHeightForWidth());
        labelLatitudeError->setSizePolicy(sizePolicy1);
        labelLatitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeError, 0, 3, 1, 1);

        labelMw = new QLabel(fmFrameInformation);
        labelMw->setObjectName(QString::fromUtf8("labelMw"));
        labelMw->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMw, 4, 1, 1, 1);

        labelPhases = new QLabel(fmFrameInformation);
        labelPhases->setObjectName(QString::fromUtf8("labelPhases"));
        labelPhases->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelPhases, 7, 1, 1, 1);

        labelCLVD = new QLabel(fmFrameInformation);
        labelCLVD->setObjectName(QString::fromUtf8("labelCLVD"));
        labelCLVD->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelCLVD, 6, 1, 1, 1);

        labelMinDist = new QLabel(fmFrameInformation);
        labelMinDist->setObjectName(QString::fromUtf8("labelMinDist"));
        labelMinDist->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMinDist, 8, 1, 1, 1);

        labelMinDistUnit = new QLabel(fmFrameInformation);
        labelMinDistUnit->setObjectName(QString::fromUtf8("labelMinDistUnit"));
        labelMinDistUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMinDistUnit, 8, 2, 1, 1);

        labelMaxDist = new QLabel(fmFrameInformation);
        labelMaxDist->setObjectName(QString::fromUtf8("labelMaxDist"));
        labelMaxDist->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMaxDist, 9, 1, 1, 1);

        labelMaxDistUnit = new QLabel(fmFrameInformation);
        labelMaxDistUnit->setObjectName(QString::fromUtf8("labelMaxDistUnit"));
        labelMaxDistUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMaxDistUnit, 9, 2, 1, 1);

        labelThisSolution = new QLabel(fmFrameInformation);
        labelThisSolution->setObjectName(QString::fromUtf8("labelThisSolution"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        labelThisSolution->setFont(font1);

        gridLayout1->addWidget(labelThisSolution, 16, 1, 1, 3);

        labelDepthError = new QLabel(fmFrameInformation);
        labelDepthError->setObjectName(QString::fromUtf8("labelDepthError"));
        labelDepthError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthError, 2, 3, 1, 1);

        labelCLVDTxt = new QLabel(fmFrameInformation);
        labelCLVDTxt->setObjectName(QString::fromUtf8("labelCLVDTxt"));

        gridLayout1->addWidget(labelCLVDTxt, 6, 0, 1, 1);

        labelMinDistTxt = new QLabel(fmFrameInformation);
        labelMinDistTxt->setObjectName(QString::fromUtf8("labelMinDistTxt"));

        gridLayout1->addWidget(labelMinDistTxt, 8, 0, 1, 1);

        labelMaxDistTxt = new QLabel(fmFrameInformation);
        labelMaxDistTxt->setObjectName(QString::fromUtf8("labelMaxDistTxt"));

        gridLayout1->addWidget(labelMaxDistTxt, 9, 0, 1, 1);

        labelLatitudeUnit = new QLabel(fmFrameInformation);
        labelLatitudeUnit->setObjectName(QString::fromUtf8("labelLatitudeUnit"));
        labelLatitudeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeUnit, 0, 2, 1, 1);

        labelMomentTxt = new QLabel(fmFrameInformation);
        labelMomentTxt->setObjectName(QString::fromUtf8("labelMomentTxt"));

        gridLayout1->addWidget(labelMomentTxt, 3, 0, 1, 1);

        labelMoment = new QLabel(fmFrameInformation);
        labelMoment->setObjectName(QString::fromUtf8("labelMoment"));
        labelMoment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMoment, 3, 1, 1, 1);

        labelMomentUnit = new QLabel(fmFrameInformation);
        labelMomentUnit->setObjectName(QString::fromUtf8("labelMomentUnit"));

        gridLayout1->addWidget(labelMomentUnit, 3, 2, 1, 1);


        gridLayout->addWidget(fmFrameInformation, 2, 0, 1, 1);

        labelFMSeparator = new QLabel(Hypocenter);
        labelFMSeparator->setObjectName(QString::fromUtf8("labelFMSeparator"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(4));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelFMSeparator->sizePolicy().hasHeightForWidth());
        labelFMSeparator->setSizePolicy(sizePolicy2);
        labelFMSeparator->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(labelFMSeparator, 1, 0, 1, 3);

        frameInformationAutomatic = new QFrame(Hypocenter);
        frameInformationAutomatic->setObjectName(QString::fromUtf8("frameInformationAutomatic"));
        frameInformationAutomatic->setFrameShape(QFrame::StyledPanel);
        frameInformationAutomatic->setFrameShadow(QFrame::Raised);
        gridLayout2 = new QGridLayout(frameInformationAutomatic);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        _lbOriginStatusAutomatic = new QLabel(frameInformationAutomatic);
        _lbOriginStatusAutomatic->setObjectName(QString::fromUtf8("_lbOriginStatusAutomatic"));
        _lbOriginStatusAutomatic->setFont(font);
        _lbOriginStatusAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbOriginStatusAutomatic, 8, 0, 1, 3);

        labelVDistanceAutomatic = new QLabel(frameInformationAutomatic);
        labelVDistanceAutomatic->setObjectName(QString::fromUtf8("labelVDistanceAutomatic"));

        gridLayout2->addWidget(labelVDistanceAutomatic, 6, 0, 1, 3);

        _lbCommentAutomatic = new QLabel(frameInformationAutomatic);
        _lbCommentAutomatic->setObjectName(QString::fromUtf8("_lbCommentAutomatic"));
        _lbCommentAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbCommentAutomatic, 5, 0, 1, 1);

        _lbDepthUnitAutomatic = new QLabel(frameInformationAutomatic);
        _lbDepthUnitAutomatic->setObjectName(QString::fromUtf8("_lbDepthUnitAutomatic"));
        _lbDepthUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbDepthUnitAutomatic, 2, 1, 1, 1);

        _lbLongErrorAutomatic = new QLabel(frameInformationAutomatic);
        _lbLongErrorAutomatic->setObjectName(QString::fromUtf8("_lbLongErrorAutomatic"));
        _lbLongErrorAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbLongErrorAutomatic, 1, 2, 1, 1);

        _lbLatErrorAutomatic = new QLabel(frameInformationAutomatic);
        _lbLatErrorAutomatic->setObjectName(QString::fromUtf8("_lbLatErrorAutomatic"));
        sizePolicy1.setHeightForWidth(_lbLatErrorAutomatic->sizePolicy().hasHeightForWidth());
        _lbLatErrorAutomatic->setSizePolicy(sizePolicy1);
        _lbLatErrorAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbLatErrorAutomatic, 0, 2, 1, 1);

        _lbLatitudeAutomatic = new QLabel(frameInformationAutomatic);
        _lbLatitudeAutomatic->setObjectName(QString::fromUtf8("_lbLatitudeAutomatic"));
        sizePolicy.setHeightForWidth(_lbLatitudeAutomatic->sizePolicy().hasHeightForWidth());
        _lbLatitudeAutomatic->setSizePolicy(sizePolicy);
        _lbLatitudeAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbLatitudeAutomatic, 0, 0, 1, 1);

        _lbNoPhasesAutomatic = new QLabel(frameInformationAutomatic);
        _lbNoPhasesAutomatic->setObjectName(QString::fromUtf8("_lbNoPhasesAutomatic"));
        _lbNoPhasesAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbNoPhasesAutomatic, 3, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem, 9, 0, 1, 2);

        _lbLongitudeAutomatic = new QLabel(frameInformationAutomatic);
        _lbLongitudeAutomatic->setObjectName(QString::fromUtf8("_lbLongitudeAutomatic"));
        _lbLongitudeAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbLongitudeAutomatic, 1, 0, 1, 1);

        _lbRMSAutomatic = new QLabel(frameInformationAutomatic);
        _lbRMSAutomatic->setObjectName(QString::fromUtf8("_lbRMSAutomatic"));
        _lbRMSAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbRMSAutomatic, 4, 0, 1, 1);

        _lbDepthErrorAutomatic = new QLabel(frameInformationAutomatic);
        _lbDepthErrorAutomatic->setObjectName(QString::fromUtf8("_lbDepthErrorAutomatic"));
        _lbDepthErrorAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbDepthErrorAutomatic, 2, 2, 1, 1);

        _lbDepthAutomatic = new QLabel(frameInformationAutomatic);
        _lbDepthAutomatic->setObjectName(QString::fromUtf8("_lbDepthAutomatic"));
        _lbDepthAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbDepthAutomatic, 2, 0, 1, 1);

        _lbLatitudeUnitAutomatic = new QLabel(frameInformationAutomatic);
        _lbLatitudeUnitAutomatic->setObjectName(QString::fromUtf8("_lbLatitudeUnitAutomatic"));
        sizePolicy.setHeightForWidth(_lbLatitudeUnitAutomatic->sizePolicy().hasHeightForWidth());
        _lbLatitudeUnitAutomatic->setSizePolicy(sizePolicy);
        _lbLatitudeUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbLatitudeUnitAutomatic, 0, 1, 1, 1);

        _lbLongitudeUnitAutomatic = new QLabel(frameInformationAutomatic);
        _lbLongitudeUnitAutomatic->setObjectName(QString::fromUtf8("_lbLongitudeUnitAutomatic"));
        _lbLongitudeUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbLongitudeUnitAutomatic, 1, 1, 1, 1);

        _lbAgencyAutomatic = new QLabel(frameInformationAutomatic);
        _lbAgencyAutomatic->setObjectName(QString::fromUtf8("_lbAgencyAutomatic"));
        _lbAgencyAutomatic->setFont(font);
        _lbAgencyAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbAgencyAutomatic, 7, 0, 1, 3);


        gridLayout->addWidget(frameInformationAutomatic, 0, 2, 1, 1);

        fmLabelFrameInfoSpacer = new QLabel(Hypocenter);
        fmLabelFrameInfoSpacer->setObjectName(QString::fromUtf8("fmLabelFrameInfoSpacer"));
        fmLabelFrameInfoSpacer->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(fmLabelFrameInfoSpacer, 2, 1, 1, 1);

        fmFrameInformationAutomatic = new QFrame(Hypocenter);
        fmFrameInformationAutomatic->setObjectName(QString::fromUtf8("fmFrameInformationAutomatic"));
        fmFrameInformationAutomatic->setFrameShape(QFrame::StyledPanel);
        fmFrameInformationAutomatic->setFrameShadow(QFrame::Raised);
        gridLayout3 = new QGridLayout(fmFrameInformationAutomatic);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        labelNP0Automatic = new QLabel(fmFrameInformationAutomatic);
        labelNP0Automatic->setObjectName(QString::fromUtf8("labelNP0Automatic"));

        gridLayout3->addWidget(labelNP0Automatic, 11, 0, 1, 3);

        labelNP1Automatic = new QLabel(fmFrameInformationAutomatic);
        labelNP1Automatic->setObjectName(QString::fromUtf8("labelNP1Automatic"));

        gridLayout3->addWidget(labelNP1Automatic, 12, 0, 1, 3);

        labelDepthErrorAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelDepthErrorAutomatic->setObjectName(QString::fromUtf8("labelDepthErrorAutomatic"));
        labelDepthErrorAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelDepthErrorAutomatic, 2, 2, 1, 1);

        labelCLVDAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelCLVDAutomatic->setObjectName(QString::fromUtf8("labelCLVDAutomatic"));
        labelCLVDAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelCLVDAutomatic, 6, 0, 1, 1);

        labelMinDistAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMinDistAutomatic->setObjectName(QString::fromUtf8("labelMinDistAutomatic"));
        labelMinDistAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelMinDistAutomatic, 8, 0, 1, 1);

        labelMinDistUnitAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMinDistUnitAutomatic->setObjectName(QString::fromUtf8("labelMinDistUnitAutomatic"));
        labelMinDistUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelMinDistUnitAutomatic, 8, 1, 1, 1);

        labelMaxDistAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMaxDistAutomatic->setObjectName(QString::fromUtf8("labelMaxDistAutomatic"));
        labelMaxDistAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelMaxDistAutomatic, 9, 0, 1, 1);

        labelMaxDistUnitAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMaxDistUnitAutomatic->setObjectName(QString::fromUtf8("labelMaxDistUnitAutomatic"));
        labelMaxDistUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelMaxDistUnitAutomatic, 9, 1, 1, 1);

        labelLongitudeAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelLongitudeAutomatic->setObjectName(QString::fromUtf8("labelLongitudeAutomatic"));
        labelLongitudeAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelLongitudeAutomatic, 1, 0, 1, 1);

        labelDepthAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelDepthAutomatic->setObjectName(QString::fromUtf8("labelDepthAutomatic"));
        labelDepthAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelDepthAutomatic, 2, 0, 1, 1);

        labelLongitudeUnitAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelLongitudeUnitAutomatic->setObjectName(QString::fromUtf8("labelLongitudeUnitAutomatic"));
        labelLongitudeUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelLongitudeUnitAutomatic, 1, 1, 1, 1);

        labelLatitudeUnitAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelLatitudeUnitAutomatic->setObjectName(QString::fromUtf8("labelLatitudeUnitAutomatic"));
        labelLatitudeUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelLatitudeUnitAutomatic, 0, 1, 1, 1);

        labelTypeAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelTypeAutomatic->setObjectName(QString::fromUtf8("labelTypeAutomatic"));

        gridLayout3->addWidget(labelTypeAutomatic, 13, 0, 1, 3);

        labelPhasesAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelPhasesAutomatic->setObjectName(QString::fromUtf8("labelPhasesAutomatic"));
        labelPhasesAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelPhasesAutomatic, 7, 0, 1, 1);

        fmLabelVDistanceAutomatic = new QLabel(fmFrameInformationAutomatic);
        fmLabelVDistanceAutomatic->setObjectName(QString::fromUtf8("fmLabelVDistanceAutomatic"));

        gridLayout3->addWidget(fmLabelVDistanceAutomatic, 10, 0, 1, 3);

        labelLongitudeErrorAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelLongitudeErrorAutomatic->setObjectName(QString::fromUtf8("labelLongitudeErrorAutomatic"));
        labelLongitudeErrorAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelLongitudeErrorAutomatic, 1, 2, 1, 1);

        labelAgencyAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelAgencyAutomatic->setObjectName(QString::fromUtf8("labelAgencyAutomatic"));
        labelAgencyAutomatic->setFont(font);
        labelAgencyAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelAgencyAutomatic, 14, 0, 1, 3);

        labelThisSolutionAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelThisSolutionAutomatic->setObjectName(QString::fromUtf8("labelThisSolutionAutomatic"));
        labelThisSolutionAutomatic->setFont(font1);

        gridLayout3->addWidget(labelThisSolutionAutomatic, 16, 0, 1, 3);

        labelDepthUnitAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelDepthUnitAutomatic->setObjectName(QString::fromUtf8("labelDepthUnitAutomatic"));
        labelDepthUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelDepthUnitAutomatic, 2, 1, 1, 1);

        labelLatitudeAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelLatitudeAutomatic->setObjectName(QString::fromUtf8("labelLatitudeAutomatic"));
        sizePolicy.setHeightForWidth(labelLatitudeAutomatic->sizePolicy().hasHeightForWidth());
        labelLatitudeAutomatic->setSizePolicy(sizePolicy);
        labelLatitudeAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelLatitudeAutomatic, 0, 0, 1, 1);

        labelStatusAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelStatusAutomatic->setObjectName(QString::fromUtf8("labelStatusAutomatic"));
        labelStatusAutomatic->setFont(font);
        labelStatusAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelStatusAutomatic, 15, 0, 1, 3);

        labelMwAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMwAutomatic->setObjectName(QString::fromUtf8("labelMwAutomatic"));
        labelMwAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelMwAutomatic, 4, 0, 1, 1);

        labelLatitudeErrorAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelLatitudeErrorAutomatic->setObjectName(QString::fromUtf8("labelLatitudeErrorAutomatic"));
        sizePolicy1.setHeightForWidth(labelLatitudeErrorAutomatic->sizePolicy().hasHeightForWidth());
        labelLatitudeErrorAutomatic->setSizePolicy(sizePolicy1);
        labelLatitudeErrorAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelLatitudeErrorAutomatic, 0, 2, 1, 1);

        labelMisfitAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMisfitAutomatic->setObjectName(QString::fromUtf8("labelMisfitAutomatic"));
        labelMisfitAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelMisfitAutomatic, 5, 0, 1, 1);

        labelMomentAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMomentAutomatic->setObjectName(QString::fromUtf8("labelMomentAutomatic"));
        labelMomentAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelMomentAutomatic, 3, 0, 1, 1);

        labelMomentUnitAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMomentUnitAutomatic->setObjectName(QString::fromUtf8("labelMomentUnitAutomatic"));

        gridLayout3->addWidget(labelMomentUnitAutomatic, 3, 1, 1, 1);


        gridLayout->addWidget(fmFrameInformationAutomatic, 2, 2, 1, 1);

        labelFrameInfoSpacer = new QLabel(Hypocenter);
        labelFrameInfoSpacer->setObjectName(QString::fromUtf8("labelFrameInfoSpacer"));
        labelFrameInfoSpacer->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(labelFrameInfoSpacer, 0, 1, 1, 1);

        frameInformation = new QFrame(Hypocenter);
        frameInformation->setObjectName(QString::fromUtf8("frameInformation"));
        frameInformation->setFrameShape(QFrame::StyledPanel);
        frameInformation->setFrameShadow(QFrame::Raised);
        gridLayout4 = new QGridLayout(frameInformation);
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        labelVDistance = new QLabel(frameInformation);
        labelVDistance->setObjectName(QString::fromUtf8("labelVDistance"));

        gridLayout4->addWidget(labelVDistance, 6, 0, 1, 4);

        spacerItem1 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem1, 12, 0, 1, 1);

        _lbComment = new QLabel(frameInformation);
        _lbComment->setObjectName(QString::fromUtf8("_lbComment"));
        _lbComment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbComment, 5, 1, 1, 1);

        _lbCommentTxt = new QLabel(frameInformation);
        _lbCommentTxt->setObjectName(QString::fromUtf8("_lbCommentTxt"));

        gridLayout4->addWidget(_lbCommentTxt, 5, 0, 1, 1);

        _lbLongitudeUnit = new QLabel(frameInformation);
        _lbLongitudeUnit->setObjectName(QString::fromUtf8("_lbLongitudeUnit"));
        _lbLongitudeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLongitudeUnit, 1, 2, 1, 1);

        _lbRMSTxt = new QLabel(frameInformation);
        _lbRMSTxt->setObjectName(QString::fromUtf8("_lbRMSTxt"));
        _lbRMSTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbRMSTxt, 4, 0, 1, 1);

        _lbEventID = new QLabel(frameInformation);
        _lbEventID->setObjectName(QString::fromUtf8("_lbEventID"));

        gridLayout4->addWidget(_lbEventID, 11, 1, 1, 3);

        _lbNoPhasesTxt = new QLabel(frameInformation);
        _lbNoPhasesTxt->setObjectName(QString::fromUtf8("_lbNoPhasesTxt"));
        _lbNoPhasesTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbNoPhasesTxt, 3, 0, 1, 1);

        _lbThisLocTxt = new QLabel(frameInformation);
        _lbThisLocTxt->setObjectName(QString::fromUtf8("_lbThisLocTxt"));
        _lbThisLocTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbThisLocTxt, 10, 0, 1, 1);

        _lbLatitudeTxt = new QLabel(frameInformation);
        _lbLatitudeTxt->setObjectName(QString::fromUtf8("_lbLatitudeTxt"));
        _lbLatitudeTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLatitudeTxt, 0, 0, 1, 1);

        _lbDepth = new QLabel(frameInformation);
        _lbDepth->setObjectName(QString::fromUtf8("_lbDepth"));
        _lbDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbDepth, 2, 1, 1, 1);

        _lbOriginStatus = new QLabel(frameInformation);
        _lbOriginStatus->setObjectName(QString::fromUtf8("_lbOriginStatus"));
        _lbOriginStatus->setFont(font);
        _lbOriginStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbOriginStatus, 8, 1, 1, 3);

        _lbEventIDTxt = new QLabel(frameInformation);
        _lbEventIDTxt->setObjectName(QString::fromUtf8("_lbEventIDTxt"));

        gridLayout4->addWidget(_lbEventIDTxt, 11, 0, 1, 1);

        _lbOriginStatusTxt = new QLabel(frameInformation);
        _lbOriginStatusTxt->setObjectName(QString::fromUtf8("_lbOriginStatusTxt"));
        _lbOriginStatusTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbOriginStatusTxt, 8, 0, 1, 1);

        _lbLongError = new QLabel(frameInformation);
        _lbLongError->setObjectName(QString::fromUtf8("_lbLongError"));
        _lbLongError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLongError, 1, 3, 1, 1);

        _lbLatError = new QLabel(frameInformation);
        _lbLatError->setObjectName(QString::fromUtf8("_lbLatError"));
        sizePolicy1.setHeightForWidth(_lbLatError->sizePolicy().hasHeightForWidth());
        _lbLatError->setSizePolicy(sizePolicy1);
        _lbLatError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLatError, 0, 3, 1, 1);

        _lbDepthUnit = new QLabel(frameInformation);
        _lbDepthUnit->setObjectName(QString::fromUtf8("_lbDepthUnit"));
        _lbDepthUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbDepthUnit, 2, 2, 1, 1);

        _lbNoPhases = new QLabel(frameInformation);
        _lbNoPhases->setObjectName(QString::fromUtf8("_lbNoPhases"));
        _lbNoPhases->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbNoPhases, 3, 1, 1, 1);

        _lbFirstLocTxt = new QLabel(frameInformation);
        _lbFirstLocTxt->setObjectName(QString::fromUtf8("_lbFirstLocTxt"));
        _lbFirstLocTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbFirstLocTxt, 9, 0, 1, 1);

        _lbLongitudeTxt = new QLabel(frameInformation);
        _lbLongitudeTxt->setObjectName(QString::fromUtf8("_lbLongitudeTxt"));
        _lbLongitudeTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLongitudeTxt, 1, 0, 1, 1);

        _lbAgency = new QLabel(frameInformation);
        _lbAgency->setObjectName(QString::fromUtf8("_lbAgency"));
        _lbAgency->setFont(font);
        _lbAgency->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbAgency, 7, 1, 1, 3);

        _lbRMS = new QLabel(frameInformation);
        _lbRMS->setObjectName(QString::fromUtf8("_lbRMS"));
        _lbRMS->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbRMS, 4, 1, 1, 1);

        _lbLongitude = new QLabel(frameInformation);
        _lbLongitude->setObjectName(QString::fromUtf8("_lbLongitude"));
        _lbLongitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLongitude, 1, 1, 1, 1);

        _lbLatitudeUnit = new QLabel(frameInformation);
        _lbLatitudeUnit->setObjectName(QString::fromUtf8("_lbLatitudeUnit"));
        sizePolicy.setHeightForWidth(_lbLatitudeUnit->sizePolicy().hasHeightForWidth());
        _lbLatitudeUnit->setSizePolicy(sizePolicy);
        _lbLatitudeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLatitudeUnit, 0, 2, 1, 1);

        _lbDepthError = new QLabel(frameInformation);
        _lbDepthError->setObjectName(QString::fromUtf8("_lbDepthError"));
        _lbDepthError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbDepthError, 2, 3, 1, 1);

        _lbAgencyTxt = new QLabel(frameInformation);
        _lbAgencyTxt->setObjectName(QString::fromUtf8("_lbAgencyTxt"));
        _lbAgencyTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbAgencyTxt, 7, 0, 1, 1);

        _lbThisLocation = new QLabel(frameInformation);
        _lbThisLocation->setObjectName(QString::fromUtf8("_lbThisLocation"));
        _lbThisLocation->setFont(font1);

        gridLayout4->addWidget(_lbThisLocation, 10, 1, 1, 3);

        _lbDepthTxt = new QLabel(frameInformation);
        _lbDepthTxt->setObjectName(QString::fromUtf8("_lbDepthTxt"));
        _lbDepthTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbDepthTxt, 2, 0, 1, 1);

        _lbFirstLocation = new QLabel(frameInformation);
        _lbFirstLocation->setObjectName(QString::fromUtf8("_lbFirstLocation"));
        _lbFirstLocation->setFont(font1);

        gridLayout4->addWidget(_lbFirstLocation, 9, 1, 1, 3);

        _lbLatitude = new QLabel(frameInformation);
        _lbLatitude->setObjectName(QString::fromUtf8("_lbLatitude"));
        sizePolicy.setHeightForWidth(_lbLatitude->sizePolicy().hasHeightForWidth());
        _lbLatitude->setSizePolicy(sizePolicy);
        _lbLatitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLatitude, 0, 1, 1, 1);


        gridLayout->addWidget(frameInformation, 0, 0, 1, 1);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 3, 1, 1, 1);


        retranslateUi(Hypocenter);

        QMetaObject::connectSlotsByName(Hypocenter);
    } // setupUi

    void retranslateUi(QWidget *Hypocenter)
    {
        Hypocenter->setWindowTitle(QApplication::translate("Hypocenter", "Hypocenter", 0, QApplication::UnicodeUTF8));
        labelStatus->setText(QString());
        labelLatitude->setText(QApplication::translate("Hypocenter", "0.00", 0, QApplication::UnicodeUTF8));
        labelNP0->setText(QApplication::translate("Hypocenter", "S: -, D: -, R: -", 0, QApplication::UnicodeUTF8));
        labelNP1->setText(QApplication::translate("Hypocenter", "S: -, D: -, R: -", 0, QApplication::UnicodeUTF8));
        labelLongitudeError->setText(QApplication::translate("Hypocenter", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        labelPhasesTxt->setText(QApplication::translate("Hypocenter", "Phase Count:", 0, QApplication::UnicodeUTF8));
        labelLongitude->setText(QApplication::translate("Hypocenter", "0.00", 0, QApplication::UnicodeUTF8));
        labelStatusTxt->setText(QApplication::translate("Hypocenter", "Status:", 0, QApplication::UnicodeUTF8));
        labelLongitudeUnit->setText(QApplication::translate("Hypocenter", "\302\260 E", 0, QApplication::UnicodeUTF8));
        labelLatitudeTxt->setText(QApplication::translate("Hypocenter", "Latitude:", 0, QApplication::UnicodeUTF8));
        labelDepthUnit->setText(QApplication::translate("Hypocenter", "km", 0, QApplication::UnicodeUTF8));
        labelDepthTxt->setText(QApplication::translate("Hypocenter", "Depth:", 0, QApplication::UnicodeUTF8));
        fmLabelVDistance->setText(QApplication::translate("Hypocenter", "<Spacer>", 0, QApplication::UnicodeUTF8));
        labelAgencyTxt->setText(QApplication::translate("Hypocenter", "Agency:", 0, QApplication::UnicodeUTF8));
        labelTypeTxt->setText(QApplication::translate("Hypocenter", "Type:", 0, QApplication::UnicodeUTF8));
        labelAgency->setText(QString());
        labelLongitudeTxt->setText(QApplication::translate("Hypocenter", "Longitude:", 0, QApplication::UnicodeUTF8));
        labelMisfit->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelMwTxt->setText(QApplication::translate("Hypocenter", "Mw:", 0, QApplication::UnicodeUTF8));
        labelThisSolutionTxt->setText(QApplication::translate("Hypocenter", "This Solution:", 0, QApplication::UnicodeUTF8));
        labelDepth->setText(QApplication::translate("Hypocenter", "0", 0, QApplication::UnicodeUTF8));
        labelType->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelNPTxt->setText(QApplication::translate("Hypocenter", "Nodal planes:", 0, QApplication::UnicodeUTF8));
        labelMisfitTxt->setText(QApplication::translate("Hypocenter", "Misfit:", 0, QApplication::UnicodeUTF8));
        labelLatitudeError->setText(QApplication::translate("Hypocenter", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        labelMw->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelPhases->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelCLVD->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelMinDist->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelMinDistUnit->setText(QApplication::translate("Hypocenter", "\302\260", 0, QApplication::UnicodeUTF8));
        labelMaxDist->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelMaxDistUnit->setText(QApplication::translate("Hypocenter", "\302\260", 0, QApplication::UnicodeUTF8));
        labelThisSolution->setText(QString());
        labelDepthError->setText(QApplication::translate("Hypocenter", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        labelCLVDTxt->setText(QApplication::translate("Hypocenter", "CLVD:", 0, QApplication::UnicodeUTF8));
        labelMinDistTxt->setText(QApplication::translate("Hypocenter", "Min dist:", 0, QApplication::UnicodeUTF8));
        labelMaxDistTxt->setText(QApplication::translate("Hypocenter", "Max dist:", 0, QApplication::UnicodeUTF8));
        labelLatitudeUnit->setText(QApplication::translate("Hypocenter", "\302\260 N", 0, QApplication::UnicodeUTF8));
        labelMomentTxt->setText(QApplication::translate("Hypocenter", "Moment:", 0, QApplication::UnicodeUTF8));
        labelMoment->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelMomentUnit->setText(QApplication::translate("Hypocenter", "Nm", 0, QApplication::UnicodeUTF8));
        labelFMSeparator->setText(QApplication::translate("Hypocenter", "FocalMechanism", 0, QApplication::UnicodeUTF8));
        _lbOriginStatusAutomatic->setText(QString());
        labelVDistanceAutomatic->setText(QApplication::translate("Hypocenter", "<Spacer>", 0, QApplication::UnicodeUTF8));
        _lbCommentAutomatic->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        _lbDepthUnitAutomatic->setText(QApplication::translate("Hypocenter", "km", 0, QApplication::UnicodeUTF8));
        _lbLongErrorAutomatic->setText(QApplication::translate("Hypocenter", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        _lbLatErrorAutomatic->setText(QApplication::translate("Hypocenter", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        _lbLatitudeAutomatic->setText(QApplication::translate("Hypocenter", "0.00", 0, QApplication::UnicodeUTF8));
        _lbNoPhasesAutomatic->setText(QApplication::translate("Hypocenter", "0", 0, QApplication::UnicodeUTF8));
        _lbLongitudeAutomatic->setText(QApplication::translate("Hypocenter", "0.00", 0, QApplication::UnicodeUTF8));
        _lbRMSAutomatic->setText(QApplication::translate("Hypocenter", "0.0", 0, QApplication::UnicodeUTF8));
        _lbDepthErrorAutomatic->setText(QApplication::translate("Hypocenter", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        _lbDepthAutomatic->setText(QApplication::translate("Hypocenter", "0", 0, QApplication::UnicodeUTF8));
        _lbLatitudeUnitAutomatic->setText(QApplication::translate("Hypocenter", "\302\260 N", 0, QApplication::UnicodeUTF8));
        _lbLongitudeUnitAutomatic->setText(QApplication::translate("Hypocenter", "\302\260 E", 0, QApplication::UnicodeUTF8));
        _lbAgencyAutomatic->setText(QString());
        fmLabelFrameInfoSpacer->setText(QApplication::translate("Hypocenter", "<spacer>", 0, QApplication::UnicodeUTF8));
        labelNP0Automatic->setText(QApplication::translate("Hypocenter", "S: -, D: -, R: -", 0, QApplication::UnicodeUTF8));
        labelNP1Automatic->setText(QApplication::translate("Hypocenter", "S: -, D: -, R: -", 0, QApplication::UnicodeUTF8));
        labelDepthErrorAutomatic->setText(QApplication::translate("Hypocenter", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        labelCLVDAutomatic->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelMinDistAutomatic->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelMinDistUnitAutomatic->setText(QApplication::translate("Hypocenter", "\302\260", 0, QApplication::UnicodeUTF8));
        labelMaxDistAutomatic->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelMaxDistUnitAutomatic->setText(QApplication::translate("Hypocenter", "\302\260", 0, QApplication::UnicodeUTF8));
        labelLongitudeAutomatic->setText(QApplication::translate("Hypocenter", "0.00", 0, QApplication::UnicodeUTF8));
        labelDepthAutomatic->setText(QApplication::translate("Hypocenter", "0", 0, QApplication::UnicodeUTF8));
        labelLongitudeUnitAutomatic->setText(QApplication::translate("Hypocenter", "\302\260 E", 0, QApplication::UnicodeUTF8));
        labelLatitudeUnitAutomatic->setText(QApplication::translate("Hypocenter", "\302\260 N", 0, QApplication::UnicodeUTF8));
        labelTypeAutomatic->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelPhasesAutomatic->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        fmLabelVDistanceAutomatic->setText(QApplication::translate("Hypocenter", "<Spacer>", 0, QApplication::UnicodeUTF8));
        labelLongitudeErrorAutomatic->setText(QApplication::translate("Hypocenter", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        labelAgencyAutomatic->setText(QString());
        labelThisSolutionAutomatic->setText(QString());
        labelDepthUnitAutomatic->setText(QApplication::translate("Hypocenter", "km", 0, QApplication::UnicodeUTF8));
        labelLatitudeAutomatic->setText(QApplication::translate("Hypocenter", "0.00", 0, QApplication::UnicodeUTF8));
        labelStatusAutomatic->setText(QString());
        labelMwAutomatic->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelLatitudeErrorAutomatic->setText(QApplication::translate("Hypocenter", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        labelMisfitAutomatic->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelMomentAutomatic->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        labelMomentUnitAutomatic->setText(QApplication::translate("Hypocenter", "Nm", 0, QApplication::UnicodeUTF8));
        labelFrameInfoSpacer->setText(QApplication::translate("Hypocenter", "<spacer>", 0, QApplication::UnicodeUTF8));
        labelVDistance->setText(QApplication::translate("Hypocenter", "<Spacer>", 0, QApplication::UnicodeUTF8));
        _lbComment->setText(QApplication::translate("Hypocenter", "-", 0, QApplication::UnicodeUTF8));
        _lbCommentTxt->setText(QApplication::translate("Hypocenter", "Custom:", 0, QApplication::UnicodeUTF8));
        _lbLongitudeUnit->setText(QApplication::translate("Hypocenter", "\302\260 E", 0, QApplication::UnicodeUTF8));
        _lbRMSTxt->setText(QApplication::translate("Hypocenter", "RMS Residual:", 0, QApplication::UnicodeUTF8));
        _lbEventID->setText(QString());
        _lbNoPhasesTxt->setText(QApplication::translate("Hypocenter", "Phase Count:", 0, QApplication::UnicodeUTF8));
        _lbThisLocTxt->setText(QApplication::translate("Hypocenter", "This Location:", 0, QApplication::UnicodeUTF8));
        _lbLatitudeTxt->setText(QApplication::translate("Hypocenter", "Latitude:", 0, QApplication::UnicodeUTF8));
        _lbDepth->setText(QApplication::translate("Hypocenter", "0", 0, QApplication::UnicodeUTF8));
        _lbOriginStatus->setText(QString());
        _lbEventIDTxt->setText(QApplication::translate("Hypocenter", "EventID:", 0, QApplication::UnicodeUTF8));
        _lbOriginStatusTxt->setText(QApplication::translate("Hypocenter", "Status:", 0, QApplication::UnicodeUTF8));
        _lbLongError->setText(QApplication::translate("Hypocenter", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        _lbLatError->setText(QApplication::translate("Hypocenter", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        _lbDepthUnit->setText(QApplication::translate("Hypocenter", "km", 0, QApplication::UnicodeUTF8));
        _lbNoPhases->setText(QApplication::translate("Hypocenter", "0", 0, QApplication::UnicodeUTF8));
        _lbFirstLocTxt->setText(QApplication::translate("Hypocenter", "First Location:", 0, QApplication::UnicodeUTF8));
        _lbLongitudeTxt->setText(QApplication::translate("Hypocenter", "Longitude:", 0, QApplication::UnicodeUTF8));
        _lbAgency->setText(QString());
        _lbRMS->setText(QApplication::translate("Hypocenter", "0.0", 0, QApplication::UnicodeUTF8));
        _lbLongitude->setText(QApplication::translate("Hypocenter", "0.00", 0, QApplication::UnicodeUTF8));
        _lbLatitudeUnit->setText(QApplication::translate("Hypocenter", "\302\260 N", 0, QApplication::UnicodeUTF8));
        _lbDepthError->setText(QApplication::translate("Hypocenter", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        _lbAgencyTxt->setText(QApplication::translate("Hypocenter", "Agency:", 0, QApplication::UnicodeUTF8));
        _lbThisLocation->setText(QString());
        _lbDepthTxt->setText(QApplication::translate("Hypocenter", "Depth:", 0, QApplication::UnicodeUTF8));
        _lbFirstLocation->setText(QString());
        _lbLatitude->setText(QApplication::translate("Hypocenter", "0.00", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Hypocenter: public Ui_Hypocenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTSUMMARYVIEW_HYPOCENTER_H
