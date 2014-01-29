/********************************************************************************
** Form generated from reading UI file 'aboutwidget.ui'
**
** Created: Thu Jan 23 14:38:30 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWIDGET_H
#define UI_ABOUTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWidget
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *labelVersion;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_4;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QWidget *tab_2;
    QVBoxLayout *vboxLayout1;
    QTextEdit *textLicense;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *buttonOk;

    void setupUi(QWidget *AboutWidget)
    {
        if (AboutWidget->objectName().isEmpty())
            AboutWidget->setObjectName(QString::fromUtf8("AboutWidget"));
        AboutWidget->resize(357, 292);
        vboxLayout = new QVBoxLayout(AboutWidget);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(AboutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        labelVersion = new QLabel(tab);
        labelVersion->setObjectName(QString::fromUtf8("labelVersion"));

        gridLayout->addWidget(labelVersion, 0, 1, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 1, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 1, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        spacerItem = new QSpacerItem(351, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 6, 0, 1, 2);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        vboxLayout1 = new QVBoxLayout(tab_2);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        textLicense = new QTextEdit(tab_2);
        textLicense->setObjectName(QString::fromUtf8("textLicense"));
        textLicense->setReadOnly(true);

        vboxLayout1->addWidget(textLicense);

        tabWidget->addTab(tab_2, QString());

        vboxLayout->addWidget(tabWidget);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem1 = new QSpacerItem(271, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        buttonOk = new QPushButton(AboutWidget);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));

        hboxLayout->addWidget(buttonOk);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(AboutWidget);
        QObject::connect(buttonOk, SIGNAL(clicked()), AboutWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(AboutWidget);
    } // setupUi

    void retranslateUi(QWidget *AboutWidget)
    {
        AboutWidget->setWindowTitle(QApplication::translate("AboutWidget", "About SeisComP3::GUI", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AboutWidget", "GFZ Potsdam", 0, QApplication::UnicodeUTF8));
        labelVersion->setText(QApplication::translate("AboutWidget", "-", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AboutWidget", "German Research Centre for Geosciences", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("AboutWidget", "gempa GmbH (http://www.gempa.de)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AboutWidget", "Version:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AboutWidget", "geofon_dc@gfz-potsdam.de", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AboutWidget", "Contact:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AboutWidget", "Authors:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AboutWidget", "About", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AboutWidget", "License", 0, QApplication::UnicodeUTF8));
        buttonOk->setText(QApplication::translate("AboutWidget", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutWidget: public Ui_AboutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWIDGET_H
