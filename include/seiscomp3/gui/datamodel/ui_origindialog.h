/********************************************************************************
** Form generated from reading UI file 'origindialog.ui'
**
** Created: Thu Jan 23 14:38:33 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIGINDIALOG_H
#define UI_ORIGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OriginDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QDoubleSpinBox *depthDoubleSpinBox;
    QLabel *lonLabel;
    QDoubleSpinBox *lonDoubleSpinBox;
    QLabel *latLabel;
    QLabel *label;
    QDoubleSpinBox *latDoubleSpinBox;
    QDateTimeEdit *dateTimeEdit;
    QGroupBox *advancedGB;
    QGridLayout *gridLayout1;
    QDoubleSpinBox *magSB;
    QLabel *magTypeLabel;
    QComboBox *magTypeCB;
    QLabel *magLabel;
    QLabel *phaseCountLabel;
    QDoubleSpinBox *phaseCountSB;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *sendButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OriginDialog)
    {
        if (OriginDialog->objectName().isEmpty())
            OriginDialog->setObjectName(QString::fromUtf8("OriginDialog"));
        OriginDialog->resize(238, 122);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OriginDialog->sizePolicy().hasHeightForWidth());
        OriginDialog->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(OriginDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(OriginDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        depthDoubleSpinBox = new QDoubleSpinBox(groupBox);
        depthDoubleSpinBox->setObjectName(QString::fromUtf8("depthDoubleSpinBox"));
        depthDoubleSpinBox->setAlignment(Qt::AlignRight);
        depthDoubleSpinBox->setDecimals(0);
        depthDoubleSpinBox->setMaximum(1000);
        depthDoubleSpinBox->setMinimum(-100);
        depthDoubleSpinBox->setSingleStep(10);
        depthDoubleSpinBox->setValue(10);

        gridLayout->addWidget(depthDoubleSpinBox, 3, 1, 1, 1);

        lonLabel = new QLabel(groupBox);
        lonLabel->setObjectName(QString::fromUtf8("lonLabel"));

        gridLayout->addWidget(lonLabel, 2, 0, 1, 1);

        lonDoubleSpinBox = new QDoubleSpinBox(groupBox);
        lonDoubleSpinBox->setObjectName(QString::fromUtf8("lonDoubleSpinBox"));
        lonDoubleSpinBox->setMinimumSize(QSize(130, 0));
        lonDoubleSpinBox->setAlignment(Qt::AlignRight);
        lonDoubleSpinBox->setDecimals(4);
        lonDoubleSpinBox->setMaximum(180);
        lonDoubleSpinBox->setMinimum(-180);
        lonDoubleSpinBox->setValue(0);

        gridLayout->addWidget(lonDoubleSpinBox, 2, 1, 1, 1);

        latLabel = new QLabel(groupBox);
        latLabel->setObjectName(QString::fromUtf8("latLabel"));

        gridLayout->addWidget(latLabel, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        latDoubleSpinBox = new QDoubleSpinBox(groupBox);
        latDoubleSpinBox->setObjectName(QString::fromUtf8("latDoubleSpinBox"));
        latDoubleSpinBox->setMinimumSize(QSize(130, 0));
        latDoubleSpinBox->setAlignment(Qt::AlignRight);
        latDoubleSpinBox->setDecimals(4);
        latDoubleSpinBox->setMaximum(90);
        latDoubleSpinBox->setMinimum(-90);

        gridLayout->addWidget(latDoubleSpinBox, 1, 1, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setAlignment(Qt::AlignRight);
        dateTimeEdit->setCurrentSection(QDateTimeEdit::YearSection);

        gridLayout->addWidget(dateTimeEdit, 0, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        advancedGB = new QGroupBox(OriginDialog);
        advancedGB->setObjectName(QString::fromUtf8("advancedGB"));
        advancedGB->setEnabled(true);
        advancedGB->setCheckable(true);
        advancedGB->setChecked(false);
        gridLayout1 = new QGridLayout(advancedGB);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        magSB = new QDoubleSpinBox(advancedGB);
        magSB->setObjectName(QString::fromUtf8("magSB"));
        magSB->setAlignment(Qt::AlignRight);
        magSB->setMaximum(10);
        magSB->setSingleStep(0.2);
        magSB->setValue(5);

        gridLayout1->addWidget(magSB, 1, 1, 1, 1);

        magTypeLabel = new QLabel(advancedGB);
        magTypeLabel->setObjectName(QString::fromUtf8("magTypeLabel"));
        sizePolicy1.setHeightForWidth(magTypeLabel->sizePolicy().hasHeightForWidth());
        magTypeLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(magTypeLabel, 2, 0, 1, 1);

        magTypeCB = new QComboBox(advancedGB);
        magTypeCB->setObjectName(QString::fromUtf8("magTypeCB"));
        magTypeCB->setEditable(true);
        magTypeCB->setMaxVisibleItems(30);

        gridLayout1->addWidget(magTypeCB, 2, 1, 1, 1);

        magLabel = new QLabel(advancedGB);
        magLabel->setObjectName(QString::fromUtf8("magLabel"));
        sizePolicy1.setHeightForWidth(magLabel->sizePolicy().hasHeightForWidth());
        magLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(magLabel, 1, 0, 1, 1);

        phaseCountLabel = new QLabel(advancedGB);
        phaseCountLabel->setObjectName(QString::fromUtf8("phaseCountLabel"));
        sizePolicy1.setHeightForWidth(phaseCountLabel->sizePolicy().hasHeightForWidth());
        phaseCountLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(phaseCountLabel, 0, 0, 1, 1);

        phaseCountSB = new QDoubleSpinBox(advancedGB);
        phaseCountSB->setObjectName(QString::fromUtf8("phaseCountSB"));
        phaseCountSB->setAlignment(Qt::AlignRight);
        phaseCountSB->setDecimals(0);
        phaseCountSB->setMaximum(10000);
        phaseCountSB->setValue(10);

        gridLayout1->addWidget(phaseCountSB, 0, 1, 1, 1);


        vboxLayout->addWidget(advancedGB);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        sendButton = new QPushButton(OriginDialog);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
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
        sendButton->setPalette(palette);

        hboxLayout->addWidget(sendButton);

        cancelButton = new QPushButton(OriginDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(dateTimeEdit, latDoubleSpinBox);
        QWidget::setTabOrder(latDoubleSpinBox, lonDoubleSpinBox);
        QWidget::setTabOrder(lonDoubleSpinBox, depthDoubleSpinBox);
        QWidget::setTabOrder(depthDoubleSpinBox, sendButton);
        QWidget::setTabOrder(sendButton, cancelButton);

        retranslateUi(OriginDialog);
        QObject::connect(sendButton, SIGNAL(clicked()), OriginDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), OriginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OriginDialog);
    } // setupUi

    void retranslateUi(QDialog *OriginDialog)
    {
        OriginDialog->setWindowTitle(QApplication::translate("OriginDialog", "Artificial Origin", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("OriginDialog", "Origin", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OriginDialog", "Depth:", 0, QApplication::UnicodeUTF8));
        depthDoubleSpinBox->setSuffix(QApplication::translate("OriginDialog", " km", 0, QApplication::UnicodeUTF8));
        lonLabel->setText(QApplication::translate("OriginDialog", "Lon:", 0, QApplication::UnicodeUTF8));
        lonDoubleSpinBox->setSuffix(QApplication::translate("OriginDialog", " deg", 0, QApplication::UnicodeUTF8));
        latLabel->setText(QApplication::translate("OriginDialog", "Lat:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OriginDialog", "Time:", 0, QApplication::UnicodeUTF8));
        latDoubleSpinBox->setSuffix(QApplication::translate("OriginDialog", " deg", 0, QApplication::UnicodeUTF8));
        dateTimeEdit->setDisplayFormat(QApplication::translate("OriginDialog", "yyyy-MM-dd hh:mm:ss", 0, QApplication::UnicodeUTF8));
        advancedGB->setTitle(QApplication::translate("OriginDialog", "Advanced", 0, QApplication::UnicodeUTF8));
        magTypeLabel->setText(QApplication::translate("OriginDialog", "Magnitude Type", 0, QApplication::UnicodeUTF8));
        magLabel->setText(QApplication::translate("OriginDialog", "Magnitude", 0, QApplication::UnicodeUTF8));
        phaseCountLabel->setText(QApplication::translate("OriginDialog", "PhaseCount", 0, QApplication::UnicodeUTF8));
        sendButton->setText(QApplication::translate("OriginDialog", "Create", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("OriginDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OriginDialog: public Ui_OriginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIGINDIALOG_H
