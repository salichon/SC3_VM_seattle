/********************************************************************************
** Form generated from reading UI file 'pickersettings.ui'
**
** Created: Thu Jan 23 14:38:33 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKERSETTINGS_H
#define UI_PICKERSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableView>
#include <QtGui/QTimeEdit>
#include <QtGui/QToolBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PickerSettings
{
public:
    QVBoxLayout *vboxLayout;
    QToolBox *toolBox;
    QWidget *pageLocator;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *label_4;
    QDoubleSpinBox *spinPVel;
    QLabel *label_6;
    QSpacerItem *spacerItem;
    QFrame *line_2;
    QCheckBox *cbComputeMagnitudesAfterRelocate;
    QHBoxLayout *hboxLayout1;
    QCheckBox *cbComputeMagnitudesSilently;
    QCheckBox *cbComputeMissingTakeOffAngles;
    QCheckBox *cbPlotGridlines;
    QFrame *line_4;
    QHBoxLayout *hboxLayout2;
    QLabel *label_5;
    QLineEdit *editRecordSource;
    QHBoxLayout *hboxLayout3;
    QLabel *label_9;
    QDoubleSpinBox *spinAddStationsDistance;
    QLabel *labelDefaultDistanceUnit;
    QSpacerItem *spacerItem1;
    QCheckBox *cbHideStationsWithoutData;
    QSpacerItem *spacerItem2;
    QWidget *pagePickSettings;
    QVBoxLayout *vboxLayout2;
    QCheckBox *cbShowCrossHair;
    QHBoxLayout *hboxLayout4;
    QLabel *labelPickUncertainties;
    QComboBox *listPickUncertainties;
    QSpacerItem *spacerItem3;
    QFrame *line_5;
    QVBoxLayout *vboxLayout3;
    QCheckBox *cbAllComponents;
    QCheckBox *cbLoadAllPicks;
    QCheckBox *cbStrongMotion;
    QHBoxLayout *hboxLayout5;
    QCheckBox *cbLimitStationCount;
    QSpinBox *spinLimitStationCount;
    QLabel *labelLimitStations;
    QSpacerItem *spacerItem4;
    QCheckBox *cbShowAllComponents;
    QFrame *frameMaximumDistance;
    QHBoxLayout *hboxLayout6;
    QSpacerItem *spacerItem5;
    QLabel *label_7;
    QDoubleSpinBox *maximumDistanceEdit;
    QLabel *label_8;
    QSpacerItem *spacerItem6;
    QCheckBox *cbRemoveAllAutomaticStationPicks;
    QLabel *labelRemoveStationPicksInfo;
    QCheckBox *cbRemoveAllAutomaticPicks;
    QLabel *labelRemoveAllPicksInfo;
    QFrame *line_3;
    QVBoxLayout *vboxLayout4;
    QCheckBox *cbUsePerStreamTimeWindow;
    QLabel *label;
    QHBoxLayout *hboxLayout7;
    QSpacerItem *spacerItem7;
    QSlider *slPreOffset;
    QTimeEdit *preTimeEdit;
    QLabel *label_2;
    QHBoxLayout *hboxLayout8;
    QSpacerItem *spacerItem8;
    QSlider *slPostOffset;
    QTimeEdit *postTimeEdit;
    QLabel *label_3;
    QHBoxLayout *hboxLayout9;
    QSpacerItem *spacerItem9;
    QSlider *slMinimumLength;
    QTimeEdit *minimumLengthTimeEdit;
    QSpacerItem *spacerItem10;
    QWidget *pagePickFilters;
    QHBoxLayout *hboxLayout10;
    QTableView *tableFilter;
    QVBoxLayout *vboxLayout5;
    QPushButton *btnAddPickFilter;
    QPushButton *btnRemovePickFilter;
    QSpacerItem *spacerItem11;
    QPushButton *btnMovePickFilterUp;
    QPushButton *btnMovePickFilterDown;
    QWidget *pageAmplitudeSettings;
    QVBoxLayout *vboxLayout6;
    QLabel *label_11;
    QHBoxLayout *hboxLayout11;
    QSpacerItem *spacerItem12;
    QSlider *slAmplitudePreOffset;
    QTimeEdit *preAmplitudeTimeEdit;
    QLabel *label_12;
    QHBoxLayout *hboxLayout12;
    QSpacerItem *spacerItem13;
    QSlider *slAmplitudePostOffset;
    QTimeEdit *postAmplitudeTimeEdit;
    QSpacerItem *spacerItem14;
    QWidget *pageAmplitudeFilters;
    QHBoxLayout *hboxLayout13;
    QTableView *tableAFilter;
    QVBoxLayout *vboxLayout7;
    QPushButton *btnAddAmplitudeFilter;
    QPushButton *btnRemoveAmplitudeFilter;
    QSpacerItem *spacerItem15;
    QPushButton *btnMoveAmplitudeFilterUp;
    QPushButton *btnMoveAmplitudeFilterDown;
    QHBoxLayout *hboxLayout14;
    QPushButton *saveButton;
    QSpacerItem *spacerItem16;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *PickerSettings)
    {
        if (PickerSettings->objectName().isEmpty())
            PickerSettings->setObjectName(QString::fromUtf8("PickerSettings"));
        PickerSettings->resize(359, 513);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(4));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PickerSettings->sizePolicy().hasHeightForWidth());
        PickerSettings->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(PickerSettings);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        toolBox = new QToolBox(PickerSettings);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        pageLocator = new QWidget();
        pageLocator->setObjectName(QString::fromUtf8("pageLocator"));
        pageLocator->setGeometry(QRect(0, 0, 341, 311));
        pageLocator->setAutoFillBackground(true);
        vboxLayout1 = new QVBoxLayout(pageLocator);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_4 = new QLabel(pageLocator);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hboxLayout->addWidget(label_4);

        spinPVel = new QDoubleSpinBox(pageLocator);
        spinPVel->setObjectName(QString::fromUtf8("spinPVel"));
        spinPVel->setMinimum(0.1);
        spinPVel->setSingleStep(0.5);
        spinPVel->setValue(6);

        hboxLayout->addWidget(spinPVel);

        label_6 = new QLabel(pageLocator);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        hboxLayout->addWidget(label_6);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout);

        line_2 = new QFrame(pageLocator);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(line_2);

        cbComputeMagnitudesAfterRelocate = new QCheckBox(pageLocator);
        cbComputeMagnitudesAfterRelocate->setObjectName(QString::fromUtf8("cbComputeMagnitudesAfterRelocate"));

        vboxLayout1->addWidget(cbComputeMagnitudesAfterRelocate);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        cbComputeMagnitudesSilently = new QCheckBox(pageLocator);
        cbComputeMagnitudesSilently->setObjectName(QString::fromUtf8("cbComputeMagnitudesSilently"));

        hboxLayout1->addWidget(cbComputeMagnitudesSilently);


        vboxLayout1->addLayout(hboxLayout1);

        cbComputeMissingTakeOffAngles = new QCheckBox(pageLocator);
        cbComputeMissingTakeOffAngles->setObjectName(QString::fromUtf8("cbComputeMissingTakeOffAngles"));

        vboxLayout1->addWidget(cbComputeMissingTakeOffAngles);

        cbPlotGridlines = new QCheckBox(pageLocator);
        cbPlotGridlines->setObjectName(QString::fromUtf8("cbPlotGridlines"));

        vboxLayout1->addWidget(cbPlotGridlines);

        line_4 = new QFrame(pageLocator);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(line_4);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_5 = new QLabel(pageLocator);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        hboxLayout2->addWidget(label_5);

        editRecordSource = new QLineEdit(pageLocator);
        editRecordSource->setObjectName(QString::fromUtf8("editRecordSource"));

        hboxLayout2->addWidget(editRecordSource);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        label_9 = new QLabel(pageLocator);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        hboxLayout3->addWidget(label_9);

        spinAddStationsDistance = new QDoubleSpinBox(pageLocator);
        spinAddStationsDistance->setObjectName(QString::fromUtf8("spinAddStationsDistance"));
        spinAddStationsDistance->setMaximum(180);
        spinAddStationsDistance->setValue(15);

        hboxLayout3->addWidget(spinAddStationsDistance);

        labelDefaultDistanceUnit = new QLabel(pageLocator);
        labelDefaultDistanceUnit->setObjectName(QString::fromUtf8("labelDefaultDistanceUnit"));

        hboxLayout3->addWidget(labelDefaultDistanceUnit);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem1);


        vboxLayout1->addLayout(hboxLayout3);

        cbHideStationsWithoutData = new QCheckBox(pageLocator);
        cbHideStationsWithoutData->setObjectName(QString::fromUtf8("cbHideStationsWithoutData"));

        vboxLayout1->addWidget(cbHideStationsWithoutData);

        spacerItem2 = new QSpacerItem(20, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem2);

        toolBox->addItem(pageLocator, QString::fromUtf8("Global settings"));
        pagePickSettings = new QWidget();
        pagePickSettings->setObjectName(QString::fromUtf8("pagePickSettings"));
        pagePickSettings->setGeometry(QRect(0, 0, 96, 26));
        pagePickSettings->setAutoFillBackground(true);
        vboxLayout2 = new QVBoxLayout(pagePickSettings);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        cbShowCrossHair = new QCheckBox(pagePickSettings);
        cbShowCrossHair->setObjectName(QString::fromUtf8("cbShowCrossHair"));

        vboxLayout2->addWidget(cbShowCrossHair);

        hboxLayout4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        labelPickUncertainties = new QLabel(pagePickSettings);
        labelPickUncertainties->setObjectName(QString::fromUtf8("labelPickUncertainties"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelPickUncertainties->sizePolicy().hasHeightForWidth());
        labelPickUncertainties->setSizePolicy(sizePolicy1);

        hboxLayout4->addWidget(labelPickUncertainties);

        listPickUncertainties = new QComboBox(pagePickSettings);
        listPickUncertainties->setObjectName(QString::fromUtf8("listPickUncertainties"));

        hboxLayout4->addWidget(listPickUncertainties);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem3);


        vboxLayout2->addLayout(hboxLayout4);

        line_5 = new QFrame(pagePickSettings);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        vboxLayout2->addWidget(line_5);

        vboxLayout3 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        cbAllComponents = new QCheckBox(pagePickSettings);
        cbAllComponents->setObjectName(QString::fromUtf8("cbAllComponents"));

        vboxLayout3->addWidget(cbAllComponents);

        cbLoadAllPicks = new QCheckBox(pagePickSettings);
        cbLoadAllPicks->setObjectName(QString::fromUtf8("cbLoadAllPicks"));

        vboxLayout3->addWidget(cbLoadAllPicks);

        cbStrongMotion = new QCheckBox(pagePickSettings);
        cbStrongMotion->setObjectName(QString::fromUtf8("cbStrongMotion"));

        vboxLayout3->addWidget(cbStrongMotion);

        hboxLayout5 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout5->setSpacing(6);
#endif
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        cbLimitStationCount = new QCheckBox(pagePickSettings);
        cbLimitStationCount->setObjectName(QString::fromUtf8("cbLimitStationCount"));

        hboxLayout5->addWidget(cbLimitStationCount);

        spinLimitStationCount = new QSpinBox(pagePickSettings);
        spinLimitStationCount->setObjectName(QString::fromUtf8("spinLimitStationCount"));
        spinLimitStationCount->setMaximum(1000000);
        spinLimitStationCount->setValue(10);

        hboxLayout5->addWidget(spinLimitStationCount);

        labelLimitStations = new QLabel(pagePickSettings);
        labelLimitStations->setObjectName(QString::fromUtf8("labelLimitStations"));

        hboxLayout5->addWidget(labelLimitStations);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem4);


        vboxLayout3->addLayout(hboxLayout5);

        cbShowAllComponents = new QCheckBox(pagePickSettings);
        cbShowAllComponents->setObjectName(QString::fromUtf8("cbShowAllComponents"));

        vboxLayout3->addWidget(cbShowAllComponents);

        frameMaximumDistance = new QFrame(pagePickSettings);
        frameMaximumDistance->setObjectName(QString::fromUtf8("frameMaximumDistance"));
        frameMaximumDistance->setFrameShape(QFrame::NoFrame);
        frameMaximumDistance->setFrameShadow(QFrame::Raised);
        hboxLayout6 = new QHBoxLayout(frameMaximumDistance);
#ifndef Q_OS_MAC
        hboxLayout6->setSpacing(6);
#endif
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        spacerItem5 = new QSpacerItem(16, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem5);

        label_7 = new QLabel(frameMaximumDistance);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        hboxLayout6->addWidget(label_7);

        maximumDistanceEdit = new QDoubleSpinBox(frameMaximumDistance);
        maximumDistanceEdit->setObjectName(QString::fromUtf8("maximumDistanceEdit"));
        maximumDistanceEdit->setMaximum(360);
        maximumDistanceEdit->setValue(10);

        hboxLayout6->addWidget(maximumDistanceEdit);

        label_8 = new QLabel(frameMaximumDistance);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        hboxLayout6->addWidget(label_8);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem6);


        vboxLayout3->addWidget(frameMaximumDistance);

        cbRemoveAllAutomaticStationPicks = new QCheckBox(pagePickSettings);
        cbRemoveAllAutomaticStationPicks->setObjectName(QString::fromUtf8("cbRemoveAllAutomaticStationPicks"));

        vboxLayout3->addWidget(cbRemoveAllAutomaticStationPicks);

        labelRemoveStationPicksInfo = new QLabel(pagePickSettings);
        labelRemoveStationPicksInfo->setObjectName(QString::fromUtf8("labelRemoveStationPicksInfo"));
        labelRemoveStationPicksInfo->setWordWrap(true);
        labelRemoveStationPicksInfo->setIndent(22);

        vboxLayout3->addWidget(labelRemoveStationPicksInfo);

        cbRemoveAllAutomaticPicks = new QCheckBox(pagePickSettings);
        cbRemoveAllAutomaticPicks->setObjectName(QString::fromUtf8("cbRemoveAllAutomaticPicks"));

        vboxLayout3->addWidget(cbRemoveAllAutomaticPicks);

        labelRemoveAllPicksInfo = new QLabel(pagePickSettings);
        labelRemoveAllPicksInfo->setObjectName(QString::fromUtf8("labelRemoveAllPicksInfo"));
        labelRemoveAllPicksInfo->setWordWrap(true);
        labelRemoveAllPicksInfo->setIndent(20);

        vboxLayout3->addWidget(labelRemoveAllPicksInfo);


        vboxLayout2->addLayout(vboxLayout3);

        line_3 = new QFrame(pagePickSettings);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        vboxLayout2->addWidget(line_3);

        vboxLayout4 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        cbUsePerStreamTimeWindow = new QCheckBox(pagePickSettings);
        cbUsePerStreamTimeWindow->setObjectName(QString::fromUtf8("cbUsePerStreamTimeWindow"));

        vboxLayout4->addWidget(cbUsePerStreamTimeWindow);

        label = new QLabel(pagePickSettings);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout4->addWidget(label);

        hboxLayout7 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout7->setSpacing(6);
#endif
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        spacerItem7 = new QSpacerItem(16, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem7);

        slPreOffset = new QSlider(pagePickSettings);
        slPreOffset->setObjectName(QString::fromUtf8("slPreOffset"));
        slPreOffset->setMaximum(60);
        slPreOffset->setSliderPosition(1);
        slPreOffset->setOrientation(Qt::Horizontal);

        hboxLayout7->addWidget(slPreOffset);

        preTimeEdit = new QTimeEdit(pagePickSettings);
        preTimeEdit->setObjectName(QString::fromUtf8("preTimeEdit"));
        preTimeEdit->setFrame(true);
        preTimeEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        preTimeEdit->setTime(QTime(0, 1, 0));
        preTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);

        hboxLayout7->addWidget(preTimeEdit);


        vboxLayout4->addLayout(hboxLayout7);

        label_2 = new QLabel(pagePickSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        vboxLayout4->addWidget(label_2);

        hboxLayout8 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout8->setSpacing(6);
#endif
        hboxLayout8->setContentsMargins(0, 0, 0, 0);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        spacerItem8 = new QSpacerItem(16, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem8);

        slPostOffset = new QSlider(pagePickSettings);
        slPostOffset->setObjectName(QString::fromUtf8("slPostOffset"));
        slPostOffset->setMaximum(60);
        slPostOffset->setSliderPosition(2);
        slPostOffset->setOrientation(Qt::Horizontal);

        hboxLayout8->addWidget(slPostOffset);

        postTimeEdit = new QTimeEdit(pagePickSettings);
        postTimeEdit->setObjectName(QString::fromUtf8("postTimeEdit"));
        postTimeEdit->setFrame(true);
        postTimeEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        postTimeEdit->setTime(QTime(0, 2, 0));
        postTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);

        hboxLayout8->addWidget(postTimeEdit);


        vboxLayout4->addLayout(hboxLayout8);

        label_3 = new QLabel(pagePickSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        vboxLayout4->addWidget(label_3);

        hboxLayout9 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout9->setSpacing(6);
#endif
        hboxLayout9->setContentsMargins(0, 0, 0, 0);
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        spacerItem9 = new QSpacerItem(16, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem9);

        slMinimumLength = new QSlider(pagePickSettings);
        slMinimumLength->setObjectName(QString::fromUtf8("slMinimumLength"));
        slMinimumLength->setMaximum(60);
        slMinimumLength->setValue(30);
        slMinimumLength->setSliderPosition(30);
        slMinimumLength->setOrientation(Qt::Horizontal);

        hboxLayout9->addWidget(slMinimumLength);

        minimumLengthTimeEdit = new QTimeEdit(pagePickSettings);
        minimumLengthTimeEdit->setObjectName(QString::fromUtf8("minimumLengthTimeEdit"));
        minimumLengthTimeEdit->setFrame(true);
        minimumLengthTimeEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        minimumLengthTimeEdit->setTime(QTime(0, 30, 0));
        minimumLengthTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);

        hboxLayout9->addWidget(minimumLengthTimeEdit);


        vboxLayout4->addLayout(hboxLayout9);


        vboxLayout2->addLayout(vboxLayout4);

        spacerItem10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem10);

        toolBox->addItem(pagePickSettings, QString::fromUtf8("Picker settings"));
        pagePickFilters = new QWidget();
        pagePickFilters->setObjectName(QString::fromUtf8("pagePickFilters"));
        pagePickFilters->setGeometry(QRect(0, 0, 96, 26));
        pagePickFilters->setAutoFillBackground(true);
        hboxLayout10 = new QHBoxLayout(pagePickFilters);
#ifndef Q_OS_MAC
        hboxLayout10->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout10->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        tableFilter = new QTableView(pagePickFilters);
        tableFilter->setObjectName(QString::fromUtf8("tableFilter"));
        tableFilter->setAlternatingRowColors(true);
        tableFilter->setSelectionMode(QAbstractItemView::SingleSelection);

        hboxLayout10->addWidget(tableFilter);

        vboxLayout5 = new QVBoxLayout();
        vboxLayout5->setSpacing(2);
        vboxLayout5->setContentsMargins(0, 0, 0, 0);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        btnAddPickFilter = new QPushButton(pagePickFilters);
        btnAddPickFilter->setObjectName(QString::fromUtf8("btnAddPickFilter"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnAddPickFilter->sizePolicy().hasHeightForWidth());
        btnAddPickFilter->setSizePolicy(sizePolicy2);
        btnAddPickFilter->setMaximumSize(QSize(20, 20));

        vboxLayout5->addWidget(btnAddPickFilter);

        btnRemovePickFilter = new QPushButton(pagePickFilters);
        btnRemovePickFilter->setObjectName(QString::fromUtf8("btnRemovePickFilter"));
        sizePolicy2.setHeightForWidth(btnRemovePickFilter->sizePolicy().hasHeightForWidth());
        btnRemovePickFilter->setSizePolicy(sizePolicy2);
        btnRemovePickFilter->setMaximumSize(QSize(20, 20));

        vboxLayout5->addWidget(btnRemovePickFilter);

        spacerItem11 = new QSpacerItem(10, 131, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(spacerItem11);

        btnMovePickFilterUp = new QPushButton(pagePickFilters);
        btnMovePickFilterUp->setObjectName(QString::fromUtf8("btnMovePickFilterUp"));
        btnMovePickFilterUp->setMaximumSize(QSize(20, 20));
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/icons/arrow_up.png"));
        btnMovePickFilterUp->setIcon(icon);
        btnMovePickFilterUp->setIconSize(QSize(12, 12));
        btnMovePickFilterUp->setDefault(false);
        btnMovePickFilterUp->setFlat(false);

        vboxLayout5->addWidget(btnMovePickFilterUp);

        btnMovePickFilterDown = new QPushButton(pagePickFilters);
        btnMovePickFilterDown->setObjectName(QString::fromUtf8("btnMovePickFilterDown"));
        btnMovePickFilterDown->setMaximumSize(QSize(20, 20));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/icons/arrow_down.png"));
        btnMovePickFilterDown->setIcon(icon1);
        btnMovePickFilterDown->setIconSize(QSize(12, 12));
        btnMovePickFilterDown->setFlat(false);

        vboxLayout5->addWidget(btnMovePickFilterDown);


        hboxLayout10->addLayout(vboxLayout5);

        toolBox->addItem(pagePickFilters, QString::fromUtf8("Picker filters"));
        pageAmplitudeSettings = new QWidget();
        pageAmplitudeSettings->setObjectName(QString::fromUtf8("pageAmplitudeSettings"));
        pageAmplitudeSettings->setGeometry(QRect(0, 0, 96, 26));
        vboxLayout6 = new QVBoxLayout(pageAmplitudeSettings);
#ifndef Q_OS_MAC
        vboxLayout6->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout6->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        label_11 = new QLabel(pageAmplitudeSettings);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        vboxLayout6->addWidget(label_11);

        hboxLayout11 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout11->setSpacing(6);
#endif
        hboxLayout11->setContentsMargins(0, 0, 0, 0);
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        spacerItem12 = new QSpacerItem(16, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout11->addItem(spacerItem12);

        slAmplitudePreOffset = new QSlider(pageAmplitudeSettings);
        slAmplitudePreOffset->setObjectName(QString::fromUtf8("slAmplitudePreOffset"));
        slAmplitudePreOffset->setMaximum(60);
        slAmplitudePreOffset->setSliderPosition(1);
        slAmplitudePreOffset->setOrientation(Qt::Horizontal);

        hboxLayout11->addWidget(slAmplitudePreOffset);

        preAmplitudeTimeEdit = new QTimeEdit(pageAmplitudeSettings);
        preAmplitudeTimeEdit->setObjectName(QString::fromUtf8("preAmplitudeTimeEdit"));
        preAmplitudeTimeEdit->setFrame(true);
        preAmplitudeTimeEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        preAmplitudeTimeEdit->setTime(QTime(0, 5, 0));
        preAmplitudeTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);

        hboxLayout11->addWidget(preAmplitudeTimeEdit);


        vboxLayout6->addLayout(hboxLayout11);

        label_12 = new QLabel(pageAmplitudeSettings);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        vboxLayout6->addWidget(label_12);

        hboxLayout12 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout12->setSpacing(6);
#endif
        hboxLayout12->setContentsMargins(0, 0, 0, 0);
        hboxLayout12->setObjectName(QString::fromUtf8("hboxLayout12"));
        spacerItem13 = new QSpacerItem(16, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout12->addItem(spacerItem13);

        slAmplitudePostOffset = new QSlider(pageAmplitudeSettings);
        slAmplitudePostOffset->setObjectName(QString::fromUtf8("slAmplitudePostOffset"));
        slAmplitudePostOffset->setMaximum(60);
        slAmplitudePostOffset->setSliderPosition(2);
        slAmplitudePostOffset->setOrientation(Qt::Horizontal);

        hboxLayout12->addWidget(slAmplitudePostOffset);

        postAmplitudeTimeEdit = new QTimeEdit(pageAmplitudeSettings);
        postAmplitudeTimeEdit->setObjectName(QString::fromUtf8("postAmplitudeTimeEdit"));
        postAmplitudeTimeEdit->setFrame(true);
        postAmplitudeTimeEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        postAmplitudeTimeEdit->setTime(QTime(0, 5, 0));
        postAmplitudeTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);

        hboxLayout12->addWidget(postAmplitudeTimeEdit);


        vboxLayout6->addLayout(hboxLayout12);

        spacerItem14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout6->addItem(spacerItem14);

        toolBox->addItem(pageAmplitudeSettings, QString::fromUtf8("Amplitude settings"));
        pageAmplitudeFilters = new QWidget();
        pageAmplitudeFilters->setObjectName(QString::fromUtf8("pageAmplitudeFilters"));
        pageAmplitudeFilters->setGeometry(QRect(0, 0, 96, 26));
        hboxLayout13 = new QHBoxLayout(pageAmplitudeFilters);
#ifndef Q_OS_MAC
        hboxLayout13->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout13->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout13->setObjectName(QString::fromUtf8("hboxLayout13"));
        tableAFilter = new QTableView(pageAmplitudeFilters);
        tableAFilter->setObjectName(QString::fromUtf8("tableAFilter"));

        hboxLayout13->addWidget(tableAFilter);

        vboxLayout7 = new QVBoxLayout();
        vboxLayout7->setSpacing(2);
        vboxLayout7->setContentsMargins(0, 0, 0, 0);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        btnAddAmplitudeFilter = new QPushButton(pageAmplitudeFilters);
        btnAddAmplitudeFilter->setObjectName(QString::fromUtf8("btnAddAmplitudeFilter"));
        sizePolicy2.setHeightForWidth(btnAddAmplitudeFilter->sizePolicy().hasHeightForWidth());
        btnAddAmplitudeFilter->setSizePolicy(sizePolicy2);
        btnAddAmplitudeFilter->setMaximumSize(QSize(20, 20));

        vboxLayout7->addWidget(btnAddAmplitudeFilter);

        btnRemoveAmplitudeFilter = new QPushButton(pageAmplitudeFilters);
        btnRemoveAmplitudeFilter->setObjectName(QString::fromUtf8("btnRemoveAmplitudeFilter"));
        sizePolicy2.setHeightForWidth(btnRemoveAmplitudeFilter->sizePolicy().hasHeightForWidth());
        btnRemoveAmplitudeFilter->setSizePolicy(sizePolicy2);
        btnRemoveAmplitudeFilter->setMaximumSize(QSize(20, 20));

        vboxLayout7->addWidget(btnRemoveAmplitudeFilter);

        spacerItem15 = new QSpacerItem(10, 131, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout7->addItem(spacerItem15);

        btnMoveAmplitudeFilterUp = new QPushButton(pageAmplitudeFilters);
        btnMoveAmplitudeFilterUp->setObjectName(QString::fromUtf8("btnMoveAmplitudeFilterUp"));
        btnMoveAmplitudeFilterUp->setMaximumSize(QSize(20, 20));
        btnMoveAmplitudeFilterUp->setIcon(icon);
        btnMoveAmplitudeFilterUp->setIconSize(QSize(12, 12));
        btnMoveAmplitudeFilterUp->setDefault(false);
        btnMoveAmplitudeFilterUp->setFlat(false);

        vboxLayout7->addWidget(btnMoveAmplitudeFilterUp);

        btnMoveAmplitudeFilterDown = new QPushButton(pageAmplitudeFilters);
        btnMoveAmplitudeFilterDown->setObjectName(QString::fromUtf8("btnMoveAmplitudeFilterDown"));
        btnMoveAmplitudeFilterDown->setMaximumSize(QSize(20, 20));
        btnMoveAmplitudeFilterDown->setIcon(icon1);
        btnMoveAmplitudeFilterDown->setIconSize(QSize(12, 12));
        btnMoveAmplitudeFilterDown->setFlat(false);

        vboxLayout7->addWidget(btnMoveAmplitudeFilterDown);


        hboxLayout13->addLayout(vboxLayout7);

        toolBox->addItem(pageAmplitudeFilters, QString::fromUtf8("Amplitude filters"));

        vboxLayout->addWidget(toolBox);

        hboxLayout14 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout14->setSpacing(6);
#endif
        hboxLayout14->setContentsMargins(0, 0, 0, 0);
        hboxLayout14->setObjectName(QString::fromUtf8("hboxLayout14"));
        saveButton = new QPushButton(PickerSettings);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        hboxLayout14->addWidget(saveButton);

        spacerItem16 = new QSpacerItem(115, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout14->addItem(spacerItem16);

        okButton = new QPushButton(PickerSettings);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout14->addWidget(okButton);

        cancelButton = new QPushButton(PickerSettings);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout14->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout14);

        QWidget::setTabOrder(spinPVel, cbComputeMagnitudesAfterRelocate);
        QWidget::setTabOrder(cbComputeMagnitudesAfterRelocate, cbPlotGridlines);
        QWidget::setTabOrder(cbPlotGridlines, spinAddStationsDistance);
        QWidget::setTabOrder(spinAddStationsDistance, cbShowCrossHair);
        QWidget::setTabOrder(cbShowCrossHair, cbAllComponents);
        QWidget::setTabOrder(cbAllComponents, cbLoadAllPicks);
        QWidget::setTabOrder(cbLoadAllPicks, cbStrongMotion);
        QWidget::setTabOrder(cbStrongMotion, cbLimitStationCount);
        QWidget::setTabOrder(cbLimitStationCount, spinLimitStationCount);
        QWidget::setTabOrder(spinLimitStationCount, cbShowAllComponents);
        QWidget::setTabOrder(cbShowAllComponents, maximumDistanceEdit);
        QWidget::setTabOrder(maximumDistanceEdit, cbRemoveAllAutomaticStationPicks);
        QWidget::setTabOrder(cbRemoveAllAutomaticStationPicks, cbRemoveAllAutomaticPicks);
        QWidget::setTabOrder(cbRemoveAllAutomaticPicks, cbUsePerStreamTimeWindow);
        QWidget::setTabOrder(cbUsePerStreamTimeWindow, slPreOffset);
        QWidget::setTabOrder(slPreOffset, preTimeEdit);
        QWidget::setTabOrder(preTimeEdit, slPostOffset);
        QWidget::setTabOrder(slPostOffset, postTimeEdit);
        QWidget::setTabOrder(postTimeEdit, slMinimumLength);
        QWidget::setTabOrder(slMinimumLength, minimumLengthTimeEdit);
        QWidget::setTabOrder(minimumLengthTimeEdit, tableFilter);
        QWidget::setTabOrder(tableFilter, btnAddPickFilter);
        QWidget::setTabOrder(btnAddPickFilter, btnRemovePickFilter);
        QWidget::setTabOrder(btnRemovePickFilter, btnMovePickFilterUp);
        QWidget::setTabOrder(btnMovePickFilterUp, btnMovePickFilterDown);
        QWidget::setTabOrder(btnMovePickFilterDown, saveButton);
        QWidget::setTabOrder(saveButton, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(PickerSettings);
        QObject::connect(okButton, SIGNAL(clicked()), PickerSettings, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), PickerSettings, SLOT(reject()));
        QObject::connect(cbUsePerStreamTimeWindow, SIGNAL(toggled(bool)), slMinimumLength, SLOT(setDisabled(bool)));
        QObject::connect(cbUsePerStreamTimeWindow, SIGNAL(toggled(bool)), minimumLengthTimeEdit, SLOT(setDisabled(bool)));
        QObject::connect(cbUsePerStreamTimeWindow, SIGNAL(toggled(bool)), label_3, SLOT(setDisabled(bool)));
        QObject::connect(cbShowAllComponents, SIGNAL(toggled(bool)), frameMaximumDistance, SLOT(setEnabled(bool)));
        QObject::connect(cbLimitStationCount, SIGNAL(toggled(bool)), spinLimitStationCount, SLOT(setEnabled(bool)));

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PickerSettings);
    } // setupUi

    void retranslateUi(QDialog *PickerSettings)
    {
        PickerSettings->setWindowTitle(QApplication::translate("PickerSettings", "Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PickerSettings->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("PickerSettings", "Reduction velocity used by the move out curve.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("PickerSettings", "Reduction velocity:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinPVel->setToolTip(QApplication::translate("PickerSettings", "Reduction velocity used by the move out curve.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("PickerSettings", "km/s", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbComputeMagnitudesAfterRelocate->setToolTip(QApplication::translate("PickerSettings", "If enabled, magnitudes are computed automatically after relocate.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbComputeMagnitudesAfterRelocate->setText(QApplication::translate("PickerSettings", "Compute magnitudes after relocate", 0, QApplication::UnicodeUTF8));
        cbComputeMagnitudesSilently->setText(QApplication::translate("PickerSettings", "Compute magnitudes silently", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbComputeMissingTakeOffAngles->setToolTip(QApplication::translate("PickerSettings", "Computes missing take-off angles to be used in the first motion plot.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbComputeMissingTakeOffAngles->setText(QApplication::translate("PickerSettings", "Compute missing take-off angles", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbPlotGridlines->setToolTip(QApplication::translate("PickerSettings", "Enables/disables drawing of grid lines in plots", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbPlotGridlines->setText(QApplication::translate("PickerSettings", "Draw grid lines", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PickerSettings", "Data source:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("PickerSettings", "Default distance for \"add stations\":", 0, QApplication::UnicodeUTF8));
        labelDefaultDistanceUnit->setText(QApplication::translate("PickerSettings", "deg", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbHideStationsWithoutData->setToolTip(QApplication::translate("PickerSettings", "If enabled additional stations are initially hidden and only become visible if data is available.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbHideStationsWithoutData->setText(QApplication::translate("PickerSettings", "Hide station traces without data", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(pageLocator), QApplication::translate("PickerSettings", "Global settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbShowCrossHair->setToolTip(QApplication::translate("PickerSettings", "If checked a cross hair cursor is shown when in picking mode whith the configured uncertainty widths.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbShowCrossHair->setText(QApplication::translate("PickerSettings", "Show cross hair cursor", 0, QApplication::UnicodeUTF8));
        labelPickUncertainties->setText(QApplication::translate("PickerSettings", "Uncertainties:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        listPickUncertainties->setToolTip(QApplication::translate("PickerSettings", "Selects the current set of predefined pick uncertainties.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cbAllComponents->setToolTip(QApplication::translate("PickerSettings", "When enabled, all components (Z,N,E) are going to be loaded initially. Otherwise the components are loaded on demand.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbAllComponents->setText(QApplication::translate("PickerSettings", "Load all components", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbLoadAllPicks->setToolTip(QApplication::translate("PickerSettings", "When enabled all picks in the resulting timewindow will fetched from the database.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbLoadAllPicks->setText(QApplication::translate("PickerSettings", "Load all picks", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbStrongMotion->setToolTip(QApplication::translate("PickerSettings", "When enabled strong motion data will be transfered additionally for every station that has a strong motion sensor and where no strong motion pick exists.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbStrongMotion->setText(QApplication::translate("PickerSettings", "Load strong motion data", 0, QApplication::UnicodeUTF8));
        cbLimitStationCount->setText(QApplication::translate("PickerSettings", "Limit acquistion to first", 0, QApplication::UnicodeUTF8));
        labelLimitStations->setText(QApplication::translate("PickerSettings", "stations", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbShowAllComponents->setToolTip(QApplication::translate("PickerSettings", "When enabled all components are displayed in the trace widget up to a configurable station distance.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbShowAllComponents->setText(QApplication::translate("PickerSettings", "Show all components", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("PickerSettings", "Maximum distance:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        maximumDistanceEdit->setToolTip(QApplication::translate("PickerSettings", "The maximum station distance used to display all components (in degree).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("PickerSettings", "deg", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbRemoveAllAutomaticStationPicks->setToolTip(QApplication::translate("PickerSettings", "Removes all automatic picks of a station for which manual picks exist.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbRemoveAllAutomaticStationPicks->setText(QApplication::translate("PickerSettings", "Remove automatic station picks", 0, QApplication::UnicodeUTF8));
        labelRemoveStationPicksInfo->setText(QApplication::translate("PickerSettings", "If checked all automatic picks of a station with manual picks are removed once the manual review is confirmed.", 0, QApplication::UnicodeUTF8));
        cbRemoveAllAutomaticPicks->setText(QApplication::translate("PickerSettings", "Remove all automatic picks", 0, QApplication::UnicodeUTF8));
        labelRemoveAllPicksInfo->setText(QApplication::translate("PickerSettings", "If checked all automatic picks are removed once the manual review is confirmed.", 0, QApplication::UnicodeUTF8));
        cbUsePerStreamTimeWindow->setText(QApplication::translate("PickerSettings", "Use per stream timewindows", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PickerSettings", "Offset before first (P) pick:", 0, QApplication::UnicodeUTF8));
        preTimeEdit->setDisplayFormat(QApplication::translate("PickerSettings", "HH:mm:ss", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PickerSettings", "Offset after last (P) pick:", 0, QApplication::UnicodeUTF8));
        postTimeEdit->setDisplayFormat(QApplication::translate("PickerSettings", "HH:mm:ss", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("PickerSettings", "The length of the timewindow is the maximum of the resulting length of the above offsets and this value.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("PickerSettings", "Minimum length of data after origin time:", 0, QApplication::UnicodeUTF8));
        minimumLengthTimeEdit->setDisplayFormat(QApplication::translate("PickerSettings", "HH:mm:ss", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(pagePickSettings), QApplication::translate("PickerSettings", "Picker settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnAddPickFilter->setToolTip(QApplication::translate("PickerSettings", "Add a new filter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAddPickFilter->setText(QApplication::translate("PickerSettings", "+", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnRemovePickFilter->setToolTip(QApplication::translate("PickerSettings", "Remove current filter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRemovePickFilter->setText(QApplication::translate("PickerSettings", "-", 0, QApplication::UnicodeUTF8));
        btnMovePickFilterUp->setText(QString());
        btnMovePickFilterDown->setText(QString());
        toolBox->setItemText(toolBox->indexOf(pagePickFilters), QApplication::translate("PickerSettings", "Picker filters", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("PickerSettings", "Waveform time window pre offset", 0, QApplication::UnicodeUTF8));
        preAmplitudeTimeEdit->setDisplayFormat(QApplication::translate("PickerSettings", "HH:mm:ss", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("PickerSettings", "Waveform time window post offset", 0, QApplication::UnicodeUTF8));
        postAmplitudeTimeEdit->setDisplayFormat(QApplication::translate("PickerSettings", "HH:mm:ss", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(pageAmplitudeSettings), QApplication::translate("PickerSettings", "Amplitude settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnAddAmplitudeFilter->setToolTip(QApplication::translate("PickerSettings", "Add a new filter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAddAmplitudeFilter->setText(QApplication::translate("PickerSettings", "+", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnRemoveAmplitudeFilter->setToolTip(QApplication::translate("PickerSettings", "Remove current filter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRemoveAmplitudeFilter->setText(QApplication::translate("PickerSettings", "-", 0, QApplication::UnicodeUTF8));
        btnMoveAmplitudeFilterUp->setText(QString());
        btnMoveAmplitudeFilterDown->setText(QString());
        toolBox->setItemText(toolBox->indexOf(pageAmplitudeFilters), QApplication::translate("PickerSettings", "Amplitude filters", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("PickerSettings", "Save", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("PickerSettings", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("PickerSettings", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PickerSettings: public Ui_PickerSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKERSETTINGS_H
