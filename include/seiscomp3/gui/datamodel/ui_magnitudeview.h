/********************************************************************************
** Form generated from reading UI file 'magnitudeview.ui'
**
** Created: Thu Jan 23 14:38:32 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGNITUDEVIEW_H
#define UI_MAGNITUDEVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MagnitudeView
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frameMagnitudeTypes;
    QHBoxLayout *hboxLayout;
    QFrame *groupSummary;
    QVBoxLayout *vboxLayout1;
    QLabel *labelRegion;
    QFrame *frameMap;
    QVBoxLayout *vboxLayout2;
    QFrame *groupMagnitude;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *lbAgencyID;
    QLabel *labelAuthor;
    QLabel *lbAuthor;
    QSpacerItem *spacerItem;
    QLabel *label_8;
    QLabel *label;
    QLabel *labelAgencyID;
    QLabel *label_2;
    QLabel *labelMagnitude;
    QLabel *labelRMS;
    QLabel *labelMinMag;
    QLabel *labelMaxMag;
    QLabel *labelNumStaMags;
    QLabel *label_7;
    QLabel *lbMethod;
    QLabel *labelMethod;
    QFrame *frame;
    QLabel *lbEvaluation;
    QLabel *labelEvaluation;
    QFrame *groupMagnitudes;
    QVBoxLayout *vboxLayout3;
    QTableView *tableStationMagnitudes;
    QFrame *groupReview;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout1;
    QFrame *groupSettings;
    QHBoxLayout *hboxLayout2;
    QRadioButton *btnMean;
    QRadioButton *btnMedian;
    QRadioButton *btnTrimmedMean;
    QSpinBox *spinBox;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout3;
    QPushButton *btnRecalculate;
    QSpacerItem *spacerItem2;
    QPushButton *btnWaveforms;
    QPushButton *btnCommit;

    void setupUi(QWidget *MagnitudeView)
    {
        if (MagnitudeView->objectName().isEmpty())
            MagnitudeView->setObjectName(QString::fromUtf8("MagnitudeView"));
        MagnitudeView->resize(853, 864);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MagnitudeView->sizePolicy().hasHeightForWidth());
        MagnitudeView->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(MagnitudeView);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frameMagnitudeTypes = new QFrame(MagnitudeView);
        frameMagnitudeTypes->setObjectName(QString::fromUtf8("frameMagnitudeTypes"));
        frameMagnitudeTypes->setFrameShape(QFrame::NoFrame);

        vboxLayout->addWidget(frameMagnitudeTypes);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(4);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        groupSummary = new QFrame(MagnitudeView);
        groupSummary->setObjectName(QString::fromUtf8("groupSummary"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupSummary->sizePolicy().hasHeightForWidth());
        groupSummary->setSizePolicy(sizePolicy1);
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
        labelRegion->setMinimumSize(QSize(100, 0));
        labelRegion->setFrameShape(QFrame::NoFrame);

        vboxLayout1->addWidget(labelRegion);

        frameMap = new QFrame(groupSummary);
        frameMap->setObjectName(QString::fromUtf8("frameMap"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(7));
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frameMap->sizePolicy().hasHeightForWidth());
        frameMap->setSizePolicy(sizePolicy3);
        frameMap->setMinimumSize(QSize(120, 200));
        frameMap->setFrameShape(QFrame::NoFrame);
        frameMap->setFrameShadow(QFrame::Plain);

        vboxLayout1->addWidget(frameMap);


        hboxLayout->addWidget(groupSummary);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(4);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        groupMagnitude = new QFrame(MagnitudeView);
        groupMagnitude->setObjectName(QString::fromUtf8("groupMagnitude"));
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(groupMagnitude->sizePolicy().hasHeightForWidth());
        groupMagnitude->setSizePolicy(sizePolicy4);
        gridLayout = new QGridLayout(groupMagnitude);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupMagnitude);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        lbAgencyID = new QLabel(groupMagnitude);
        lbAgencyID->setObjectName(QString::fromUtf8("lbAgencyID"));
        sizePolicy.setHeightForWidth(lbAgencyID->sizePolicy().hasHeightForWidth());
        lbAgencyID->setSizePolicy(sizePolicy);
        lbAgencyID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbAgencyID, 7, 0, 1, 1);

        labelAuthor = new QLabel(groupMagnitude);
        labelAuthor->setObjectName(QString::fromUtf8("labelAuthor"));
        QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(13), static_cast<QSizePolicy::Policy>(5));
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelAuthor->sizePolicy().hasHeightForWidth());
        labelAuthor->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelAuthor, 8, 1, 1, 1);

        lbAuthor = new QLabel(groupMagnitude);
        lbAuthor->setObjectName(QString::fromUtf8("lbAuthor"));
        lbAuthor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbAuthor, 8, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 87, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 0, 1, 2);

        label_8 = new QLabel(groupMagnitude);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        label = new QLabel(groupMagnitude);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        labelAgencyID = new QLabel(groupMagnitude);
        labelAgencyID->setObjectName(QString::fromUtf8("labelAgencyID"));
        sizePolicy5.setHeightForWidth(labelAgencyID->sizePolicy().hasHeightForWidth());
        labelAgencyID->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelAgencyID, 7, 1, 1, 1);

        label_2 = new QLabel(groupMagnitude);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        labelMagnitude = new QLabel(groupMagnitude);
        labelMagnitude->setObjectName(QString::fromUtf8("labelMagnitude"));
        QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(5));
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(labelMagnitude->sizePolicy().hasHeightForWidth());
        labelMagnitude->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(labelMagnitude, 0, 1, 1, 1);

        labelRMS = new QLabel(groupMagnitude);
        labelRMS->setObjectName(QString::fromUtf8("labelRMS"));
        sizePolicy6.setHeightForWidth(labelRMS->sizePolicy().hasHeightForWidth());
        labelRMS->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(labelRMS, 1, 1, 1, 1);

        labelMinMag = new QLabel(groupMagnitude);
        labelMinMag->setObjectName(QString::fromUtf8("labelMinMag"));
        sizePolicy6.setHeightForWidth(labelMinMag->sizePolicy().hasHeightForWidth());
        labelMinMag->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(labelMinMag, 3, 1, 1, 1);

        labelMaxMag = new QLabel(groupMagnitude);
        labelMaxMag->setObjectName(QString::fromUtf8("labelMaxMag"));
        sizePolicy6.setHeightForWidth(labelMaxMag->sizePolicy().hasHeightForWidth());
        labelMaxMag->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(labelMaxMag, 4, 1, 1, 1);

        labelNumStaMags = new QLabel(groupMagnitude);
        labelNumStaMags->setObjectName(QString::fromUtf8("labelNumStaMags"));
        sizePolicy6.setHeightForWidth(labelNumStaMags->sizePolicy().hasHeightForWidth());
        labelNumStaMags->setSizePolicy(sizePolicy6);
        labelNumStaMags->setLayoutDirection(Qt::LeftToRight);
        labelNumStaMags->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelNumStaMags, 2, 1, 1, 1);

        label_7 = new QLabel(groupMagnitude);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(0, 0));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        lbMethod = new QLabel(groupMagnitude);
        lbMethod->setObjectName(QString::fromUtf8("lbMethod"));
        sizePolicy.setHeightForWidth(lbMethod->sizePolicy().hasHeightForWidth());
        lbMethod->setSizePolicy(sizePolicy);
        lbMethod->setLayoutDirection(Qt::LeftToRight);
        lbMethod->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbMethod, 10, 0, 1, 1);

        labelMethod = new QLabel(groupMagnitude);
        labelMethod->setObjectName(QString::fromUtf8("labelMethod"));
        sizePolicy.setHeightForWidth(labelMethod->sizePolicy().hasHeightForWidth());
        labelMethod->setSizePolicy(sizePolicy);
        labelMethod->setScaledContents(false);

        gridLayout->addWidget(labelMethod, 10, 1, 1, 1);

        frame = new QFrame(groupMagnitude);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy7);
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(frame, 6, 0, 1, 2);

        lbEvaluation = new QLabel(groupMagnitude);
        lbEvaluation->setObjectName(QString::fromUtf8("lbEvaluation"));
        lbEvaluation->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbEvaluation, 9, 0, 1, 1);

        labelEvaluation = new QLabel(groupMagnitude);
        labelEvaluation->setObjectName(QString::fromUtf8("labelEvaluation"));

        gridLayout->addWidget(labelEvaluation, 9, 1, 1, 1);


        vboxLayout2->addWidget(groupMagnitude);


        hboxLayout->addLayout(vboxLayout2);

        groupMagnitudes = new QFrame(MagnitudeView);
        groupMagnitudes->setObjectName(QString::fromUtf8("groupMagnitudes"));
        sizePolicy1.setHeightForWidth(groupMagnitudes->sizePolicy().hasHeightForWidth());
        groupMagnitudes->setSizePolicy(sizePolicy1);
        vboxLayout3 = new QVBoxLayout(groupMagnitudes);
        vboxLayout3->setSpacing(4);
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));

        hboxLayout->addWidget(groupMagnitudes);


        vboxLayout->addLayout(hboxLayout);

        tableStationMagnitudes = new QTableView(MagnitudeView);
        tableStationMagnitudes->setObjectName(QString::fromUtf8("tableStationMagnitudes"));
        tableStationMagnitudes->setFrameShape(QFrame::NoFrame);
        tableStationMagnitudes->setFrameShadow(QFrame::Plain);
        tableStationMagnitudes->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableStationMagnitudes->setAlternatingRowColors(true);
        tableStationMagnitudes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableStationMagnitudes->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout->addWidget(tableStationMagnitudes);

        groupReview = new QFrame(MagnitudeView);
        groupReview->setObjectName(QString::fromUtf8("groupReview"));
        groupReview->setFrameShape(QFrame::NoFrame);
        groupReview->setFrameShadow(QFrame::Raised);
        vboxLayout4 = new QVBoxLayout(groupReview);
        vboxLayout4->setSpacing(6);
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        groupSettings = new QFrame(groupReview);
        groupSettings->setObjectName(QString::fromUtf8("groupSettings"));
        QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(4));
        sizePolicy8.setHorizontalStretch(1);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(groupSettings->sizePolicy().hasHeightForWidth());
        groupSettings->setSizePolicy(sizePolicy8);
        hboxLayout2 = new QHBoxLayout(groupSettings);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        btnMean = new QRadioButton(groupSettings);
        btnMean->setObjectName(QString::fromUtf8("btnMean"));
        QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(0));
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(btnMean->sizePolicy().hasHeightForWidth());
        btnMean->setSizePolicy(sizePolicy9);
        btnMean->setChecked(true);

        hboxLayout2->addWidget(btnMean);

        btnMedian = new QRadioButton(groupSettings);
        btnMedian->setObjectName(QString::fromUtf8("btnMedian"));

        hboxLayout2->addWidget(btnMedian);

        btnTrimmedMean = new QRadioButton(groupSettings);
        btnTrimmedMean->setObjectName(QString::fromUtf8("btnTrimmedMean"));
        sizePolicy9.setHeightForWidth(btnTrimmedMean->sizePolicy().hasHeightForWidth());
        btnTrimmedMean->setSizePolicy(sizePolicy9);

        hboxLayout2->addWidget(btnTrimmedMean);

        spinBox = new QSpinBox(groupSettings);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        sizePolicy9.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy9);
        spinBox->setMaximum(100);
        spinBox->setValue(25);

        hboxLayout2->addWidget(spinBox);


        hboxLayout1->addWidget(groupSettings);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        vboxLayout4->addLayout(hboxLayout1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        btnRecalculate = new QPushButton(groupReview);
        btnRecalculate->setObjectName(QString::fromUtf8("btnRecalculate"));
        btnRecalculate->setEnabled(true);
        sizePolicy9.setHeightForWidth(btnRecalculate->sizePolicy().hasHeightForWidth());
        btnRecalculate->setSizePolicy(sizePolicy9);

        hboxLayout3->addWidget(btnRecalculate);

        spacerItem2 = new QSpacerItem(501, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);

        btnWaveforms = new QPushButton(groupReview);
        btnWaveforms->setObjectName(QString::fromUtf8("btnWaveforms"));
        btnWaveforms->setEnabled(true);

        hboxLayout3->addWidget(btnWaveforms);

        btnCommit = new QPushButton(groupReview);
        btnCommit->setObjectName(QString::fromUtf8("btnCommit"));
        btnCommit->setEnabled(false);
        sizePolicy9.setHeightForWidth(btnCommit->sizePolicy().hasHeightForWidth());
        btnCommit->setSizePolicy(sizePolicy9);
        btnCommit->setAutoFillBackground(false);

        hboxLayout3->addWidget(btnCommit);


        vboxLayout4->addLayout(hboxLayout3);


        vboxLayout->addWidget(groupReview);


        retranslateUi(MagnitudeView);
        QObject::connect(btnTrimmedMean, SIGNAL(toggled(bool)), spinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MagnitudeView);
    } // setupUi

    void retranslateUi(QWidget *MagnitudeView)
    {
        MagnitudeView->setWindowTitle(QApplication::translate("MagnitudeView", "MagnitudeView", 0, QApplication::UnicodeUTF8));
        labelRegion->setText(QApplication::translate("MagnitudeView", "Region", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MagnitudeView", "Min: ", 0, QApplication::UnicodeUTF8));
        lbAgencyID->setText(QApplication::translate("MagnitudeView", "Agency: ", 0, QApplication::UnicodeUTF8));
        labelAuthor->setText(QApplication::translate("MagnitudeView", "-", 0, QApplication::UnicodeUTF8));
        lbAuthor->setText(QApplication::translate("MagnitudeView", "Author: ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("MagnitudeView", "Station Magnitude Count", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("MagnitudeView", "Count: ", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MagnitudeView", "+/-: ", 0, QApplication::UnicodeUTF8));
        labelAgencyID->setText(QApplication::translate("MagnitudeView", "MagTool@GFZ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MagnitudeView", "Max: ", 0, QApplication::UnicodeUTF8));
        labelMagnitude->setText(QApplication::translate("MagnitudeView", "-.-", 0, QApplication::UnicodeUTF8));
        labelRMS->setText(QApplication::translate("MagnitudeView", "-.-", 0, QApplication::UnicodeUTF8));
        labelMinMag->setText(QApplication::translate("MagnitudeView", "-.-", 0, QApplication::UnicodeUTF8));
        labelMaxMag->setText(QApplication::translate("MagnitudeView", "-.-", 0, QApplication::UnicodeUTF8));
        labelNumStaMags->setText(QApplication::translate("MagnitudeView", "0", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MagnitudeView", "Value: ", 0, QApplication::UnicodeUTF8));
        lbMethod->setText(QApplication::translate("MagnitudeView", "Method: ", 0, QApplication::UnicodeUTF8));
        labelMethod->setText(QApplication::translate("MagnitudeView", "average", 0, QApplication::UnicodeUTF8));
        lbEvaluation->setText(QApplication::translate("MagnitudeView", "Evaluation:", 0, QApplication::UnicodeUTF8));
        labelEvaluation->setText(QApplication::translate("MagnitudeView", "-", 0, QApplication::UnicodeUTF8));
        btnMean->setText(QApplication::translate("MagnitudeView", "Mean", 0, QApplication::UnicodeUTF8));
        btnMedian->setText(QApplication::translate("MagnitudeView", "Median", 0, QApplication::UnicodeUTF8));
        btnTrimmedMean->setText(QApplication::translate("MagnitudeView", "Trimmed mean", 0, QApplication::UnicodeUTF8));
        spinBox->setSuffix(QApplication::translate("MagnitudeView", "%", 0, QApplication::UnicodeUTF8));
        btnRecalculate->setText(QApplication::translate("MagnitudeView", "Recalculate", 0, QApplication::UnicodeUTF8));
        btnWaveforms->setText(QApplication::translate("MagnitudeView", "Waveforms", 0, QApplication::UnicodeUTF8));
        btnCommit->setText(QApplication::translate("MagnitudeView", "Commit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MagnitudeView: public Ui_MagnitudeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGNITUDEVIEW_H
