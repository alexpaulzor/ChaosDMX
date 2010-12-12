/********************************************************************************
** Form generated from reading UI file 'vccuelistproperties.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VCCUELISTPROPERTIES_H
#define UI_VCCUELISTPROPERTIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VCCueListProperties
{
public:
    QGridLayout *gridLayout_2;
    QLabel *m_nameLabel;
    QLineEdit *m_nameEdit;
    QTabWidget *m_tab;
    QWidget *Cues;
    QGridLayout *gridLayout;
    QLabel *m_chaserLabel;
    QLineEdit *m_chaserEdit;
    QToolButton *m_attachButton;
    QToolButton *m_detachButton;
    QSpacerItem *verticalSpacer;
    QWidget *NextCue;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *m_nextKeyEdit;
    QToolButton *m_nextAttachButton;
    QToolButton *m_nextDetachButton;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *m_nextInputUniverseEdit;
    QLabel *label_2;
    QLineEdit *m_nextInputChannelEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_nextAutoDetectInputButton;
    QPushButton *m_nextChooseInputButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *PreviousCue;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *m_previousKeyEdit;
    QToolButton *m_previousAttachButton;
    QToolButton *m_previousDetachButton;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QLineEdit *m_previousInputUniverseEdit;
    QLabel *label_4;
    QLineEdit *m_previousInputChannelEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *m_previousAutoDetectInputButton;
    QPushButton *m_previousChooseInputButton;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *VCCueListProperties)
    {
        if (VCCueListProperties->objectName().isEmpty())
            VCCueListProperties->setObjectName(QString::fromUtf8("VCCueListProperties"));
        VCCueListProperties->resize(488, 347);
        gridLayout_2 = new QGridLayout(VCCueListProperties);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_nameLabel = new QLabel(VCCueListProperties);
        m_nameLabel->setObjectName(QString::fromUtf8("m_nameLabel"));

        gridLayout_2->addWidget(m_nameLabel, 0, 0, 1, 1);

        m_nameEdit = new QLineEdit(VCCueListProperties);
        m_nameEdit->setObjectName(QString::fromUtf8("m_nameEdit"));

        gridLayout_2->addWidget(m_nameEdit, 0, 1, 1, 1);

        m_tab = new QTabWidget(VCCueListProperties);
        m_tab->setObjectName(QString::fromUtf8("m_tab"));
        Cues = new QWidget();
        Cues->setObjectName(QString::fromUtf8("Cues"));
        gridLayout = new QGridLayout(Cues);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_chaserLabel = new QLabel(Cues);
        m_chaserLabel->setObjectName(QString::fromUtf8("m_chaserLabel"));

        gridLayout->addWidget(m_chaserLabel, 0, 0, 1, 1);

        m_chaserEdit = new QLineEdit(Cues);
        m_chaserEdit->setObjectName(QString::fromUtf8("m_chaserEdit"));
        m_chaserEdit->setReadOnly(true);

        gridLayout->addWidget(m_chaserEdit, 0, 1, 1, 1);

        m_attachButton = new QToolButton(Cues);
        m_attachButton->setObjectName(QString::fromUtf8("m_attachButton"));
        m_attachButton->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/attach.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_attachButton->setIcon(icon);
        m_attachButton->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_attachButton, 0, 2, 1, 1);

        m_detachButton = new QToolButton(Cues);
        m_detachButton->setObjectName(QString::fromUtf8("m_detachButton"));
        m_detachButton->setText(QString::fromUtf8("..."));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/detach.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_detachButton->setIcon(icon1);
        m_detachButton->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_detachButton, 0, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 169, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        m_tab->addTab(Cues, QString());
        NextCue = new QWidget();
        NextCue->setObjectName(QString::fromUtf8("NextCue"));
        verticalLayout = new QVBoxLayout(NextCue);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(NextCue);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_nextKeyEdit = new QLineEdit(groupBox);
        m_nextKeyEdit->setObjectName(QString::fromUtf8("m_nextKeyEdit"));
        m_nextKeyEdit->setReadOnly(true);

        horizontalLayout->addWidget(m_nextKeyEdit);

        m_nextAttachButton = new QToolButton(groupBox);
        m_nextAttachButton->setObjectName(QString::fromUtf8("m_nextAttachButton"));
        m_nextAttachButton->setText(QString::fromUtf8("..."));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/key_bindings.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_nextAttachButton->setIcon(icon2);
        m_nextAttachButton->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(m_nextAttachButton);

        m_nextDetachButton = new QToolButton(groupBox);
        m_nextDetachButton->setObjectName(QString::fromUtf8("m_nextDetachButton"));
        m_nextDetachButton->setText(QString::fromUtf8("..."));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/fileclose.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_nextDetachButton->setIcon(icon3);
        m_nextDetachButton->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(m_nextDetachButton);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(NextCue);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        m_nextInputUniverseEdit = new QLineEdit(groupBox_3);
        m_nextInputUniverseEdit->setObjectName(QString::fromUtf8("m_nextInputUniverseEdit"));

        gridLayout_3->addWidget(m_nextInputUniverseEdit, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        m_nextInputChannelEdit = new QLineEdit(groupBox_3);
        m_nextInputChannelEdit->setObjectName(QString::fromUtf8("m_nextInputChannelEdit"));

        gridLayout_3->addWidget(m_nextInputChannelEdit, 1, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(225, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        m_nextAutoDetectInputButton = new QPushButton(groupBox_3);
        m_nextAutoDetectInputButton->setObjectName(QString::fromUtf8("m_nextAutoDetectInputButton"));
        m_nextAutoDetectInputButton->setCheckable(true);

        gridLayout_3->addWidget(m_nextAutoDetectInputButton, 2, 1, 1, 1);

        m_nextChooseInputButton = new QPushButton(groupBox_3);
        m_nextChooseInputButton->setObjectName(QString::fromUtf8("m_nextChooseInputButton"));

        gridLayout_3->addWidget(m_nextChooseInputButton, 2, 2, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        m_tab->addTab(NextCue, QString());
        PreviousCue = new QWidget();
        PreviousCue->setObjectName(QString::fromUtf8("PreviousCue"));
        verticalLayout_2 = new QVBoxLayout(PreviousCue);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(PreviousCue);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_previousKeyEdit = new QLineEdit(groupBox_2);
        m_previousKeyEdit->setObjectName(QString::fromUtf8("m_previousKeyEdit"));
        m_previousKeyEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(m_previousKeyEdit);

        m_previousAttachButton = new QToolButton(groupBox_2);
        m_previousAttachButton->setObjectName(QString::fromUtf8("m_previousAttachButton"));
        m_previousAttachButton->setText(QString::fromUtf8("..."));
        m_previousAttachButton->setIcon(icon2);
        m_previousAttachButton->setIconSize(QSize(26, 26));

        horizontalLayout_2->addWidget(m_previousAttachButton);

        m_previousDetachButton = new QToolButton(groupBox_2);
        m_previousDetachButton->setObjectName(QString::fromUtf8("m_previousDetachButton"));
        m_previousDetachButton->setText(QString::fromUtf8("..."));
        m_previousDetachButton->setIcon(icon3);
        m_previousDetachButton->setIconSize(QSize(26, 26));

        horizontalLayout_2->addWidget(m_previousDetachButton);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(PreviousCue);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        m_previousInputUniverseEdit = new QLineEdit(groupBox_4);
        m_previousInputUniverseEdit->setObjectName(QString::fromUtf8("m_previousInputUniverseEdit"));

        gridLayout_4->addWidget(m_previousInputUniverseEdit, 0, 1, 1, 2);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        m_previousInputChannelEdit = new QLineEdit(groupBox_4);
        m_previousInputChannelEdit->setObjectName(QString::fromUtf8("m_previousInputChannelEdit"));

        gridLayout_4->addWidget(m_previousInputChannelEdit, 1, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(225, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        m_previousAutoDetectInputButton = new QPushButton(groupBox_4);
        m_previousAutoDetectInputButton->setObjectName(QString::fromUtf8("m_previousAutoDetectInputButton"));
        m_previousAutoDetectInputButton->setCheckable(true);

        gridLayout_4->addWidget(m_previousAutoDetectInputButton, 2, 1, 1, 1);

        m_previousChooseInputButton = new QPushButton(groupBox_4);
        m_previousChooseInputButton->setObjectName(QString::fromUtf8("m_previousChooseInputButton"));

        gridLayout_4->addWidget(m_previousChooseInputButton, 2, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        m_tab->addTab(PreviousCue, QString());

        gridLayout_2->addWidget(m_tab, 1, 0, 1, 2);

        m_buttonBox = new QDialogButtonBox(VCCueListProperties);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(m_buttonBox, 2, 0, 1, 2);


        retranslateUi(VCCueListProperties);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), VCCueListProperties, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), VCCueListProperties, SLOT(reject()));
        QObject::connect(m_tab, SIGNAL(currentChanged(int)), VCCueListProperties, SLOT(slotTabChanged()));

        m_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VCCueListProperties);
    } // setupUi

    void retranslateUi(QDialog *VCCueListProperties)
    {
        VCCueListProperties->setWindowTitle(QApplication::translate("VCCueListProperties", "Cue list properties", 0, QApplication::UnicodeUTF8));
        m_nameLabel->setText(QApplication::translate("VCCueListProperties", "Cue list name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_nameEdit->setToolTip(QApplication::translate("VCCueListProperties", "The name of the cue list widget", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_tab->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        m_chaserLabel->setText(QApplication::translate("VCCueListProperties", "Chaser", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_chaserEdit->setToolTip(QApplication::translate("VCCueListProperties", "Use the chosen chaser's steps as cues for this cue list.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_attachButton->setToolTip(QApplication::translate("VCCueListProperties", "Choose a chaser to be used as the list of cues", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_detachButton->setToolTip(QApplication::translate("VCCueListProperties", "Detach the currently chosen chaser from this cue list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_tab->setTabText(m_tab->indexOf(Cues), QApplication::translate("VCCueListProperties", "Cues", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("VCCueListProperties", "Key Combination", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_nextKeyEdit->setToolTip(QApplication::translate("VCCueListProperties", "The key combination used to step to the next cue", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_nextAttachButton->setToolTip(QApplication::translate("VCCueListProperties", "Bind a key combination to skip to the next cue", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_nextDetachButton->setToolTip(QApplication::translate("VCCueListProperties", "Clear the key binding", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("VCCueListProperties", "External Input", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VCCueListProperties", "Input universe", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_nextInputUniverseEdit->setToolTip(QApplication::translate("VCCueListProperties", "Input universe for skipping to the next cue", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("VCCueListProperties", "Input channel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_nextInputChannelEdit->setToolTip(QApplication::translate("VCCueListProperties", "Input channel for skipping to the next cue", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_nextAutoDetectInputButton->setToolTip(QApplication::translate("VCCueListProperties", "When toggled, you can click an external button to assign it as the control that skips to the next cue.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_nextAutoDetectInputButton->setText(QApplication::translate("VCCueListProperties", "Auto Detect", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_nextChooseInputButton->setToolTip(QApplication::translate("VCCueListProperties", "Choose an input universe/channel for skipping to the next cue", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_nextChooseInputButton->setText(QApplication::translate("VCCueListProperties", "Choose...", 0, QApplication::UnicodeUTF8));
        m_tab->setTabText(m_tab->indexOf(NextCue), QApplication::translate("VCCueListProperties", "Next Cue", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("VCCueListProperties", "Key Combination", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_previousKeyEdit->setToolTip(QApplication::translate("VCCueListProperties", "The key combination used to step to the previous cue", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_previousAttachButton->setToolTip(QApplication::translate("VCCueListProperties", "Bind a key combination to skip to the previous cue", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_previousDetachButton->setToolTip(QApplication::translate("VCCueListProperties", "Clear the key binding", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_4->setTitle(QApplication::translate("VCCueListProperties", "External Input", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("VCCueListProperties", "Input universe", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_previousInputUniverseEdit->setToolTip(QApplication::translate("VCCueListProperties", "Input universe for skipping to the previous cue", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("VCCueListProperties", "Input channel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_previousInputChannelEdit->setToolTip(QApplication::translate("VCCueListProperties", "Input channel for skipping to the previous cue", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_previousAutoDetectInputButton->setToolTip(QApplication::translate("VCCueListProperties", "When toggled, you can click an external button to assign it as the control that skips to the previous cue.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_previousAutoDetectInputButton->setText(QApplication::translate("VCCueListProperties", "Auto Detect", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_previousChooseInputButton->setToolTip(QApplication::translate("VCCueListProperties", "Choose an input universe/channel for skipping to the previous cue", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_previousChooseInputButton->setText(QApplication::translate("VCCueListProperties", "Choose...", 0, QApplication::UnicodeUTF8));
        m_tab->setTabText(m_tab->indexOf(PreviousCue), QApplication::translate("VCCueListProperties", "Previous Cue", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VCCueListProperties: public Ui_VCCueListProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCCUELISTPROPERTIES_H
