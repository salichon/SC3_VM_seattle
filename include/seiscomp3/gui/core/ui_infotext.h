/********************************************************************************
** Form generated from reading UI file 'infotext.ui'
**
** Created: Thu Jan 23 14:38:31 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOTEXT_H
#define UI_INFOTEXT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoText
{
public:
    QVBoxLayout *vboxLayout;
    QTextEdit *textEdit;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *closeButton;

    void setupUi(QDialog *InfoText)
    {
        if (InfoText->objectName().isEmpty())
            InfoText->setObjectName(QString::fromUtf8("InfoText"));
        InfoText->resize(319, 336);
        vboxLayout = new QVBoxLayout(InfoText);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(6, 6, 6, 6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textEdit = new QTextEdit(InfoText);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setReadOnly(true);

        vboxLayout->addWidget(textEdit);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        closeButton = new QPushButton(InfoText);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        hboxLayout->addWidget(closeButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(InfoText);
        QObject::connect(closeButton, SIGNAL(clicked()), InfoText, SLOT(reject()));

        QMetaObject::connectSlotsByName(InfoText);
    } // setupUi

    void retranslateUi(QDialog *InfoText)
    {
        InfoText->setWindowTitle(QApplication::translate("InfoText", "Information", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("InfoText", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InfoText: public Ui_InfoText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOTEXT_H
