/********************************************************************************
** Form generated from reading UI file 'eventlistview.ui'
**
** Created: Thu Jan 23 14:38:31 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTLISTVIEW_H
#define UI_EVENTLISTVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventListView
{
public:
    QAction *actionCopyRowToClipboard;
    QVBoxLayout *vboxLayout;
    QFrame *frameList;
    QFrame *frameControls;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClear;
    QSpacerItem *spacerItem;
    QLabel *label_3;
    QSpinBox *spinBox;
    QPushButton *btnReadDays;
    QSpacerItem *spacerItem1;
    QLabel *label;
    QDateTimeEdit *dateTimeEditStart;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEditEnd;
    QPushButton *btnReadInterval;
    QFrame *frameCustomControls;
    QFrame *frame;
    QHBoxLayout *hboxLayout1;
    QCheckBox *cbHideOther;
    QSpacerItem *spacerItem2;
    QCheckBox *cbHideForeign;
    QSpacerItem *spacerItem3;
    QCheckBox *cbShowLatestOnly;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout2;
    QFrame *frameRegionFilter;
    QHBoxLayout *hboxLayout3;
    QCheckBox *cbFilterRegions;
    QComboBox *lstFilterRegions;
    QToolButton *btnChangeRegion;
    QLabel *lbFilterRegions;
    QSpacerItem *spacerItem5;

    void setupUi(QWidget *EventListView)
    {
        if (EventListView->objectName().isEmpty())
            EventListView->setObjectName(QString::fromUtf8("EventListView"));
        EventListView->resize(802, 710);
        actionCopyRowToClipboard = new QAction(EventListView);
        actionCopyRowToClipboard->setObjectName(QString::fromUtf8("actionCopyRowToClipboard"));
        vboxLayout = new QVBoxLayout(EventListView);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frameList = new QFrame(EventListView);
        frameList->setObjectName(QString::fromUtf8("frameList"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(frameList->sizePolicy().hasHeightForWidth());
        frameList->setSizePolicy(sizePolicy);
        frameList->setFrameShape(QFrame::NoFrame);
        frameList->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(frameList);

        frameControls = new QFrame(EventListView);
        frameControls->setObjectName(QString::fromUtf8("frameControls"));
        frameControls->setFrameShadow(QFrame::Plain);
        vboxLayout1 = new QVBoxLayout(frameControls);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnClear = new QPushButton(frameControls);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setEnabled(false);
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(btnClear);

        spacerItem = new QSpacerItem(16, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label_3 = new QLabel(frameControls);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(label_3);

        spinBox = new QSpinBox(frameControls);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy3);
        spinBox->setMinimum(1);

        hboxLayout->addWidget(spinBox);

        btnReadDays = new QPushButton(frameControls);
        btnReadDays->setObjectName(QString::fromUtf8("btnReadDays"));
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(0));
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnReadDays->sizePolicy().hasHeightForWidth());
        btnReadDays->setSizePolicy(sizePolicy4);
        btnReadDays->setMinimumSize(QSize(50, 0));

        hboxLayout->addWidget(btnReadDays);

        spacerItem1 = new QSpacerItem(16, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        label = new QLabel(frameControls);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(label);

        dateTimeEditStart = new QDateTimeEdit(frameControls);
        dateTimeEditStart->setObjectName(QString::fromUtf8("dateTimeEditStart"));
        dateTimeEditStart->setCurrentSection(QDateTimeEdit::YearSection);

        hboxLayout->addWidget(dateTimeEditStart);

        label_2 = new QLabel(frameControls);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(label_2);

        dateTimeEditEnd = new QDateTimeEdit(frameControls);
        dateTimeEditEnd->setObjectName(QString::fromUtf8("dateTimeEditEnd"));
        dateTimeEditEnd->setCurrentSection(QDateTimeEdit::YearSection);

        hboxLayout->addWidget(dateTimeEditEnd);

        btnReadInterval = new QPushButton(frameControls);
        btnReadInterval->setObjectName(QString::fromUtf8("btnReadInterval"));
        sizePolicy4.setHeightForWidth(btnReadInterval->sizePolicy().hasHeightForWidth());
        btnReadInterval->setSizePolicy(sizePolicy4);
        btnReadInterval->setMinimumSize(QSize(50, 0));

        hboxLayout->addWidget(btnReadInterval);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addWidget(frameControls);

        frameCustomControls = new QFrame(EventListView);
        frameCustomControls->setObjectName(QString::fromUtf8("frameCustomControls"));
        frameCustomControls->setFrameShape(QFrame::NoFrame);
        frameCustomControls->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(frameCustomControls);

        frame = new QFrame(EventListView);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Raised);

        vboxLayout->addWidget(frame);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        cbHideOther = new QCheckBox(EventListView);
        cbHideOther->setObjectName(QString::fromUtf8("cbHideOther"));
        cbHideOther->setChecked(true);

        hboxLayout1->addWidget(cbHideOther);

        spacerItem2 = new QSpacerItem(16, 23, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        cbHideForeign = new QCheckBox(EventListView);
        cbHideForeign->setObjectName(QString::fromUtf8("cbHideForeign"));
        cbHideForeign->setChecked(false);

        hboxLayout1->addWidget(cbHideForeign);

        spacerItem3 = new QSpacerItem(16, 23, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);

        cbShowLatestOnly = new QCheckBox(EventListView);
        cbShowLatestOnly->setObjectName(QString::fromUtf8("cbShowLatestOnly"));

        hboxLayout1->addWidget(cbShowLatestOnly);

        spacerItem4 = new QSpacerItem(144, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem4);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        frameRegionFilter = new QFrame(EventListView);
        frameRegionFilter->setObjectName(QString::fromUtf8("frameRegionFilter"));
        frameRegionFilter->setFrameShape(QFrame::NoFrame);
        frameRegionFilter->setFrameShadow(QFrame::Raised);
        hboxLayout3 = new QHBoxLayout(frameRegionFilter);
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        cbFilterRegions = new QCheckBox(frameRegionFilter);
        cbFilterRegions->setObjectName(QString::fromUtf8("cbFilterRegions"));

        hboxLayout3->addWidget(cbFilterRegions);

        lstFilterRegions = new QComboBox(frameRegionFilter);
        lstFilterRegions->setObjectName(QString::fromUtf8("lstFilterRegions"));

        hboxLayout3->addWidget(lstFilterRegions);

        btnChangeRegion = new QToolButton(frameRegionFilter);
        btnChangeRegion->setObjectName(QString::fromUtf8("btnChangeRegion"));

        hboxLayout3->addWidget(btnChangeRegion);

        lbFilterRegions = new QLabel(frameRegionFilter);
        lbFilterRegions->setObjectName(QString::fromUtf8("lbFilterRegions"));

        hboxLayout3->addWidget(lbFilterRegions);


        hboxLayout2->addWidget(frameRegionFilter);

        spacerItem5 = new QSpacerItem(351, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem5);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(EventListView);

        QMetaObject::connectSlotsByName(EventListView);
    } // setupUi

    void retranslateUi(QWidget *EventListView)
    {
        EventListView->setWindowTitle(QApplication::translate("EventListView", "Event List", 0, QApplication::UnicodeUTF8));
        actionCopyRowToClipboard->setText(QApplication::translate("EventListView", "copyRowToClipboard", 0, QApplication::UnicodeUTF8));
        actionCopyRowToClipboard->setShortcut(QApplication::translate("EventListView", "Ctrl+C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnClear->setToolTip(QApplication::translate("EventListView", "Removes all events from the list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnClear->setText(QApplication::translate("EventListView", "Clear", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("EventListView", "Last days:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnReadDays->setToolTip(QApplication::translate("EventListView", "Reads the events of the last n days using the \"Last days:\" value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnReadDays->setText(QApplication::translate("EventListView", "Read", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EventListView", "From:", 0, QApplication::UnicodeUTF8));
        dateTimeEditStart->setDisplayFormat(QApplication::translate("EventListView", "yyyy/MM/dd HH:mm:ss", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("EventListView", "To:", 0, QApplication::UnicodeUTF8));
        dateTimeEditEnd->setDisplayFormat(QApplication::translate("EventListView", "yyyy/MM/dd HH:mm:ss", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnReadInterval->setToolTip(QApplication::translate("EventListView", "Reads the events of the given timespan using the \"From:\" and \"To:\" dates", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnReadInterval->setText(QApplication::translate("EventListView", "Read", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbHideOther->setToolTip(QApplication::translate("EventListView", "Hides/shows events with EventType set to OTHER/NOT_EXISTING", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbHideOther->setText(QApplication::translate("EventListView", "Hide other/fake events", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbHideForeign->setToolTip(QApplication::translate("EventListView", "Hides/shows events from non preferred agencies", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbHideForeign->setText(QApplication::translate("EventListView", "Show only own events", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbShowLatestOnly->setToolTip(QApplication::translate("EventListView", "Enables/disables the display of only one origin per agency (the latest one) or all origins", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbShowLatestOnly->setText(QApplication::translate("EventListView", "Show only latest/preferred origin per agency", 0, QApplication::UnicodeUTF8));
        cbFilterRegions->setText(QApplication::translate("EventListView", "Hide events outside", 0, QApplication::UnicodeUTF8));
        btnChangeRegion->setText(QApplication::translate("EventListView", "...", 0, QApplication::UnicodeUTF8));
        lbFilterRegions->setText(QApplication::translate("EventListView", "region", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EventListView: public Ui_EventListView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTLISTVIEW_H
