/********************************************************************************
** Form generated from reading UI file 'uncertainties.ui'
**
** Created: Thu Jan 23 14:38:31 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNCERTAINTIES_H
#define UI_UNCERTAINTIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Uncertainties
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *cbAsymmetric;
    QFrame *line;
    QGridLayout *gridLayout;
    QDoubleSpinBox *spinLowerUncertainty;
    QLabel *labelUpperUncertainty;
    QDoubleSpinBox *spinUpperUncertainty;
    QLabel *labelLowerUncertainty;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *Uncertainties)
    {
        if (Uncertainties->objectName().isEmpty())
            Uncertainties->setObjectName(QString::fromUtf8("Uncertainties"));
        Uncertainties->resize(212, 151);
        vboxLayout = new QVBoxLayout(Uncertainties);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        cbAsymmetric = new QCheckBox(Uncertainties);
        cbAsymmetric->setObjectName(QString::fromUtf8("cbAsymmetric"));

        vboxLayout->addWidget(cbAsymmetric);

        line = new QFrame(Uncertainties);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        gridLayout = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinLowerUncertainty = new QDoubleSpinBox(Uncertainties);
        spinLowerUncertainty->setObjectName(QString::fromUtf8("spinLowerUncertainty"));
        spinLowerUncertainty->setDecimals(4);
        spinLowerUncertainty->setSingleStep(0.5);

        gridLayout->addWidget(spinLowerUncertainty, 0, 1, 1, 1);

        labelUpperUncertainty = new QLabel(Uncertainties);
        labelUpperUncertainty->setObjectName(QString::fromUtf8("labelUpperUncertainty"));
        labelUpperUncertainty->setEnabled(false);

        gridLayout->addWidget(labelUpperUncertainty, 1, 0, 1, 1);

        spinUpperUncertainty = new QDoubleSpinBox(Uncertainties);
        spinUpperUncertainty->setObjectName(QString::fromUtf8("spinUpperUncertainty"));
        spinUpperUncertainty->setEnabled(false);
        spinUpperUncertainty->setDecimals(4);
        spinUpperUncertainty->setSingleStep(0.5);

        gridLayout->addWidget(spinUpperUncertainty, 1, 1, 1, 1);

        labelLowerUncertainty = new QLabel(Uncertainties);
        labelLowerUncertainty->setObjectName(QString::fromUtf8("labelLowerUncertainty"));

        gridLayout->addWidget(labelLowerUncertainty, 0, 0, 1, 1);


        vboxLayout->addLayout(gridLayout);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem1 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        okButton = new QPushButton(Uncertainties);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(Uncertainties);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(Uncertainties);
        QObject::connect(okButton, SIGNAL(clicked()), Uncertainties, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), Uncertainties, SLOT(reject()));

        QMetaObject::connectSlotsByName(Uncertainties);
    } // setupUi

    void retranslateUi(QDialog *Uncertainties)
    {
        Uncertainties->setWindowTitle(QApplication::translate("Uncertainties", "Uncertainty", 0, QApplication::UnicodeUTF8));
        cbAsymmetric->setText(QApplication::translate("Uncertainties", "Asymmetric uncertainty", 0, QApplication::UnicodeUTF8));
        labelUpperUncertainty->setText(QApplication::translate("Uncertainties", "Upper uncertainty:", 0, QApplication::UnicodeUTF8));
        labelLowerUncertainty->setText(QApplication::translate("Uncertainties", "Lower uncertainty:", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("Uncertainties", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("Uncertainties", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Uncertainties: public Ui_Uncertainties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNCERTAINTIES_H
