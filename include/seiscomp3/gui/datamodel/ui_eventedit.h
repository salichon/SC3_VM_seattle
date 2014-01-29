/********************************************************************************
** Form generated from reading UI file 'eventedit.ui'
**
** Created: Thu Jan 23 14:38:32 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTEDIT_H
#define UI_EVENTEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventEdit
{
public:
    QHBoxLayout *hboxLayout;
    QSplitter *splitter;
    QTextEdit *listJournal;
    QTabWidget *tabWidget;
    QWidget *originWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout1;
    QFrame *frameMap;
    QTreeWidget *treeMagnitudes;
    QFrame *line;
    QFrame *frameInformation;
    QGridLayout *gridLayout1;
    QComboBox *comboTypes;
    QLabel *labelPhasesValue;
    QLabel *labelDepthError;
    QLabel *labelLongitudeValue;
    QLabel *labelOriginStatus;
    QLabel *labelRMSValue;
    QLabel *labelAgency;
    QLabel *labelType;
    QPushButton *buttonFixOrigin;
    QLabel *labelLatitudeValue;
    QLabel *labelDepthUnit;
    QLabel *labelDepth;
    QLabel *labelLatitudeError;
    QLabel *labelTime;
    QLabel *labelLongitudeError;
    QLabel *labelLatitude;
    QLabel *labelLongitudeUnit;
    QLabel *labelLongitude;
    QLabel *labelAgencyValue;
    QPushButton *buttonReleaseOrigin;
    QComboBox *comboFixOrigin;
    QLabel *labelRegionValue;
    QLabel *labelLatitudeUnit;
    QLabel *labelTimeValue;
    QSpacerItem *spacerItem;
    QLabel *labelOriginStatusValue;
    QLabel *labelPhases;
    QLabel *labelRegion;
    QLabel *labelDepthValue;
    QLabel *labelRMS;
    QLabel *label;
    QComboBox *comboTypeCertainties;
    QFrame *frameInformation_2;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem1;
    QLabel *labelMagnitudeMethodValue;
    QLabel *labelMagnitudeMethod;
    QSpacerItem *spacerItem2;
    QPushButton *buttonReleaseMagnitudeType;
    QPushButton *buttonFixMagnitudeType;
    QLabel *labelMagnitudeTypeValue;
    QLabel *labelMagnitudeType;
    QLabel *labelMagnitude;
    QLabel *labelMagnitudeError;
    QLabel *labelMagnitudeCountValue;
    QLabel *labelMagnitudeValue;
    QLabel *labelMagnitudeCount;
    QFrame *frameOrigins;
    QWidget *fmWidget;
    QGridLayout *gridLayout3;
    QHBoxLayout *hboxLayout2;
    QFrame *fmMap;
    QGroupBox *mtOriginInfo;
    QGridLayout *gridLayout4;
    QLabel *mtOriginPhasesL;
    QLabel *mtOriginDepth;
    QLabel *mtOriginDepthL;
    QLabel *mtOriginLatUnit;
    QLabel *mtOriginRegionL;
    QLabel *mtOriginDepthError;
    QLabel *mtOriginAgencyL;
    QLabel *mtOriginLon;
    QLabel *mtOriginLatL;
    QLabel *mtOriginPhases;
    QLabel *mtOriginTimeL;
    QLabel *mtOriginTime;
    QLabel *mtOriginRegion;
    QLabel *mtOriginAgency;
    QLabel *mtOriginStatusL;
    QLabel *mtOriginLat;
    QLabel *mtOriginDepthUnit;
    QLabel *mtOriginLatError;
    QLabel *mtOriginLonL;
    QLabel *mtOriginStatus;
    QLabel *mtOriginLonUnit;
    QLabel *mtOriginLonError;
    QSpacerItem *spacerItem3;
    QTreeWidget *fmTree;
    QFrame *fmInfo;
    QGridLayout *gridLayout5;
    QLabel *fmDist;
    QLabel *fmMisfitL;
    QLabel *fmDistL;
    QComboBox *fmFixCombo;
    QLabel *fmNP2L;
    QLabel *fmMethodL;
    QLabel *fmCountL;
    QSpacerItem *spacerItem4;
    QPushButton *fmFixButton;
    QLabel *fmGap;
    QLabel *fmNP2;
    QLabel *fmMode;
    QLabel *fmStatus;
    QLabel *fmGapL;
    QLabel *fmNP1;
    QLabel *fmMethod;
    QPushButton *fmAutoButton;
    QLabel *fmMisfit;
    QLabel *fmNP1L;
    QLabel *fmStatusL;
    QLabel *fmModeL;
    QLabel *fmCount;
    QPushButton *fmTriggerButton;
    QFrame *fmLine;
    QGroupBox *mtMagInfo;
    QGridLayout *gridLayout6;
    QLabel *mtMagTypeL;
    QLabel *mtMagMethod;
    QLabel *mtMagCount;
    QLabel *mtMagError;
    QSpacerItem *spacerItem5;
    QSpacerItem *spacerItem6;
    QLabel *mtMagCountL;
    QPushButton *buttonReleaseMw;
    QLabel *mtMagMethodL;
    QLabel *mtMagL;
    QLabel *mtMag;
    QLabel *mtMagType;
    QPushButton *buttonFixMw;

    void setupUi(QWidget *EventEdit)
    {
        if (EventEdit->objectName().isEmpty())
            EventEdit->setObjectName(QString::fromUtf8("EventEdit"));
        EventEdit->resize(835, 795);
        hboxLayout = new QHBoxLayout(EventEdit);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        splitter = new QSplitter(EventEdit);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        listJournal = new QTextEdit(splitter);
        listJournal->setObjectName(QString::fromUtf8("listJournal"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listJournal->sizePolicy().hasHeightForWidth());
        listJournal->setSizePolicy(sizePolicy);
        listJournal->setUndoRedoEnabled(false);
        listJournal->setLineWrapMode(QTextEdit::NoWrap);
        listJournal->setReadOnly(true);
        splitter->addWidget(listJournal);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setTabPosition(QTabWidget::West);
        originWidget = new QWidget();
        originWidget->setObjectName(QString::fromUtf8("originWidget"));
        gridLayout = new QGridLayout(originWidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        frameMap = new QFrame(originWidget);
        frameMap->setObjectName(QString::fromUtf8("frameMap"));
        sizePolicy1.setHeightForWidth(frameMap->sizePolicy().hasHeightForWidth());
        frameMap->setSizePolicy(sizePolicy1);
        frameMap->setFrameShape(QFrame::StyledPanel);
        frameMap->setFrameShadow(QFrame::Raised);

        hboxLayout1->addWidget(frameMap);

        treeMagnitudes = new QTreeWidget(originWidget);
        treeMagnitudes->setObjectName(QString::fromUtf8("treeMagnitudes"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(7));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(treeMagnitudes->sizePolicy().hasHeightForWidth());
        treeMagnitudes->setSizePolicy(sizePolicy2);
        treeMagnitudes->setAlternatingRowColors(true);
        treeMagnitudes->setRootIsDecorated(false);
        treeMagnitudes->setUniformRowHeights(true);

        hboxLayout1->addWidget(treeMagnitudes);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 1);

        line = new QFrame(originWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        frameInformation = new QFrame(originWidget);
        frameInformation->setObjectName(QString::fromUtf8("frameInformation"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(5);
        sizePolicy3.setHeightForWidth(frameInformation->sizePolicy().hasHeightForWidth());
        frameInformation->setSizePolicy(sizePolicy3);
        frameInformation->setFrameShape(QFrame::NoFrame);
        frameInformation->setFrameShadow(QFrame::Plain);
        gridLayout1 = new QGridLayout(frameInformation);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        comboTypes = new QComboBox(frameInformation);
        comboTypes->setObjectName(QString::fromUtf8("comboTypes"));
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboTypes->sizePolicy().hasHeightForWidth());
        comboTypes->setSizePolicy(sizePolicy4);
        comboTypes->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        comboTypes->setMinimumContentsLength(9);

        gridLayout1->addWidget(comboTypes, 2, 1, 1, 3);

        labelPhasesValue = new QLabel(frameInformation);
        labelPhasesValue->setObjectName(QString::fromUtf8("labelPhasesValue"));
        labelPhasesValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelPhasesValue, 7, 2, 1, 2);

        labelDepthError = new QLabel(frameInformation);
        labelDepthError->setObjectName(QString::fromUtf8("labelDepthError"));
        labelDepthError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthError, 4, 3, 1, 1);

        labelLongitudeValue = new QLabel(frameInformation);
        labelLongitudeValue->setObjectName(QString::fromUtf8("labelLongitudeValue"));
        labelLongitudeValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeValue, 6, 1, 1, 1);

        labelOriginStatus = new QLabel(frameInformation);
        labelOriginStatus->setObjectName(QString::fromUtf8("labelOriginStatus"));
        labelOriginStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelOriginStatus, 10, 0, 1, 1);

        labelRMSValue = new QLabel(frameInformation);
        labelRMSValue->setObjectName(QString::fromUtf8("labelRMSValue"));
        labelRMSValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelRMSValue, 8, 2, 1, 2);

        labelAgency = new QLabel(frameInformation);
        labelAgency->setObjectName(QString::fromUtf8("labelAgency"));
        labelAgency->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelAgency, 9, 0, 1, 1);

        labelType = new QLabel(frameInformation);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        gridLayout1->addWidget(labelType, 2, 0, 1, 1);

        buttonFixOrigin = new QPushButton(frameInformation);
        buttonFixOrigin->setObjectName(QString::fromUtf8("buttonFixOrigin"));

        gridLayout1->addWidget(buttonFixOrigin, 12, 0, 1, 1);

        labelLatitudeValue = new QLabel(frameInformation);
        labelLatitudeValue->setObjectName(QString::fromUtf8("labelLatitudeValue"));
        sizePolicy1.setHeightForWidth(labelLatitudeValue->sizePolicy().hasHeightForWidth());
        labelLatitudeValue->setSizePolicy(sizePolicy1);
        labelLatitudeValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeValue, 5, 1, 1, 1);

        labelDepthUnit = new QLabel(frameInformation);
        labelDepthUnit->setObjectName(QString::fromUtf8("labelDepthUnit"));
        labelDepthUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthUnit, 4, 2, 1, 1);

        labelDepth = new QLabel(frameInformation);
        labelDepth->setObjectName(QString::fromUtf8("labelDepth"));
        sizePolicy1.setHeightForWidth(labelDepth->sizePolicy().hasHeightForWidth());
        labelDepth->setSizePolicy(sizePolicy1);
        labelDepth->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepth, 4, 0, 1, 1);

        labelLatitudeError = new QLabel(frameInformation);
        labelLatitudeError->setObjectName(QString::fromUtf8("labelLatitudeError"));
        sizePolicy1.setHeightForWidth(labelLatitudeError->sizePolicy().hasHeightForWidth());
        labelLatitudeError->setSizePolicy(sizePolicy1);
        labelLatitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeError, 5, 3, 1, 1);

        labelTime = new QLabel(frameInformation);
        labelTime->setObjectName(QString::fromUtf8("labelTime"));

        gridLayout1->addWidget(labelTime, 0, 0, 1, 1);

        labelLongitudeError = new QLabel(frameInformation);
        labelLongitudeError->setObjectName(QString::fromUtf8("labelLongitudeError"));
        labelLongitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeError, 6, 3, 1, 1);

        labelLatitude = new QLabel(frameInformation);
        labelLatitude->setObjectName(QString::fromUtf8("labelLatitude"));
        sizePolicy1.setHeightForWidth(labelLatitude->sizePolicy().hasHeightForWidth());
        labelLatitude->setSizePolicy(sizePolicy1);
        labelLatitude->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitude, 5, 0, 1, 1);

        labelLongitudeUnit = new QLabel(frameInformation);
        labelLongitudeUnit->setObjectName(QString::fromUtf8("labelLongitudeUnit"));
        labelLongitudeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeUnit, 6, 2, 1, 1);

        labelLongitude = new QLabel(frameInformation);
        labelLongitude->setObjectName(QString::fromUtf8("labelLongitude"));
        labelLongitude->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitude, 6, 0, 1, 1);

        labelAgencyValue = new QLabel(frameInformation);
        labelAgencyValue->setObjectName(QString::fromUtf8("labelAgencyValue"));
        labelAgencyValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelAgencyValue, 9, 2, 1, 2);

        buttonReleaseOrigin = new QPushButton(frameInformation);
        buttonReleaseOrigin->setObjectName(QString::fromUtf8("buttonReleaseOrigin"));

        gridLayout1->addWidget(buttonReleaseOrigin, 13, 0, 1, 4);

        comboFixOrigin = new QComboBox(frameInformation);
        comboFixOrigin->setObjectName(QString::fromUtf8("comboFixOrigin"));

        gridLayout1->addWidget(comboFixOrigin, 12, 1, 1, 3);

        labelRegionValue = new QLabel(frameInformation);
        labelRegionValue->setObjectName(QString::fromUtf8("labelRegionValue"));
        QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(13), static_cast<QSizePolicy::Policy>(5));
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelRegionValue->sizePolicy().hasHeightForWidth());
        labelRegionValue->setSizePolicy(sizePolicy5);

        gridLayout1->addWidget(labelRegionValue, 1, 1, 1, 3);

        labelLatitudeUnit = new QLabel(frameInformation);
        labelLatitudeUnit->setObjectName(QString::fromUtf8("labelLatitudeUnit"));
        sizePolicy1.setHeightForWidth(labelLatitudeUnit->sizePolicy().hasHeightForWidth());
        labelLatitudeUnit->setSizePolicy(sizePolicy1);
        labelLatitudeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeUnit, 5, 2, 1, 1);

        labelTimeValue = new QLabel(frameInformation);
        labelTimeValue->setObjectName(QString::fromUtf8("labelTimeValue"));

        gridLayout1->addWidget(labelTimeValue, 0, 1, 1, 3);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 11, 0, 1, 1);

        labelOriginStatusValue = new QLabel(frameInformation);
        labelOriginStatusValue->setObjectName(QString::fromUtf8("labelOriginStatusValue"));
        labelOriginStatusValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelOriginStatusValue, 10, 2, 1, 2);

        labelPhases = new QLabel(frameInformation);
        labelPhases->setObjectName(QString::fromUtf8("labelPhases"));
        labelPhases->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelPhases, 7, 0, 1, 1);

        labelRegion = new QLabel(frameInformation);
        labelRegion->setObjectName(QString::fromUtf8("labelRegion"));

        gridLayout1->addWidget(labelRegion, 1, 0, 1, 1);

        labelDepthValue = new QLabel(frameInformation);
        labelDepthValue->setObjectName(QString::fromUtf8("labelDepthValue"));
        labelDepthValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthValue, 4, 1, 1, 1);

        labelRMS = new QLabel(frameInformation);
        labelRMS->setObjectName(QString::fromUtf8("labelRMS"));
        labelRMS->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelRMS, 8, 0, 1, 1);

        label = new QLabel(frameInformation);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 3, 0, 1, 1);

        comboTypeCertainties = new QComboBox(frameInformation);
        comboTypeCertainties->setObjectName(QString::fromUtf8("comboTypeCertainties"));

        gridLayout1->addWidget(comboTypeCertainties, 3, 1, 1, 3);


        gridLayout->addWidget(frameInformation, 0, 1, 1, 1);

        frameInformation_2 = new QFrame(originWidget);
        frameInformation_2->setObjectName(QString::fromUtf8("frameInformation_2"));
        sizePolicy3.setHeightForWidth(frameInformation_2->sizePolicy().hasHeightForWidth());
        frameInformation_2->setSizePolicy(sizePolicy3);
        frameInformation_2->setFrameShape(QFrame::NoFrame);
        frameInformation_2->setFrameShadow(QFrame::Plain);
        gridLayout2 = new QGridLayout(frameInformation_2);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        spacerItem1 = new QSpacerItem(110, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem1, 4, 0, 1, 1);

        labelMagnitudeMethodValue = new QLabel(frameInformation_2);
        labelMagnitudeMethodValue->setObjectName(QString::fromUtf8("labelMagnitudeMethodValue"));
        sizePolicy5.setHeightForWidth(labelMagnitudeMethodValue->sizePolicy().hasHeightForWidth());
        labelMagnitudeMethodValue->setSizePolicy(sizePolicy5);
        labelMagnitudeMethodValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeMethodValue, 3, 1, 1, 2);

        labelMagnitudeMethod = new QLabel(frameInformation_2);
        labelMagnitudeMethod->setObjectName(QString::fromUtf8("labelMagnitudeMethod"));
        labelMagnitudeMethod->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeMethod, 3, 0, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 5, 1, 1, 1);

        buttonReleaseMagnitudeType = new QPushButton(frameInformation_2);
        buttonReleaseMagnitudeType->setObjectName(QString::fromUtf8("buttonReleaseMagnitudeType"));

        gridLayout2->addWidget(buttonReleaseMagnitudeType, 5, 2, 1, 1);

        buttonFixMagnitudeType = new QPushButton(frameInformation_2);
        buttonFixMagnitudeType->setObjectName(QString::fromUtf8("buttonFixMagnitudeType"));

        gridLayout2->addWidget(buttonFixMagnitudeType, 5, 0, 1, 1);

        labelMagnitudeTypeValue = new QLabel(frameInformation_2);
        labelMagnitudeTypeValue->setObjectName(QString::fromUtf8("labelMagnitudeTypeValue"));

        gridLayout2->addWidget(labelMagnitudeTypeValue, 0, 1, 1, 2);

        labelMagnitudeType = new QLabel(frameInformation_2);
        labelMagnitudeType->setObjectName(QString::fromUtf8("labelMagnitudeType"));
        sizePolicy1.setHeightForWidth(labelMagnitudeType->sizePolicy().hasHeightForWidth());
        labelMagnitudeType->setSizePolicy(sizePolicy1);
        labelMagnitudeType->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeType, 0, 0, 1, 1);

        labelMagnitude = new QLabel(frameInformation_2);
        labelMagnitude->setObjectName(QString::fromUtf8("labelMagnitude"));
        sizePolicy1.setHeightForWidth(labelMagnitude->sizePolicy().hasHeightForWidth());
        labelMagnitude->setSizePolicy(sizePolicy1);
        labelMagnitude->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitude, 1, 0, 1, 1);

        labelMagnitudeError = new QLabel(frameInformation_2);
        labelMagnitudeError->setObjectName(QString::fromUtf8("labelMagnitudeError"));
        sizePolicy1.setHeightForWidth(labelMagnitudeError->sizePolicy().hasHeightForWidth());
        labelMagnitudeError->setSizePolicy(sizePolicy1);
        labelMagnitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeError, 1, 2, 1, 1);

        labelMagnitudeCountValue = new QLabel(frameInformation_2);
        labelMagnitudeCountValue->setObjectName(QString::fromUtf8("labelMagnitudeCountValue"));

        gridLayout2->addWidget(labelMagnitudeCountValue, 2, 1, 1, 2);

        labelMagnitudeValue = new QLabel(frameInformation_2);
        labelMagnitudeValue->setObjectName(QString::fromUtf8("labelMagnitudeValue"));
        sizePolicy1.setHeightForWidth(labelMagnitudeValue->sizePolicy().hasHeightForWidth());
        labelMagnitudeValue->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(labelMagnitudeValue, 1, 1, 1, 1);

        labelMagnitudeCount = new QLabel(frameInformation_2);
        labelMagnitudeCount->setObjectName(QString::fromUtf8("labelMagnitudeCount"));
        labelMagnitudeCount->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeCount, 2, 0, 1, 1);


        gridLayout->addWidget(frameInformation_2, 2, 1, 1, 1);

        frameOrigins = new QFrame(originWidget);
        frameOrigins->setObjectName(QString::fromUtf8("frameOrigins"));
        sizePolicy.setHeightForWidth(frameOrigins->sizePolicy().hasHeightForWidth());
        frameOrigins->setSizePolicy(sizePolicy);
        frameOrigins->setFrameShape(QFrame::NoFrame);
        frameOrigins->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frameOrigins, 0, 0, 1, 1);

        tabWidget->addTab(originWidget, QString());
        fmWidget = new QWidget();
        fmWidget->setObjectName(QString::fromUtf8("fmWidget"));
        gridLayout3 = new QGridLayout(fmWidget);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        fmMap = new QFrame(fmWidget);
        fmMap->setObjectName(QString::fromUtf8("fmMap"));
        QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(fmMap->sizePolicy().hasHeightForWidth());
        fmMap->setSizePolicy(sizePolicy6);
        fmMap->setFrameShape(QFrame::StyledPanel);
        fmMap->setFrameShadow(QFrame::Raised);

        hboxLayout2->addWidget(fmMap);

        mtOriginInfo = new QGroupBox(fmWidget);
        mtOriginInfo->setObjectName(QString::fromUtf8("mtOriginInfo"));
        gridLayout4 = new QGridLayout(mtOriginInfo);
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        mtOriginPhasesL = new QLabel(mtOriginInfo);
        mtOriginPhasesL->setObjectName(QString::fromUtf8("mtOriginPhasesL"));
        mtOriginPhasesL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginPhasesL, 6, 0, 1, 1);

        mtOriginDepth = new QLabel(mtOriginInfo);
        mtOriginDepth->setObjectName(QString::fromUtf8("mtOriginDepth"));
        mtOriginDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginDepth, 2, 1, 1, 1);

        mtOriginDepthL = new QLabel(mtOriginInfo);
        mtOriginDepthL->setObjectName(QString::fromUtf8("mtOriginDepthL"));
        sizePolicy1.setHeightForWidth(mtOriginDepthL->sizePolicy().hasHeightForWidth());
        mtOriginDepthL->setSizePolicy(sizePolicy1);
        mtOriginDepthL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginDepthL, 2, 0, 1, 1);

        mtOriginLatUnit = new QLabel(mtOriginInfo);
        mtOriginLatUnit->setObjectName(QString::fromUtf8("mtOriginLatUnit"));
        sizePolicy1.setHeightForWidth(mtOriginLatUnit->sizePolicy().hasHeightForWidth());
        mtOriginLatUnit->setSizePolicy(sizePolicy1);
        mtOriginLatUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLatUnit, 3, 2, 1, 1);

        mtOriginRegionL = new QLabel(mtOriginInfo);
        mtOriginRegionL->setObjectName(QString::fromUtf8("mtOriginRegionL"));

        gridLayout4->addWidget(mtOriginRegionL, 1, 0, 1, 1);

        mtOriginDepthError = new QLabel(mtOriginInfo);
        mtOriginDepthError->setObjectName(QString::fromUtf8("mtOriginDepthError"));
        mtOriginDepthError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginDepthError, 2, 3, 1, 1);

        mtOriginAgencyL = new QLabel(mtOriginInfo);
        mtOriginAgencyL->setObjectName(QString::fromUtf8("mtOriginAgencyL"));
        mtOriginAgencyL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginAgencyL, 8, 0, 1, 1);

        mtOriginLon = new QLabel(mtOriginInfo);
        mtOriginLon->setObjectName(QString::fromUtf8("mtOriginLon"));
        mtOriginLon->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLon, 4, 1, 1, 1);

        mtOriginLatL = new QLabel(mtOriginInfo);
        mtOriginLatL->setObjectName(QString::fromUtf8("mtOriginLatL"));
        sizePolicy1.setHeightForWidth(mtOriginLatL->sizePolicy().hasHeightForWidth());
        mtOriginLatL->setSizePolicy(sizePolicy1);
        mtOriginLatL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLatL, 3, 0, 1, 1);

        mtOriginPhases = new QLabel(mtOriginInfo);
        mtOriginPhases->setObjectName(QString::fromUtf8("mtOriginPhases"));
        mtOriginPhases->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginPhases, 6, 2, 1, 2);

        mtOriginTimeL = new QLabel(mtOriginInfo);
        mtOriginTimeL->setObjectName(QString::fromUtf8("mtOriginTimeL"));

        gridLayout4->addWidget(mtOriginTimeL, 0, 0, 1, 1);

        mtOriginTime = new QLabel(mtOriginInfo);
        mtOriginTime->setObjectName(QString::fromUtf8("mtOriginTime"));

        gridLayout4->addWidget(mtOriginTime, 0, 1, 1, 3);

        mtOriginRegion = new QLabel(mtOriginInfo);
        mtOriginRegion->setObjectName(QString::fromUtf8("mtOriginRegion"));
        sizePolicy5.setHeightForWidth(mtOriginRegion->sizePolicy().hasHeightForWidth());
        mtOriginRegion->setSizePolicy(sizePolicy5);

        gridLayout4->addWidget(mtOriginRegion, 1, 1, 1, 3);

        mtOriginAgency = new QLabel(mtOriginInfo);
        mtOriginAgency->setObjectName(QString::fromUtf8("mtOriginAgency"));
        mtOriginAgency->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginAgency, 8, 2, 1, 2);

        mtOriginStatusL = new QLabel(mtOriginInfo);
        mtOriginStatusL->setObjectName(QString::fromUtf8("mtOriginStatusL"));
        mtOriginStatusL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginStatusL, 9, 0, 1, 1);

        mtOriginLat = new QLabel(mtOriginInfo);
        mtOriginLat->setObjectName(QString::fromUtf8("mtOriginLat"));
        sizePolicy1.setHeightForWidth(mtOriginLat->sizePolicy().hasHeightForWidth());
        mtOriginLat->setSizePolicy(sizePolicy1);
        mtOriginLat->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLat, 3, 1, 1, 1);

        mtOriginDepthUnit = new QLabel(mtOriginInfo);
        mtOriginDepthUnit->setObjectName(QString::fromUtf8("mtOriginDepthUnit"));
        mtOriginDepthUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginDepthUnit, 2, 2, 1, 1);

        mtOriginLatError = new QLabel(mtOriginInfo);
        mtOriginLatError->setObjectName(QString::fromUtf8("mtOriginLatError"));
        sizePolicy1.setHeightForWidth(mtOriginLatError->sizePolicy().hasHeightForWidth());
        mtOriginLatError->setSizePolicy(sizePolicy1);
        mtOriginLatError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLatError, 3, 3, 1, 1);

        mtOriginLonL = new QLabel(mtOriginInfo);
        mtOriginLonL->setObjectName(QString::fromUtf8("mtOriginLonL"));
        mtOriginLonL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLonL, 4, 0, 1, 1);

        mtOriginStatus = new QLabel(mtOriginInfo);
        mtOriginStatus->setObjectName(QString::fromUtf8("mtOriginStatus"));
        mtOriginStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginStatus, 9, 2, 1, 2);

        mtOriginLonUnit = new QLabel(mtOriginInfo);
        mtOriginLonUnit->setObjectName(QString::fromUtf8("mtOriginLonUnit"));
        mtOriginLonUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLonUnit, 4, 2, 1, 1);

        mtOriginLonError = new QLabel(mtOriginInfo);
        mtOriginLonError->setObjectName(QString::fromUtf8("mtOriginLonError"));
        mtOriginLonError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLonError, 4, 3, 1, 1);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem3, 10, 0, 1, 1);


        hboxLayout2->addWidget(mtOriginInfo);


        gridLayout3->addLayout(hboxLayout2, 2, 0, 1, 1);

        fmTree = new QTreeWidget(fmWidget);
        fmTree->setObjectName(QString::fromUtf8("fmTree"));
        sizePolicy.setHeightForWidth(fmTree->sizePolicy().hasHeightForWidth());
        fmTree->setSizePolicy(sizePolicy);
        fmTree->setAlternatingRowColors(true);
        fmTree->setRootIsDecorated(false);
        fmTree->setUniformRowHeights(true);
        fmTree->setItemsExpandable(false);

        gridLayout3->addWidget(fmTree, 0, 0, 1, 1);

        fmInfo = new QFrame(fmWidget);
        fmInfo->setObjectName(QString::fromUtf8("fmInfo"));
        sizePolicy3.setHeightForWidth(fmInfo->sizePolicy().hasHeightForWidth());
        fmInfo->setSizePolicy(sizePolicy3);
        fmInfo->setFrameShape(QFrame::NoFrame);
        fmInfo->setFrameShadow(QFrame::Plain);
        gridLayout5 = new QGridLayout(fmInfo);
#ifndef Q_OS_MAC
        gridLayout5->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout5->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        fmDist = new QLabel(fmInfo);
        fmDist->setObjectName(QString::fromUtf8("fmDist"));
        sizePolicy5.setHeightForWidth(fmDist->sizePolicy().hasHeightForWidth());
        fmDist->setSizePolicy(sizePolicy5);

        gridLayout5->addWidget(fmDist, 8, 1, 1, 3);

        fmMisfitL = new QLabel(fmInfo);
        fmMisfitL->setObjectName(QString::fromUtf8("fmMisfitL"));

        gridLayout5->addWidget(fmMisfitL, 7, 0, 1, 1);

        fmDistL = new QLabel(fmInfo);
        fmDistL->setObjectName(QString::fromUtf8("fmDistL"));

        gridLayout5->addWidget(fmDistL, 8, 0, 1, 1);

        fmFixCombo = new QComboBox(fmInfo);
        fmFixCombo->setObjectName(QString::fromUtf8("fmFixCombo"));

        gridLayout5->addWidget(fmFixCombo, 13, 1, 1, 3);

        fmNP2L = new QLabel(fmInfo);
        fmNP2L->setObjectName(QString::fromUtf8("fmNP2L"));

        gridLayout5->addWidget(fmNP2L, 1, 0, 1, 1);

        fmMethodL = new QLabel(fmInfo);
        fmMethodL->setObjectName(QString::fromUtf8("fmMethodL"));

        gridLayout5->addWidget(fmMethodL, 9, 0, 1, 1);

        fmCountL = new QLabel(fmInfo);
        fmCountL->setObjectName(QString::fromUtf8("fmCountL"));

        gridLayout5->addWidget(fmCountL, 6, 0, 1, 1);

        spacerItem4 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout5->addItem(spacerItem4, 12, 0, 1, 1);

        fmFixButton = new QPushButton(fmInfo);
        fmFixButton->setObjectName(QString::fromUtf8("fmFixButton"));

        gridLayout5->addWidget(fmFixButton, 13, 0, 1, 1);

        fmGap = new QLabel(fmInfo);
        fmGap->setObjectName(QString::fromUtf8("fmGap"));
        sizePolicy5.setHeightForWidth(fmGap->sizePolicy().hasHeightForWidth());
        fmGap->setSizePolicy(sizePolicy5);

        gridLayout5->addWidget(fmGap, 5, 1, 1, 3);

        fmNP2 = new QLabel(fmInfo);
        fmNP2->setObjectName(QString::fromUtf8("fmNP2"));
        sizePolicy5.setHeightForWidth(fmNP2->sizePolicy().hasHeightForWidth());
        fmNP2->setSizePolicy(sizePolicy5);

        gridLayout5->addWidget(fmNP2, 1, 1, 1, 3);

        fmMode = new QLabel(fmInfo);
        fmMode->setObjectName(QString::fromUtf8("fmMode"));
        sizePolicy5.setHeightForWidth(fmMode->sizePolicy().hasHeightForWidth());
        fmMode->setSizePolicy(sizePolicy5);

        gridLayout5->addWidget(fmMode, 10, 1, 1, 3);

        fmStatus = new QLabel(fmInfo);
        fmStatus->setObjectName(QString::fromUtf8("fmStatus"));
        sizePolicy5.setHeightForWidth(fmStatus->sizePolicy().hasHeightForWidth());
        fmStatus->setSizePolicy(sizePolicy5);

        gridLayout5->addWidget(fmStatus, 11, 1, 1, 3);

        fmGapL = new QLabel(fmInfo);
        fmGapL->setObjectName(QString::fromUtf8("fmGapL"));

        gridLayout5->addWidget(fmGapL, 5, 0, 1, 1);

        fmNP1 = new QLabel(fmInfo);
        fmNP1->setObjectName(QString::fromUtf8("fmNP1"));
        sizePolicy5.setHeightForWidth(fmNP1->sizePolicy().hasHeightForWidth());
        fmNP1->setSizePolicy(sizePolicy5);

        gridLayout5->addWidget(fmNP1, 0, 1, 1, 3);

        fmMethod = new QLabel(fmInfo);
        fmMethod->setObjectName(QString::fromUtf8("fmMethod"));
        sizePolicy5.setHeightForWidth(fmMethod->sizePolicy().hasHeightForWidth());
        fmMethod->setSizePolicy(sizePolicy5);

        gridLayout5->addWidget(fmMethod, 9, 1, 1, 3);

        fmAutoButton = new QPushButton(fmInfo);
        fmAutoButton->setObjectName(QString::fromUtf8("fmAutoButton"));

        gridLayout5->addWidget(fmAutoButton, 14, 0, 1, 4);

        fmMisfit = new QLabel(fmInfo);
        fmMisfit->setObjectName(QString::fromUtf8("fmMisfit"));
        sizePolicy5.setHeightForWidth(fmMisfit->sizePolicy().hasHeightForWidth());
        fmMisfit->setSizePolicy(sizePolicy5);

        gridLayout5->addWidget(fmMisfit, 7, 1, 1, 3);

        fmNP1L = new QLabel(fmInfo);
        fmNP1L->setObjectName(QString::fromUtf8("fmNP1L"));

        gridLayout5->addWidget(fmNP1L, 0, 0, 1, 1);

        fmStatusL = new QLabel(fmInfo);
        fmStatusL->setObjectName(QString::fromUtf8("fmStatusL"));

        gridLayout5->addWidget(fmStatusL, 11, 0, 1, 1);

        fmModeL = new QLabel(fmInfo);
        fmModeL->setObjectName(QString::fromUtf8("fmModeL"));

        gridLayout5->addWidget(fmModeL, 10, 0, 1, 1);

        fmCount = new QLabel(fmInfo);
        fmCount->setObjectName(QString::fromUtf8("fmCount"));
        sizePolicy5.setHeightForWidth(fmCount->sizePolicy().hasHeightForWidth());
        fmCount->setSizePolicy(sizePolicy5);

        gridLayout5->addWidget(fmCount, 6, 1, 1, 3);

        fmTriggerButton = new QPushButton(fmInfo);
        fmTriggerButton->setObjectName(QString::fromUtf8("fmTriggerButton"));

        gridLayout5->addWidget(fmTriggerButton, 15, 0, 1, 4);


        gridLayout3->addWidget(fmInfo, 0, 1, 1, 1);

        fmLine = new QFrame(fmWidget);
        fmLine->setObjectName(QString::fromUtf8("fmLine"));
        fmLine->setFrameShape(QFrame::HLine);
        fmLine->setFrameShadow(QFrame::Sunken);

        gridLayout3->addWidget(fmLine, 1, 0, 1, 2);

        mtMagInfo = new QGroupBox(fmWidget);
        mtMagInfo->setObjectName(QString::fromUtf8("mtMagInfo"));
        sizePolicy3.setHeightForWidth(mtMagInfo->sizePolicy().hasHeightForWidth());
        mtMagInfo->setSizePolicy(sizePolicy3);
        gridLayout6 = new QGridLayout(mtMagInfo);
#ifndef Q_OS_MAC
        gridLayout6->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout6->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        mtMagTypeL = new QLabel(mtMagInfo);
        mtMagTypeL->setObjectName(QString::fromUtf8("mtMagTypeL"));
        sizePolicy1.setHeightForWidth(mtMagTypeL->sizePolicy().hasHeightForWidth());
        mtMagTypeL->setSizePolicy(sizePolicy1);
        mtMagTypeL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout6->addWidget(mtMagTypeL, 0, 0, 1, 1);

        mtMagMethod = new QLabel(mtMagInfo);
        mtMagMethod->setObjectName(QString::fromUtf8("mtMagMethod"));
        sizePolicy5.setHeightForWidth(mtMagMethod->sizePolicy().hasHeightForWidth());
        mtMagMethod->setSizePolicy(sizePolicy5);
        mtMagMethod->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout6->addWidget(mtMagMethod, 3, 1, 1, 2);

        mtMagCount = new QLabel(mtMagInfo);
        mtMagCount->setObjectName(QString::fromUtf8("mtMagCount"));

        gridLayout6->addWidget(mtMagCount, 2, 1, 1, 2);

        mtMagError = new QLabel(mtMagInfo);
        mtMagError->setObjectName(QString::fromUtf8("mtMagError"));
        sizePolicy1.setHeightForWidth(mtMagError->sizePolicy().hasHeightForWidth());
        mtMagError->setSizePolicy(sizePolicy1);
        mtMagError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout6->addWidget(mtMagError, 1, 2, 1, 1);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout6->addItem(spacerItem5, 5, 1, 1, 1);

        spacerItem6 = new QSpacerItem(110, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout6->addItem(spacerItem6, 4, 0, 1, 1);

        mtMagCountL = new QLabel(mtMagInfo);
        mtMagCountL->setObjectName(QString::fromUtf8("mtMagCountL"));
        mtMagCountL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout6->addWidget(mtMagCountL, 2, 0, 1, 1);

        buttonReleaseMw = new QPushButton(mtMagInfo);
        buttonReleaseMw->setObjectName(QString::fromUtf8("buttonReleaseMw"));

        gridLayout6->addWidget(buttonReleaseMw, 5, 2, 1, 1);

        mtMagMethodL = new QLabel(mtMagInfo);
        mtMagMethodL->setObjectName(QString::fromUtf8("mtMagMethodL"));
        mtMagMethodL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout6->addWidget(mtMagMethodL, 3, 0, 1, 1);

        mtMagL = new QLabel(mtMagInfo);
        mtMagL->setObjectName(QString::fromUtf8("mtMagL"));
        sizePolicy1.setHeightForWidth(mtMagL->sizePolicy().hasHeightForWidth());
        mtMagL->setSizePolicy(sizePolicy1);
        mtMagL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout6->addWidget(mtMagL, 1, 0, 1, 1);

        mtMag = new QLabel(mtMagInfo);
        mtMag->setObjectName(QString::fromUtf8("mtMag"));
        sizePolicy1.setHeightForWidth(mtMag->sizePolicy().hasHeightForWidth());
        mtMag->setSizePolicy(sizePolicy1);

        gridLayout6->addWidget(mtMag, 1, 1, 1, 1);

        mtMagType = new QLabel(mtMagInfo);
        mtMagType->setObjectName(QString::fromUtf8("mtMagType"));

        gridLayout6->addWidget(mtMagType, 0, 1, 1, 2);

        buttonFixMw = new QPushButton(mtMagInfo);
        buttonFixMw->setObjectName(QString::fromUtf8("buttonFixMw"));

        gridLayout6->addWidget(buttonFixMw, 5, 0, 1, 1);


        gridLayout3->addWidget(mtMagInfo, 2, 1, 1, 1);

        tabWidget->addTab(fmWidget, QString());
        splitter->addWidget(tabWidget);

        hboxLayout->addWidget(splitter);


        retranslateUi(EventEdit);

        QMetaObject::connectSlotsByName(EventEdit);
    } // setupUi

    void retranslateUi(QWidget *EventEdit)
    {
        EventEdit->setWindowTitle(QApplication::translate("EventEdit", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        comboTypes->setToolTip(QApplication::translate("EventEdit", "Sets the type of the event. Selection changes are going to be sent immediately.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelPhasesValue->setText(QApplication::translate("EventEdit", "0", 0, QApplication::UnicodeUTF8));
        labelDepthError->setText(QApplication::translate("EventEdit", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        labelLongitudeValue->setText(QApplication::translate("EventEdit", "0.00", 0, QApplication::UnicodeUTF8));
        labelOriginStatus->setText(QApplication::translate("EventEdit", "Origin Status:", 0, QApplication::UnicodeUTF8));
        labelRMSValue->setText(QApplication::translate("EventEdit", "0.0", 0, QApplication::UnicodeUTF8));
        labelAgency->setText(QApplication::translate("EventEdit", "Agency:", 0, QApplication::UnicodeUTF8));
        labelType->setText(QApplication::translate("EventEdit", "Type:", 0, QApplication::UnicodeUTF8));
        buttonFixOrigin->setText(QApplication::translate("EventEdit", "Fix", 0, QApplication::UnicodeUTF8));
        labelLatitudeValue->setText(QApplication::translate("EventEdit", "0.00", 0, QApplication::UnicodeUTF8));
        labelDepthUnit->setText(QApplication::translate("EventEdit", "km", 0, QApplication::UnicodeUTF8));
        labelDepth->setText(QApplication::translate("EventEdit", "Depth:", 0, QApplication::UnicodeUTF8));
        labelLatitudeError->setText(QApplication::translate("EventEdit", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        labelTime->setText(QApplication::translate("EventEdit", "Time:", 0, QApplication::UnicodeUTF8));
        labelLongitudeError->setText(QApplication::translate("EventEdit", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        labelLatitude->setText(QApplication::translate("EventEdit", "Latitude:", 0, QApplication::UnicodeUTF8));
        labelLongitudeUnit->setText(QApplication::translate("EventEdit", "\302\260 E", 0, QApplication::UnicodeUTF8));
        labelLongitude->setText(QApplication::translate("EventEdit", "Longitude:", 0, QApplication::UnicodeUTF8));
        labelAgencyValue->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonReleaseOrigin->setToolTip(QApplication::translate("EventEdit", "Release a previously fixed preferred origin and let scevent decide what origin to use.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonReleaseOrigin->setText(QApplication::translate("EventEdit", "Release origin", 0, QApplication::UnicodeUTF8));
        labelRegionValue->setText(QApplication::translate("EventEdit", "Flinn-Engdahl region", 0, QApplication::UnicodeUTF8));
        labelLatitudeUnit->setText(QApplication::translate("EventEdit", "\302\260 N", 0, QApplication::UnicodeUTF8));
        labelTimeValue->setText(QApplication::translate("EventEdit", "1970-01-01 00:00:00", 0, QApplication::UnicodeUTF8));
        labelOriginStatusValue->setText(QString());
        labelPhases->setText(QApplication::translate("EventEdit", "Phase Count:", 0, QApplication::UnicodeUTF8));
        labelRegion->setText(QApplication::translate("EventEdit", "Region:", 0, QApplication::UnicodeUTF8));
        labelDepthValue->setText(QApplication::translate("EventEdit", "0", 0, QApplication::UnicodeUTF8));
        labelRMS->setText(QApplication::translate("EventEdit", "RMS Residual:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EventEdit", "Type certainty:", 0, QApplication::UnicodeUTF8));
        labelMagnitudeMethodValue->setText(QString());
        labelMagnitudeMethod->setText(QApplication::translate("EventEdit", "Method:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonReleaseMagnitudeType->setToolTip(QApplication::translate("EventEdit", "Release a previouly fixed magnitude type and let scevent decide what magnitude to use.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonReleaseMagnitudeType->setText(QApplication::translate("EventEdit", "Release", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonFixMagnitudeType->setToolTip(QApplication::translate("EventEdit", "Use only magnitudes with the currently selected type as preferred magnitude.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonFixMagnitudeType->setText(QApplication::translate("EventEdit", "Fix type", 0, QApplication::UnicodeUTF8));
        labelMagnitudeTypeValue->setText(QApplication::translate("EventEdit", "-", 0, QApplication::UnicodeUTF8));
        labelMagnitudeType->setText(QApplication::translate("EventEdit", "Type:", 0, QApplication::UnicodeUTF8));
        labelMagnitude->setText(QApplication::translate("EventEdit", "Value:", 0, QApplication::UnicodeUTF8));
        labelMagnitudeError->setText(QApplication::translate("EventEdit", "+/- 0", 0, QApplication::UnicodeUTF8));
        labelMagnitudeCountValue->setText(QApplication::translate("EventEdit", "0", 0, QApplication::UnicodeUTF8));
        labelMagnitudeValue->setText(QApplication::translate("EventEdit", "0.00", 0, QApplication::UnicodeUTF8));
        labelMagnitudeCount->setText(QApplication::translate("EventEdit", "Count:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(originWidget), QApplication::translate("EventEdit", "Origins", 0, QApplication::UnicodeUTF8));
        mtOriginInfo->setTitle(QApplication::translate("EventEdit", "Derived Origin", 0, QApplication::UnicodeUTF8));
        mtOriginPhasesL->setText(QApplication::translate("EventEdit", "Phase Count:", 0, QApplication::UnicodeUTF8));
        mtOriginDepth->setText(QApplication::translate("EventEdit", "0", 0, QApplication::UnicodeUTF8));
        mtOriginDepthL->setText(QApplication::translate("EventEdit", "Depth:", 0, QApplication::UnicodeUTF8));
        mtOriginLatUnit->setText(QApplication::translate("EventEdit", "\302\260 N", 0, QApplication::UnicodeUTF8));
        mtOriginRegionL->setText(QApplication::translate("EventEdit", "Region:", 0, QApplication::UnicodeUTF8));
        mtOriginDepthError->setText(QApplication::translate("EventEdit", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        mtOriginAgencyL->setText(QApplication::translate("EventEdit", "Agency:", 0, QApplication::UnicodeUTF8));
        mtOriginLon->setText(QApplication::translate("EventEdit", "0.00", 0, QApplication::UnicodeUTF8));
        mtOriginLatL->setText(QApplication::translate("EventEdit", "Latitude:", 0, QApplication::UnicodeUTF8));
        mtOriginPhases->setText(QApplication::translate("EventEdit", "0", 0, QApplication::UnicodeUTF8));
        mtOriginTimeL->setText(QApplication::translate("EventEdit", "Time:", 0, QApplication::UnicodeUTF8));
        mtOriginTime->setText(QApplication::translate("EventEdit", "1970-01-01 00:00:00", 0, QApplication::UnicodeUTF8));
        mtOriginRegion->setText(QApplication::translate("EventEdit", "Flinn-Engdahl region", 0, QApplication::UnicodeUTF8));
        mtOriginAgency->setText(QString());
        mtOriginStatusL->setText(QApplication::translate("EventEdit", "Origin Status:", 0, QApplication::UnicodeUTF8));
        mtOriginLat->setText(QApplication::translate("EventEdit", "0.00", 0, QApplication::UnicodeUTF8));
        mtOriginDepthUnit->setText(QApplication::translate("EventEdit", "km", 0, QApplication::UnicodeUTF8));
        mtOriginLatError->setText(QApplication::translate("EventEdit", "+/- 0 km", 0, QApplication::UnicodeUTF8));
        mtOriginLonL->setText(QApplication::translate("EventEdit", "Longitude:", 0, QApplication::UnicodeUTF8));
        mtOriginStatus->setText(QString());
        mtOriginLonUnit->setText(QApplication::translate("EventEdit", "\302\260 E", 0, QApplication::UnicodeUTF8));
        mtOriginLonError->setText(QApplication::translate("EventEdit", "+/- 0 km", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fmDist->setToolTip(QApplication::translate("EventEdit", "Station Distribution Ratio", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fmDist->setText(QApplication::translate("EventEdit", "-", 0, QApplication::UnicodeUTF8));
        fmMisfitL->setText(QApplication::translate("EventEdit", "Misfit:", 0, QApplication::UnicodeUTF8));
        fmDistL->setText(QApplication::translate("EventEdit", "Distribution:", 0, QApplication::UnicodeUTF8));
        fmNP2L->setText(QApplication::translate("EventEdit", "NP2:", 0, QApplication::UnicodeUTF8));
        fmMethodL->setText(QApplication::translate("EventEdit", "Method:", 0, QApplication::UnicodeUTF8));
        fmCountL->setText(QApplication::translate("EventEdit", "Count:", 0, QApplication::UnicodeUTF8));
        fmFixButton->setText(QApplication::translate("EventEdit", "Fix", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fmGap->setToolTip(QApplication::translate("EventEdit", "Azimuthal Gap", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fmGap->setText(QApplication::translate("EventEdit", "-", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fmNP2->setToolTip(QApplication::translate("EventEdit", "Nodal Plane 2 (strike/dip/rake)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fmNP2->setText(QApplication::translate("EventEdit", "-/-/-", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fmMode->setToolTip(QApplication::translate("EventEdit", "Evaluation Mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fmMode->setText(QString());
#ifndef QT_NO_TOOLTIP
        fmStatus->setToolTip(QApplication::translate("EventEdit", "Evaluation Status", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fmStatus->setText(QString());
        fmGapL->setText(QApplication::translate("EventEdit", "Azi. Gap:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fmNP1->setToolTip(QApplication::translate("EventEdit", "Nodal Plane 1 (strike/dip/rake)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fmNP1->setText(QApplication::translate("EventEdit", "-/-/-", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fmMethod->setToolTip(QApplication::translate("EventEdit", "Method ID", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fmMethod->setText(QString());
        fmAutoButton->setText(QApplication::translate("EventEdit", "Automatic FM selection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fmMisfit->setToolTip(QApplication::translate("EventEdit", "Misfit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fmMisfit->setText(QApplication::translate("EventEdit", "-", 0, QApplication::UnicodeUTF8));
        fmNP1L->setText(QApplication::translate("EventEdit", "NP1:", 0, QApplication::UnicodeUTF8));
        fmStatusL->setText(QApplication::translate("EventEdit", "Status:", 0, QApplication::UnicodeUTF8));
        fmModeL->setText(QApplication::translate("EventEdit", "Mode:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fmCount->setToolTip(QApplication::translate("EventEdit", "Station Polarity Count", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fmCount->setText(QApplication::translate("EventEdit", "-", 0, QApplication::UnicodeUTF8));
        fmTriggerButton->setText(QApplication::translate("EventEdit", "Trigger Mw computation", 0, QApplication::UnicodeUTF8));
        mtMagInfo->setTitle(QApplication::translate("EventEdit", "Magnitude", 0, QApplication::UnicodeUTF8));
        mtMagTypeL->setText(QApplication::translate("EventEdit", "Type:", 0, QApplication::UnicodeUTF8));
        mtMagMethod->setText(QApplication::translate("EventEdit", "-", 0, QApplication::UnicodeUTF8));
        mtMagCount->setText(QApplication::translate("EventEdit", "0", 0, QApplication::UnicodeUTF8));
        mtMagError->setText(QApplication::translate("EventEdit", "+/- 0", 0, QApplication::UnicodeUTF8));
        mtMagCountL->setText(QApplication::translate("EventEdit", "Count:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonReleaseMw->setToolTip(QApplication::translate("EventEdit", "Release a previously fixed moment magnitude as preferred magnitude and let scevent decide what magnitude (part of the preferred origin) to use.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonReleaseMw->setText(QApplication::translate("EventEdit", "Release", 0, QApplication::UnicodeUTF8));
        mtMagMethodL->setText(QApplication::translate("EventEdit", "Method:", 0, QApplication::UnicodeUTF8));
        mtMagL->setText(QApplication::translate("EventEdit", "Value:", 0, QApplication::UnicodeUTF8));
        mtMag->setText(QApplication::translate("EventEdit", "0.00", 0, QApplication::UnicodeUTF8));
        mtMagType->setText(QApplication::translate("EventEdit", "-", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonFixMw->setToolTip(QApplication::translate("EventEdit", "Fixes the moment magnitude of the current preferred focal mechanism as preferred magnitude if available.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonFixMw->setText(QApplication::translate("EventEdit", "Fix Mw", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(fmWidget), QApplication::translate("EventEdit", "Focal Mechanisms", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EventEdit: public Ui_EventEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTEDIT_H
