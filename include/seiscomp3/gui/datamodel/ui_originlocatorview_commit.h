/********************************************************************************
** Form generated from reading UI file 'originlocatorview_commit.ui'
**
** Created: Thu Jan 23 14:38:32 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIGINLOCATORVIEW_COMMIT_H
#define UI_ORIGINLOCATORVIEW_COMMIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OriginCommitOptions
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *cbUpdateOrigin;
    QCheckBox *cbAssociate;
    QFrame *frameEventOptions;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QCheckBox *cbFixSolution;
    QGridLayout *gridLayout;
    QLabel *label_21;
    QLabel *label_2;
    QComboBox *comboOriginStates;
    QComboBox *comboEventTypes;
    QLabel *label_3;
    QComboBox *comboEventTypeCertainty;
    QFrame *line;
    QLabel *label;
    QFrame *line_3;
    QLabel *labelEQName;
    QLineEdit *editEQName;
    QLabel *labelEQComment;
    QLineEdit *editEQComment;
    QSpacerItem *spacerItem1;
    QFrame *line_2;
    QCheckBox *cbBackToEventList;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OriginCommitOptions)
    {
        if (OriginCommitOptions->objectName().isEmpty())
            OriginCommitOptions->setObjectName(QString::fromUtf8("OriginCommitOptions"));
        OriginCommitOptions->resize(327, 464);
        vboxLayout = new QVBoxLayout(OriginCommitOptions);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        cbUpdateOrigin = new QCheckBox(OriginCommitOptions);
        cbUpdateOrigin->setObjectName(QString::fromUtf8("cbUpdateOrigin"));
        cbUpdateOrigin->setChecked(true);

        vboxLayout->addWidget(cbUpdateOrigin);

        cbAssociate = new QCheckBox(OriginCommitOptions);
        cbAssociate->setObjectName(QString::fromUtf8("cbAssociate"));
        cbAssociate->setChecked(true);

        vboxLayout->addWidget(cbAssociate);

        frameEventOptions = new QFrame(OriginCommitOptions);
        frameEventOptions->setObjectName(QString::fromUtf8("frameEventOptions"));
        frameEventOptions->setFrameShape(QFrame::NoFrame);
        frameEventOptions->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frameEventOptions);
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
        spacerItem = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        cbFixSolution = new QCheckBox(frameEventOptions);
        cbFixSolution->setObjectName(QString::fromUtf8("cbFixSolution"));
        cbFixSolution->setChecked(true);

        hboxLayout->addWidget(cbFixSolution);


        vboxLayout1->addLayout(hboxLayout);

        gridLayout = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_21 = new QLabel(frameEventOptions);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_21, 2, 0, 1, 1);

        label_2 = new QLabel(frameEventOptions);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        comboOriginStates = new QComboBox(frameEventOptions);
        comboOriginStates->setObjectName(QString::fromUtf8("comboOriginStates"));

        gridLayout->addWidget(comboOriginStates, 2, 1, 1, 1);

        comboEventTypes = new QComboBox(frameEventOptions);
        comboEventTypes->setObjectName(QString::fromUtf8("comboEventTypes"));

        gridLayout->addWidget(comboEventTypes, 0, 1, 1, 1);

        label_3 = new QLabel(frameEventOptions);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        comboEventTypeCertainty = new QComboBox(frameEventOptions);
        comboEventTypeCertainty->setObjectName(QString::fromUtf8("comboEventTypeCertainty"));

        gridLayout->addWidget(comboEventTypeCertainty, 1, 1, 1, 1);


        vboxLayout1->addLayout(gridLayout);

        line = new QFrame(frameEventOptions);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(line);

        label = new QLabel(frameEventOptions);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        vboxLayout1->addWidget(label);

        line_3 = new QFrame(frameEventOptions);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(line_3);

        labelEQName = new QLabel(frameEventOptions);
        labelEQName->setObjectName(QString::fromUtf8("labelEQName"));

        vboxLayout1->addWidget(labelEQName);

        editEQName = new QLineEdit(frameEventOptions);
        editEQName->setObjectName(QString::fromUtf8("editEQName"));
        editEQName->setMaxLength(160);

        vboxLayout1->addWidget(editEQName);

        labelEQComment = new QLabel(frameEventOptions);
        labelEQComment->setObjectName(QString::fromUtf8("labelEQComment"));

        vboxLayout1->addWidget(labelEQComment);

        editEQComment = new QLineEdit(frameEventOptions);
        editEQComment->setObjectName(QString::fromUtf8("editEQComment"));
        editEQComment->setMaxLength(160);

        vboxLayout1->addWidget(editEQComment);


        vboxLayout->addWidget(frameEventOptions);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);

        line_2 = new QFrame(OriginCommitOptions);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_2);

        cbBackToEventList = new QCheckBox(OriginCommitOptions);
        cbBackToEventList->setObjectName(QString::fromUtf8("cbBackToEventList"));
        cbBackToEventList->setChecked(true);

        vboxLayout->addWidget(cbBackToEventList);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem2 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        okButton = new QPushButton(OriginCommitOptions);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout1->addWidget(okButton);

        cancelButton = new QPushButton(OriginCommitOptions);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout1->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(OriginCommitOptions);
        QObject::connect(okButton, SIGNAL(clicked()), OriginCommitOptions, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), OriginCommitOptions, SLOT(reject()));
        QObject::connect(cbAssociate, SIGNAL(toggled(bool)), cbFixSolution, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(OriginCommitOptions);
    } // setupUi

    void retranslateUi(QDialog *OriginCommitOptions)
    {
        OriginCommitOptions->setWindowTitle(QApplication::translate("OriginCommitOptions", "Commit location", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbUpdateOrigin->setToolTip(QApplication::translate("OriginCommitOptions", "If unchecked no origin related information will be sent (see Help).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cbUpdateOrigin->setWhatsThis(QApplication::translate("OriginCommitOptions", "Updates the origin evaluation mode. If unchecked only the event options are set. Unchecking this option is useful if the event type is set to \"not existing\" where a confirmation of the location makes not much sense.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbUpdateOrigin->setText(QApplication::translate("OriginCommitOptions", "Update origin", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbAssociate->setToolTip(QApplication::translate("OriginCommitOptions", "If checked this origin will be associated with the current event. If unchecked, scevent will decide whether to assoiciate the origin with the current event or to create a new one.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbAssociate->setText(QApplication::translate("OriginCommitOptions", "Force association with event %1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbFixSolution->setToolTip(QApplication::translate("OriginCommitOptions", "If checked ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbFixSolution->setText(QApplication::translate("OriginCommitOptions", "Fix this origin as preferred location.", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("OriginCommitOptions", "Set origin status to", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OriginCommitOptions", "Set event type to", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("OriginCommitOptions", "Set event certainty to", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OriginCommitOptions", "<b><u>NOTE</u></b> To fix the origin involves that successive origins are not considered as preferred origins by the event associator (scevent) until another origin is fixed again. Fixing an origin overrides the automatic rules of setting an origin as preferred origin.", 0, QApplication::UnicodeUTF8));
        labelEQName->setText(QApplication::translate("OriginCommitOptions", "Earthquake name:", 0, QApplication::UnicodeUTF8));
        labelEQComment->setText(QApplication::translate("OriginCommitOptions", "Comment:", 0, QApplication::UnicodeUTF8));
        cbBackToEventList->setText(QApplication::translate("OriginCommitOptions", "Return to event list after commit", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("OriginCommitOptions", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("OriginCommitOptions", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OriginCommitOptions: public Ui_OriginCommitOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIGINLOCATORVIEW_COMMIT_H
