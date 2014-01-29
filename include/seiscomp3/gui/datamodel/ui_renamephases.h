/********************************************************************************
** Form generated from reading UI file 'renamephases.ui'
**
** Created: Thu Jan 23 14:38:33 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMEPHASES_H
#define UI_RENAMEPHASES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RenamePhases
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QListWidget *listSourcePhases;
    QLabel *label_3;
    QVBoxLayout *vboxLayout2;
    QLabel *label_2;
    QListWidget *listTargetPhase;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *RenamePhases)
    {
        if (RenamePhases->objectName().isEmpty())
            RenamePhases->setObjectName(QString::fromUtf8("RenamePhases"));
        RenamePhases->resize(378, 213);
        vboxLayout = new QVBoxLayout(RenamePhases);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label = new QLabel(RenamePhases);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout1->addWidget(label);

        listSourcePhases = new QListWidget(RenamePhases);
        listSourcePhases->setObjectName(QString::fromUtf8("listSourcePhases"));
        listSourcePhases->setSelectionMode(QAbstractItemView::ExtendedSelection);

        vboxLayout1->addWidget(listSourcePhases);


        hboxLayout->addLayout(vboxLayout1);

        label_3 = new QLabel(RenamePhases);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout->addWidget(label_3);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        label_2 = new QLabel(RenamePhases);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        vboxLayout2->addWidget(label_2);

        listTargetPhase = new QListWidget(RenamePhases);
        listTargetPhase->setObjectName(QString::fromUtf8("listTargetPhase"));

        vboxLayout2->addWidget(listTargetPhase);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        okButton = new QPushButton(RenamePhases);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout1->addWidget(okButton);

        cancelButton = new QPushButton(RenamePhases);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout1->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(RenamePhases);
        QObject::connect(okButton, SIGNAL(clicked()), RenamePhases, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), RenamePhases, SLOT(reject()));

        QMetaObject::connectSlotsByName(RenamePhases);
    } // setupUi

    void retranslateUi(QDialog *RenamePhases)
    {
        RenamePhases->setWindowTitle(QApplication::translate("RenamePhases", "Rename phases", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RenamePhases", "Source:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RenamePhases", ">", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RenamePhases", "Target:", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("RenamePhases", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("RenamePhases", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RenamePhases: public Ui_RenamePhases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMEPHASES_H
