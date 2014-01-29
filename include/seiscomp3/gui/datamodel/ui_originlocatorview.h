/********************************************************************************
** Form generated from reading UI file 'originlocatorview.ui'
**
** Created: Thu Jan 23 14:38:32 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIGINLOCATORVIEW_H
#define UI_ORIGINLOCATORVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OriginLocaterView
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QFrame *groupSummary;
    QVBoxLayout *vboxLayout1;
    QLabel *labelRegion;
    QFrame *frameMap;
    QFrame *groupBox;
    QGridLayout *gridLayout;
    QLabel *labelNumPhases;
    QLabel *labelAgency;
    QLabel *labelMinDistUnit;
    QLabel *labelDepth;
    QLabel *labelStdErrorUnit;
    QLabel *lbEventID;
    QLabel *labelLatitudeErrorUnit;
    QLabel *labelLatitudeError;
    QLabel *label_13;
    QLabel *labelLongitude;
    QLabel *labelCreated;
    QLabel *label_11;
    QLabel *labelLongitudeErrorUnit;
    QLabel *labelUser;
    QLabel *labelEarthModel;
    QFrame *frameInfoSeparator;
    QLabel *labelNumPhasesError;
    QLabel *labelLatitudeUnit;
    QLabel *labelStdError;
    QLabel *labelLatitude;
    QLabel *label_7;
    QLabel *labelEventID;
    QLabel *labelDepthErrorUnit;
    QLabel *labelTime;
    QLabel *label_12;
    QLabel *lbEarthModel;
    QLabel *lbMethod;
    QLabel *labelMinDist;
    QLabel *lbAgencyID;
    QLabel *label_8;
    QLabel *labelMethod;
    QLabel *label_10;
    QSpacerItem *spacerItem;
    QLabel *label_16;
    QLabel *labelNumPhasesUnit;
    QLabel *lbUser;
    QLabel *label_9;
    QLabel *labelLongitudeError;
    QLabel *labelDepthError;
    QLabel *labelEvaluation;
    QLabel *labelLongitudeUnit;
    QLabel *label_15;
    QLabel *labelAzimuthGap;
    QLabel *labelDepthUnit;
    QLabel *labelAzimuthGapUnit;
    QLabel *lbEvaluation;
    QLabel *lbComment;
    QLabel *labelComment;
    QFrame *groupResiduals;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QLabel *label_5;
    QLabel *labelPlotFilter;
    QTableView *tableArrivals;
    QFrame *groupBox_2;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout2;
    QComboBox *cbLocator;
    QToolButton *btnLocatorSettings;
    QSpacerItem *spacerItem2;
    QLabel *label_2;
    QComboBox *cbLocatorProfile;
    QSpacerItem *spacerItem3;
    QCheckBox *cbFixedDepth;
    QLineEdit *editFixedDepth;
    QLabel *label_3;
    QSpacerItem *spacerItem4;
    QCheckBox *cbDistanceCutOff;
    QLineEdit *editDistanceCutOff;
    QLabel *label;
    QSpacerItem *spacerItem5;
    QCheckBox *cbIgnoreInitialLocation;
    QSpacerItem *spacerItem6;
    QToolButton *buttonEditComment;
    QHBoxLayout *hboxLayout3;
    QToolButton *btnRelocate;
    QToolButton *btnCustom0;
    QToolButton *btnCustom1;
    QSpacerItem *spacerItem7;
    QToolButton *btnShowWaveforms;
    QToolButton *btnImportAllArrivals;
    QToolButton *btnMagnitudes;
    QToolButton *btnCommit;

    void setupUi(QWidget *OriginLocaterView)
    {
        if (OriginLocaterView->objectName().isEmpty())
            OriginLocaterView->setObjectName(QString::fromUtf8("OriginLocaterView"));
        OriginLocaterView->resize(1071, 778);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OriginLocaterView->sizePolicy().hasHeightForWidth());
        OriginLocaterView->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(OriginLocaterView);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        groupSummary = new QFrame(OriginLocaterView);
        groupSummary->setObjectName(QString::fromUtf8("groupSummary"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupSummary->sizePolicy().hasHeightForWidth());
        groupSummary->setSizePolicy(sizePolicy1);
        groupSummary->setFrameShape(QFrame::NoFrame);
        groupSummary->setFrameShadow(QFrame::Plain);
        vboxLayout1 = new QVBoxLayout(groupSummary);
        vboxLayout1->setSpacing(4);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        labelRegion = new QLabel(groupSummary);
        labelRegion->setObjectName(QString::fromUtf8("labelRegion"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(13), static_cast<QSizePolicy::Policy>(4));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelRegion->sizePolicy().hasHeightForWidth());
        labelRegion->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        labelRegion->setFont(font);
        labelRegion->setFrameShape(QFrame::NoFrame);

        vboxLayout1->addWidget(labelRegion);

        frameMap = new QFrame(groupSummary);
        frameMap->setObjectName(QString::fromUtf8("frameMap"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(7));
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frameMap->sizePolicy().hasHeightForWidth());
        frameMap->setSizePolicy(sizePolicy3);
        frameMap->setMinimumSize(QSize(120, 200));
        frameMap->setMaximumSize(QSize(2000, 2000));
        QPalette palette;
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(239, 239, 239));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(239, 239, 239));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(199, 199, 199));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(239, 239, 239));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(239, 239, 239));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(86, 117, 148));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        frameMap->setPalette(palette);
        frameMap->setFrameShape(QFrame::NoFrame);
        frameMap->setFrameShadow(QFrame::Plain);

        vboxLayout1->addWidget(frameMap);


        hboxLayout->addWidget(groupSummary);

        groupBox = new QFrame(OriginLocaterView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy4);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelNumPhases = new QLabel(groupBox);
        labelNumPhases->setObjectName(QString::fromUtf8("labelNumPhases"));
        labelNumPhases->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelNumPhases, 4, 1, 1, 1);

        labelAgency = new QLabel(groupBox);
        labelAgency->setObjectName(QString::fromUtf8("labelAgency"));
        QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(13), static_cast<QSizePolicy::Policy>(5));
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelAgency->sizePolicy().hasHeightForWidth());
        labelAgency->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelAgency, 12, 1, 1, 4);

        labelMinDistUnit = new QLabel(groupBox);
        labelMinDistUnit->setObjectName(QString::fromUtf8("labelMinDistUnit"));

        gridLayout->addWidget(labelMinDistUnit, 8, 2, 1, 1);

        labelDepth = new QLabel(groupBox);
        labelDepth->setObjectName(QString::fromUtf8("labelDepth"));
        labelDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelDepth, 1, 1, 1, 1);

        labelStdErrorUnit = new QLabel(groupBox);
        labelStdErrorUnit->setObjectName(QString::fromUtf8("labelStdErrorUnit"));

        gridLayout->addWidget(labelStdErrorUnit, 5, 2, 1, 1);

        lbEventID = new QLabel(groupBox);
        lbEventID->setObjectName(QString::fromUtf8("lbEventID"));
        lbEventID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbEventID, 11, 0, 1, 1);

        labelLatitudeErrorUnit = new QLabel(groupBox);
        labelLatitudeErrorUnit->setObjectName(QString::fromUtf8("labelLatitudeErrorUnit"));

        gridLayout->addWidget(labelLatitudeErrorUnit, 2, 4, 1, 1);

        labelLatitudeError = new QLabel(groupBox);
        labelLatitudeError->setObjectName(QString::fromUtf8("labelLatitudeError"));
        labelLatitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelLatitudeError, 2, 3, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        labelLongitude = new QLabel(groupBox);
        labelLongitude->setObjectName(QString::fromUtf8("labelLongitude"));
        labelLongitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelLongitude, 3, 1, 1, 1);

        labelCreated = new QLabel(groupBox);
        labelCreated->setObjectName(QString::fromUtf8("labelCreated"));

        gridLayout->addWidget(labelCreated, 17, 1, 1, 4);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 3, 0, 1, 1);

        labelLongitudeErrorUnit = new QLabel(groupBox);
        labelLongitudeErrorUnit->setObjectName(QString::fromUtf8("labelLongitudeErrorUnit"));

        gridLayout->addWidget(labelLongitudeErrorUnit, 3, 4, 1, 1);

        labelUser = new QLabel(groupBox);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));
        sizePolicy5.setHeightForWidth(labelUser->sizePolicy().hasHeightForWidth());
        labelUser->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelUser, 13, 1, 1, 4);

        labelEarthModel = new QLabel(groupBox);
        labelEarthModel->setObjectName(QString::fromUtf8("labelEarthModel"));
        sizePolicy5.setHeightForWidth(labelEarthModel->sizePolicy().hasHeightForWidth());
        labelEarthModel->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelEarthModel, 16, 1, 1, 4);

        frameInfoSeparator = new QFrame(groupBox);
        frameInfoSeparator->setObjectName(QString::fromUtf8("frameInfoSeparator"));
        frameInfoSeparator->setFrameShape(QFrame::HLine);
        frameInfoSeparator->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frameInfoSeparator, 10, 0, 1, 5);

        labelNumPhasesError = new QLabel(groupBox);
        labelNumPhasesError->setObjectName(QString::fromUtf8("labelNumPhasesError"));
        labelNumPhasesError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelNumPhasesError, 4, 3, 1, 1);

        labelLatitudeUnit = new QLabel(groupBox);
        labelLatitudeUnit->setObjectName(QString::fromUtf8("labelLatitudeUnit"));

        gridLayout->addWidget(labelLatitudeUnit, 2, 2, 1, 1);

        labelStdError = new QLabel(groupBox);
        labelStdError->setObjectName(QString::fromUtf8("labelStdError"));
        labelStdError->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelStdError, 5, 1, 1, 1);

        labelLatitude = new QLabel(groupBox);
        labelLatitude->setObjectName(QString::fromUtf8("labelLatitude"));
        labelLatitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelLatitude, 2, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        labelEventID = new QLabel(groupBox);
        labelEventID->setObjectName(QString::fromUtf8("labelEventID"));
        sizePolicy5.setHeightForWidth(labelEventID->sizePolicy().hasHeightForWidth());
        labelEventID->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelEventID, 11, 1, 1, 4);

        labelDepthErrorUnit = new QLabel(groupBox);
        labelDepthErrorUnit->setObjectName(QString::fromUtf8("labelDepthErrorUnit"));

        gridLayout->addWidget(labelDepthErrorUnit, 1, 4, 1, 1);

        labelTime = new QLabel(groupBox);
        labelTime->setObjectName(QString::fromUtf8("labelTime"));
        labelTime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelTime, 0, 1, 1, 4);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 1, 0, 1, 1);

        lbEarthModel = new QLabel(groupBox);
        lbEarthModel->setObjectName(QString::fromUtf8("lbEarthModel"));
        lbEarthModel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbEarthModel, 16, 0, 1, 1);

        lbMethod = new QLabel(groupBox);
        lbMethod->setObjectName(QString::fromUtf8("lbMethod"));
        lbMethod->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbMethod, 15, 0, 1, 1);

        labelMinDist = new QLabel(groupBox);
        labelMinDist->setObjectName(QString::fromUtf8("labelMinDist"));
        labelMinDist->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelMinDist, 8, 1, 1, 1);

        lbAgencyID = new QLabel(groupBox);
        lbAgencyID->setObjectName(QString::fromUtf8("lbAgencyID"));
        lbAgencyID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbAgencyID, 12, 0, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        labelMethod = new QLabel(groupBox);
        labelMethod->setObjectName(QString::fromUtf8("labelMethod"));
        sizePolicy5.setHeightForWidth(labelMethod->sizePolicy().hasHeightForWidth());
        labelMethod->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelMethod, 15, 1, 1, 4);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        spacerItem = new QSpacerItem(201, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 9, 0, 1, 5);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_16, 17, 0, 1, 1);

        labelNumPhasesUnit = new QLabel(groupBox);
        labelNumPhasesUnit->setObjectName(QString::fromUtf8("labelNumPhasesUnit"));
        labelNumPhasesUnit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelNumPhasesUnit, 4, 2, 1, 1);

        lbUser = new QLabel(groupBox);
        lbUser->setObjectName(QString::fromUtf8("lbUser"));
        lbUser->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbUser, 13, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        labelLongitudeError = new QLabel(groupBox);
        labelLongitudeError->setObjectName(QString::fromUtf8("labelLongitudeError"));
        labelLongitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelLongitudeError, 3, 3, 1, 1);

        labelDepthError = new QLabel(groupBox);
        labelDepthError->setObjectName(QString::fromUtf8("labelDepthError"));
        labelDepthError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelDepthError, 1, 3, 1, 1);

        labelEvaluation = new QLabel(groupBox);
        labelEvaluation->setObjectName(QString::fromUtf8("labelEvaluation"));

        gridLayout->addWidget(labelEvaluation, 14, 1, 1, 4);

        labelLongitudeUnit = new QLabel(groupBox);
        labelLongitudeUnit->setObjectName(QString::fromUtf8("labelLongitudeUnit"));

        gridLayout->addWidget(labelLongitudeUnit, 3, 2, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_15, 0, 0, 1, 1);

        labelAzimuthGap = new QLabel(groupBox);
        labelAzimuthGap->setObjectName(QString::fromUtf8("labelAzimuthGap"));
        labelAzimuthGap->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelAzimuthGap, 7, 1, 1, 1);

        labelDepthUnit = new QLabel(groupBox);
        labelDepthUnit->setObjectName(QString::fromUtf8("labelDepthUnit"));

        gridLayout->addWidget(labelDepthUnit, 1, 2, 1, 1);

        labelAzimuthGapUnit = new QLabel(groupBox);
        labelAzimuthGapUnit->setObjectName(QString::fromUtf8("labelAzimuthGapUnit"));

        gridLayout->addWidget(labelAzimuthGapUnit, 7, 2, 1, 1);

        lbEvaluation = new QLabel(groupBox);
        lbEvaluation->setObjectName(QString::fromUtf8("lbEvaluation"));
        lbEvaluation->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbEvaluation, 14, 0, 1, 1);

        lbComment = new QLabel(groupBox);
        lbComment->setObjectName(QString::fromUtf8("lbComment"));
        lbComment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbComment, 6, 0, 1, 1);

        labelComment = new QLabel(groupBox);
        labelComment->setObjectName(QString::fromUtf8("labelComment"));
        labelComment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelComment, 6, 1, 1, 1);


        hboxLayout->addWidget(groupBox);

        groupResiduals = new QFrame(OriginLocaterView);
        groupResiduals->setObjectName(QString::fromUtf8("groupResiduals"));
        sizePolicy1.setHeightForWidth(groupResiduals->sizePolicy().hasHeightForWidth());
        groupResiduals->setSizePolicy(sizePolicy1);
        groupResiduals->setFrameShape(QFrame::NoFrame);
        vboxLayout2 = new QVBoxLayout(groupResiduals);
        vboxLayout2->setSpacing(4);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem1 = new QSpacerItem(40, 4, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        label_5 = new QLabel(groupResiduals);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(4));
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy6);

        hboxLayout1->addWidget(label_5);

        labelPlotFilter = new QLabel(groupResiduals);
        labelPlotFilter->setObjectName(QString::fromUtf8("labelPlotFilter"));
        sizePolicy6.setHeightForWidth(labelPlotFilter->sizePolicy().hasHeightForWidth());
        labelPlotFilter->setSizePolicy(sizePolicy6);

        hboxLayout1->addWidget(labelPlotFilter);


        vboxLayout2->addLayout(hboxLayout1);


        hboxLayout->addWidget(groupResiduals);


        vboxLayout->addLayout(hboxLayout);

        tableArrivals = new QTableView(OriginLocaterView);
        tableArrivals->setObjectName(QString::fromUtf8("tableArrivals"));
        tableArrivals->setFrameShape(QFrame::NoFrame);
        tableArrivals->setFrameShadow(QFrame::Plain);
        tableArrivals->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableArrivals->setAlternatingRowColors(true);
        tableArrivals->setSelectionMode(QAbstractItemView::SingleSelection);
        tableArrivals->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout->addWidget(tableArrivals);

        groupBox_2 = new QFrame(OriginLocaterView);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy6.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy6);
        groupBox_2->setFrameShape(QFrame::NoFrame);
        vboxLayout3 = new QVBoxLayout(groupBox_2);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        cbLocator = new QComboBox(groupBox_2);
        cbLocator->setObjectName(QString::fromUtf8("cbLocator"));
        cbLocator->setEnabled(false);

        hboxLayout2->addWidget(cbLocator);

        btnLocatorSettings = new QToolButton(groupBox_2);
        btnLocatorSettings->setObjectName(QString::fromUtf8("btnLocatorSettings"));
        btnLocatorSettings->setEnabled(false);
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/icons/configure.png"));
        btnLocatorSettings->setIcon(icon);
        btnLocatorSettings->setAutoRaise(true);

        hboxLayout2->addWidget(btnLocatorSettings);

        spacerItem2 = new QSpacerItem(20, 2, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout2->addWidget(label_2);

        cbLocatorProfile = new QComboBox(groupBox_2);
        cbLocatorProfile->setObjectName(QString::fromUtf8("cbLocatorProfile"));
        cbLocatorProfile->setEnabled(false);
        cbLocatorProfile->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        hboxLayout2->addWidget(cbLocatorProfile);

        spacerItem3 = new QSpacerItem(20, 2, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem3);

        cbFixedDepth = new QCheckBox(groupBox_2);
        cbFixedDepth->setObjectName(QString::fromUtf8("cbFixedDepth"));

        hboxLayout2->addWidget(cbFixedDepth);

        editFixedDepth = new QLineEdit(groupBox_2);
        editFixedDepth->setObjectName(QString::fromUtf8("editFixedDepth"));
        editFixedDepth->setEnabled(false);
        QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(editFixedDepth->sizePolicy().hasHeightForWidth());
        editFixedDepth->setSizePolicy(sizePolicy7);
        editFixedDepth->setMinimumSize(QSize(60, 0));
        editFixedDepth->setMaximumSize(QSize(60, 16777215));
        editFixedDepth->setAlignment(Qt::AlignRight);

        hboxLayout2->addWidget(editFixedDepth);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout2->addWidget(label_3);

        spacerItem4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem4);

        cbDistanceCutOff = new QCheckBox(groupBox_2);
        cbDistanceCutOff->setObjectName(QString::fromUtf8("cbDistanceCutOff"));

        hboxLayout2->addWidget(cbDistanceCutOff);

        editDistanceCutOff = new QLineEdit(groupBox_2);
        editDistanceCutOff->setObjectName(QString::fromUtf8("editDistanceCutOff"));
        editDistanceCutOff->setEnabled(false);
        editDistanceCutOff->setMinimumSize(QSize(60, 0));
        editDistanceCutOff->setMaximumSize(QSize(60, 16777215));
        editDistanceCutOff->setAlignment(Qt::AlignRight);

        hboxLayout2->addWidget(editDistanceCutOff);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout2->addWidget(label);

        spacerItem5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem5);

        cbIgnoreInitialLocation = new QCheckBox(groupBox_2);
        cbIgnoreInitialLocation->setObjectName(QString::fromUtf8("cbIgnoreInitialLocation"));

        hboxLayout2->addWidget(cbIgnoreInitialLocation);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem6);

        buttonEditComment = new QToolButton(groupBox_2);
        buttonEditComment->setObjectName(QString::fromUtf8("buttonEditComment"));
        buttonEditComment->setEnabled(false);
        buttonEditComment->setMaximumSize(QSize(25, 25));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/icons/comment.png"));
        buttonEditComment->setIcon(icon1);
        buttonEditComment->setIconSize(QSize(24, 24));
        buttonEditComment->setAutoRaise(true);

        hboxLayout2->addWidget(buttonEditComment);


        vboxLayout3->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        btnRelocate = new QToolButton(groupBox_2);
        btnRelocate->setObjectName(QString::fromUtf8("btnRelocate"));
        btnRelocate->setEnabled(false);

        hboxLayout3->addWidget(btnRelocate);

        btnCustom0 = new QToolButton(groupBox_2);
        btnCustom0->setObjectName(QString::fromUtf8("btnCustom0"));
        btnCustom0->setEnabled(false);

        hboxLayout3->addWidget(btnCustom0);

        btnCustom1 = new QToolButton(groupBox_2);
        btnCustom1->setObjectName(QString::fromUtf8("btnCustom1"));
        btnCustom1->setEnabled(false);

        hboxLayout3->addWidget(btnCustom1);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem7);

        btnShowWaveforms = new QToolButton(groupBox_2);
        btnShowWaveforms->setObjectName(QString::fromUtf8("btnShowWaveforms"));
        btnShowWaveforms->setEnabled(false);

        hboxLayout3->addWidget(btnShowWaveforms);

        btnImportAllArrivals = new QToolButton(groupBox_2);
        btnImportAllArrivals->setObjectName(QString::fromUtf8("btnImportAllArrivals"));
        btnImportAllArrivals->setEnabled(false);

        hboxLayout3->addWidget(btnImportAllArrivals);

        btnMagnitudes = new QToolButton(groupBox_2);
        btnMagnitudes->setObjectName(QString::fromUtf8("btnMagnitudes"));
        btnMagnitudes->setEnabled(false);

        hboxLayout3->addWidget(btnMagnitudes);

        btnCommit = new QToolButton(groupBox_2);
        btnCommit->setObjectName(QString::fromUtf8("btnCommit"));
        btnCommit->setEnabled(false);

        hboxLayout3->addWidget(btnCommit);


        vboxLayout3->addLayout(hboxLayout3);


        vboxLayout->addWidget(groupBox_2);

        QWidget::setTabOrder(tableArrivals, cbLocator);
        QWidget::setTabOrder(cbLocator, btnLocatorSettings);
        QWidget::setTabOrder(btnLocatorSettings, cbLocatorProfile);
        QWidget::setTabOrder(cbLocatorProfile, cbFixedDepth);
        QWidget::setTabOrder(cbFixedDepth, editFixedDepth);
        QWidget::setTabOrder(editFixedDepth, cbDistanceCutOff);
        QWidget::setTabOrder(cbDistanceCutOff, editDistanceCutOff);

        retranslateUi(OriginLocaterView);
        QObject::connect(cbDistanceCutOff, SIGNAL(toggled(bool)), editDistanceCutOff, SLOT(setEnabled(bool)));
        QObject::connect(cbFixedDepth, SIGNAL(toggled(bool)), editFixedDepth, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(OriginLocaterView);
    } // setupUi

    void retranslateUi(QWidget *OriginLocaterView)
    {
        OriginLocaterView->setWindowTitle(QApplication::translate("OriginLocaterView", "OriginLocatorView", 0, QApplication::UnicodeUTF8));
        labelRegion->setText(QApplication::translate("OriginLocaterView", "Region", 0, QApplication::UnicodeUTF8));
        labelNumPhases->setText(QApplication::translate("OriginLocaterView", "-", 0, QApplication::UnicodeUTF8));
        labelAgency->setText(QApplication::translate("OriginLocaterView", "GFZ Potsdam", 0, QApplication::UnicodeUTF8));
        labelMinDistUnit->setText(QApplication::translate("OriginLocaterView", "\302\260", 0, QApplication::UnicodeUTF8));
        labelDepth->setText(QApplication::translate("OriginLocaterView", "-", 0, QApplication::UnicodeUTF8));
        labelStdErrorUnit->setText(QApplication::translate("OriginLocaterView", "s", 0, QApplication::UnicodeUTF8));
        lbEventID->setText(QApplication::translate("OriginLocaterView", "EventID:", 0, QApplication::UnicodeUTF8));
        labelLatitudeErrorUnit->setText(QApplication::translate("OriginLocaterView", "km", 0, QApplication::UnicodeUTF8));
        labelLatitudeError->setText(QApplication::translate("OriginLocaterView", "-", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("OriginLocaterView", "RMS Res.:", 0, QApplication::UnicodeUTF8));
        labelLongitude->setText(QApplication::translate("OriginLocaterView", "-", 0, QApplication::UnicodeUTF8));
        labelCreated->setText(QString());
        label_11->setText(QApplication::translate("OriginLocaterView", "Lon:", 0, QApplication::UnicodeUTF8));
        labelLongitudeErrorUnit->setText(QApplication::translate("OriginLocaterView", "km", 0, QApplication::UnicodeUTF8));
        labelUser->setText(QString());
        labelEarthModel->setText(QString());
        labelNumPhasesError->setText(QApplication::translate("OriginLocaterView", "-", 0, QApplication::UnicodeUTF8));
        labelLatitudeUnit->setText(QApplication::translate("OriginLocaterView", "\302\260", 0, QApplication::UnicodeUTF8));
        labelStdError->setText(QApplication::translate("OriginLocaterView", "-", 0, QApplication::UnicodeUTF8));
        labelLatitude->setText(QApplication::translate("OriginLocaterView", "-", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("OriginLocaterView", " Az. Gap:", 0, QApplication::UnicodeUTF8));
        labelEventID->setText(QString());
        labelDepthErrorUnit->setText(QString());
        labelTime->setText(QString());
        label_12->setText(QApplication::translate("OriginLocaterView", "Depth:", 0, QApplication::UnicodeUTF8));
        lbEarthModel->setText(QApplication::translate("OriginLocaterView", "Earth model:", 0, QApplication::UnicodeUTF8));
        lbMethod->setText(QApplication::translate("OriginLocaterView", "Method:", 0, QApplication::UnicodeUTF8));
        labelMinDist->setText(QApplication::translate("OriginLocaterView", "-", 0, QApplication::UnicodeUTF8));
        lbAgencyID->setText(QApplication::translate("OriginLocaterView", "Agency:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("OriginLocaterView", "Phases:", 0, QApplication::UnicodeUTF8));
        labelMethod->setText(QString());
        label_10->setText(QApplication::translate("OriginLocaterView", "Lat:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("OriginLocaterView", "Updated:", 0, QApplication::UnicodeUTF8));
        labelNumPhasesUnit->setText(QApplication::translate("OriginLocaterView", "/", 0, QApplication::UnicodeUTF8));
        lbUser->setText(QApplication::translate("OriginLocaterView", "Author:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("OriginLocaterView", "Min. Dist.:", 0, QApplication::UnicodeUTF8));
        labelLongitudeError->setText(QApplication::translate("OriginLocaterView", "-", 0, QApplication::UnicodeUTF8));
        labelDepthError->setText(QString());
        labelEvaluation->setText(QApplication::translate("OriginLocaterView", "- (-)", 0, QApplication::UnicodeUTF8));
        labelLongitudeUnit->setText(QApplication::translate("OriginLocaterView", "\302\260", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("OriginLocaterView", "Time:", 0, QApplication::UnicodeUTF8));
        labelAzimuthGap->setText(QApplication::translate("OriginLocaterView", "-", 0, QApplication::UnicodeUTF8));
        labelDepthUnit->setText(QApplication::translate("OriginLocaterView", "km", 0, QApplication::UnicodeUTF8));
        labelAzimuthGapUnit->setText(QApplication::translate("OriginLocaterView", "\302\260", 0, QApplication::UnicodeUTF8));
        lbEvaluation->setText(QApplication::translate("OriginLocaterView", "Evaluation:", 0, QApplication::UnicodeUTF8));
        lbComment->setText(QApplication::translate("OriginLocaterView", "Custom:", 0, QApplication::UnicodeUTF8));
        labelComment->setText(QApplication::translate("OriginLocaterView", "-", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OriginLocaterView", "Filter is", 0, QApplication::UnicodeUTF8));
        labelPlotFilter->setText(QApplication::translate("OriginLocaterView", "<a href=\"filter\">not active</a>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnLocatorSettings->setToolTip(QApplication::translate("OriginLocaterView", "Change locator settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnLocatorSettings->setText(QApplication::translate("OriginLocaterView", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OriginLocaterView", "Profile:", 0, QApplication::UnicodeUTF8));
        cbFixedDepth->setText(QApplication::translate("OriginLocaterView", "Fix depth", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("OriginLocaterView", "km", 0, QApplication::UnicodeUTF8));
        cbDistanceCutOff->setText(QApplication::translate("OriginLocaterView", "Distance cutoff", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OriginLocaterView", "km", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbIgnoreInitialLocation->setToolTip(QApplication::translate("OriginLocaterView", "Instructs the locator to ignore the passed initial location and to try to locate the event based on the given phases only.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cbIgnoreInitialLocation->setWhatsThis(QApplication::translate("OriginLocaterView", "Instructs the locator to ignore the passed initial location and to try to locate the event based on the given phases only.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbIgnoreInitialLocation->setText(QApplication::translate("OriginLocaterView", "Ignore initial location", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonEditComment->setToolTip(QApplication::translate("OriginLocaterView", "Create a new comment on this event or edit an existing one.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonEditComment->setText(QString());
        btnRelocate->setText(QApplication::translate("OriginLocaterView", "Relocate", 0, QApplication::UnicodeUTF8));
        btnCustom0->setText(QApplication::translate("OriginLocaterView", "Custom1", 0, QApplication::UnicodeUTF8));
        btnCustom1->setText(QApplication::translate("OriginLocaterView", "Custom2", 0, QApplication::UnicodeUTF8));
        btnShowWaveforms->setText(QApplication::translate("OriginLocaterView", "Picker", 0, QApplication::UnicodeUTF8));
        btnImportAllArrivals->setText(QApplication::translate("OriginLocaterView", "Import picks", 0, QApplication::UnicodeUTF8));
        btnMagnitudes->setText(QApplication::translate("OriginLocaterView", "Compute magnitudes", 0, QApplication::UnicodeUTF8));
        btnCommit->setText(QApplication::translate("OriginLocaterView", "Commit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OriginLocaterView: public Ui_OriginLocaterView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIGINLOCATORVIEW_H
