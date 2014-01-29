/********************************************************************************
** Form generated from reading UI file 'pickerview.ui'
**
** Created: Thu Jan 23 14:38:33 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKERVIEW_H
#define UI_PICKERVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "seiscomp3/gui/datamodel/pickerzoomframe.h"

QT_BEGIN_NAMESPACE

class Ui_PickerView
{
public:
    QAction *actionIncreaseAmplitudeScale;
    QAction *actionDecreaseAmplitudeScale;
    QAction *actionTimeScaleUp;
    QAction *actionTimeScaleDown;
    QAction *actionScrollLeft;
    QAction *actionScrollRight;
    QAction *actionSelectNextTrace;
    QAction *actionSelectPreviousTrace;
    QAction *actionScrollFineLeft;
    QAction *actionScrollFineRight;
    QAction *actionIncreaseRowHeight;
    QAction *actionDecreaseRowHeight;
    QAction *actionIncreaseRowTimescale;
    QAction *actionDecreaseRowTimescale;
    QAction *actionSelectFirstRow;
    QAction *actionSelectLastRow;
    QAction *actionAlignOnPArrival;
    QAction *actionAlignOnSArrival;
    QAction *actionAlignOnOriginTime;
    QAction *actionDefaultView;
    QAction *actionSortAlphabetically;
    QAction *actionSortByDistance;
    QAction *actionToggleFilter;
    QAction *actionMaximizeAmplitudes;
    QAction *actionPickP;
    QAction *actionPickS;
    QAction *actionPickOther;
    QAction *actionDisablePicking;
    QAction *actionConfirmPick;
    QAction *actionDeletePick;
    QAction *actionRelocate;
    QAction *actionShowAllStations;
    QAction *actionShowUsedStations;
    QAction *actionSortByResidual;
    QAction *actionShowZComponent;
    QAction *actionShowNComponent;
    QAction *actionShowEComponent;
    QAction *actionGotoNextMarker;
    QAction *actionGotoPreviousMarker;
    QAction *actionCreatePick;
    QAction *actionSwitchFullscreen;
    QAction *actionAddStations;
    QAction *actionSearchStation;
    QAction *actionModifyOrigin;
    QAction *actionLimitFilterToZoomTrace;
    QAction *actionRepickAutomatically;
    QAction *actionShowTraceValuesInNmS;
    QAction *actionClipComponentsToViewport;
    QAction *actionSetPolarityPositive;
    QAction *actionSetPolarityNegative;
    QAction *actionSetPolarityUndecidable;
    QAction *actionSetPolarityUnset;
    QAction *actionSetPick;
    QAction *actionShowTheoreticalArrivals;
    QAction *actionShowUnassociatedPicks;
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    Seiscomp::Gui::ZoomRecordFrame *frameZoom;
    QHBoxLayout *hboxLayout;
    QFrame *frameCurrentRowLabel;
    QVBoxLayout *vboxLayout1;
    QVBoxLayout *vboxLayout2;
    QLabel *labelStationCode;
    QLabel *labelCode;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout3;
    QLabel *labelDistanceName;
    QLabel *labelAzimuthName;
    QVBoxLayout *vboxLayout4;
    QLabel *labelDistance;
    QLabel *labelAzimuth;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QGridLayout *gridLayout;
    QPushButton *btnTimeScaleDown;
    QPushButton *btnTimeScaleUp;
    QPushButton *btnAmplScaleUp;
    QPushButton *btnScaleReset;
    QPushButton *btnAmplScaleDown;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout3;
    QPushButton *btnRowAccept;
    QSpacerItem *spacerItem4;
    QPushButton *btnRowRemove;
    QSpacerItem *spacerItem5;
    QPushButton *btnRowReset;
    QFrame *frameCurrentRow;
    QFrame *framePickList;
    QStatusBar *statusbar;
    QToolBar *toolBarScale;
    QToolBar *toolBarSort;
    QToolBar *toolBarAlign;
    QToolBar *toolBarComponent;
    QToolBar *toolBarStations;
    QToolBar *toolBarPicking;
    QToolBar *toolBarFilter;
    QToolBar *toolBarRelocate;
    QMenuBar *menuBar;
    QMenu *menu_Filter;
    QMenu *menu_Locate;
    QMenu *menu_Navigation;
    QMenu *menuPicking;
    QMenu *menuView;
    QMenu *menuSort;
    QMenu *menuAlign;
    QMenu *menuComponents;
    QMenu *menuTraces;
    QMenu *menuAlignArrival;
    QMenu *menu_Zoomtrace;

    void setupUi(QMainWindow *PickerView)
    {
        if (PickerView->objectName().isEmpty())
            PickerView->setObjectName(QString::fromUtf8("PickerView"));
        PickerView->resize(948, 663);
        PickerView->setIconSize(QSize(16, 16));
        actionIncreaseAmplitudeScale = new QAction(PickerView);
        actionIncreaseAmplitudeScale->setObjectName(QString::fromUtf8("actionIncreaseAmplitudeScale"));
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/icons/vzoomin.png"));
        actionIncreaseAmplitudeScale->setIcon(icon);
        actionDecreaseAmplitudeScale = new QAction(PickerView);
        actionDecreaseAmplitudeScale->setObjectName(QString::fromUtf8("actionDecreaseAmplitudeScale"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/icons/vzoomout.png"));
        actionDecreaseAmplitudeScale->setIcon(icon1);
        actionTimeScaleUp = new QAction(PickerView);
        actionTimeScaleUp->setObjectName(QString::fromUtf8("actionTimeScaleUp"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/icons/icons/zoomout.png"));
        actionTimeScaleUp->setIcon(icon2);
        actionTimeScaleDown = new QAction(PickerView);
        actionTimeScaleDown->setObjectName(QString::fromUtf8("actionTimeScaleDown"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/icons/icons/zoomin.png"));
        actionTimeScaleDown->setIcon(icon3);
        actionScrollLeft = new QAction(PickerView);
        actionScrollLeft->setObjectName(QString::fromUtf8("actionScrollLeft"));
        actionScrollRight = new QAction(PickerView);
        actionScrollRight->setObjectName(QString::fromUtf8("actionScrollRight"));
        actionSelectNextTrace = new QAction(PickerView);
        actionSelectNextTrace->setObjectName(QString::fromUtf8("actionSelectNextTrace"));
        actionSelectPreviousTrace = new QAction(PickerView);
        actionSelectPreviousTrace->setObjectName(QString::fromUtf8("actionSelectPreviousTrace"));
        actionScrollFineLeft = new QAction(PickerView);
        actionScrollFineLeft->setObjectName(QString::fromUtf8("actionScrollFineLeft"));
        actionScrollFineRight = new QAction(PickerView);
        actionScrollFineRight->setObjectName(QString::fromUtf8("actionScrollFineRight"));
        actionIncreaseRowHeight = new QAction(PickerView);
        actionIncreaseRowHeight->setObjectName(QString::fromUtf8("actionIncreaseRowHeight"));
        actionIncreaseRowHeight->setIcon(icon);
        actionDecreaseRowHeight = new QAction(PickerView);
        actionDecreaseRowHeight->setObjectName(QString::fromUtf8("actionDecreaseRowHeight"));
        actionDecreaseRowHeight->setIcon(icon1);
        actionIncreaseRowTimescale = new QAction(PickerView);
        actionIncreaseRowTimescale->setObjectName(QString::fromUtf8("actionIncreaseRowTimescale"));
        actionIncreaseRowTimescale->setIcon(icon3);
        actionDecreaseRowTimescale = new QAction(PickerView);
        actionDecreaseRowTimescale->setObjectName(QString::fromUtf8("actionDecreaseRowTimescale"));
        actionDecreaseRowTimescale->setIcon(icon2);
        actionSelectFirstRow = new QAction(PickerView);
        actionSelectFirstRow->setObjectName(QString::fromUtf8("actionSelectFirstRow"));
        actionSelectLastRow = new QAction(PickerView);
        actionSelectLastRow->setObjectName(QString::fromUtf8("actionSelectLastRow"));
        actionAlignOnPArrival = new QAction(PickerView);
        actionAlignOnPArrival->setObjectName(QString::fromUtf8("actionAlignOnPArrival"));
        actionAlignOnPArrival->setCheckable(false);
        actionAlignOnPArrival->setChecked(false);
        const QIcon icon4 = QIcon(QString::fromUtf8(":/icons/icons/align_p.png"));
        actionAlignOnPArrival->setIcon(icon4);
        actionAlignOnSArrival = new QAction(PickerView);
        actionAlignOnSArrival->setObjectName(QString::fromUtf8("actionAlignOnSArrival"));
        actionAlignOnSArrival->setCheckable(false);
        const QIcon icon5 = QIcon(QString::fromUtf8(":/icons/icons/align_s.png"));
        actionAlignOnSArrival->setIcon(icon5);
        actionAlignOnOriginTime = new QAction(PickerView);
        actionAlignOnOriginTime->setObjectName(QString::fromUtf8("actionAlignOnOriginTime"));
        actionAlignOnOriginTime->setCheckable(false);
        const QIcon icon6 = QIcon(QString::fromUtf8(":/icons/icons/align_t.png"));
        actionAlignOnOriginTime->setIcon(icon6);
        actionDefaultView = new QAction(PickerView);
        actionDefaultView->setObjectName(QString::fromUtf8("actionDefaultView"));
        const QIcon icon7 = QIcon(QString::fromUtf8(":/icons/icons/home.png"));
        actionDefaultView->setIcon(icon7);
        actionSortAlphabetically = new QAction(PickerView);
        actionSortAlphabetically->setObjectName(QString::fromUtf8("actionSortAlphabetically"));
        actionSortAlphabetically->setCheckable(true);
        const QIcon icon8 = QIcon(QString::fromUtf8(":/icons/icons/sort_abc.png"));
        actionSortAlphabetically->setIcon(icon8);
        actionSortByDistance = new QAction(PickerView);
        actionSortByDistance->setObjectName(QString::fromUtf8("actionSortByDistance"));
        actionSortByDistance->setCheckable(true);
        actionSortByDistance->setChecked(true);
        const QIcon icon9 = QIcon(QString::fromUtf8(":/icons/icons/sort_dist.png"));
        actionSortByDistance->setIcon(icon9);
        actionToggleFilter = new QAction(PickerView);
        actionToggleFilter->setObjectName(QString::fromUtf8("actionToggleFilter"));
        actionToggleFilter->setCheckable(false);
        actionToggleFilter->setChecked(false);
        const QIcon icon10 = QIcon(QString::fromUtf8(":/icons/icons/filter.png"));
        actionToggleFilter->setIcon(icon10);
        actionMaximizeAmplitudes = new QAction(PickerView);
        actionMaximizeAmplitudes->setObjectName(QString::fromUtf8("actionMaximizeAmplitudes"));
        const QIcon icon11 = QIcon(QString::fromUtf8(":/icons/icons/vmax.png"));
        actionMaximizeAmplitudes->setIcon(icon11);
        actionPickP = new QAction(PickerView);
        actionPickP->setObjectName(QString::fromUtf8("actionPickP"));
        actionPickP->setCheckable(false);
        const QIcon icon12 = QIcon(QString::fromUtf8(":/icons/icons/pick_p.png"));
        actionPickP->setIcon(icon12);
        actionPickS = new QAction(PickerView);
        actionPickS->setObjectName(QString::fromUtf8("actionPickS"));
        actionPickS->setCheckable(false);
        const QIcon icon13 = QIcon(QString::fromUtf8(":/icons/icons/pick_s.png"));
        actionPickS->setIcon(icon13);
        actionPickOther = new QAction(PickerView);
        actionPickOther->setObjectName(QString::fromUtf8("actionPickOther"));
        const QIcon icon14 = QIcon(QString::fromUtf8(":/icons/icons/pick_other.png"));
        actionPickOther->setIcon(icon14);
        actionDisablePicking = new QAction(PickerView);
        actionDisablePicking->setObjectName(QString::fromUtf8("actionDisablePicking"));
        actionConfirmPick = new QAction(PickerView);
        actionConfirmPick->setObjectName(QString::fromUtf8("actionConfirmPick"));
        actionDeletePick = new QAction(PickerView);
        actionDeletePick->setObjectName(QString::fromUtf8("actionDeletePick"));
        actionRelocate = new QAction(PickerView);
        actionRelocate->setObjectName(QString::fromUtf8("actionRelocate"));
        const QIcon icon15 = QIcon(QString::fromUtf8(":/icons/icons/locate.png"));
        actionRelocate->setIcon(icon15);
        actionShowAllStations = new QAction(PickerView);
        actionShowAllStations->setObjectName(QString::fromUtf8("actionShowAllStations"));
        actionShowAllStations->setCheckable(false);
        const QIcon icon16 = QIcon(QString::fromUtf8(":/icons/icons/mindistance.png"));
        actionShowAllStations->setIcon(icon16);
        actionShowUsedStations = new QAction(PickerView);
        actionShowUsedStations->setObjectName(QString::fromUtf8("actionShowUsedStations"));
        actionShowUsedStations->setCheckable(true);
        const QIcon icon17 = QIcon(QString::fromUtf8(":/icons/icons/withpick.png"));
        actionShowUsedStations->setIcon(icon17);
        actionSortByResidual = new QAction(PickerView);
        actionSortByResidual->setObjectName(QString::fromUtf8("actionSortByResidual"));
        actionSortByResidual->setCheckable(true);
        const QIcon icon18 = QIcon(QString::fromUtf8(":/icons/icons/sort_res.png"));
        actionSortByResidual->setIcon(icon18);
        actionShowZComponent = new QAction(PickerView);
        actionShowZComponent->setObjectName(QString::fromUtf8("actionShowZComponent"));
        actionShowZComponent->setCheckable(true);
        actionShowZComponent->setChecked(true);
        const QIcon icon19 = QIcon(QString::fromUtf8(":/icons/icons/channelZ.png"));
        actionShowZComponent->setIcon(icon19);
        actionShowNComponent = new QAction(PickerView);
        actionShowNComponent->setObjectName(QString::fromUtf8("actionShowNComponent"));
        actionShowNComponent->setCheckable(true);
        const QIcon icon20 = QIcon(QString::fromUtf8(":/icons/icons/channelN.png"));
        actionShowNComponent->setIcon(icon20);
        actionShowEComponent = new QAction(PickerView);
        actionShowEComponent->setObjectName(QString::fromUtf8("actionShowEComponent"));
        actionShowEComponent->setCheckable(true);
        const QIcon icon21 = QIcon(QString::fromUtf8(":/icons/icons/channelE.png"));
        actionShowEComponent->setIcon(icon21);
        actionGotoNextMarker = new QAction(PickerView);
        actionGotoNextMarker->setObjectName(QString::fromUtf8("actionGotoNextMarker"));
        actionGotoPreviousMarker = new QAction(PickerView);
        actionGotoPreviousMarker->setObjectName(QString::fromUtf8("actionGotoPreviousMarker"));
        actionCreatePick = new QAction(PickerView);
        actionCreatePick->setObjectName(QString::fromUtf8("actionCreatePick"));
        actionSwitchFullscreen = new QAction(PickerView);
        actionSwitchFullscreen->setObjectName(QString::fromUtf8("actionSwitchFullscreen"));
        actionSwitchFullscreen->setCheckable(true);
        actionAddStations = new QAction(PickerView);
        actionAddStations->setObjectName(QString::fromUtf8("actionAddStations"));
        actionSearchStation = new QAction(PickerView);
        actionSearchStation->setObjectName(QString::fromUtf8("actionSearchStation"));
        actionModifyOrigin = new QAction(PickerView);
        actionModifyOrigin->setObjectName(QString::fromUtf8("actionModifyOrigin"));
        actionLimitFilterToZoomTrace = new QAction(PickerView);
        actionLimitFilterToZoomTrace->setObjectName(QString::fromUtf8("actionLimitFilterToZoomTrace"));
        actionLimitFilterToZoomTrace->setCheckable(true);
        actionRepickAutomatically = new QAction(PickerView);
        actionRepickAutomatically->setObjectName(QString::fromUtf8("actionRepickAutomatically"));
        actionShowTraceValuesInNmS = new QAction(PickerView);
        actionShowTraceValuesInNmS->setObjectName(QString::fromUtf8("actionShowTraceValuesInNmS"));
        actionShowTraceValuesInNmS->setCheckable(true);
        actionClipComponentsToViewport = new QAction(PickerView);
        actionClipComponentsToViewport->setObjectName(QString::fromUtf8("actionClipComponentsToViewport"));
        actionClipComponentsToViewport->setCheckable(true);
        actionClipComponentsToViewport->setChecked(false);
        actionSetPolarityPositive = new QAction(PickerView);
        actionSetPolarityPositive->setObjectName(QString::fromUtf8("actionSetPolarityPositive"));
        actionSetPolarityNegative = new QAction(PickerView);
        actionSetPolarityNegative->setObjectName(QString::fromUtf8("actionSetPolarityNegative"));
        actionSetPolarityUndecidable = new QAction(PickerView);
        actionSetPolarityUndecidable->setObjectName(QString::fromUtf8("actionSetPolarityUndecidable"));
        actionSetPolarityUnset = new QAction(PickerView);
        actionSetPolarityUnset->setObjectName(QString::fromUtf8("actionSetPolarityUnset"));
        actionSetPick = new QAction(PickerView);
        actionSetPick->setObjectName(QString::fromUtf8("actionSetPick"));
        actionShowTheoreticalArrivals = new QAction(PickerView);
        actionShowTheoreticalArrivals->setObjectName(QString::fromUtf8("actionShowTheoreticalArrivals"));
        actionShowTheoreticalArrivals->setCheckable(true);
        actionShowTheoreticalArrivals->setChecked(true);
        actionShowUnassociatedPicks = new QAction(PickerView);
        actionShowUnassociatedPicks->setObjectName(QString::fromUtf8("actionShowUnassociatedPicks"));
        actionShowUnassociatedPicks->setCheckable(true);
        centralwidget = new QWidget(PickerView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        frameZoom = new Seiscomp::Gui::ZoomRecordFrame(splitter);
        frameZoom->setObjectName(QString::fromUtf8("frameZoom"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameZoom->sizePolicy().hasHeightForWidth());
        frameZoom->setSizePolicy(sizePolicy);
        frameZoom->setFrameShape(QFrame::StyledPanel);
        frameZoom->setFrameShadow(QFrame::Plain);
        hboxLayout = new QHBoxLayout(frameZoom);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(2, 2, 2, 2);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        frameCurrentRowLabel = new QFrame(frameZoom);
        frameCurrentRowLabel->setObjectName(QString::fromUtf8("frameCurrentRowLabel"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(5);
        sizePolicy1.setHeightForWidth(frameCurrentRowLabel->sizePolicy().hasHeightForWidth());
        frameCurrentRowLabel->setSizePolicy(sizePolicy1);
        frameCurrentRowLabel->setMinimumSize(QSize(0, 0));
        frameCurrentRowLabel->setMaximumSize(QSize(120, 16777215));
        frameCurrentRowLabel->setFrameShape(QFrame::NoFrame);
        frameCurrentRowLabel->setFrameShadow(QFrame::Plain);
        vboxLayout1 = new QVBoxLayout(frameCurrentRowLabel);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(0);
#ifndef Q_OS_MAC
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        labelStationCode = new QLabel(frameCurrentRowLabel);
        labelStationCode->setObjectName(QString::fromUtf8("labelStationCode"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        labelStationCode->setFont(font);

        vboxLayout2->addWidget(labelStationCode);

        labelCode = new QLabel(frameCurrentRowLabel);
        labelCode->setObjectName(QString::fromUtf8("labelCode"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(4));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelCode->sizePolicy().hasHeightForWidth());
        labelCode->setSizePolicy(sizePolicy2);
        labelCode->setMinimumSize(QSize(20, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        labelCode->setFont(font1);

        vboxLayout2->addWidget(labelCode);


        vboxLayout1->addLayout(vboxLayout2);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(0);
#ifndef Q_OS_MAC
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        labelDistanceName = new QLabel(frameCurrentRowLabel);
        labelDistanceName->setObjectName(QString::fromUtf8("labelDistanceName"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelDistanceName->sizePolicy().hasHeightForWidth());
        labelDistanceName->setSizePolicy(sizePolicy3);

        vboxLayout3->addWidget(labelDistanceName);

        labelAzimuthName = new QLabel(frameCurrentRowLabel);
        labelAzimuthName->setObjectName(QString::fromUtf8("labelAzimuthName"));
        sizePolicy3.setHeightForWidth(labelAzimuthName->sizePolicy().hasHeightForWidth());
        labelAzimuthName->setSizePolicy(sizePolicy3);

        vboxLayout3->addWidget(labelAzimuthName);


        hboxLayout1->addLayout(vboxLayout3);

        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setSpacing(0);
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        labelDistance = new QLabel(frameCurrentRowLabel);
        labelDistance->setObjectName(QString::fromUtf8("labelDistance"));
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(4));
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelDistance->sizePolicy().hasHeightForWidth());
        labelDistance->setSizePolicy(sizePolicy4);

        vboxLayout4->addWidget(labelDistance);

        labelAzimuth = new QLabel(frameCurrentRowLabel);
        labelAzimuth->setObjectName(QString::fromUtf8("labelAzimuth"));

        vboxLayout4->addWidget(labelAzimuth);


        hboxLayout1->addLayout(vboxLayout4);


        vboxLayout1->addLayout(hboxLayout1);

        spacerItem = new QSpacerItem(20, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem1 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        gridLayout = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnTimeScaleDown = new QPushButton(frameCurrentRowLabel);
        btnTimeScaleDown->setObjectName(QString::fromUtf8("btnTimeScaleDown"));
        QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btnTimeScaleDown->sizePolicy().hasHeightForWidth());
        btnTimeScaleDown->setSizePolicy(sizePolicy5);
        btnTimeScaleDown->setMaximumSize(QSize(16, 16));
        const QIcon icon22 = QIcon(QString::fromUtf8(":/icons/icons/arrow_right.png"));
        btnTimeScaleDown->setIcon(icon22);
        btnTimeScaleDown->setFlat(true);

        gridLayout->addWidget(btnTimeScaleDown, 1, 2, 1, 1);

        btnTimeScaleUp = new QPushButton(frameCurrentRowLabel);
        btnTimeScaleUp->setObjectName(QString::fromUtf8("btnTimeScaleUp"));
        sizePolicy5.setHeightForWidth(btnTimeScaleUp->sizePolicy().hasHeightForWidth());
        btnTimeScaleUp->setSizePolicy(sizePolicy5);
        btnTimeScaleUp->setMaximumSize(QSize(16, 16));
        const QIcon icon23 = QIcon(QString::fromUtf8(":/icons/icons/arrow_left.png"));
        btnTimeScaleUp->setIcon(icon23);
        btnTimeScaleUp->setFlat(true);

        gridLayout->addWidget(btnTimeScaleUp, 1, 0, 1, 1);

        btnAmplScaleUp = new QPushButton(frameCurrentRowLabel);
        btnAmplScaleUp->setObjectName(QString::fromUtf8("btnAmplScaleUp"));
        sizePolicy5.setHeightForWidth(btnAmplScaleUp->sizePolicy().hasHeightForWidth());
        btnAmplScaleUp->setSizePolicy(sizePolicy5);
        btnAmplScaleUp->setMaximumSize(QSize(16, 16));
        const QIcon icon24 = QIcon(QString::fromUtf8(":/icons/icons/arrow_up.png"));
        btnAmplScaleUp->setIcon(icon24);
        btnAmplScaleUp->setDefault(false);
        btnAmplScaleUp->setFlat(true);

        gridLayout->addWidget(btnAmplScaleUp, 0, 1, 1, 1);

        btnScaleReset = new QPushButton(frameCurrentRowLabel);
        btnScaleReset->setObjectName(QString::fromUtf8("btnScaleReset"));
        sizePolicy5.setHeightForWidth(btnScaleReset->sizePolicy().hasHeightForWidth());
        btnScaleReset->setSizePolicy(sizePolicy5);
        btnScaleReset->setMaximumSize(QSize(16, 16));
        const QIcon icon25 = QIcon(QString::fromUtf8(":/icons/icons/reload.png"));
        btnScaleReset->setIcon(icon25);
        btnScaleReset->setFlat(true);

        gridLayout->addWidget(btnScaleReset, 1, 1, 1, 1);

        btnAmplScaleDown = new QPushButton(frameCurrentRowLabel);
        btnAmplScaleDown->setObjectName(QString::fromUtf8("btnAmplScaleDown"));
        sizePolicy5.setHeightForWidth(btnAmplScaleDown->sizePolicy().hasHeightForWidth());
        btnAmplScaleDown->setSizePolicy(sizePolicy5);
        btnAmplScaleDown->setMaximumSize(QSize(16, 16));
        const QIcon icon26 = QIcon(QString::fromUtf8(":/icons/icons/arrow_down.png"));
        btnAmplScaleDown->setIcon(icon26);
        btnAmplScaleDown->setFlat(true);

        gridLayout->addWidget(btnAmplScaleDown, 2, 1, 1, 1);


        hboxLayout2->addLayout(gridLayout);

        spacerItem2 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);


        vboxLayout1->addLayout(hboxLayout2);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        vboxLayout1->addItem(spacerItem3);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        btnRowAccept = new QPushButton(frameCurrentRowLabel);
        btnRowAccept->setObjectName(QString::fromUtf8("btnRowAccept"));
        sizePolicy5.setHeightForWidth(btnRowAccept->sizePolicy().hasHeightForWidth());
        btnRowAccept->setSizePolicy(sizePolicy5);
        btnRowAccept->setMinimumSize(QSize(32, 32));
        btnRowAccept->setMaximumSize(QSize(32, 32));
        const QIcon icon27 = QIcon(QString::fromUtf8(":/icons/icons/ok.png"));
        btnRowAccept->setIcon(icon27);
        btnRowAccept->setIconSize(QSize(24, 24));
        btnRowAccept->setCheckable(true);
        btnRowAccept->setFlat(false);

        hboxLayout3->addWidget(btnRowAccept);

        spacerItem4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem4);

        btnRowRemove = new QPushButton(frameCurrentRowLabel);
        btnRowRemove->setObjectName(QString::fromUtf8("btnRowRemove"));
        sizePolicy5.setHeightForWidth(btnRowRemove->sizePolicy().hasHeightForWidth());
        btnRowRemove->setSizePolicy(sizePolicy5);
        btnRowRemove->setMinimumSize(QSize(32, 32));
        btnRowRemove->setMaximumSize(QSize(32, 32));
        const QIcon icon28 = QIcon(QString::fromUtf8(":/icons/icons/remove.png"));
        btnRowRemove->setIcon(icon28);
        btnRowRemove->setIconSize(QSize(24, 24));
        btnRowRemove->setCheckable(true);

        hboxLayout3->addWidget(btnRowRemove);

        spacerItem5 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem5);

        btnRowReset = new QPushButton(frameCurrentRowLabel);
        btnRowReset->setObjectName(QString::fromUtf8("btnRowReset"));
        sizePolicy5.setHeightForWidth(btnRowReset->sizePolicy().hasHeightForWidth());
        btnRowReset->setSizePolicy(sizePolicy5);
        btnRowReset->setMinimumSize(QSize(32, 32));
        btnRowReset->setMaximumSize(QSize(32, 32));
        const QIcon icon29 = QIcon(QString::fromUtf8(":/icons/icons/erase.png"));
        btnRowReset->setIcon(icon29);
        btnRowReset->setIconSize(QSize(24, 24));

        hboxLayout3->addWidget(btnRowReset);


        vboxLayout1->addLayout(hboxLayout3);


        hboxLayout->addWidget(frameCurrentRowLabel);

        frameCurrentRow = new QFrame(frameZoom);
        frameCurrentRow->setObjectName(QString::fromUtf8("frameCurrentRow"));
        sizePolicy.setHeightForWidth(frameCurrentRow->sizePolicy().hasHeightForWidth());
        frameCurrentRow->setSizePolicy(sizePolicy);
        frameCurrentRow->setFrameShape(QFrame::NoFrame);
        frameCurrentRow->setFrameShadow(QFrame::Plain);

        hboxLayout->addWidget(frameCurrentRow);

        splitter->addWidget(frameZoom);
        framePickList = new QFrame(splitter);
        framePickList->setObjectName(QString::fromUtf8("framePickList"));
        QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(framePickList->sizePolicy().hasHeightForWidth());
        framePickList->setSizePolicy(sizePolicy6);
        framePickList->setFrameShape(QFrame::StyledPanel);
        framePickList->setFrameShadow(QFrame::Plain);
        splitter->addWidget(framePickList);

        vboxLayout->addWidget(splitter);

        PickerView->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(PickerView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setGeometry(QRect(0, 641, 948, 22));
        PickerView->setStatusBar(statusbar);
        toolBarScale = new QToolBar(PickerView);
        toolBarScale->setObjectName(QString::fromUtf8("toolBarScale"));
        toolBarScale->setOrientation(Qt::Horizontal);
        toolBarScale->setIconSize(QSize(24, 24));
        PickerView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarScale);
        toolBarSort = new QToolBar(PickerView);
        toolBarSort->setObjectName(QString::fromUtf8("toolBarSort"));
        toolBarSort->setOrientation(Qt::Horizontal);
        toolBarSort->setIconSize(QSize(24, 24));
        PickerView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarSort);
        toolBarAlign = new QToolBar(PickerView);
        toolBarAlign->setObjectName(QString::fromUtf8("toolBarAlign"));
        toolBarAlign->setOrientation(Qt::Horizontal);
        toolBarAlign->setIconSize(QSize(24, 24));
        PickerView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarAlign);
        toolBarComponent = new QToolBar(PickerView);
        toolBarComponent->setObjectName(QString::fromUtf8("toolBarComponent"));
        toolBarComponent->setOrientation(Qt::Horizontal);
        toolBarComponent->setIconSize(QSize(24, 24));
        PickerView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarComponent);
        toolBarStations = new QToolBar(PickerView);
        toolBarStations->setObjectName(QString::fromUtf8("toolBarStations"));
        QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(7));
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(toolBarStations->sizePolicy().hasHeightForWidth());
        toolBarStations->setSizePolicy(sizePolicy7);
        toolBarStations->setOrientation(Qt::Horizontal);
        toolBarStations->setIconSize(QSize(24, 24));
        PickerView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarStations);
        toolBarPicking = new QToolBar(PickerView);
        toolBarPicking->setObjectName(QString::fromUtf8("toolBarPicking"));
        toolBarPicking->setMovable(true);
        toolBarPicking->setOrientation(Qt::Horizontal);
        toolBarPicking->setIconSize(QSize(24, 24));
        PickerView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarPicking);
        toolBarFilter = new QToolBar(PickerView);
        toolBarFilter->setObjectName(QString::fromUtf8("toolBarFilter"));
        toolBarFilter->setOrientation(Qt::Horizontal);
        toolBarFilter->setIconSize(QSize(24, 24));
        PickerView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarFilter);
        toolBarRelocate = new QToolBar(PickerView);
        toolBarRelocate->setObjectName(QString::fromUtf8("toolBarRelocate"));
        toolBarRelocate->setOrientation(Qt::Horizontal);
        toolBarRelocate->setIconSize(QSize(24, 24));
        PickerView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarRelocate);
        menuBar = new QMenuBar(PickerView);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 948, 29));
        menu_Filter = new QMenu(menuBar);
        menu_Filter->setObjectName(QString::fromUtf8("menu_Filter"));
        menu_Locate = new QMenu(menuBar);
        menu_Locate->setObjectName(QString::fromUtf8("menu_Locate"));
        menu_Navigation = new QMenu(menuBar);
        menu_Navigation->setObjectName(QString::fromUtf8("menu_Navigation"));
        menuPicking = new QMenu(menuBar);
        menuPicking->setObjectName(QString::fromUtf8("menuPicking"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuSort = new QMenu(menuView);
        menuSort->setObjectName(QString::fromUtf8("menuSort"));
        menuAlign = new QMenu(menuView);
        menuAlign->setObjectName(QString::fromUtf8("menuAlign"));
        menuComponents = new QMenu(menuView);
        menuComponents->setObjectName(QString::fromUtf8("menuComponents"));
        menuTraces = new QMenu(menuView);
        menuTraces->setObjectName(QString::fromUtf8("menuTraces"));
        menuAlignArrival = new QMenu(menuTraces);
        menuAlignArrival->setObjectName(QString::fromUtf8("menuAlignArrival"));
        menu_Zoomtrace = new QMenu(menuView);
        menu_Zoomtrace->setObjectName(QString::fromUtf8("menu_Zoomtrace"));
        PickerView->setMenuBar(menuBar);

        toolBarScale->addAction(actionDefaultView);
        toolBarScale->addSeparator();
        toolBarScale->addAction(actionIncreaseRowHeight);
        toolBarScale->addAction(actionDecreaseRowHeight);
        toolBarScale->addSeparator();
        toolBarScale->addAction(actionIncreaseRowTimescale);
        toolBarScale->addAction(actionDecreaseRowTimescale);
        toolBarScale->addSeparator();
        toolBarScale->addAction(actionMaximizeAmplitudes);
        toolBarSort->addAction(actionSortByDistance);
        toolBarSort->addAction(actionSortAlphabetically);
        toolBarSort->addAction(actionSortByResidual);
        toolBarAlign->addAction(actionAlignOnPArrival);
        toolBarAlign->addAction(actionAlignOnSArrival);
        toolBarAlign->addAction(actionAlignOnOriginTime);
        toolBarComponent->addAction(actionShowZComponent);
        toolBarComponent->addAction(actionShowNComponent);
        toolBarComponent->addAction(actionShowEComponent);
        toolBarStations->addAction(actionShowAllStations);
        toolBarStations->addAction(actionShowUsedStations);
        toolBarPicking->addAction(actionPickP);
        toolBarPicking->addAction(actionPickS);
        toolBarRelocate->addAction(actionRelocate);
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menu_Navigation->menuAction());
        menuBar->addAction(menuPicking->menuAction());
        menuBar->addAction(menu_Filter->menuAction());
        menuBar->addAction(menu_Locate->menuAction());
        menu_Filter->addAction(actionToggleFilter);
        menu_Filter->addAction(actionLimitFilterToZoomTrace);
        menu_Locate->addAction(actionRelocate);
        menu_Locate->addAction(actionModifyOrigin);
        menu_Navigation->addAction(actionScrollLeft);
        menu_Navigation->addAction(actionScrollRight);
        menu_Navigation->addAction(actionScrollFineLeft);
        menu_Navigation->addAction(actionScrollFineRight);
        menuPicking->addAction(actionRepickAutomatically);
        menuPicking->addSeparator();
        menuView->addAction(actionDefaultView);
        menuView->addAction(actionShowUsedStations);
        menuView->addAction(actionShowTraceValuesInNmS);
        menuView->addAction(actionShowUnassociatedPicks);
        menuView->addAction(actionShowTheoreticalArrivals);
        menuView->addSeparator();
        menuView->addAction(menu_Zoomtrace->menuAction());
        menuView->addAction(menuTraces->menuAction());
        menuView->addAction(menuComponents->menuAction());
        menuSort->addAction(actionSortByDistance);
        menuSort->addAction(actionSortAlphabetically);
        menuSort->addAction(actionSortByResidual);
        menuAlign->addAction(actionAlignOnPArrival);
        menuAlign->addAction(actionAlignOnSArrival);
        menuAlign->addAction(actionAlignOnOriginTime);
        menuComponents->addAction(actionShowZComponent);
        menuComponents->addAction(actionShowNComponent);
        menuComponents->addAction(actionShowEComponent);
        menuTraces->addAction(actionIncreaseRowHeight);
        menuTraces->addAction(actionDecreaseRowHeight);
        menuTraces->addAction(actionIncreaseRowTimescale);
        menuTraces->addAction(actionDecreaseRowTimescale);
        menuTraces->addAction(actionMaximizeAmplitudes);
        menuTraces->addSeparator();
        menuTraces->addAction(menuAlignArrival->menuAction());
        menuAlignArrival->addAction(actionAlignOnOriginTime);
        menu_Zoomtrace->addAction(actionIncreaseAmplitudeScale);
        menu_Zoomtrace->addAction(actionDecreaseAmplitudeScale);
        menu_Zoomtrace->addAction(actionTimeScaleUp);
        menu_Zoomtrace->addAction(actionTimeScaleDown);
        menu_Zoomtrace->addSeparator();
        menu_Zoomtrace->addAction(actionClipComponentsToViewport);

        retranslateUi(PickerView);

        QMetaObject::connectSlotsByName(PickerView);
    } // setupUi

    void retranslateUi(QMainWindow *PickerView)
    {
        PickerView->setWindowTitle(QApplication::translate("PickerView", "Picker", 0, QApplication::UnicodeUTF8));
        actionIncreaseAmplitudeScale->setText(QApplication::translate("PickerView", "Scale amplitudes up", 0, QApplication::UnicodeUTF8));
        actionIncreaseAmplitudeScale->setIconText(QApplication::translate("PickerView", "Scale amplitudes up", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionIncreaseAmplitudeScale->setToolTip(QApplication::translate("PickerView", "Increase amplitude scale of current trace", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionIncreaseAmplitudeScale->setShortcut(QApplication::translate("PickerView", "Ctrl+Up", 0, QApplication::UnicodeUTF8));
        actionDecreaseAmplitudeScale->setText(QApplication::translate("PickerView", "Scale amplitudes down", 0, QApplication::UnicodeUTF8));
        actionDecreaseAmplitudeScale->setIconText(QApplication::translate("PickerView", "Scale amplitudes down", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDecreaseAmplitudeScale->setToolTip(QApplication::translate("PickerView", "Descrease amplitude scale of current trace", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDecreaseAmplitudeScale->setShortcut(QApplication::translate("PickerView", "Ctrl+Down", 0, QApplication::UnicodeUTF8));
        actionTimeScaleUp->setText(QApplication::translate("PickerView", "Increase visible timespan", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionTimeScaleUp->setToolTip(QApplication::translate("PickerView", "Increase visible timespan", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionTimeScaleUp->setShortcut(QApplication::translate("PickerView", "Ctrl+Right", 0, QApplication::UnicodeUTF8));
        actionTimeScaleDown->setText(QApplication::translate("PickerView", "Decrease visible timespan", 0, QApplication::UnicodeUTF8));
        actionTimeScaleDown->setIconText(QApplication::translate("PickerView", "Decrease visible timespan", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionTimeScaleDown->setToolTip(QApplication::translate("PickerView", "Decrease visible timespan", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionTimeScaleDown->setShortcut(QApplication::translate("PickerView", "Ctrl+Left", 0, QApplication::UnicodeUTF8));
        actionScrollLeft->setText(QApplication::translate("PickerView", "Scroll left", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionScrollLeft->setToolTip(QApplication::translate("PickerView", "Scroll current trace left", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionScrollLeft->setShortcut(QApplication::translate("PickerView", "Shift+Left", 0, QApplication::UnicodeUTF8));
        actionScrollRight->setText(QApplication::translate("PickerView", "Scroll right", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionScrollRight->setToolTip(QApplication::translate("PickerView", "Scroll current trace right", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionScrollRight->setShortcut(QApplication::translate("PickerView", "Shift+Right", 0, QApplication::UnicodeUTF8));
        actionSelectNextTrace->setText(QApplication::translate("PickerView", "Next trace", 0, QApplication::UnicodeUTF8));
        actionSelectNextTrace->setIconText(QApplication::translate("PickerView", "Next trace", 0, QApplication::UnicodeUTF8));
        actionSelectNextTrace->setShortcut(QApplication::translate("PickerView", "Down", 0, QApplication::UnicodeUTF8));
        actionSelectPreviousTrace->setText(QApplication::translate("PickerView", "Previous trace", 0, QApplication::UnicodeUTF8));
        actionSelectPreviousTrace->setIconText(QApplication::translate("PickerView", "Previous trace", 0, QApplication::UnicodeUTF8));
        actionSelectPreviousTrace->setShortcut(QApplication::translate("PickerView", "Up", 0, QApplication::UnicodeUTF8));
        actionScrollFineLeft->setText(QApplication::translate("PickerView", "Scroll fine left", 0, QApplication::UnicodeUTF8));
        actionScrollFineLeft->setIconText(QApplication::translate("PickerView", "Scroll fine left", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionScrollFineLeft->setToolTip(QApplication::translate("PickerView", "Scroll current trace left with finer steps", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionScrollFineLeft->setShortcut(QApplication::translate("PickerView", "Left", 0, QApplication::UnicodeUTF8));
        actionScrollFineRight->setText(QApplication::translate("PickerView", "Scroll fine right", 0, QApplication::UnicodeUTF8));
        actionScrollFineRight->setIconText(QApplication::translate("PickerView", "Scroll fine right", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionScrollFineRight->setToolTip(QApplication::translate("PickerView", "Scroll current trace right with finer steps", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionScrollFineRight->setShortcut(QApplication::translate("PickerView", "Right", 0, QApplication::UnicodeUTF8));
        actionIncreaseRowHeight->setText(QApplication::translate("PickerView", "Increase row height", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionIncreaseRowHeight->setToolTip(QApplication::translate("PickerView", "Increases the row height in traceview (Shift+Y)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionIncreaseRowHeight->setShortcut(QApplication::translate("PickerView", "Shift+Y", 0, QApplication::UnicodeUTF8));
        actionDecreaseRowHeight->setText(QApplication::translate("PickerView", "Decrease row height", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDecreaseRowHeight->setToolTip(QApplication::translate("PickerView", "Decreases the row height in traceview (Y)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDecreaseRowHeight->setShortcut(QApplication::translate("PickerView", "Y", 0, QApplication::UnicodeUTF8));
        actionIncreaseRowTimescale->setText(QApplication::translate("PickerView", "Increase row timescale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionIncreaseRowTimescale->setToolTip(QApplication::translate("PickerView", "Increases the timescale in traceview (>)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionIncreaseRowTimescale->setShortcut(QApplication::translate("PickerView", ">", 0, QApplication::UnicodeUTF8));
        actionDecreaseRowTimescale->setText(QApplication::translate("PickerView", "Decrease row timescale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDecreaseRowTimescale->setToolTip(QApplication::translate("PickerView", "Decreases the timescale in traceview (<)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDecreaseRowTimescale->setShortcut(QApplication::translate("PickerView", "<", 0, QApplication::UnicodeUTF8));
        actionSelectFirstRow->setText(QApplication::translate("PickerView", "Select first row", 0, QApplication::UnicodeUTF8));
        actionSelectFirstRow->setShortcut(QApplication::translate("PickerView", "Home", 0, QApplication::UnicodeUTF8));
        actionSelectLastRow->setText(QApplication::translate("PickerView", "Select last row", 0, QApplication::UnicodeUTF8));
        actionSelectLastRow->setShortcut(QApplication::translate("PickerView", "End", 0, QApplication::UnicodeUTF8));
        actionAlignOnPArrival->setText(QApplication::translate("PickerView", "Align on P arrival", 0, QApplication::UnicodeUTF8));
        actionAlignOnPArrival->setIconText(QApplication::translate("PickerView", "Align on P arrival", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAlignOnPArrival->setToolTip(QApplication::translate("PickerView", "Align on P arrival", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAlignOnPArrival->setShortcut(QApplication::translate("PickerView", "Ctrl+F1", 0, QApplication::UnicodeUTF8));
        actionAlignOnSArrival->setText(QApplication::translate("PickerView", "Align on S arrival", 0, QApplication::UnicodeUTF8));
        actionAlignOnSArrival->setIconText(QApplication::translate("PickerView", "Align on S arrival", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAlignOnSArrival->setToolTip(QApplication::translate("PickerView", "Align on S arrival", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAlignOnSArrival->setShortcut(QApplication::translate("PickerView", "Ctrl+F2", 0, QApplication::UnicodeUTF8));
        actionAlignOnOriginTime->setText(QApplication::translate("PickerView", "Align on origin time", 0, QApplication::UnicodeUTF8));
        actionAlignOnOriginTime->setIconText(QApplication::translate("PickerView", "Align on origin time", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAlignOnOriginTime->setToolTip(QApplication::translate("PickerView", "Align on origin time (Ctrl+0)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAlignOnOriginTime->setShortcut(QApplication::translate("PickerView", "Ctrl+0", 0, QApplication::UnicodeUTF8));
        actionDefaultView->setText(QApplication::translate("PickerView", "&Default view", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDefaultView->setToolTip(QApplication::translate("PickerView", "Default view (Shift+N)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDefaultView->setShortcut(QApplication::translate("PickerView", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionSortAlphabetically->setText(QApplication::translate("PickerView", "Sort by names", 0, QApplication::UnicodeUTF8));
        actionSortAlphabetically->setIconText(QApplication::translate("PickerView", "Sort by names", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSortAlphabetically->setToolTip(QApplication::translate("PickerView", "Sorts the traces by name (Alt+A)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSortAlphabetically->setShortcut(QApplication::translate("PickerView", "Alt+A", 0, QApplication::UnicodeUTF8));
        actionSortByDistance->setText(QApplication::translate("PickerView", "Sort by distance", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSortByDistance->setToolTip(QApplication::translate("PickerView", "Sort by distance (Alt+D)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSortByDistance->setShortcut(QApplication::translate("PickerView", "Alt+D", 0, QApplication::UnicodeUTF8));
        actionToggleFilter->setText(QApplication::translate("PickerView", "&Toggle filter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleFilter->setToolTip(QApplication::translate("PickerView", "Toggles using a filter before displaying the traces (F)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToggleFilter->setShortcut(QApplication::translate("PickerView", "F", 0, QApplication::UnicodeUTF8));
        actionMaximizeAmplitudes->setText(QApplication::translate("PickerView", "Maximize visible amplitudes", 0, QApplication::UnicodeUTF8));
        actionMaximizeAmplitudes->setIconText(QApplication::translate("PickerView", "Maximize visible amplitudes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMaximizeAmplitudes->setToolTip(QApplication::translate("PickerView", "Maximize visible amplitudes (S)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionMaximizeAmplitudes->setShortcut(QApplication::translate("PickerView", "S", 0, QApplication::UnicodeUTF8));
        actionPickP->setText(QApplication::translate("PickerView", "Pick P phase", 0, QApplication::UnicodeUTF8));
        actionPickP->setShortcut(QApplication::translate("PickerView", "F1", 0, QApplication::UnicodeUTF8));
        actionPickS->setText(QApplication::translate("PickerView", "Pick S phase", 0, QApplication::UnicodeUTF8));
        actionPickS->setShortcut(QApplication::translate("PickerView", "F2", 0, QApplication::UnicodeUTF8));
        actionPickOther->setText(QApplication::translate("PickerView", "Pick other phase", 0, QApplication::UnicodeUTF8));
        actionDisablePicking->setText(QApplication::translate("PickerView", "Leave picking mode", 0, QApplication::UnicodeUTF8));
        actionDisablePicking->setIconText(QApplication::translate("PickerView", "Leave picking mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDisablePicking->setToolTip(QApplication::translate("PickerView", "Leaves the picking mode (Esc)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDisablePicking->setShortcut(QApplication::translate("PickerView", "Esc", 0, QApplication::UnicodeUTF8));
        actionConfirmPick->setText(QApplication::translate("PickerView", "Confirm pick", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionConfirmPick->setToolTip(QApplication::translate("PickerView", "Confirm pick (Shift+Return)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionConfirmPick->setShortcut(QApplication::translate("PickerView", "Shift+Return", 0, QApplication::UnicodeUTF8));
        actionDeletePick->setText(QApplication::translate("PickerView", "Delete pick", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDeletePick->setToolTip(QApplication::translate("PickerView", "Delete pick (Del)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDeletePick->setShortcut(QApplication::translate("PickerView", "Del", 0, QApplication::UnicodeUTF8));
        actionRelocate->setText(QApplication::translate("PickerView", "&Apply", 0, QApplication::UnicodeUTF8));
        actionRelocate->setIconText(QApplication::translate("PickerView", "Apply", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRelocate->setToolTip(QApplication::translate("PickerView", "Apply the changed picks to the origin and update the residuals. \"Relocate\" has to be done manually! (F5)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRelocate->setStatusTip(QApplication::translate("PickerView", "Apply the changed picks to the origin and update the residuals. \"Relocate\" has to be done manually! (F5)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionRelocate->setShortcut(QApplication::translate("PickerView", "F5", 0, QApplication::UnicodeUTF8));
        actionShowAllStations->setText(QApplication::translate("PickerView", "Add stations in range", 0, QApplication::UnicodeUTF8));
        actionShowAllStations->setIconText(QApplication::translate("PickerView", "Add stations in range", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowAllStations->setToolTip(QApplication::translate("PickerView", "Adds all stations next to the origin with distance lower or equal than the entered value that haven't triggered. When view mode is \"used stations only\" you won't see the new stations until leaving this mode.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowUsedStations->setText(QApplication::translate("PickerView", "&Show used stations only", 0, QApplication::UnicodeUTF8));
        actionShowUsedStations->setIconText(QApplication::translate("PickerView", "Used stations only", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowUsedStations->setToolTip(QApplication::translate("PickerView", "Toggles between hiding unpicked and deactivated stations and showing all stations", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSortByResidual->setText(QApplication::translate("PickerView", "Sort by residual", 0, QApplication::UnicodeUTF8));
        actionSortByResidual->setShortcut(QApplication::translate("PickerView", "Alt+R", 0, QApplication::UnicodeUTF8));
        actionShowZComponent->setText(QApplication::translate("PickerView", "Vertical", 0, QApplication::UnicodeUTF8));
        actionShowZComponent->setIconText(QApplication::translate("PickerView", "Vertical", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowZComponent->setToolTip(QApplication::translate("PickerView", "Show Vertical Component (Z)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowZComponent->setShortcut(QApplication::translate("PickerView", "Z", 0, QApplication::UnicodeUTF8));
        actionShowNComponent->setText(QApplication::translate("PickerView", "North", 0, QApplication::UnicodeUTF8));
        actionShowNComponent->setIconText(QApplication::translate("PickerView", "North", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowNComponent->setToolTip(QApplication::translate("PickerView", "Show North Component (N)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowNComponent->setShortcut(QApplication::translate("PickerView", "N", 0, QApplication::UnicodeUTF8));
        actionShowEComponent->setText(QApplication::translate("PickerView", "East", 0, QApplication::UnicodeUTF8));
        actionShowEComponent->setIconText(QApplication::translate("PickerView", "East", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowEComponent->setToolTip(QApplication::translate("PickerView", "Show East Component (E)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowEComponent->setShortcut(QApplication::translate("PickerView", "E", 0, QApplication::UnicodeUTF8));
        actionGotoNextMarker->setText(QApplication::translate("PickerView", "Goto next marker", 0, QApplication::UnicodeUTF8));
        actionGotoNextMarker->setIconText(QApplication::translate("PickerView", "Goto next marker", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGotoNextMarker->setToolTip(QApplication::translate("PickerView", "Goto next marker", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionGotoNextMarker->setShortcut(QApplication::translate("PickerView", "Alt+Right", 0, QApplication::UnicodeUTF8));
        actionGotoPreviousMarker->setText(QApplication::translate("PickerView", "Goto previous marker", 0, QApplication::UnicodeUTF8));
        actionGotoPreviousMarker->setIconText(QApplication::translate("PickerView", "Goto previous marker", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGotoPreviousMarker->setToolTip(QApplication::translate("PickerView", "Goto previous marker", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionGotoPreviousMarker->setShortcut(QApplication::translate("PickerView", "Alt+Left", 0, QApplication::UnicodeUTF8));
        actionCreatePick->setText(QApplication::translate("PickerView", "Create pick", 0, QApplication::UnicodeUTF8));
        actionCreatePick->setIconText(QApplication::translate("PickerView", "Create pick", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCreatePick->setToolTip(QApplication::translate("PickerView", "Create pick (Return)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCreatePick->setShortcut(QApplication::translate("PickerView", "Return", 0, QApplication::UnicodeUTF8));
        actionSwitchFullscreen->setText(QApplication::translate("PickerView", "Toggle fullscreen", 0, QApplication::UnicodeUTF8));
        actionSwitchFullscreen->setIconText(QApplication::translate("PickerView", "Toggle fullscreen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSwitchFullscreen->setToolTip(QApplication::translate("PickerView", "Toggle fullscreen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSwitchFullscreen->setShortcut(QApplication::translate("PickerView", "F11", 0, QApplication::UnicodeUTF8));
        actionAddStations->setText(QApplication::translate("PickerView", "Add stations", 0, QApplication::UnicodeUTF8));
        actionAddStations->setShortcut(QApplication::translate("PickerView", "F3", 0, QApplication::UnicodeUTF8));
        actionSearchStation->setText(QApplication::translate("PickerView", "Search station", 0, QApplication::UnicodeUTF8));
        actionSearchStation->setShortcut(QApplication::translate("PickerView", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionModifyOrigin->setText(QApplication::translate("PickerView", "&Modify origin", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionModifyOrigin->setToolTip(QApplication::translate("PickerView", "Modify origin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionModifyOrigin->setStatusTip(QApplication::translate("PickerView", "Modify the location and origin time of the current origin and recalculate the theoretical arrivals and the residuals.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionLimitFilterToZoomTrace->setText(QApplication::translate("PickerView", "&Limit filter to zoom trace", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLimitFilterToZoomTrace->setToolTip(QApplication::translate("PickerView", "Limit filter to zoom trace", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionLimitFilterToZoomTrace->setStatusTip(QApplication::translate("PickerView", "Limits filtering to zoom trace. All other traces are not filtered. This is mostly used to gain performance.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionLimitFilterToZoomTrace->setShortcut(QApplication::translate("PickerView", "Shift+F", 0, QApplication::UnicodeUTF8));
        actionRepickAutomatically->setText(QApplication::translate("PickerView", "Repick automatically", 0, QApplication::UnicodeUTF8));
        actionRepickAutomatically->setShortcut(QApplication::translate("PickerView", "R", 0, QApplication::UnicodeUTF8));
        actionShowTraceValuesInNmS->setText(QApplication::translate("PickerView", "Show trace values in nm/s", 0, QApplication::UnicodeUTF8));
        actionClipComponentsToViewport->setText(QApplication::translate("PickerView", "Clip components to viewport", 0, QApplication::UnicodeUTF8));
        actionClipComponentsToViewport->setShortcut(QApplication::translate("PickerView", "C", 0, QApplication::UnicodeUTF8));
        actionSetPolarityPositive->setText(QApplication::translate("PickerView", "positive", 0, QApplication::UnicodeUTF8));
        actionSetPolarityPositive->setShortcut(QApplication::translate("PickerView", "Shift+Up", 0, QApplication::UnicodeUTF8));
        actionSetPolarityNegative->setText(QApplication::translate("PickerView", "negative", 0, QApplication::UnicodeUTF8));
        actionSetPolarityNegative->setShortcut(QApplication::translate("PickerView", "Shift+Down", 0, QApplication::UnicodeUTF8));
        actionSetPolarityUndecidable->setText(QApplication::translate("PickerView", "undecidable", 0, QApplication::UnicodeUTF8));
        actionSetPolarityUndecidable->setShortcut(QApplication::translate("PickerView", "Shift+X", 0, QApplication::UnicodeUTF8));
        actionSetPolarityUnset->setText(QApplication::translate("PickerView", "unset", 0, QApplication::UnicodeUTF8));
        actionSetPolarityUnset->setShortcut(QApplication::translate("PickerView", "Shift+Del", 0, QApplication::UnicodeUTF8));
        actionSetPick->setText(QApplication::translate("PickerView", "Set pick", 0, QApplication::UnicodeUTF8));
        actionSetPick->setShortcut(QApplication::translate("PickerView", "Space", 0, QApplication::UnicodeUTF8));
        actionShowTheoreticalArrivals->setText(QApplication::translate("PickerView", "Show theoretical arrivals", 0, QApplication::UnicodeUTF8));
        actionShowTheoreticalArrivals->setIconText(QApplication::translate("PickerView", "Show theoretical arrivals", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowTheoreticalArrivals->setToolTip(QApplication::translate("PickerView", "Shows theoretical arrivals as blue bars in the traces", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowTheoreticalArrivals->setShortcut(QApplication::translate("PickerView", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionShowUnassociatedPicks->setText(QApplication::translate("PickerView", "Show unassociated picks", 0, QApplication::UnicodeUTF8));
        actionShowUnassociatedPicks->setShortcut(QApplication::translate("PickerView", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        labelStationCode->setText(QApplication::translate("PickerView", "ABCD", 0, QApplication::UnicodeUTF8));
        labelCode->setText(QApplication::translate("PickerView", "AB  BHZ", 0, QApplication::UnicodeUTF8));
        labelDistanceName->setText(QApplication::translate("PickerView", "D:", 0, QApplication::UnicodeUTF8));
        labelAzimuthName->setText(QApplication::translate("PickerView", "A:", 0, QApplication::UnicodeUTF8));
        labelDistance->setText(QApplication::translate("PickerView", "12\303\202\302\260", 0, QApplication::UnicodeUTF8));
        labelAzimuth->setText(QApplication::translate("PickerView", "314\303\202\302\260", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnTimeScaleDown->setToolTip(QApplication::translate("PickerView", "Increase visible timespan", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnTimeScaleDown->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnTimeScaleUp->setToolTip(QApplication::translate("PickerView", "Decrease visible timespan", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnTimeScaleUp->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnAmplScaleUp->setToolTip(QApplication::translate("PickerView", "Scale amplitudes up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAmplScaleUp->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnScaleReset->setToolTip(QApplication::translate("PickerView", "Reset timespan and amplitude scale", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnScaleReset->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnAmplScaleDown->setToolTip(QApplication::translate("PickerView", "Scale amplitudes down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAmplScaleDown->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRowAccept->setToolTip(QApplication::translate("PickerView", "Accept picked phase", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRowAccept->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRowRemove->setToolTip(QApplication::translate("PickerView", "Deactivate current pick or trace depending on the picking mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRowRemove->setText(QString());
        btnRowRemove->setShortcut(QApplication::translate("PickerView", "X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnRowReset->setToolTip(QApplication::translate("PickerView", "Reset manual picks", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRowReset->setText(QString());
        toolBarScale->setWindowTitle(QApplication::translate("PickerView", "Zooming", 0, QApplication::UnicodeUTF8));
        toolBarSort->setWindowTitle(QApplication::translate("PickerView", "Sort", 0, QApplication::UnicodeUTF8));
        toolBarAlign->setWindowTitle(QApplication::translate("PickerView", "Alignment", 0, QApplication::UnicodeUTF8));
        toolBarComponent->setWindowTitle(QApplication::translate("PickerView", "Components", 0, QApplication::UnicodeUTF8));
        toolBarStations->setWindowTitle(QApplication::translate("PickerView", "Add stations", 0, QApplication::UnicodeUTF8));
        toolBarPicking->setWindowTitle(QApplication::translate("PickerView", "Picking", 0, QApplication::UnicodeUTF8));
        toolBarFilter->setWindowTitle(QApplication::translate("PickerView", "Filter", 0, QApplication::UnicodeUTF8));
        toolBarRelocate->setWindowTitle(QApplication::translate("PickerView", "Apply", 0, QApplication::UnicodeUTF8));
        menu_Filter->setTitle(QApplication::translate("PickerView", "&Filter", 0, QApplication::UnicodeUTF8));
        menu_Locate->setTitle(QApplication::translate("PickerView", "&Locator", 0, QApplication::UnicodeUTF8));
        menu_Navigation->setTitle(QApplication::translate("PickerView", "&Navigation", 0, QApplication::UnicodeUTF8));
        menuPicking->setTitle(QApplication::translate("PickerView", "&Picking", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("PickerView", "&View", 0, QApplication::UnicodeUTF8));
        menuSort->setTitle(QApplication::translate("PickerView", "&Sort", 0, QApplication::UnicodeUTF8));
        menuAlign->setTitle(QApplication::translate("PickerView", "Align", 0, QApplication::UnicodeUTF8));
        menuComponents->setTitle(QApplication::translate("PickerView", "&Components", 0, QApplication::UnicodeUTF8));
        menuTraces->setTitle(QApplication::translate("PickerView", "&Traces", 0, QApplication::UnicodeUTF8));
        menuAlignArrival->setTitle(QApplication::translate("PickerView", "Align", 0, QApplication::UnicodeUTF8));
        menu_Zoomtrace->setTitle(QApplication::translate("PickerView", "&Zoomtrace", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PickerView: public Ui_PickerView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKERVIEW_H
