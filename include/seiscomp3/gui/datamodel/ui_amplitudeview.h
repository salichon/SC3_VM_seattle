/********************************************************************************
** Form generated from reading UI file 'amplitudeview.ui'
**
** Created: Thu Jan 23 14:38:33 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPLITUDEVIEW_H
#define UI_AMPLITUDEVIEW_H

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

class Ui_AmplitudeView
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
    QAction *actionAlignOnOriginTime;
    QAction *actionDefaultView;
    QAction *actionSortAlphabetically;
    QAction *actionSortByDistance;
    QAction *actionToggleFilter;
    QAction *actionMaximizeAmplitudes;
    QAction *actionComputeMagnitudes;
    QAction *actionShowAllStations;
    QAction *actionShowUsedStations;
    QAction *actionShowZComponent;
    QAction *actionShowNComponent;
    QAction *actionShowEComponent;
    QAction *actionGotoNextMarker;
    QAction *actionGotoPreviousMarker;
    QAction *actionSwitchFullscreen;
    QAction *actionAddStations;
    QAction *actionSearchStation;
    QAction *actionLimitFilterToZoomTrace;
    QAction *actionShowTraceValuesInNmS;
    QAction *actionClipComponentsToViewport;
    QAction *actionCreateAmplitude;
    QAction *actionConfirmAmplitude;
    QAction *actionDeleteAmplitude;
    QAction *actionDisablePicking;
    QAction *actionRecalculateAmplitudes;
    QAction *actionPickAmplitude;
    QAction *actionRecalculateAmplitude;
    QAction *actionSetAmplitude;
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    Seiscomp::Gui::ZoomRecordFrame *frameZoom;
    QHBoxLayout *hboxLayout;
    QFrame *frameCurrentTraceLabel;
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
    QFrame *frameCurrentTrace;
    QFrame *frameTraces;
    QStatusBar *statusbar;
    QToolBar *toolBarScale;
    QToolBar *toolBarSort;
    QToolBar *toolBarAlign;
    QToolBar *toolBarComponent;
    QToolBar *toolBarStations;
    QToolBar *toolBarPicking;
    QMenuBar *menuBar;
    QMenu *menuView;
    QMenu *menuSort;
    QMenu *menuAlign;
    QMenu *menu_Zoomtrace;
    QMenu *menuTraces;
    QMenu *menuAlignArrival;
    QMenu *menuComponents;
    QMenu *menu_Navigation;
    QMenu *menu_Locate;
    QMenu *menu_Filter;
    QToolBar *toolBarFilter;
    QToolBar *toolBarSetup;
    QToolBar *toolBarComputeMagnitudes;

    void setupUi(QMainWindow *AmplitudeView)
    {
        if (AmplitudeView->objectName().isEmpty())
            AmplitudeView->setObjectName(QString::fromUtf8("AmplitudeView"));
        AmplitudeView->resize(948, 663);
        AmplitudeView->setIconSize(QSize(16, 16));
        actionIncreaseAmplitudeScale = new QAction(AmplitudeView);
        actionIncreaseAmplitudeScale->setObjectName(QString::fromUtf8("actionIncreaseAmplitudeScale"));
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/icons/vzoomin.png"));
        actionIncreaseAmplitudeScale->setIcon(icon);
        actionDecreaseAmplitudeScale = new QAction(AmplitudeView);
        actionDecreaseAmplitudeScale->setObjectName(QString::fromUtf8("actionDecreaseAmplitudeScale"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/icons/vzoomout.png"));
        actionDecreaseAmplitudeScale->setIcon(icon1);
        actionTimeScaleUp = new QAction(AmplitudeView);
        actionTimeScaleUp->setObjectName(QString::fromUtf8("actionTimeScaleUp"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/icons/icons/zoomout.png"));
        actionTimeScaleUp->setIcon(icon2);
        actionTimeScaleDown = new QAction(AmplitudeView);
        actionTimeScaleDown->setObjectName(QString::fromUtf8("actionTimeScaleDown"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/icons/icons/zoomin.png"));
        actionTimeScaleDown->setIcon(icon3);
        actionScrollLeft = new QAction(AmplitudeView);
        actionScrollLeft->setObjectName(QString::fromUtf8("actionScrollLeft"));
        actionScrollRight = new QAction(AmplitudeView);
        actionScrollRight->setObjectName(QString::fromUtf8("actionScrollRight"));
        actionSelectNextTrace = new QAction(AmplitudeView);
        actionSelectNextTrace->setObjectName(QString::fromUtf8("actionSelectNextTrace"));
        actionSelectPreviousTrace = new QAction(AmplitudeView);
        actionSelectPreviousTrace->setObjectName(QString::fromUtf8("actionSelectPreviousTrace"));
        actionScrollFineLeft = new QAction(AmplitudeView);
        actionScrollFineLeft->setObjectName(QString::fromUtf8("actionScrollFineLeft"));
        actionScrollFineRight = new QAction(AmplitudeView);
        actionScrollFineRight->setObjectName(QString::fromUtf8("actionScrollFineRight"));
        actionIncreaseRowHeight = new QAction(AmplitudeView);
        actionIncreaseRowHeight->setObjectName(QString::fromUtf8("actionIncreaseRowHeight"));
        actionIncreaseRowHeight->setIcon(icon);
        actionDecreaseRowHeight = new QAction(AmplitudeView);
        actionDecreaseRowHeight->setObjectName(QString::fromUtf8("actionDecreaseRowHeight"));
        actionDecreaseRowHeight->setIcon(icon1);
        actionIncreaseRowTimescale = new QAction(AmplitudeView);
        actionIncreaseRowTimescale->setObjectName(QString::fromUtf8("actionIncreaseRowTimescale"));
        actionIncreaseRowTimescale->setIcon(icon3);
        actionDecreaseRowTimescale = new QAction(AmplitudeView);
        actionDecreaseRowTimescale->setObjectName(QString::fromUtf8("actionDecreaseRowTimescale"));
        actionDecreaseRowTimescale->setIcon(icon2);
        actionSelectFirstRow = new QAction(AmplitudeView);
        actionSelectFirstRow->setObjectName(QString::fromUtf8("actionSelectFirstRow"));
        actionSelectLastRow = new QAction(AmplitudeView);
        actionSelectLastRow->setObjectName(QString::fromUtf8("actionSelectLastRow"));
        actionAlignOnPArrival = new QAction(AmplitudeView);
        actionAlignOnPArrival->setObjectName(QString::fromUtf8("actionAlignOnPArrival"));
        actionAlignOnPArrival->setCheckable(true);
        actionAlignOnPArrival->setChecked(true);
        const QIcon icon4 = QIcon(QString::fromUtf8(":/icons/icons/align_p.png"));
        actionAlignOnPArrival->setIcon(icon4);
        actionAlignOnOriginTime = new QAction(AmplitudeView);
        actionAlignOnOriginTime->setObjectName(QString::fromUtf8("actionAlignOnOriginTime"));
        actionAlignOnOriginTime->setCheckable(true);
        const QIcon icon5 = QIcon(QString::fromUtf8(":/icons/icons/align_t.png"));
        actionAlignOnOriginTime->setIcon(icon5);
        actionDefaultView = new QAction(AmplitudeView);
        actionDefaultView->setObjectName(QString::fromUtf8("actionDefaultView"));
        const QIcon icon6 = QIcon(QString::fromUtf8(":/icons/icons/home.png"));
        actionDefaultView->setIcon(icon6);
        actionSortAlphabetically = new QAction(AmplitudeView);
        actionSortAlphabetically->setObjectName(QString::fromUtf8("actionSortAlphabetically"));
        actionSortAlphabetically->setCheckable(true);
        const QIcon icon7 = QIcon(QString::fromUtf8(":/icons/icons/sort_abc.png"));
        actionSortAlphabetically->setIcon(icon7);
        actionSortByDistance = new QAction(AmplitudeView);
        actionSortByDistance->setObjectName(QString::fromUtf8("actionSortByDistance"));
        actionSortByDistance->setCheckable(true);
        actionSortByDistance->setChecked(true);
        const QIcon icon8 = QIcon(QString::fromUtf8(":/icons/icons/sort_dist.png"));
        actionSortByDistance->setIcon(icon8);
        actionToggleFilter = new QAction(AmplitudeView);
        actionToggleFilter->setObjectName(QString::fromUtf8("actionToggleFilter"));
        actionToggleFilter->setCheckable(false);
        actionToggleFilter->setChecked(false);
        const QIcon icon9 = QIcon(QString::fromUtf8(":/icons/icons/filter.png"));
        actionToggleFilter->setIcon(icon9);
        actionMaximizeAmplitudes = new QAction(AmplitudeView);
        actionMaximizeAmplitudes->setObjectName(QString::fromUtf8("actionMaximizeAmplitudes"));
        const QIcon icon10 = QIcon(QString::fromUtf8(":/icons/icons/vmax.png"));
        actionMaximizeAmplitudes->setIcon(icon10);
        actionComputeMagnitudes = new QAction(AmplitudeView);
        actionComputeMagnitudes->setObjectName(QString::fromUtf8("actionComputeMagnitudes"));
        const QIcon icon11 = QIcon(QString::fromUtf8(":/icons/icons/locate.png"));
        actionComputeMagnitudes->setIcon(icon11);
        actionShowAllStations = new QAction(AmplitudeView);
        actionShowAllStations->setObjectName(QString::fromUtf8("actionShowAllStations"));
        actionShowAllStations->setCheckable(false);
        const QIcon icon12 = QIcon(QString::fromUtf8(":/icons/icons/mindistance.png"));
        actionShowAllStations->setIcon(icon12);
        actionShowUsedStations = new QAction(AmplitudeView);
        actionShowUsedStations->setObjectName(QString::fromUtf8("actionShowUsedStations"));
        actionShowUsedStations->setCheckable(true);
        const QIcon icon13 = QIcon(QString::fromUtf8(":/icons/icons/withpick.png"));
        actionShowUsedStations->setIcon(icon13);
        actionShowZComponent = new QAction(AmplitudeView);
        actionShowZComponent->setObjectName(QString::fromUtf8("actionShowZComponent"));
        actionShowZComponent->setCheckable(true);
        actionShowZComponent->setChecked(true);
        const QIcon icon14 = QIcon(QString::fromUtf8(":/icons/icons/channelZ.png"));
        actionShowZComponent->setIcon(icon14);
        actionShowNComponent = new QAction(AmplitudeView);
        actionShowNComponent->setObjectName(QString::fromUtf8("actionShowNComponent"));
        actionShowNComponent->setCheckable(true);
        const QIcon icon15 = QIcon(QString::fromUtf8(":/icons/icons/channelN.png"));
        actionShowNComponent->setIcon(icon15);
        actionShowEComponent = new QAction(AmplitudeView);
        actionShowEComponent->setObjectName(QString::fromUtf8("actionShowEComponent"));
        actionShowEComponent->setCheckable(true);
        const QIcon icon16 = QIcon(QString::fromUtf8(":/icons/icons/channelE.png"));
        actionShowEComponent->setIcon(icon16);
        actionGotoNextMarker = new QAction(AmplitudeView);
        actionGotoNextMarker->setObjectName(QString::fromUtf8("actionGotoNextMarker"));
        actionGotoPreviousMarker = new QAction(AmplitudeView);
        actionGotoPreviousMarker->setObjectName(QString::fromUtf8("actionGotoPreviousMarker"));
        actionSwitchFullscreen = new QAction(AmplitudeView);
        actionSwitchFullscreen->setObjectName(QString::fromUtf8("actionSwitchFullscreen"));
        actionSwitchFullscreen->setCheckable(true);
        actionAddStations = new QAction(AmplitudeView);
        actionAddStations->setObjectName(QString::fromUtf8("actionAddStations"));
        actionSearchStation = new QAction(AmplitudeView);
        actionSearchStation->setObjectName(QString::fromUtf8("actionSearchStation"));
        actionLimitFilterToZoomTrace = new QAction(AmplitudeView);
        actionLimitFilterToZoomTrace->setObjectName(QString::fromUtf8("actionLimitFilterToZoomTrace"));
        actionLimitFilterToZoomTrace->setCheckable(true);
        actionLimitFilterToZoomTrace->setEnabled(false);
        actionShowTraceValuesInNmS = new QAction(AmplitudeView);
        actionShowTraceValuesInNmS->setObjectName(QString::fromUtf8("actionShowTraceValuesInNmS"));
        actionShowTraceValuesInNmS->setCheckable(true);
        actionClipComponentsToViewport = new QAction(AmplitudeView);
        actionClipComponentsToViewport->setObjectName(QString::fromUtf8("actionClipComponentsToViewport"));
        actionClipComponentsToViewport->setCheckable(true);
        actionClipComponentsToViewport->setChecked(false);
        actionCreateAmplitude = new QAction(AmplitudeView);
        actionCreateAmplitude->setObjectName(QString::fromUtf8("actionCreateAmplitude"));
        actionConfirmAmplitude = new QAction(AmplitudeView);
        actionConfirmAmplitude->setObjectName(QString::fromUtf8("actionConfirmAmplitude"));
        actionDeleteAmplitude = new QAction(AmplitudeView);
        actionDeleteAmplitude->setObjectName(QString::fromUtf8("actionDeleteAmplitude"));
        actionDisablePicking = new QAction(AmplitudeView);
        actionDisablePicking->setObjectName(QString::fromUtf8("actionDisablePicking"));
        actionRecalculateAmplitudes = new QAction(AmplitudeView);
        actionRecalculateAmplitudes->setObjectName(QString::fromUtf8("actionRecalculateAmplitudes"));
        const QIcon icon17 = QIcon(QString::fromUtf8(":/icons/icons/ok.png"));
        actionRecalculateAmplitudes->setIcon(icon17);
        actionPickAmplitude = new QAction(AmplitudeView);
        actionPickAmplitude->setObjectName(QString::fromUtf8("actionPickAmplitude"));
        const QIcon icon18 = QIcon(QString::fromUtf8(":/icons/icons/pick_p.png"));
        actionPickAmplitude->setIcon(icon18);
        actionRecalculateAmplitude = new QAction(AmplitudeView);
        actionRecalculateAmplitude->setObjectName(QString::fromUtf8("actionRecalculateAmplitude"));
        const QIcon icon19 = QIcon(QString::fromUtf8(":/icons/icons/ok_single.png"));
        actionRecalculateAmplitude->setIcon(icon19);
        actionSetAmplitude = new QAction(AmplitudeView);
        actionSetAmplitude->setObjectName(QString::fromUtf8("actionSetAmplitude"));
        centralwidget = new QWidget(AmplitudeView);
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
        frameCurrentTraceLabel = new QFrame(frameZoom);
        frameCurrentTraceLabel->setObjectName(QString::fromUtf8("frameCurrentTraceLabel"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(5);
        sizePolicy1.setHeightForWidth(frameCurrentTraceLabel->sizePolicy().hasHeightForWidth());
        frameCurrentTraceLabel->setSizePolicy(sizePolicy1);
        frameCurrentTraceLabel->setMinimumSize(QSize(0, 0));
        frameCurrentTraceLabel->setMaximumSize(QSize(120, 16777215));
        frameCurrentTraceLabel->setFrameShape(QFrame::NoFrame);
        frameCurrentTraceLabel->setFrameShadow(QFrame::Plain);
        vboxLayout1 = new QVBoxLayout(frameCurrentTraceLabel);
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
        labelStationCode = new QLabel(frameCurrentTraceLabel);
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

        labelCode = new QLabel(frameCurrentTraceLabel);
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
        labelDistanceName = new QLabel(frameCurrentTraceLabel);
        labelDistanceName->setObjectName(QString::fromUtf8("labelDistanceName"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelDistanceName->sizePolicy().hasHeightForWidth());
        labelDistanceName->setSizePolicy(sizePolicy3);

        vboxLayout3->addWidget(labelDistanceName);

        labelAzimuthName = new QLabel(frameCurrentTraceLabel);
        labelAzimuthName->setObjectName(QString::fromUtf8("labelAzimuthName"));
        sizePolicy3.setHeightForWidth(labelAzimuthName->sizePolicy().hasHeightForWidth());
        labelAzimuthName->setSizePolicy(sizePolicy3);

        vboxLayout3->addWidget(labelAzimuthName);


        hboxLayout1->addLayout(vboxLayout3);

        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setSpacing(0);
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        labelDistance = new QLabel(frameCurrentTraceLabel);
        labelDistance->setObjectName(QString::fromUtf8("labelDistance"));
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(4));
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelDistance->sizePolicy().hasHeightForWidth());
        labelDistance->setSizePolicy(sizePolicy4);

        vboxLayout4->addWidget(labelDistance);

        labelAzimuth = new QLabel(frameCurrentTraceLabel);
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
        btnTimeScaleDown = new QPushButton(frameCurrentTraceLabel);
        btnTimeScaleDown->setObjectName(QString::fromUtf8("btnTimeScaleDown"));
        QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btnTimeScaleDown->sizePolicy().hasHeightForWidth());
        btnTimeScaleDown->setSizePolicy(sizePolicy5);
        btnTimeScaleDown->setMaximumSize(QSize(16, 16));
        const QIcon icon20 = QIcon(QString::fromUtf8(":/icons/icons/arrow_right.png"));
        btnTimeScaleDown->setIcon(icon20);
        btnTimeScaleDown->setFlat(true);

        gridLayout->addWidget(btnTimeScaleDown, 1, 2, 1, 1);

        btnTimeScaleUp = new QPushButton(frameCurrentTraceLabel);
        btnTimeScaleUp->setObjectName(QString::fromUtf8("btnTimeScaleUp"));
        sizePolicy5.setHeightForWidth(btnTimeScaleUp->sizePolicy().hasHeightForWidth());
        btnTimeScaleUp->setSizePolicy(sizePolicy5);
        btnTimeScaleUp->setMaximumSize(QSize(16, 16));
        const QIcon icon21 = QIcon(QString::fromUtf8(":/icons/icons/arrow_left.png"));
        btnTimeScaleUp->setIcon(icon21);
        btnTimeScaleUp->setFlat(true);

        gridLayout->addWidget(btnTimeScaleUp, 1, 0, 1, 1);

        btnAmplScaleUp = new QPushButton(frameCurrentTraceLabel);
        btnAmplScaleUp->setObjectName(QString::fromUtf8("btnAmplScaleUp"));
        sizePolicy5.setHeightForWidth(btnAmplScaleUp->sizePolicy().hasHeightForWidth());
        btnAmplScaleUp->setSizePolicy(sizePolicy5);
        btnAmplScaleUp->setMaximumSize(QSize(16, 16));
        const QIcon icon22 = QIcon(QString::fromUtf8(":/icons/icons/arrow_up.png"));
        btnAmplScaleUp->setIcon(icon22);
        btnAmplScaleUp->setDefault(false);
        btnAmplScaleUp->setFlat(true);

        gridLayout->addWidget(btnAmplScaleUp, 0, 1, 1, 1);

        btnScaleReset = new QPushButton(frameCurrentTraceLabel);
        btnScaleReset->setObjectName(QString::fromUtf8("btnScaleReset"));
        sizePolicy5.setHeightForWidth(btnScaleReset->sizePolicy().hasHeightForWidth());
        btnScaleReset->setSizePolicy(sizePolicy5);
        btnScaleReset->setMaximumSize(QSize(16, 16));
        const QIcon icon23 = QIcon(QString::fromUtf8(":/icons/icons/reload.png"));
        btnScaleReset->setIcon(icon23);
        btnScaleReset->setFlat(true);

        gridLayout->addWidget(btnScaleReset, 1, 1, 1, 1);

        btnAmplScaleDown = new QPushButton(frameCurrentTraceLabel);
        btnAmplScaleDown->setObjectName(QString::fromUtf8("btnAmplScaleDown"));
        sizePolicy5.setHeightForWidth(btnAmplScaleDown->sizePolicy().hasHeightForWidth());
        btnAmplScaleDown->setSizePolicy(sizePolicy5);
        btnAmplScaleDown->setMaximumSize(QSize(16, 16));
        const QIcon icon24 = QIcon(QString::fromUtf8(":/icons/icons/arrow_down.png"));
        btnAmplScaleDown->setIcon(icon24);
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
        btnRowAccept = new QPushButton(frameCurrentTraceLabel);
        btnRowAccept->setObjectName(QString::fromUtf8("btnRowAccept"));
        sizePolicy5.setHeightForWidth(btnRowAccept->sizePolicy().hasHeightForWidth());
        btnRowAccept->setSizePolicy(sizePolicy5);
        btnRowAccept->setMinimumSize(QSize(32, 32));
        btnRowAccept->setMaximumSize(QSize(32, 32));
        btnRowAccept->setIcon(icon17);
        btnRowAccept->setIconSize(QSize(24, 24));
        btnRowAccept->setCheckable(true);
        btnRowAccept->setFlat(false);

        hboxLayout3->addWidget(btnRowAccept);

        spacerItem4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem4);

        btnRowRemove = new QPushButton(frameCurrentTraceLabel);
        btnRowRemove->setObjectName(QString::fromUtf8("btnRowRemove"));
        sizePolicy5.setHeightForWidth(btnRowRemove->sizePolicy().hasHeightForWidth());
        btnRowRemove->setSizePolicy(sizePolicy5);
        btnRowRemove->setMinimumSize(QSize(32, 32));
        btnRowRemove->setMaximumSize(QSize(32, 32));
        const QIcon icon25 = QIcon(QString::fromUtf8(":/icons/icons/remove.png"));
        btnRowRemove->setIcon(icon25);
        btnRowRemove->setIconSize(QSize(24, 24));
        btnRowRemove->setCheckable(true);

        hboxLayout3->addWidget(btnRowRemove);

        spacerItem5 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem5);

        btnRowReset = new QPushButton(frameCurrentTraceLabel);
        btnRowReset->setObjectName(QString::fromUtf8("btnRowReset"));
        sizePolicy5.setHeightForWidth(btnRowReset->sizePolicy().hasHeightForWidth());
        btnRowReset->setSizePolicy(sizePolicy5);
        btnRowReset->setMinimumSize(QSize(32, 32));
        btnRowReset->setMaximumSize(QSize(32, 32));
        const QIcon icon26 = QIcon(QString::fromUtf8(":/icons/icons/erase.png"));
        btnRowReset->setIcon(icon26);
        btnRowReset->setIconSize(QSize(24, 24));

        hboxLayout3->addWidget(btnRowReset);


        vboxLayout1->addLayout(hboxLayout3);


        hboxLayout->addWidget(frameCurrentTraceLabel);

        frameCurrentTrace = new QFrame(frameZoom);
        frameCurrentTrace->setObjectName(QString::fromUtf8("frameCurrentTrace"));
        sizePolicy.setHeightForWidth(frameCurrentTrace->sizePolicy().hasHeightForWidth());
        frameCurrentTrace->setSizePolicy(sizePolicy);
        frameCurrentTrace->setFrameShape(QFrame::NoFrame);
        frameCurrentTrace->setFrameShadow(QFrame::Plain);

        hboxLayout->addWidget(frameCurrentTrace);

        splitter->addWidget(frameZoom);
        frameTraces = new QFrame(splitter);
        frameTraces->setObjectName(QString::fromUtf8("frameTraces"));
        QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frameTraces->sizePolicy().hasHeightForWidth());
        frameTraces->setSizePolicy(sizePolicy6);
        frameTraces->setFrameShape(QFrame::StyledPanel);
        frameTraces->setFrameShadow(QFrame::Plain);
        splitter->addWidget(frameTraces);

        vboxLayout->addWidget(splitter);

        AmplitudeView->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AmplitudeView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setGeometry(QRect(0, 642, 948, 21));
        AmplitudeView->setStatusBar(statusbar);
        toolBarScale = new QToolBar(AmplitudeView);
        toolBarScale->setObjectName(QString::fromUtf8("toolBarScale"));
        toolBarScale->setOrientation(Qt::Horizontal);
        toolBarScale->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarScale);
        toolBarSort = new QToolBar(AmplitudeView);
        toolBarSort->setObjectName(QString::fromUtf8("toolBarSort"));
        toolBarSort->setOrientation(Qt::Horizontal);
        toolBarSort->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarSort);
        toolBarAlign = new QToolBar(AmplitudeView);
        toolBarAlign->setObjectName(QString::fromUtf8("toolBarAlign"));
        toolBarAlign->setOrientation(Qt::Horizontal);
        toolBarAlign->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarAlign);
        toolBarComponent = new QToolBar(AmplitudeView);
        toolBarComponent->setObjectName(QString::fromUtf8("toolBarComponent"));
        toolBarComponent->setOrientation(Qt::Horizontal);
        toolBarComponent->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarComponent);
        toolBarStations = new QToolBar(AmplitudeView);
        toolBarStations->setObjectName(QString::fromUtf8("toolBarStations"));
        QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(7));
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(toolBarStations->sizePolicy().hasHeightForWidth());
        toolBarStations->setSizePolicy(sizePolicy7);
        toolBarStations->setOrientation(Qt::Horizontal);
        toolBarStations->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarStations);
        toolBarPicking = new QToolBar(AmplitudeView);
        toolBarPicking->setObjectName(QString::fromUtf8("toolBarPicking"));
        toolBarPicking->setOrientation(Qt::Horizontal);
        toolBarPicking->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarPicking);
        menuBar = new QMenuBar(AmplitudeView);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 948, 28));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuSort = new QMenu(menuView);
        menuSort->setObjectName(QString::fromUtf8("menuSort"));
        menuAlign = new QMenu(menuView);
        menuAlign->setObjectName(QString::fromUtf8("menuAlign"));
        menu_Zoomtrace = new QMenu(menuView);
        menu_Zoomtrace->setObjectName(QString::fromUtf8("menu_Zoomtrace"));
        menuTraces = new QMenu(menuView);
        menuTraces->setObjectName(QString::fromUtf8("menuTraces"));
        menuAlignArrival = new QMenu(menuTraces);
        menuAlignArrival->setObjectName(QString::fromUtf8("menuAlignArrival"));
        menuComponents = new QMenu(menuView);
        menuComponents->setObjectName(QString::fromUtf8("menuComponents"));
        menu_Navigation = new QMenu(menuBar);
        menu_Navigation->setObjectName(QString::fromUtf8("menu_Navigation"));
        menu_Locate = new QMenu(menuBar);
        menu_Locate->setObjectName(QString::fromUtf8("menu_Locate"));
        menu_Filter = new QMenu(menuBar);
        menu_Filter->setObjectName(QString::fromUtf8("menu_Filter"));
        AmplitudeView->setMenuBar(menuBar);
        toolBarFilter = new QToolBar(AmplitudeView);
        toolBarFilter->setObjectName(QString::fromUtf8("toolBarFilter"));
        toolBarFilter->setOrientation(Qt::Horizontal);
        toolBarFilter->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarFilter);
        toolBarSetup = new QToolBar(AmplitudeView);
        toolBarSetup->setObjectName(QString::fromUtf8("toolBarSetup"));
        toolBarSetup->setOrientation(Qt::Horizontal);
        toolBarSetup->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarSetup);
        toolBarComputeMagnitudes = new QToolBar(AmplitudeView);
        toolBarComputeMagnitudes->setObjectName(QString::fromUtf8("toolBarComputeMagnitudes"));
        toolBarComputeMagnitudes->setOrientation(Qt::Horizontal);
        toolBarComputeMagnitudes->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(static_cast<Qt::ToolBarArea>(4), toolBarComputeMagnitudes);

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
        toolBarAlign->addAction(actionAlignOnPArrival);
        toolBarAlign->addAction(actionAlignOnOriginTime);
        toolBarComponent->addAction(actionShowZComponent);
        toolBarComponent->addAction(actionShowNComponent);
        toolBarComponent->addAction(actionShowEComponent);
        toolBarStations->addAction(actionShowAllStations);
        toolBarStations->addAction(actionShowUsedStations);
        toolBarPicking->addAction(actionPickAmplitude);
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menu_Navigation->menuAction());
        menuBar->addAction(menu_Filter->menuAction());
        menuBar->addAction(menu_Locate->menuAction());
        menuView->addAction(actionDefaultView);
        menuView->addAction(actionShowUsedStations);
        menuView->addAction(actionShowTraceValuesInNmS);
        menuView->addSeparator();
        menuView->addAction(menu_Zoomtrace->menuAction());
        menuView->addAction(menuTraces->menuAction());
        menuView->addAction(menuComponents->menuAction());
        menuSort->addAction(actionSortByDistance);
        menuSort->addAction(actionSortAlphabetically);
        menuAlign->addAction(actionAlignOnPArrival);
        menuAlign->addAction(actionAlignOnOriginTime);
        menu_Zoomtrace->addAction(actionIncreaseAmplitudeScale);
        menu_Zoomtrace->addAction(actionDecreaseAmplitudeScale);
        menu_Zoomtrace->addAction(actionTimeScaleUp);
        menu_Zoomtrace->addAction(actionTimeScaleDown);
        menu_Zoomtrace->addSeparator();
        menu_Zoomtrace->addAction(actionClipComponentsToViewport);
        menuTraces->addAction(actionIncreaseRowHeight);
        menuTraces->addAction(actionDecreaseRowHeight);
        menuTraces->addAction(actionIncreaseRowTimescale);
        menuTraces->addAction(actionDecreaseRowTimescale);
        menuTraces->addAction(actionMaximizeAmplitudes);
        menuTraces->addSeparator();
        menuTraces->addAction(menuAlignArrival->menuAction());
        menuTraces->addAction(menuSort->menuAction());
        menuAlignArrival->addAction(actionAlignOnOriginTime);
        menuComponents->addAction(actionShowZComponent);
        menuComponents->addAction(actionShowNComponent);
        menuComponents->addAction(actionShowEComponent);
        menu_Navigation->addAction(actionScrollLeft);
        menu_Navigation->addAction(actionScrollRight);
        menu_Navigation->addAction(actionScrollFineLeft);
        menu_Navigation->addAction(actionScrollFineRight);
        menu_Locate->addAction(actionPickAmplitude);
        menu_Locate->addAction(actionDisablePicking);
        menu_Locate->addSeparator();
        menu_Locate->addAction(actionComputeMagnitudes);
        menu_Filter->addAction(actionToggleFilter);
        toolBarFilter->addAction(actionToggleFilter);
        toolBarSetup->addAction(actionRecalculateAmplitude);
        toolBarSetup->addAction(actionRecalculateAmplitudes);
        toolBarComputeMagnitudes->addAction(actionComputeMagnitudes);

        retranslateUi(AmplitudeView);

        QMetaObject::connectSlotsByName(AmplitudeView);
    } // setupUi

    void retranslateUi(QMainWindow *AmplitudeView)
    {
        AmplitudeView->setWindowTitle(QApplication::translate("AmplitudeView", "Amplitude picker", 0, QApplication::UnicodeUTF8));
        actionIncreaseAmplitudeScale->setText(QApplication::translate("AmplitudeView", "Scale amplitudes up", 0, QApplication::UnicodeUTF8));
        actionIncreaseAmplitudeScale->setIconText(QApplication::translate("AmplitudeView", "Scale amplitudes up", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionIncreaseAmplitudeScale->setToolTip(QApplication::translate("AmplitudeView", "Increase amplitude scale of current trace", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionIncreaseAmplitudeScale->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+Up", 0, QApplication::UnicodeUTF8));
        actionDecreaseAmplitudeScale->setText(QApplication::translate("AmplitudeView", "Scale amplitudes down", 0, QApplication::UnicodeUTF8));
        actionDecreaseAmplitudeScale->setIconText(QApplication::translate("AmplitudeView", "Scale amplitudes down", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDecreaseAmplitudeScale->setToolTip(QApplication::translate("AmplitudeView", "Descrease amplitude scale of current trace", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDecreaseAmplitudeScale->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+Down", 0, QApplication::UnicodeUTF8));
        actionTimeScaleUp->setText(QApplication::translate("AmplitudeView", "Increase visible timespan", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionTimeScaleUp->setToolTip(QApplication::translate("AmplitudeView", "Increase visible timespan", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionTimeScaleUp->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+Right", 0, QApplication::UnicodeUTF8));
        actionTimeScaleDown->setText(QApplication::translate("AmplitudeView", "Decrease visible timespan", 0, QApplication::UnicodeUTF8));
        actionTimeScaleDown->setIconText(QApplication::translate("AmplitudeView", "Decrease visible timespan", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionTimeScaleDown->setToolTip(QApplication::translate("AmplitudeView", "Decrease visible timespan", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionTimeScaleDown->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+Left", 0, QApplication::UnicodeUTF8));
        actionScrollLeft->setText(QApplication::translate("AmplitudeView", "Scroll left", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionScrollLeft->setToolTip(QApplication::translate("AmplitudeView", "Scroll current trace left", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionScrollLeft->setShortcut(QApplication::translate("AmplitudeView", "Shift+Left", 0, QApplication::UnicodeUTF8));
        actionScrollRight->setText(QApplication::translate("AmplitudeView", "Scroll right", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionScrollRight->setToolTip(QApplication::translate("AmplitudeView", "Scroll current trace right", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionScrollRight->setShortcut(QApplication::translate("AmplitudeView", "Shift+Right", 0, QApplication::UnicodeUTF8));
        actionSelectNextTrace->setText(QApplication::translate("AmplitudeView", "Next trace", 0, QApplication::UnicodeUTF8));
        actionSelectNextTrace->setIconText(QApplication::translate("AmplitudeView", "Next trace", 0, QApplication::UnicodeUTF8));
        actionSelectNextTrace->setShortcut(QApplication::translate("AmplitudeView", "Down", 0, QApplication::UnicodeUTF8));
        actionSelectPreviousTrace->setText(QApplication::translate("AmplitudeView", "Previous trace", 0, QApplication::UnicodeUTF8));
        actionSelectPreviousTrace->setIconText(QApplication::translate("AmplitudeView", "Previous trace", 0, QApplication::UnicodeUTF8));
        actionSelectPreviousTrace->setShortcut(QApplication::translate("AmplitudeView", "Up", 0, QApplication::UnicodeUTF8));
        actionScrollFineLeft->setText(QApplication::translate("AmplitudeView", "Scroll fine left", 0, QApplication::UnicodeUTF8));
        actionScrollFineLeft->setIconText(QApplication::translate("AmplitudeView", "Scroll fine left", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionScrollFineLeft->setToolTip(QApplication::translate("AmplitudeView", "Scroll current trace left with finer steps", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionScrollFineLeft->setShortcut(QApplication::translate("AmplitudeView", "Left", 0, QApplication::UnicodeUTF8));
        actionScrollFineRight->setText(QApplication::translate("AmplitudeView", "Scroll fine right", 0, QApplication::UnicodeUTF8));
        actionScrollFineRight->setIconText(QApplication::translate("AmplitudeView", "Scroll fine right", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionScrollFineRight->setToolTip(QApplication::translate("AmplitudeView", "Scroll current trace right with finer steps", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionScrollFineRight->setShortcut(QApplication::translate("AmplitudeView", "Right", 0, QApplication::UnicodeUTF8));
        actionIncreaseRowHeight->setText(QApplication::translate("AmplitudeView", "Increase row height", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionIncreaseRowHeight->setToolTip(QApplication::translate("AmplitudeView", "Increases the row height in traceview (Shift+Y)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionIncreaseRowHeight->setShortcut(QApplication::translate("AmplitudeView", "Shift+Y", 0, QApplication::UnicodeUTF8));
        actionDecreaseRowHeight->setText(QApplication::translate("AmplitudeView", "Decrease row height", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDecreaseRowHeight->setToolTip(QApplication::translate("AmplitudeView", "Decreases the row height in traceview (Y)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDecreaseRowHeight->setShortcut(QApplication::translate("AmplitudeView", "Y", 0, QApplication::UnicodeUTF8));
        actionIncreaseRowTimescale->setText(QApplication::translate("AmplitudeView", "Increase row timescale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionIncreaseRowTimescale->setToolTip(QApplication::translate("AmplitudeView", "Increases the timescale in traceview (>)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionIncreaseRowTimescale->setShortcut(QApplication::translate("AmplitudeView", ">", 0, QApplication::UnicodeUTF8));
        actionDecreaseRowTimescale->setText(QApplication::translate("AmplitudeView", "Decrease row timescale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDecreaseRowTimescale->setToolTip(QApplication::translate("AmplitudeView", "Decreases the timescale in traceview (<)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDecreaseRowTimescale->setShortcut(QApplication::translate("AmplitudeView", "<", 0, QApplication::UnicodeUTF8));
        actionSelectFirstRow->setText(QApplication::translate("AmplitudeView", "Select first row", 0, QApplication::UnicodeUTF8));
        actionSelectFirstRow->setShortcut(QApplication::translate("AmplitudeView", "Home", 0, QApplication::UnicodeUTF8));
        actionSelectLastRow->setText(QApplication::translate("AmplitudeView", "Select last row", 0, QApplication::UnicodeUTF8));
        actionSelectLastRow->setShortcut(QApplication::translate("AmplitudeView", "End", 0, QApplication::UnicodeUTF8));
        actionAlignOnPArrival->setText(QApplication::translate("AmplitudeView", "Align on trigger time", 0, QApplication::UnicodeUTF8));
        actionAlignOnPArrival->setIconText(QApplication::translate("AmplitudeView", "Align on trigger time", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAlignOnPArrival->setToolTip(QApplication::translate("AmplitudeView", "Align on trigger time", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAlignOnPArrival->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+1", 0, QApplication::UnicodeUTF8));
        actionAlignOnOriginTime->setText(QApplication::translate("AmplitudeView", "Align on origin time", 0, QApplication::UnicodeUTF8));
        actionAlignOnOriginTime->setIconText(QApplication::translate("AmplitudeView", "Align on origin time", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAlignOnOriginTime->setToolTip(QApplication::translate("AmplitudeView", "Align on origin time (Ctrl+0)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAlignOnOriginTime->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+0", 0, QApplication::UnicodeUTF8));
        actionDefaultView->setText(QApplication::translate("AmplitudeView", "&Default view", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDefaultView->setToolTip(QApplication::translate("AmplitudeView", "Default view (Shift+N)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDefaultView->setShortcut(QApplication::translate("AmplitudeView", "Shift+N", 0, QApplication::UnicodeUTF8));
        actionSortAlphabetically->setText(QApplication::translate("AmplitudeView", "Sort by names", 0, QApplication::UnicodeUTF8));
        actionSortAlphabetically->setIconText(QApplication::translate("AmplitudeView", "Sort by names", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSortAlphabetically->setToolTip(QApplication::translate("AmplitudeView", "Sorts the traces by name (Alt+A)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSortAlphabetically->setShortcut(QApplication::translate("AmplitudeView", "Alt+A", 0, QApplication::UnicodeUTF8));
        actionSortByDistance->setText(QApplication::translate("AmplitudeView", "Sort by distance", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSortByDistance->setToolTip(QApplication::translate("AmplitudeView", "Sort by distance (Alt+D)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSortByDistance->setShortcut(QApplication::translate("AmplitudeView", "Alt+D", 0, QApplication::UnicodeUTF8));
        actionToggleFilter->setText(QApplication::translate("AmplitudeView", "&Toggle filter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionToggleFilter->setToolTip(QApplication::translate("AmplitudeView", "Toggles using a filter before displaying the traces (F)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionToggleFilter->setShortcut(QApplication::translate("AmplitudeView", "F", 0, QApplication::UnicodeUTF8));
        actionMaximizeAmplitudes->setText(QApplication::translate("AmplitudeView", "Maximize visible amplitudes", 0, QApplication::UnicodeUTF8));
        actionMaximizeAmplitudes->setIconText(QApplication::translate("AmplitudeView", "Maximize visible amplitudes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMaximizeAmplitudes->setToolTip(QApplication::translate("AmplitudeView", "Maximize visible amplitudes (S)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionMaximizeAmplitudes->setShortcut(QApplication::translate("AmplitudeView", "S", 0, QApplication::UnicodeUTF8));
        actionComputeMagnitudes->setText(QApplication::translate("AmplitudeView", "&Apply", 0, QApplication::UnicodeUTF8));
        actionComputeMagnitudes->setIconText(QApplication::translate("AmplitudeView", "Apply", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionComputeMagnitudes->setToolTip(QApplication::translate("AmplitudeView", "Compute the magnitude and update it in the origin.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionComputeMagnitudes->setStatusTip(QApplication::translate("AmplitudeView", "Compute the magnitude and update it in the origin.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionComputeMagnitudes->setShortcut(QApplication::translate("AmplitudeView", "F5", 0, QApplication::UnicodeUTF8));
        actionShowAllStations->setText(QApplication::translate("AmplitudeView", "Add stations in range", 0, QApplication::UnicodeUTF8));
        actionShowAllStations->setIconText(QApplication::translate("AmplitudeView", "Add stations in range", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowAllStations->setToolTip(QApplication::translate("AmplitudeView", "Adds all stations next to the origin with distance lower or equal than the entered value that haven't triggered. When view mode is \"used stations only\" you won't see the new stations until leaving this mode.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowUsedStations->setText(QApplication::translate("AmplitudeView", "&Show used stations only", 0, QApplication::UnicodeUTF8));
        actionShowUsedStations->setIconText(QApplication::translate("AmplitudeView", "Used stations only", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowUsedStations->setToolTip(QApplication::translate("AmplitudeView", "Toggles between hiding unpicked and deactivated stations and showing all stations", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowZComponent->setText(QApplication::translate("AmplitudeView", "Vertical", 0, QApplication::UnicodeUTF8));
        actionShowZComponent->setIconText(QApplication::translate("AmplitudeView", "Vertical", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowZComponent->setToolTip(QApplication::translate("AmplitudeView", "Show Vertical Component (Z)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowZComponent->setShortcut(QApplication::translate("AmplitudeView", "Z", 0, QApplication::UnicodeUTF8));
        actionShowNComponent->setText(QApplication::translate("AmplitudeView", "North", 0, QApplication::UnicodeUTF8));
        actionShowNComponent->setIconText(QApplication::translate("AmplitudeView", "North", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowNComponent->setToolTip(QApplication::translate("AmplitudeView", "Show North Component (N)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowNComponent->setShortcut(QApplication::translate("AmplitudeView", "N", 0, QApplication::UnicodeUTF8));
        actionShowEComponent->setText(QApplication::translate("AmplitudeView", "East", 0, QApplication::UnicodeUTF8));
        actionShowEComponent->setIconText(QApplication::translate("AmplitudeView", "East", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowEComponent->setToolTip(QApplication::translate("AmplitudeView", "Show East Component (E)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowEComponent->setShortcut(QApplication::translate("AmplitudeView", "E", 0, QApplication::UnicodeUTF8));
        actionGotoNextMarker->setText(QApplication::translate("AmplitudeView", "Goto next marker", 0, QApplication::UnicodeUTF8));
        actionGotoNextMarker->setIconText(QApplication::translate("AmplitudeView", "Goto next marker", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGotoNextMarker->setToolTip(QApplication::translate("AmplitudeView", "Goto next marker", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionGotoNextMarker->setShortcut(QApplication::translate("AmplitudeView", "Alt+Right", 0, QApplication::UnicodeUTF8));
        actionGotoPreviousMarker->setText(QApplication::translate("AmplitudeView", "Goto previous marker", 0, QApplication::UnicodeUTF8));
        actionGotoPreviousMarker->setIconText(QApplication::translate("AmplitudeView", "Goto previous marker", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGotoPreviousMarker->setToolTip(QApplication::translate("AmplitudeView", "Goto previous marker", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionGotoPreviousMarker->setShortcut(QApplication::translate("AmplitudeView", "Alt+Left", 0, QApplication::UnicodeUTF8));
        actionSwitchFullscreen->setText(QApplication::translate("AmplitudeView", "Toggle fullscreen", 0, QApplication::UnicodeUTF8));
        actionSwitchFullscreen->setIconText(QApplication::translate("AmplitudeView", "Toggle fullscreen", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSwitchFullscreen->setToolTip(QApplication::translate("AmplitudeView", "Toggle fullscreen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSwitchFullscreen->setShortcut(QApplication::translate("AmplitudeView", "F11", 0, QApplication::UnicodeUTF8));
        actionAddStations->setText(QApplication::translate("AmplitudeView", "Add stations", 0, QApplication::UnicodeUTF8));
        actionAddStations->setShortcut(QApplication::translate("AmplitudeView", "F3", 0, QApplication::UnicodeUTF8));
        actionSearchStation->setText(QApplication::translate("AmplitudeView", "Search station", 0, QApplication::UnicodeUTF8));
        actionSearchStation->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionLimitFilterToZoomTrace->setText(QApplication::translate("AmplitudeView", "&Limit filter to zoom trace", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLimitFilterToZoomTrace->setToolTip(QApplication::translate("AmplitudeView", "Limit filter to zoom trace", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionLimitFilterToZoomTrace->setStatusTip(QApplication::translate("AmplitudeView", "Limits filtering to zoom trace. All other traces are not filtered. This is mostly used to gain performance.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionLimitFilterToZoomTrace->setShortcut(QApplication::translate("AmplitudeView", "Shift+F", 0, QApplication::UnicodeUTF8));
        actionShowTraceValuesInNmS->setText(QApplication::translate("AmplitudeView", "Show trace values in nm/s", 0, QApplication::UnicodeUTF8));
        actionClipComponentsToViewport->setText(QApplication::translate("AmplitudeView", "Clip components to viewport", 0, QApplication::UnicodeUTF8));
        actionClipComponentsToViewport->setShortcut(QApplication::translate("AmplitudeView", "C", 0, QApplication::UnicodeUTF8));
        actionCreateAmplitude->setText(QApplication::translate("AmplitudeView", "Create amplitude", 0, QApplication::UnicodeUTF8));
        actionCreateAmplitude->setIconText(QApplication::translate("AmplitudeView", "Create amplitude", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCreateAmplitude->setToolTip(QApplication::translate("AmplitudeView", "Create amplitude", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCreateAmplitude->setShortcut(QApplication::translate("AmplitudeView", "Enter", 0, QApplication::UnicodeUTF8));
        actionConfirmAmplitude->setText(QApplication::translate("AmplitudeView", "Confirm amplitude", 0, QApplication::UnicodeUTF8));
        actionConfirmAmplitude->setIconText(QApplication::translate("AmplitudeView", "Confirm amplitude", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionConfirmAmplitude->setToolTip(QApplication::translate("AmplitudeView", "Confirm amplitude", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionConfirmAmplitude->setShortcut(QApplication::translate("AmplitudeView", "Shift+Return", 0, QApplication::UnicodeUTF8));
        actionDeleteAmplitude->setText(QApplication::translate("AmplitudeView", "Delete amplitude", 0, QApplication::UnicodeUTF8));
        actionDeleteAmplitude->setIconText(QApplication::translate("AmplitudeView", "Delete amplitude", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDeleteAmplitude->setToolTip(QApplication::translate("AmplitudeView", "Delete amplitude (Del)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDeleteAmplitude->setShortcut(QApplication::translate("AmplitudeView", "Del", 0, QApplication::UnicodeUTF8));
        actionDisablePicking->setText(QApplication::translate("AmplitudeView", "Leave picking mode", 0, QApplication::UnicodeUTF8));
        actionDisablePicking->setIconText(QApplication::translate("AmplitudeView", "Leave picking mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDisablePicking->setToolTip(QApplication::translate("AmplitudeView", "Leave picking mode (Esc)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDisablePicking->setShortcut(QApplication::translate("AmplitudeView", "Esc", 0, QApplication::UnicodeUTF8));
        actionRecalculateAmplitudes->setText(QApplication::translate("AmplitudeView", "Recalculate all amplitudes", 0, QApplication::UnicodeUTF8));
        actionRecalculateAmplitudes->setIconText(QApplication::translate("AmplitudeView", "Recalculate all amplitudes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRecalculateAmplitudes->setToolTip(QApplication::translate("AmplitudeView", "Recalculate all amplitudes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRecalculateAmplitudes->setShortcut(QApplication::translate("AmplitudeView", "Shift+R", 0, QApplication::UnicodeUTF8));
        actionPickAmplitude->setText(QApplication::translate("AmplitudeView", "Pick amplitudes", 0, QApplication::UnicodeUTF8));
        actionPickAmplitude->setIconText(QApplication::translate("AmplitudeView", "Pick amplitudes", 0, QApplication::UnicodeUTF8));
        actionPickAmplitude->setShortcut(QApplication::translate("AmplitudeView", "1", 0, QApplication::UnicodeUTF8));
        actionRecalculateAmplitude->setText(QApplication::translate("AmplitudeView", "Recalculate amplitude of selected waveform", 0, QApplication::UnicodeUTF8));
        actionRecalculateAmplitude->setIconText(QApplication::translate("AmplitudeView", "Recalculate amplitude of selected waveform", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRecalculateAmplitude->setToolTip(QApplication::translate("AmplitudeView", "Recalculate amplitude of selected waveform", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRecalculateAmplitude->setShortcut(QApplication::translate("AmplitudeView", "R", 0, QApplication::UnicodeUTF8));
        actionSetAmplitude->setText(QApplication::translate("AmplitudeView", "Set amplitude", 0, QApplication::UnicodeUTF8));
        actionSetAmplitude->setShortcut(QApplication::translate("AmplitudeView", "Space", 0, QApplication::UnicodeUTF8));
        labelStationCode->setText(QApplication::translate("AmplitudeView", "ABCD", 0, QApplication::UnicodeUTF8));
        labelCode->setText(QApplication::translate("AmplitudeView", "AB  BHZ", 0, QApplication::UnicodeUTF8));
        labelDistanceName->setText(QApplication::translate("AmplitudeView", "D:", 0, QApplication::UnicodeUTF8));
        labelAzimuthName->setText(QApplication::translate("AmplitudeView", "A:", 0, QApplication::UnicodeUTF8));
        labelDistance->setText(QApplication::translate("AmplitudeView", "12\303\202\302\260", 0, QApplication::UnicodeUTF8));
        labelAzimuth->setText(QApplication::translate("AmplitudeView", "314\303\202\302\260", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnTimeScaleDown->setToolTip(QApplication::translate("AmplitudeView", "Increase visible timespan", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnTimeScaleDown->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnTimeScaleUp->setToolTip(QApplication::translate("AmplitudeView", "Decrease visible timespan", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnTimeScaleUp->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnAmplScaleUp->setToolTip(QApplication::translate("AmplitudeView", "Scale amplitudes up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAmplScaleUp->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnScaleReset->setToolTip(QApplication::translate("AmplitudeView", "Reset timespan and amplitude scale", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnScaleReset->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnAmplScaleDown->setToolTip(QApplication::translate("AmplitudeView", "Scale amplitudes down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAmplScaleDown->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRowAccept->setToolTip(QApplication::translate("AmplitudeView", "Accept amplitude", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRowAccept->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRowRemove->setToolTip(QApplication::translate("AmplitudeView", "Deactivate current amplitude or trace depending on the picking mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRowRemove->setText(QString());
        btnRowRemove->setShortcut(QApplication::translate("AmplitudeView", "X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnRowReset->setToolTip(QApplication::translate("AmplitudeView", "Reset automatic amplitudes and remove manual amplitudes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRowReset->setText(QString());
        toolBarScale->setWindowTitle(QApplication::translate("AmplitudeView", "Zooming", 0, QApplication::UnicodeUTF8));
        toolBarSort->setWindowTitle(QApplication::translate("AmplitudeView", "Sort", 0, QApplication::UnicodeUTF8));
        toolBarAlign->setWindowTitle(QApplication::translate("AmplitudeView", "Alignment", 0, QApplication::UnicodeUTF8));
        toolBarComponent->setWindowTitle(QApplication::translate("AmplitudeView", "Components", 0, QApplication::UnicodeUTF8));
        toolBarStations->setWindowTitle(QApplication::translate("AmplitudeView", "Add stations", 0, QApplication::UnicodeUTF8));
        toolBarPicking->setWindowTitle(QApplication::translate("AmplitudeView", "Picking", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("AmplitudeView", "&View", 0, QApplication::UnicodeUTF8));
        menuSort->setTitle(QApplication::translate("AmplitudeView", "&Sort", 0, QApplication::UnicodeUTF8));
        menuAlign->setTitle(QApplication::translate("AmplitudeView", "Align", 0, QApplication::UnicodeUTF8));
        menu_Zoomtrace->setTitle(QApplication::translate("AmplitudeView", "&Zoomtrace", 0, QApplication::UnicodeUTF8));
        menuTraces->setTitle(QApplication::translate("AmplitudeView", "&Traces", 0, QApplication::UnicodeUTF8));
        menuAlignArrival->setTitle(QApplication::translate("AmplitudeView", "Align", 0, QApplication::UnicodeUTF8));
        menuComponents->setTitle(QApplication::translate("AmplitudeView", "&Components", 0, QApplication::UnicodeUTF8));
        menu_Navigation->setTitle(QApplication::translate("AmplitudeView", "&Navigation", 0, QApplication::UnicodeUTF8));
        menu_Locate->setTitle(QApplication::translate("AmplitudeView", "&Amplitudes", 0, QApplication::UnicodeUTF8));
        menu_Filter->setTitle(QApplication::translate("AmplitudeView", "&Filter", 0, QApplication::UnicodeUTF8));
        toolBarSetup->setWindowTitle(QApplication::translate("AmplitudeView", "Calculate", 0, QApplication::UnicodeUTF8));
        toolBarComputeMagnitudes->setWindowTitle(QApplication::translate("AmplitudeView", "Apply", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AmplitudeView: public Ui_AmplitudeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPLITUDEVIEW_H
