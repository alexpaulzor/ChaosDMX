/********************************************************************************
** Form generated from reading UI file 'vcproperties.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VCPROPERTIES_H
#define UI_VCPROPERTIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VCPropertiesEditor
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *m_tab;
    QWidget *Layout;
    QGridLayout *gridLayout_3;
    QGroupBox *m_keyboardGroup;
    QVBoxLayout *vboxLayout;
    QCheckBox *m_grabKeyboardCheck;
    QCheckBox *m_keyRepeatOffCheck;
    QGroupBox *m_gridGroup;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QSpinBox *m_gridXSpin;
    QLabel *label_2;
    QSpinBox *m_gridYSpin;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *GrandMaster;
    QGridLayout *gridLayout_6;
    QGroupBox *m_gmChannelsGroup;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *m_gmIntensityRadio;
    QRadioButton *m_gmAllChannelsRadio;
    QGroupBox *m_gmValuesGroup;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *m_gmReduceRadio;
    QRadioButton *m_gmLimitRadio;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *m_gmInputUniverseLabel;
    QLineEdit *m_gmInputUniverseEdit;
    QLabel *m_gmInputChannelLabel;
    QLineEdit *m_gmInputChannelEdit;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *m_autoDetectGrandMasterInputButton;
    QPushButton *m_chooseGrandMasterInputButton;
    QWidget *Blackout;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_7;
    QLabel *m_blackoutInputUniverseLabel;
    QLineEdit *m_blackoutInputUniverseEdit;
    QLabel *m_blackoutInputChannelLabel;
    QLineEdit *m_blackoutInputChannelEdit;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *m_autoDetectBlackoutInputButton;
    QPushButton *m_chooseBlackoutInputButton;
    QSpacerItem *verticalSpacer;
    QWidget *DefaultFade;
    QHBoxLayout *horizontalLayout;
    QGroupBox *m_defaultFadeGroup;
    QGridLayout *gridLayout;
    QLabel *m_lowFadeLabel;
    QSpinBox *m_fadeLowSpin;
    QLabel *m_highFadeLabel;
    QSpinBox *m_fadeHighSpin;
    QFrame *line;
    QLabel *label_3;
    QLineEdit *m_fadeInputUniverseEdit;
    QLabel *label_4;
    QLineEdit *m_fadeInputChannelEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_autoDetectFadeInputButton;
    QPushButton *m_chooseFadeInputButton;
    QWidget *DefaultHold;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *m_defaultHoldGroup;
    QGridLayout *gridLayout_2;
    QLabel *m_lowHoldLabel;
    QSpinBox *m_holdLowSpin;
    QLabel *m_highHoldLabel;
    QSpinBox *m_holdHighSpin;
    QFrame *line_2;
    QLabel *label_5;
    QLineEdit *m_holdInputUniverseEdit;
    QLabel *label_6;
    QLineEdit *m_holdInputChannelEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *m_autoDetectHoldInputButton;
    QPushButton *m_chooseHoldInputButton;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *VCPropertiesEditor)
    {
        if (VCPropertiesEditor->objectName().isEmpty())
            VCPropertiesEditor->setObjectName(QString::fromUtf8("VCPropertiesEditor"));
        VCPropertiesEditor->resize(458, 342);
        verticalLayout = new QVBoxLayout(VCPropertiesEditor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_tab = new QTabWidget(VCPropertiesEditor);
        m_tab->setObjectName(QString::fromUtf8("m_tab"));
        Layout = new QWidget();
        Layout->setObjectName(QString::fromUtf8("Layout"));
        gridLayout_3 = new QGridLayout(Layout);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        m_keyboardGroup = new QGroupBox(Layout);
        m_keyboardGroup->setObjectName(QString::fromUtf8("m_keyboardGroup"));
        vboxLayout = new QVBoxLayout(m_keyboardGroup);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_grabKeyboardCheck = new QCheckBox(m_keyboardGroup);
        m_grabKeyboardCheck->setObjectName(QString::fromUtf8("m_grabKeyboardCheck"));

        vboxLayout->addWidget(m_grabKeyboardCheck);

        m_keyRepeatOffCheck = new QCheckBox(m_keyboardGroup);
        m_keyRepeatOffCheck->setObjectName(QString::fromUtf8("m_keyRepeatOffCheck"));

        vboxLayout->addWidget(m_keyRepeatOffCheck);


        gridLayout_3->addWidget(m_keyboardGroup, 0, 0, 1, 1);

        m_gridGroup = new QGroupBox(Layout);
        m_gridGroup->setObjectName(QString::fromUtf8("m_gridGroup"));
        m_gridGroup->setCheckable(true);
        gridLayout_5 = new QGridLayout(m_gridGroup);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label = new QLabel(m_gridGroup);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        m_gridXSpin = new QSpinBox(m_gridGroup);
        m_gridXSpin->setObjectName(QString::fromUtf8("m_gridXSpin"));
        m_gridXSpin->setMinimum(1);
        m_gridXSpin->setValue(10);

        gridLayout_5->addWidget(m_gridXSpin, 0, 1, 1, 1);

        label_2 = new QLabel(m_gridGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        m_gridYSpin = new QSpinBox(m_gridGroup);
        m_gridYSpin->setObjectName(QString::fromUtf8("m_gridYSpin"));
        m_gridYSpin->setMinimum(1);
        m_gridYSpin->setValue(10);

        gridLayout_5->addWidget(m_gridYSpin, 1, 1, 1, 1);


        gridLayout_3->addWidget(m_gridGroup, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 1, 1, 1, 1);

        m_tab->addTab(Layout, QString());
        GrandMaster = new QWidget();
        GrandMaster->setObjectName(QString::fromUtf8("GrandMaster"));
        gridLayout_6 = new QGridLayout(GrandMaster);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        m_gmChannelsGroup = new QGroupBox(GrandMaster);
        m_gmChannelsGroup->setObjectName(QString::fromUtf8("m_gmChannelsGroup"));
        verticalLayout_2 = new QVBoxLayout(m_gmChannelsGroup);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_gmIntensityRadio = new QRadioButton(m_gmChannelsGroup);
        m_gmIntensityRadio->setObjectName(QString::fromUtf8("m_gmIntensityRadio"));

        verticalLayout_2->addWidget(m_gmIntensityRadio);

        m_gmAllChannelsRadio = new QRadioButton(m_gmChannelsGroup);
        m_gmAllChannelsRadio->setObjectName(QString::fromUtf8("m_gmAllChannelsRadio"));

        verticalLayout_2->addWidget(m_gmAllChannelsRadio);


        gridLayout_6->addWidget(m_gmChannelsGroup, 0, 0, 1, 1);

        m_gmValuesGroup = new QGroupBox(GrandMaster);
        m_gmValuesGroup->setObjectName(QString::fromUtf8("m_gmValuesGroup"));
        verticalLayout_3 = new QVBoxLayout(m_gmValuesGroup);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        m_gmReduceRadio = new QRadioButton(m_gmValuesGroup);
        m_gmReduceRadio->setObjectName(QString::fromUtf8("m_gmReduceRadio"));

        verticalLayout_3->addWidget(m_gmReduceRadio);

        m_gmLimitRadio = new QRadioButton(m_gmValuesGroup);
        m_gmLimitRadio->setObjectName(QString::fromUtf8("m_gmLimitRadio"));

        verticalLayout_3->addWidget(m_gmLimitRadio);


        gridLayout_6->addWidget(m_gmValuesGroup, 0, 1, 1, 1);

        groupBox = new QGroupBox(GrandMaster);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        m_gmInputUniverseLabel = new QLabel(groupBox);
        m_gmInputUniverseLabel->setObjectName(QString::fromUtf8("m_gmInputUniverseLabel"));

        gridLayout_4->addWidget(m_gmInputUniverseLabel, 0, 0, 1, 1);

        m_gmInputUniverseEdit = new QLineEdit(groupBox);
        m_gmInputUniverseEdit->setObjectName(QString::fromUtf8("m_gmInputUniverseEdit"));
        m_gmInputUniverseEdit->setReadOnly(true);

        gridLayout_4->addWidget(m_gmInputUniverseEdit, 0, 2, 1, 2);

        m_gmInputChannelLabel = new QLabel(groupBox);
        m_gmInputChannelLabel->setObjectName(QString::fromUtf8("m_gmInputChannelLabel"));

        gridLayout_4->addWidget(m_gmInputChannelLabel, 1, 0, 1, 1);

        m_gmInputChannelEdit = new QLineEdit(groupBox);
        m_gmInputChannelEdit->setObjectName(QString::fromUtf8("m_gmInputChannelEdit"));
        m_gmInputChannelEdit->setReadOnly(true);

        gridLayout_4->addWidget(m_gmInputChannelEdit, 1, 2, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 2, 0, 1, 2);

        m_autoDetectGrandMasterInputButton = new QPushButton(groupBox);
        m_autoDetectGrandMasterInputButton->setObjectName(QString::fromUtf8("m_autoDetectGrandMasterInputButton"));
        m_autoDetectGrandMasterInputButton->setCheckable(true);
        m_autoDetectGrandMasterInputButton->setChecked(false);

        gridLayout_4->addWidget(m_autoDetectGrandMasterInputButton, 2, 2, 1, 1);

        m_chooseGrandMasterInputButton = new QPushButton(groupBox);
        m_chooseGrandMasterInputButton->setObjectName(QString::fromUtf8("m_chooseGrandMasterInputButton"));

        gridLayout_4->addWidget(m_chooseGrandMasterInputButton, 2, 3, 1, 1);


        gridLayout_6->addWidget(groupBox, 1, 0, 1, 2);

        m_tab->addTab(GrandMaster, QString());
        Blackout = new QWidget();
        Blackout->setObjectName(QString::fromUtf8("Blackout"));
        verticalLayout_4 = new QVBoxLayout(Blackout);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_2 = new QGroupBox(Blackout);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_7 = new QGridLayout(groupBox_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        m_blackoutInputUniverseLabel = new QLabel(groupBox_2);
        m_blackoutInputUniverseLabel->setObjectName(QString::fromUtf8("m_blackoutInputUniverseLabel"));

        gridLayout_7->addWidget(m_blackoutInputUniverseLabel, 0, 0, 1, 1);

        m_blackoutInputUniverseEdit = new QLineEdit(groupBox_2);
        m_blackoutInputUniverseEdit->setObjectName(QString::fromUtf8("m_blackoutInputUniverseEdit"));
        m_blackoutInputUniverseEdit->setReadOnly(true);

        gridLayout_7->addWidget(m_blackoutInputUniverseEdit, 0, 2, 1, 2);

        m_blackoutInputChannelLabel = new QLabel(groupBox_2);
        m_blackoutInputChannelLabel->setObjectName(QString::fromUtf8("m_blackoutInputChannelLabel"));

        gridLayout_7->addWidget(m_blackoutInputChannelLabel, 1, 0, 1, 1);

        m_blackoutInputChannelEdit = new QLineEdit(groupBox_2);
        m_blackoutInputChannelEdit->setObjectName(QString::fromUtf8("m_blackoutInputChannelEdit"));
        m_blackoutInputChannelEdit->setReadOnly(true);

        gridLayout_7->addWidget(m_blackoutInputChannelEdit, 1, 2, 1, 2);

        horizontalSpacer_6 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 2, 0, 1, 2);

        m_autoDetectBlackoutInputButton = new QPushButton(groupBox_2);
        m_autoDetectBlackoutInputButton->setObjectName(QString::fromUtf8("m_autoDetectBlackoutInputButton"));
        m_autoDetectBlackoutInputButton->setCheckable(true);
        m_autoDetectBlackoutInputButton->setChecked(false);

        gridLayout_7->addWidget(m_autoDetectBlackoutInputButton, 2, 2, 1, 1);

        m_chooseBlackoutInputButton = new QPushButton(groupBox_2);
        m_chooseBlackoutInputButton->setObjectName(QString::fromUtf8("m_chooseBlackoutInputButton"));

        gridLayout_7->addWidget(m_chooseBlackoutInputButton, 2, 3, 1, 1);


        verticalLayout_4->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 93, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        m_tab->addTab(Blackout, QString());
        DefaultFade = new QWidget();
        DefaultFade->setObjectName(QString::fromUtf8("DefaultFade"));
        horizontalLayout = new QHBoxLayout(DefaultFade);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_defaultFadeGroup = new QGroupBox(DefaultFade);
        m_defaultFadeGroup->setObjectName(QString::fromUtf8("m_defaultFadeGroup"));
        gridLayout = new QGridLayout(m_defaultFadeGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_lowFadeLabel = new QLabel(m_defaultFadeGroup);
        m_lowFadeLabel->setObjectName(QString::fromUtf8("m_lowFadeLabel"));

        gridLayout->addWidget(m_lowFadeLabel, 0, 0, 1, 1);

        m_fadeLowSpin = new QSpinBox(m_defaultFadeGroup);
        m_fadeLowSpin->setObjectName(QString::fromUtf8("m_fadeLowSpin"));
        m_fadeLowSpin->setMaximum(998);

        gridLayout->addWidget(m_fadeLowSpin, 0, 1, 1, 2);

        m_highFadeLabel = new QLabel(m_defaultFadeGroup);
        m_highFadeLabel->setObjectName(QString::fromUtf8("m_highFadeLabel"));

        gridLayout->addWidget(m_highFadeLabel, 1, 0, 1, 1);

        m_fadeHighSpin = new QSpinBox(m_defaultFadeGroup);
        m_fadeHighSpin->setObjectName(QString::fromUtf8("m_fadeHighSpin"));
        m_fadeHighSpin->setMinimum(1);
        m_fadeHighSpin->setMaximum(999);
        m_fadeHighSpin->setValue(5);

        gridLayout->addWidget(m_fadeHighSpin, 1, 1, 1, 2);

        line = new QFrame(m_defaultFadeGroup);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 3);

        label_3 = new QLabel(m_defaultFadeGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        m_fadeInputUniverseEdit = new QLineEdit(m_defaultFadeGroup);
        m_fadeInputUniverseEdit->setObjectName(QString::fromUtf8("m_fadeInputUniverseEdit"));
        m_fadeInputUniverseEdit->setReadOnly(true);

        gridLayout->addWidget(m_fadeInputUniverseEdit, 4, 1, 1, 2);

        label_4 = new QLabel(m_defaultFadeGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        m_fadeInputChannelEdit = new QLineEdit(m_defaultFadeGroup);
        m_fadeInputChannelEdit->setObjectName(QString::fromUtf8("m_fadeInputChannelEdit"));
        m_fadeInputChannelEdit->setReadOnly(true);

        gridLayout->addWidget(m_fadeInputChannelEdit, 5, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 0, 1, 1);

        m_autoDetectFadeInputButton = new QPushButton(m_defaultFadeGroup);
        m_autoDetectFadeInputButton->setObjectName(QString::fromUtf8("m_autoDetectFadeInputButton"));
        m_autoDetectFadeInputButton->setCheckable(true);

        gridLayout->addWidget(m_autoDetectFadeInputButton, 6, 1, 1, 1);

        m_chooseFadeInputButton = new QPushButton(m_defaultFadeGroup);
        m_chooseFadeInputButton->setObjectName(QString::fromUtf8("m_chooseFadeInputButton"));

        gridLayout->addWidget(m_chooseFadeInputButton, 6, 2, 1, 1);


        horizontalLayout->addWidget(m_defaultFadeGroup);

        m_tab->addTab(DefaultFade, QString());
        DefaultHold = new QWidget();
        DefaultHold->setObjectName(QString::fromUtf8("DefaultHold"));
        horizontalLayout_2 = new QHBoxLayout(DefaultHold);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_defaultHoldGroup = new QGroupBox(DefaultHold);
        m_defaultHoldGroup->setObjectName(QString::fromUtf8("m_defaultHoldGroup"));
        gridLayout_2 = new QGridLayout(m_defaultHoldGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_lowHoldLabel = new QLabel(m_defaultHoldGroup);
        m_lowHoldLabel->setObjectName(QString::fromUtf8("m_lowHoldLabel"));

        gridLayout_2->addWidget(m_lowHoldLabel, 0, 0, 1, 1);

        m_holdLowSpin = new QSpinBox(m_defaultHoldGroup);
        m_holdLowSpin->setObjectName(QString::fromUtf8("m_holdLowSpin"));
        m_holdLowSpin->setMaximum(998);

        gridLayout_2->addWidget(m_holdLowSpin, 0, 1, 1, 2);

        m_highHoldLabel = new QLabel(m_defaultHoldGroup);
        m_highHoldLabel->setObjectName(QString::fromUtf8("m_highHoldLabel"));

        gridLayout_2->addWidget(m_highHoldLabel, 1, 0, 1, 1);

        m_holdHighSpin = new QSpinBox(m_defaultHoldGroup);
        m_holdHighSpin->setObjectName(QString::fromUtf8("m_holdHighSpin"));
        m_holdHighSpin->setMinimum(1);
        m_holdHighSpin->setMaximum(999);
        m_holdHighSpin->setValue(5);

        gridLayout_2->addWidget(m_holdHighSpin, 1, 1, 1, 2);

        line_2 = new QFrame(m_defaultHoldGroup);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 2, 0, 1, 3);

        label_5 = new QLabel(m_defaultHoldGroup);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        m_holdInputUniverseEdit = new QLineEdit(m_defaultHoldGroup);
        m_holdInputUniverseEdit->setObjectName(QString::fromUtf8("m_holdInputUniverseEdit"));
        m_holdInputUniverseEdit->setReadOnly(true);

        gridLayout_2->addWidget(m_holdInputUniverseEdit, 4, 1, 1, 2);

        label_6 = new QLabel(m_defaultHoldGroup);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        m_holdInputChannelEdit = new QLineEdit(m_defaultHoldGroup);
        m_holdInputChannelEdit->setObjectName(QString::fromUtf8("m_holdInputChannelEdit"));
        m_holdInputChannelEdit->setReadOnly(true);

        gridLayout_2->addWidget(m_holdInputChannelEdit, 5, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 6, 0, 1, 1);

        m_autoDetectHoldInputButton = new QPushButton(m_defaultHoldGroup);
        m_autoDetectHoldInputButton->setObjectName(QString::fromUtf8("m_autoDetectHoldInputButton"));
        m_autoDetectHoldInputButton->setCheckable(true);

        gridLayout_2->addWidget(m_autoDetectHoldInputButton, 6, 1, 1, 1);

        m_chooseHoldInputButton = new QPushButton(m_defaultHoldGroup);
        m_chooseHoldInputButton->setObjectName(QString::fromUtf8("m_chooseHoldInputButton"));

        gridLayout_2->addWidget(m_chooseHoldInputButton, 6, 2, 1, 1);


        horizontalLayout_2->addWidget(m_defaultHoldGroup);

        m_tab->addTab(DefaultHold, QString());

        verticalLayout->addWidget(m_tab);

        m_buttonBox = new QDialogButtonBox(VCPropertiesEditor);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(m_buttonBox);


        retranslateUi(VCPropertiesEditor);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), VCPropertiesEditor, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), VCPropertiesEditor, SLOT(reject()));
        QObject::connect(m_grabKeyboardCheck, SIGNAL(clicked()), VCPropertiesEditor, SLOT(slotGrabKeyboardClicked()));
        QObject::connect(m_keyRepeatOffCheck, SIGNAL(clicked()), VCPropertiesEditor, SLOT(slotKeyRepeatOffClicked()));
        QObject::connect(m_gridGroup, SIGNAL(clicked()), VCPropertiesEditor, SLOT(slotGridClicked()));
        QObject::connect(m_gridXSpin, SIGNAL(valueChanged(int)), VCPropertiesEditor, SLOT(slotGridXChanged(int)));
        QObject::connect(m_gridYSpin, SIGNAL(valueChanged(int)), VCPropertiesEditor, SLOT(slotGridYChanged(int)));
        QObject::connect(m_fadeLowSpin, SIGNAL(valueChanged(int)), VCPropertiesEditor, SLOT(slotFadeLimitsChanged()));
        QObject::connect(m_fadeHighSpin, SIGNAL(valueChanged(int)), VCPropertiesEditor, SLOT(slotFadeLimitsChanged()));
        QObject::connect(m_autoDetectGrandMasterInputButton, SIGNAL(toggled(bool)), VCPropertiesEditor, SLOT(slotAutoDetectGrandMasterInputToggled(bool)));
        QObject::connect(m_chooseGrandMasterInputButton, SIGNAL(clicked()), VCPropertiesEditor, SLOT(slotChooseGrandMasterInputClicked()));
        QObject::connect(m_autoDetectFadeInputButton, SIGNAL(toggled(bool)), VCPropertiesEditor, SLOT(slotAutoDetectFadeInputToggled(bool)));
        QObject::connect(m_chooseFadeInputButton, SIGNAL(clicked()), VCPropertiesEditor, SLOT(slotChooseFadeInputClicked()));
        QObject::connect(m_autoDetectHoldInputButton, SIGNAL(toggled(bool)), VCPropertiesEditor, SLOT(slotAutoDetectHoldInputToggled(bool)));
        QObject::connect(m_chooseHoldInputButton, SIGNAL(clicked()), VCPropertiesEditor, SLOT(slotChooseHoldInputClicked()));
        QObject::connect(m_gmIntensityRadio, SIGNAL(toggled(bool)), VCPropertiesEditor, SLOT(slotGrandMasterIntensityToggled(bool)));
        QObject::connect(m_gmReduceRadio, SIGNAL(toggled(bool)), VCPropertiesEditor, SLOT(slotGrandMasterReduceToggled(bool)));
        QObject::connect(m_autoDetectBlackoutInputButton, SIGNAL(toggled(bool)), VCPropertiesEditor, SLOT(slotAutoDetectBlackoutInputToggled(bool)));
        QObject::connect(m_chooseBlackoutInputButton, SIGNAL(clicked()), VCPropertiesEditor, SLOT(slotChooseBlackoutInputClicked()));

        m_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VCPropertiesEditor);
    } // setupUi

    void retranslateUi(QDialog *VCPropertiesEditor)
    {
        VCPropertiesEditor->setWindowTitle(QApplication::translate("VCPropertiesEditor", "Virtual Console properties", 0, QApplication::UnicodeUTF8));
        m_keyboardGroup->setTitle(QApplication::translate("VCPropertiesEditor", "Keyboard in operate mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_grabKeyboardCheck->setToolTip(QApplication::translate("VCPropertiesEditor", "Make virtual console to take exclusive keyboard control during operate mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_grabKeyboardCheck->setText(QApplication::translate("VCPropertiesEditor", "Grab keyboard", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_keyRepeatOffCheck->setToolTip(QApplication::translate("VCPropertiesEditor", "Prevent flickering when a keyboard hotkey has been pressed in operate mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_keyRepeatOffCheck->setText(QApplication::translate("VCPropertiesEditor", "Turn off key repeat", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_gridGroup->setToolTip(QApplication::translate("VCPropertiesEditor", "Use a grid layout for virtual console widgets", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_gridGroup->setTitle(QApplication::translate("VCPropertiesEditor", "Grid", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VCPropertiesEditor", "Horizontal (X)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_gridXSpin->setToolTip(QApplication::translate("VCPropertiesEditor", "Widget grid layout X resolution", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_gridXSpin->setSuffix(QApplication::translate("VCPropertiesEditor", "px", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("VCPropertiesEditor", "Vertical (Y)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_gridYSpin->setToolTip(QApplication::translate("VCPropertiesEditor", "Widget grid layout Y resolution", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_gridYSpin->setSuffix(QApplication::translate("VCPropertiesEditor", "px", 0, QApplication::UnicodeUTF8));
        m_tab->setTabText(m_tab->indexOf(Layout), QApplication::translate("VCPropertiesEditor", "Layout", 0, QApplication::UnicodeUTF8));
        m_gmChannelsGroup->setTitle(QApplication::translate("VCPropertiesEditor", "Channels", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_gmIntensityRadio->setToolTip(QApplication::translate("VCPropertiesEditor", "Apply Grand Master only to Intensity channels.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_gmIntensityRadio->setText(QApplication::translate("VCPropertiesEditor", "Intensity", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_gmAllChannelsRadio->setToolTip(QApplication::translate("VCPropertiesEditor", "Apply Grand Master to all channels.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_gmAllChannelsRadio->setText(QApplication::translate("VCPropertiesEditor", "All channels", 0, QApplication::UnicodeUTF8));
        m_gmValuesGroup->setTitle(QApplication::translate("VCPropertiesEditor", "Values", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_gmReduceRadio->setToolTip(QApplication::translate("VCPropertiesEditor", "Make Grand Master reduce levels by a percentage.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_gmReduceRadio->setText(QApplication::translate("VCPropertiesEditor", "Reduce", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_gmLimitRadio->setToolTip(QApplication::translate("VCPropertiesEditor", "Make Grand Master limit the maximum channel values.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_gmLimitRadio->setText(QApplication::translate("VCPropertiesEditor", "Limit", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("VCPropertiesEditor", "External Input", 0, QApplication::UnicodeUTF8));
        m_gmInputUniverseLabel->setText(QApplication::translate("VCPropertiesEditor", "Input Universe", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_gmInputUniverseEdit->setToolTip(QApplication::translate("VCPropertiesEditor", "Input universe for Grand Master slider.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_gmInputChannelLabel->setText(QApplication::translate("VCPropertiesEditor", "Input Channel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_gmInputChannelEdit->setToolTip(QApplication::translate("VCPropertiesEditor", "Input channel for Grand Master slider.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_autoDetectGrandMasterInputButton->setToolTip(QApplication::translate("VCPropertiesEditor", "When toggled, you can move an external slider/knob to assign it to the Grand Master slider.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_autoDetectGrandMasterInputButton->setText(QApplication::translate("VCPropertiesEditor", "Auto Detect", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_chooseGrandMasterInputButton->setToolTip(QApplication::translate("VCPropertiesEditor", "Choose an external input universe & channel that the Grand Master slider should listen to.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_chooseGrandMasterInputButton->setText(QApplication::translate("VCPropertiesEditor", "Choose...", 0, QApplication::UnicodeUTF8));
        m_tab->setTabText(m_tab->indexOf(GrandMaster), QApplication::translate("VCPropertiesEditor", "Grand Master", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("VCPropertiesEditor", "External Input", 0, QApplication::UnicodeUTF8));
        m_blackoutInputUniverseLabel->setText(QApplication::translate("VCPropertiesEditor", "Input Universe", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_blackoutInputUniverseEdit->setToolTip(QApplication::translate("VCPropertiesEditor", "Input universe for Blackout.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_blackoutInputChannelLabel->setText(QApplication::translate("VCPropertiesEditor", "Input Channel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_blackoutInputChannelEdit->setToolTip(QApplication::translate("VCPropertiesEditor", "Input channel for Blackout.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_autoDetectBlackoutInputButton->setToolTip(QApplication::translate("VCPropertiesEditor", "When toggled, you can move an external slider/knob to assign it to Blackout.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_autoDetectBlackoutInputButton->setText(QApplication::translate("VCPropertiesEditor", "Auto Detect", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_chooseBlackoutInputButton->setToolTip(QApplication::translate("VCPropertiesEditor", "Choose an external input universe & channel that Blackout should listen to.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_chooseBlackoutInputButton->setText(QApplication::translate("VCPropertiesEditor", "Choose...", 0, QApplication::UnicodeUTF8));
        m_tab->setTabText(m_tab->indexOf(Blackout), QApplication::translate("VCPropertiesEditor", "Blackout", 0, QApplication::UnicodeUTF8));
        m_defaultFadeGroup->setTitle(QApplication::translate("VCPropertiesEditor", "Default fade slider", 0, QApplication::UnicodeUTF8));
        m_lowFadeLabel->setText(QApplication::translate("VCPropertiesEditor", "Low limit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_fadeLowSpin->setToolTip(QApplication::translate("VCPropertiesEditor", "Lowest value that can be set to the 'fade' bus with the default sliders", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_fadeLowSpin->setSuffix(QApplication::translate("VCPropertiesEditor", "s", 0, QApplication::UnicodeUTF8));
        m_highFadeLabel->setText(QApplication::translate("VCPropertiesEditor", "High limit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_fadeHighSpin->setToolTip(QApplication::translate("VCPropertiesEditor", "Highest value that can be set to the 'fade' bus with the default sliders", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_fadeHighSpin->setSuffix(QApplication::translate("VCPropertiesEditor", "s", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("VCPropertiesEditor", "Input universe", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_fadeInputUniverseEdit->setToolTip(QApplication::translate("VCPropertiesEditor", "Input universe for default fade.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("VCPropertiesEditor", "Input channel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_fadeInputChannelEdit->setToolTip(QApplication::translate("VCPropertiesEditor", "Input channel for default fade.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_autoDetectFadeInputButton->setToolTip(QApplication::translate("VCPropertiesEditor", "When toggled, you can move an external slider/knob to assign it to the default fade slider.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_autoDetectFadeInputButton->setText(QApplication::translate("VCPropertiesEditor", "Auto Detect", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_chooseFadeInputButton->setToolTip(QApplication::translate("VCPropertiesEditor", "Choose an external input universe & channel that the default fade slider should listen to.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_chooseFadeInputButton->setText(QApplication::translate("VCPropertiesEditor", "Choose...", 0, QApplication::UnicodeUTF8));
        m_tab->setTabText(m_tab->indexOf(DefaultFade), QApplication::translate("VCPropertiesEditor", "Default Fade", 0, QApplication::UnicodeUTF8));
        m_defaultHoldGroup->setTitle(QApplication::translate("VCPropertiesEditor", "Default hold slider", 0, QApplication::UnicodeUTF8));
        m_lowHoldLabel->setText(QApplication::translate("VCPropertiesEditor", "Low limit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_holdLowSpin->setToolTip(QApplication::translate("VCPropertiesEditor", "Lowest value that can be set to the 'hold' bus with the default sliders", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_holdLowSpin->setSuffix(QApplication::translate("VCPropertiesEditor", "s", 0, QApplication::UnicodeUTF8));
        m_highHoldLabel->setText(QApplication::translate("VCPropertiesEditor", "High limit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_holdHighSpin->setToolTip(QApplication::translate("VCPropertiesEditor", "Highest value that can be set to the 'hold' bus with the default sliders", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_holdHighSpin->setSuffix(QApplication::translate("VCPropertiesEditor", "s", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("VCPropertiesEditor", "Input universe", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_holdInputUniverseEdit->setToolTip(QApplication::translate("VCPropertiesEditor", "Input universe for default hold.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("VCPropertiesEditor", "Input channel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_holdInputChannelEdit->setToolTip(QApplication::translate("VCPropertiesEditor", "Input channel for default hold.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_autoDetectHoldInputButton->setToolTip(QApplication::translate("VCPropertiesEditor", "When toggled, you can move an external slider/knob to assign it to the default hold slider.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_autoDetectHoldInputButton->setText(QApplication::translate("VCPropertiesEditor", "Auto Detect", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_chooseHoldInputButton->setToolTip(QApplication::translate("VCPropertiesEditor", "Choose an external input universe & channel that the default hold slider should listen to.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_chooseHoldInputButton->setText(QApplication::translate("VCPropertiesEditor", "Choose...", 0, QApplication::UnicodeUTF8));
        m_tab->setTabText(m_tab->indexOf(DefaultHold), QApplication::translate("VCPropertiesEditor", "Default Hold", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VCPropertiesEditor: public Ui_VCPropertiesEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCPROPERTIES_H
