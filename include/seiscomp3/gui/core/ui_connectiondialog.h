/********************************************************************************
** Form generated from reading UI file 'connectiondialog.ui'
**
** Created: Thu Jan 23 14:38:30 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONDIALOG_H
#define UI_CONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConnectionDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *btnClose;
    QGroupBox *groupDatabase;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout1;
    QPushButton *btnDbFetch;
    QSpacerItem *spacerItem1;
    QPushButton *btnDbConnect;
    QLabel *labelDbConnection;
    QLabel *labelDbType;
    QComboBox *comboDbType;
    QLineEdit *editDbConnection;
    QSplitter *splitter;
    QGroupBox *groupMessaging;
    QGridLayout *gridLayout2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *timeoutSpinBox;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem2;
    QPushButton *btnConnect;
    QLineEdit *editPrimaryGroup;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *editServer;
    QLineEdit *editUser;
    QLabel *label;
    QGroupBox *groupSubscriptions;
    QVBoxLayout *vboxLayout;
    QListWidget *listSubscriptions;
    QHBoxLayout *hboxLayout3;
    QPushButton *btnSelectAll;
    QSpacerItem *spacerItem3;
    QPushButton *btnDeselectAll;

    void setupUi(QDialog *ConnectionDialog)
    {
        if (ConnectionDialog->objectName().isEmpty())
            ConnectionDialog->setObjectName(QString::fromUtf8("ConnectionDialog"));
        ConnectionDialog->resize(447, 393);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConnectionDialog->sizePolicy().hasHeightForWidth());
        ConnectionDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ConnectionDialog);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(261, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnClose = new QPushButton(ConnectionDialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        hboxLayout->addWidget(btnClose);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        groupDatabase = new QGroupBox(ConnectionDialog);
        groupDatabase->setObjectName(QString::fromUtf8("groupDatabase"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(4));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupDatabase->sizePolicy().hasHeightForWidth());
        groupDatabase->setSizePolicy(sizePolicy1);
        gridLayout1 = new QGridLayout(groupDatabase);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        btnDbFetch = new QPushButton(groupDatabase);
        btnDbFetch->setObjectName(QString::fromUtf8("btnDbFetch"));
        btnDbFetch->setEnabled(false);

        hboxLayout1->addWidget(btnDbFetch);

        spacerItem1 = new QSpacerItem(71, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        btnDbConnect = new QPushButton(groupDatabase);
        btnDbConnect->setObjectName(QString::fromUtf8("btnDbConnect"));

        hboxLayout1->addWidget(btnDbConnect);


        gridLayout1->addLayout(hboxLayout1, 2, 1, 1, 1);

        labelDbConnection = new QLabel(groupDatabase);
        labelDbConnection->setObjectName(QString::fromUtf8("labelDbConnection"));

        gridLayout1->addWidget(labelDbConnection, 1, 0, 1, 1);

        labelDbType = new QLabel(groupDatabase);
        labelDbType->setObjectName(QString::fromUtf8("labelDbType"));

        gridLayout1->addWidget(labelDbType, 0, 0, 1, 1);

        comboDbType = new QComboBox(groupDatabase);
        comboDbType->setObjectName(QString::fromUtf8("comboDbType"));
        comboDbType->setModelColumn(false);

        gridLayout1->addWidget(comboDbType, 0, 1, 1, 1);

        editDbConnection = new QLineEdit(groupDatabase);
        editDbConnection->setObjectName(QString::fromUtf8("editDbConnection"));

        gridLayout1->addWidget(editDbConnection, 1, 1, 1, 1);


        gridLayout->addWidget(groupDatabase, 1, 0, 1, 1);

        splitter = new QSplitter(ConnectionDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupMessaging = new QGroupBox(splitter);
        groupMessaging->setObjectName(QString::fromUtf8("groupMessaging"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(1));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupMessaging->sizePolicy().hasHeightForWidth());
        groupMessaging->setSizePolicy(sizePolicy2);
        gridLayout2 = new QGridLayout(groupMessaging);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        label_3 = new QLabel(groupMessaging);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        gridLayout2->addWidget(label_3, 4, 0, 1, 2);

        label_4 = new QLabel(groupMessaging);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout2->addWidget(label_4, 2, 0, 1, 1);

        timeoutSpinBox = new QSpinBox(groupMessaging);
        timeoutSpinBox->setObjectName(QString::fromUtf8("timeoutSpinBox"));

        gridLayout2->addWidget(timeoutSpinBox, 2, 1, 1, 1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        btnConnect = new QPushButton(groupMessaging);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        hboxLayout2->addWidget(btnConnect);


        gridLayout2->addLayout(hboxLayout2, 5, 0, 1, 2);

        editPrimaryGroup = new QLineEdit(groupMessaging);
        editPrimaryGroup->setObjectName(QString::fromUtf8("editPrimaryGroup"));

        gridLayout2->addWidget(editPrimaryGroup, 3, 1, 1, 1);

        label_5 = new QLabel(groupMessaging);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout2->addWidget(label_5, 3, 0, 1, 1);

        label_2 = new QLabel(groupMessaging);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 1, 0, 1, 1);

        editServer = new QLineEdit(groupMessaging);
        editServer->setObjectName(QString::fromUtf8("editServer"));

        gridLayout2->addWidget(editServer, 1, 1, 1, 1);

        editUser = new QLineEdit(groupMessaging);
        editUser->setObjectName(QString::fromUtf8("editUser"));

        gridLayout2->addWidget(editUser, 0, 1, 1, 1);

        label = new QLabel(groupMessaging);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout2->addWidget(label, 0, 0, 1, 1);

        splitter->addWidget(groupMessaging);
        groupSubscriptions = new QGroupBox(splitter);
        groupSubscriptions->setObjectName(QString::fromUtf8("groupSubscriptions"));
        groupSubscriptions->setEnabled(false);
        sizePolicy2.setHeightForWidth(groupSubscriptions->sizePolicy().hasHeightForWidth());
        groupSubscriptions->setSizePolicy(sizePolicy2);
        vboxLayout = new QVBoxLayout(groupSubscriptions);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        listSubscriptions = new QListWidget(groupSubscriptions);
        listSubscriptions->setObjectName(QString::fromUtf8("listSubscriptions"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(3));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(listSubscriptions->sizePolicy().hasHeightForWidth());
        listSubscriptions->setSizePolicy(sizePolicy3);

        vboxLayout->addWidget(listSubscriptions);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        btnSelectAll = new QPushButton(groupSubscriptions);
        btnSelectAll->setObjectName(QString::fromUtf8("btnSelectAll"));

        hboxLayout3->addWidget(btnSelectAll);

        spacerItem3 = new QSpacerItem(70, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);

        btnDeselectAll = new QPushButton(groupSubscriptions);
        btnDeselectAll->setObjectName(QString::fromUtf8("btnDeselectAll"));

        hboxLayout3->addWidget(btnDeselectAll);


        vboxLayout->addLayout(hboxLayout3);

        splitter->addWidget(groupSubscriptions);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        QWidget::setTabOrder(editUser, editServer);
        QWidget::setTabOrder(editServer, timeoutSpinBox);
        QWidget::setTabOrder(timeoutSpinBox, editPrimaryGroup);
        QWidget::setTabOrder(editPrimaryGroup, btnConnect);
        QWidget::setTabOrder(btnConnect, listSubscriptions);
        QWidget::setTabOrder(listSubscriptions, comboDbType);
        QWidget::setTabOrder(comboDbType, editDbConnection);
        QWidget::setTabOrder(editDbConnection, btnDbFetch);
        QWidget::setTabOrder(btnDbFetch, btnDbConnect);
        QWidget::setTabOrder(btnDbConnect, btnClose);

        retranslateUi(ConnectionDialog);
        QObject::connect(btnClose, SIGNAL(clicked()), ConnectionDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectionDialog)
    {
        ConnectionDialog->setWindowTitle(QApplication::translate("ConnectionDialog", "Setup connection", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("ConnectionDialog", "Continue", 0, QApplication::UnicodeUTF8));
        groupDatabase->setTitle(QApplication::translate("ConnectionDialog", "Database", 0, QApplication::UnicodeUTF8));
        btnDbFetch->setText(QApplication::translate("ConnectionDialog", "Fetch", 0, QApplication::UnicodeUTF8));
        btnDbConnect->setText(QApplication::translate("ConnectionDialog", "Connect", 0, QApplication::UnicodeUTF8));
        labelDbConnection->setText(QApplication::translate("ConnectionDialog", "Connection:", 0, QApplication::UnicodeUTF8));
        labelDbType->setText(QApplication::translate("ConnectionDialog", "Type:", 0, QApplication::UnicodeUTF8));
        groupMessaging->setTitle(QApplication::translate("ConnectionDialog", "Messaging", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ConnectionDialog", "Enter one group defined in the master config file. This group is used for sending messages only.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ConnectionDialog", "Timeout in sec.:", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("ConnectionDialog", "Connect", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ConnectionDialog", "Primary group:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ConnectionDialog", "Server:", 0, QApplication::UnicodeUTF8));
        editServer->setText(QApplication::translate("ConnectionDialog", "localhost", 0, QApplication::UnicodeUTF8));
        editUser->setText(QApplication::translate("ConnectionDialog", "user", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ConnectionDialog", "User:", 0, QApplication::UnicodeUTF8));
        groupSubscriptions->setTitle(QApplication::translate("ConnectionDialog", "Subscriptions", 0, QApplication::UnicodeUTF8));
        btnSelectAll->setText(QApplication::translate("ConnectionDialog", "Select All", 0, QApplication::UnicodeUTF8));
        btnDeselectAll->setText(QApplication::translate("ConnectionDialog", "Deselect All", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConnectionDialog: public Ui_ConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONDIALOG_H
