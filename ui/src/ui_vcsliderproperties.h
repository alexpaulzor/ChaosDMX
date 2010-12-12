/********************************************************************************
** Form generated from reading UI file 'vcsliderproperties.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VCSLIDERPROPERTIES_H
#define UI_VCSLIDERPROPERTIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
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
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VCSliderProperties
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *General;
    QGridLayout *gridLayout_2;
    QHBoxLayout *hboxLayout;
    QLabel *m_nameLabel;
    QLineEdit *m_nameEdit;
    QGroupBox *m_valueGroup;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *m_valueExactRadio;
    QRadioButton *m_valuePercentageRadio;
    QGroupBox *m_sliderMovementGroup;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *m_sliderMovementNormalRadio;
    QRadioButton *m_sliderMovementInvertedRadio;
    QGroupBox *m_externalInputGroup;
    QGridLayout *gridLayout;
    QLabel *m_inputUniverseLabel;
    QLineEdit *m_inputUniverseEdit;
    QLabel *m_inputChannelLabel;
    QLineEdit *m_inputChannelEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_chooseInputButton;
    QPushButton *m_autoDetectInputButton;
    QSpacerItem *spacerItem;
    QWidget *Bus;
    QVBoxLayout *vboxLayout1;
    QGroupBox *m_busValueRangeGroup;
    QGridLayout *gridLayout1;
    QLabel *m_busLowLimitLabel;
    QSpinBox *m_busLowLimitSpin;
    QLabel *m_busHighLimitLabel;
    QSpinBox *m_busHighLimitSpin;
    QGroupBox *m_busGroup;
    QVBoxLayout *vboxLayout2;
    QComboBox *m_busCombo;
    QSpacerItem *m_busSpacer;
    QPushButton *m_switchToBusModeButton;
    QWidget *Level;
    QVBoxLayout *vboxLayout3;
    QGroupBox *m_levelValueRangeGroup;
    QHBoxLayout *hboxLayout1;
    QLabel *m_levelLowLimitLabel;
    QSpinBox *m_levelLowLimitSpin;
    QLabel *m_levelHighLimitLabel;
    QSpinBox *m_levelHighLimitSpin;
    QSpacerItem *spacerItem1;
    QPushButton *m_levelCapabilityButton;
    QTreeWidget *m_levelList;
    QHBoxLayout *hboxLayout2;
    QPushButton *m_levelAllButton;
    QPushButton *m_levelNoneButton;
    QPushButton *m_levelInvertButton;
    QSpacerItem *spacerItem2;
    QPushButton *m_levelByGroupButton;
    QPushButton *m_switchToLevelModeButton;
    QWidget *Submaster;
    QVBoxLayout *vboxLayout4;
    QLabel *label;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *VCSliderProperties)
    {
        if (VCSliderProperties->objectName().isEmpty())
            VCSliderProperties->setObjectName(QString::fromUtf8("VCSliderProperties"));
        VCSliderProperties->resize(511, 412);
        vboxLayout = new QVBoxLayout(VCSliderProperties);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(VCSliderProperties);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        General = new QWidget();
        General->setObjectName(QString::fromUtf8("General"));
        gridLayout_2 = new QGridLayout(General);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_nameLabel = new QLabel(General);
        m_nameLabel->setObjectName(QString::fromUtf8("m_nameLabel"));

        hboxLayout->addWidget(m_nameLabel);

        m_nameEdit = new QLineEdit(General);
        m_nameEdit->setObjectName(QString::fromUtf8("m_nameEdit"));

        hboxLayout->addWidget(m_nameEdit);


        gridLayout_2->addLayout(hboxLayout, 0, 0, 1, 2);

        m_valueGroup = new QGroupBox(General);
        m_valueGroup->setObjectName(QString::fromUtf8("m_valueGroup"));
        horizontalLayout_2 = new QHBoxLayout(m_valueGroup);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_valueExactRadio = new QRadioButton(m_valueGroup);
        m_valueExactRadio->setObjectName(QString::fromUtf8("m_valueExactRadio"));
        m_valueExactRadio->setChecked(true);

        horizontalLayout_2->addWidget(m_valueExactRadio);

        m_valuePercentageRadio = new QRadioButton(m_valueGroup);
        m_valuePercentageRadio->setObjectName(QString::fromUtf8("m_valuePercentageRadio"));

        horizontalLayout_2->addWidget(m_valuePercentageRadio);


        gridLayout_2->addWidget(m_valueGroup, 1, 0, 1, 1);

        m_sliderMovementGroup = new QGroupBox(General);
        m_sliderMovementGroup->setObjectName(QString::fromUtf8("m_sliderMovementGroup"));
        horizontalLayout_3 = new QHBoxLayout(m_sliderMovementGroup);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        m_sliderMovementNormalRadio = new QRadioButton(m_sliderMovementGroup);
        m_sliderMovementNormalRadio->setObjectName(QString::fromUtf8("m_sliderMovementNormalRadio"));
        m_sliderMovementNormalRadio->setChecked(true);

        horizontalLayout_3->addWidget(m_sliderMovementNormalRadio);

        m_sliderMovementInvertedRadio = new QRadioButton(m_sliderMovementGroup);
        m_sliderMovementInvertedRadio->setObjectName(QString::fromUtf8("m_sliderMovementInvertedRadio"));

        horizontalLayout_3->addWidget(m_sliderMovementInvertedRadio);


        gridLayout_2->addWidget(m_sliderMovementGroup, 1, 1, 1, 1);

        m_externalInputGroup = new QGroupBox(General);
        m_externalInputGroup->setObjectName(QString::fromUtf8("m_externalInputGroup"));
        gridLayout = new QGridLayout(m_externalInputGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_inputUniverseLabel = new QLabel(m_externalInputGroup);
        m_inputUniverseLabel->setObjectName(QString::fromUtf8("m_inputUniverseLabel"));

        gridLayout->addWidget(m_inputUniverseLabel, 0, 0, 1, 1);

        m_inputUniverseEdit = new QLineEdit(m_externalInputGroup);
        m_inputUniverseEdit->setObjectName(QString::fromUtf8("m_inputUniverseEdit"));
        m_inputUniverseEdit->setReadOnly(true);

        gridLayout->addWidget(m_inputUniverseEdit, 0, 1, 1, 2);

        m_inputChannelLabel = new QLabel(m_externalInputGroup);
        m_inputChannelLabel->setObjectName(QString::fromUtf8("m_inputChannelLabel"));

        gridLayout->addWidget(m_inputChannelLabel, 1, 0, 1, 1);

        m_inputChannelEdit = new QLineEdit(m_externalInputGroup);
        m_inputChannelEdit->setObjectName(QString::fromUtf8("m_inputChannelEdit"));
        m_inputChannelEdit->setReadOnly(true);

        gridLayout->addWidget(m_inputChannelEdit, 1, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        m_chooseInputButton = new QPushButton(m_externalInputGroup);
        m_chooseInputButton->setObjectName(QString::fromUtf8("m_chooseInputButton"));

        gridLayout->addWidget(m_chooseInputButton, 2, 2, 1, 1);

        m_autoDetectInputButton = new QPushButton(m_externalInputGroup);
        m_autoDetectInputButton->setObjectName(QString::fromUtf8("m_autoDetectInputButton"));
        m_autoDetectInputButton->setCheckable(true);

        gridLayout->addWidget(m_autoDetectInputButton, 2, 1, 1, 1);


        gridLayout_2->addWidget(m_externalInputGroup, 2, 0, 1, 2);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacerItem, 3, 0, 1, 2);

        tabWidget->addTab(General, QString());
        Bus = new QWidget();
        Bus->setObjectName(QString::fromUtf8("Bus"));
        vboxLayout1 = new QVBoxLayout(Bus);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        m_busValueRangeGroup = new QGroupBox(Bus);
        m_busValueRangeGroup->setObjectName(QString::fromUtf8("m_busValueRangeGroup"));
        gridLayout1 = new QGridLayout(m_busValueRangeGroup);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        m_busLowLimitLabel = new QLabel(m_busValueRangeGroup);
        m_busLowLimitLabel->setObjectName(QString::fromUtf8("m_busLowLimitLabel"));

        gridLayout1->addWidget(m_busLowLimitLabel, 0, 0, 1, 1);

        m_busLowLimitSpin = new QSpinBox(m_busValueRangeGroup);
        m_busLowLimitSpin->setObjectName(QString::fromUtf8("m_busLowLimitSpin"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_busLowLimitSpin->sizePolicy().hasHeightForWidth());
        m_busLowLimitSpin->setSizePolicy(sizePolicy);
        m_busLowLimitSpin->setMaximum(998);

        gridLayout1->addWidget(m_busLowLimitSpin, 0, 1, 1, 1);

        m_busHighLimitLabel = new QLabel(m_busValueRangeGroup);
        m_busHighLimitLabel->setObjectName(QString::fromUtf8("m_busHighLimitLabel"));

        gridLayout1->addWidget(m_busHighLimitLabel, 1, 0, 1, 1);

        m_busHighLimitSpin = new QSpinBox(m_busValueRangeGroup);
        m_busHighLimitSpin->setObjectName(QString::fromUtf8("m_busHighLimitSpin"));
        m_busHighLimitSpin->setMinimum(1);
        m_busHighLimitSpin->setMaximum(999);
        m_busHighLimitSpin->setValue(15);

        gridLayout1->addWidget(m_busHighLimitSpin, 1, 1, 1, 1);


        vboxLayout1->addWidget(m_busValueRangeGroup);

        m_busGroup = new QGroupBox(Bus);
        m_busGroup->setObjectName(QString::fromUtf8("m_busGroup"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_busGroup->sizePolicy().hasHeightForWidth());
        m_busGroup->setSizePolicy(sizePolicy1);
        vboxLayout2 = new QVBoxLayout(m_busGroup);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        m_busCombo = new QComboBox(m_busGroup);
        m_busCombo->setObjectName(QString::fromUtf8("m_busCombo"));

        vboxLayout2->addWidget(m_busCombo);


        vboxLayout1->addWidget(m_busGroup);

        m_busSpacer = new QSpacerItem(418, 241, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(m_busSpacer);

        m_switchToBusModeButton = new QPushButton(Bus);
        m_switchToBusModeButton->setObjectName(QString::fromUtf8("m_switchToBusModeButton"));

        vboxLayout1->addWidget(m_switchToBusModeButton);

        tabWidget->addTab(Bus, QString());
        Level = new QWidget();
        Level->setObjectName(QString::fromUtf8("Level"));
        vboxLayout3 = new QVBoxLayout(Level);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        m_levelValueRangeGroup = new QGroupBox(Level);
        m_levelValueRangeGroup->setObjectName(QString::fromUtf8("m_levelValueRangeGroup"));
        hboxLayout1 = new QHBoxLayout(m_levelValueRangeGroup);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        m_levelLowLimitLabel = new QLabel(m_levelValueRangeGroup);
        m_levelLowLimitLabel->setObjectName(QString::fromUtf8("m_levelLowLimitLabel"));

        hboxLayout1->addWidget(m_levelLowLimitLabel);

        m_levelLowLimitSpin = new QSpinBox(m_levelValueRangeGroup);
        m_levelLowLimitSpin->setObjectName(QString::fromUtf8("m_levelLowLimitSpin"));
        m_levelLowLimitSpin->setMaximum(255);

        hboxLayout1->addWidget(m_levelLowLimitSpin);

        m_levelHighLimitLabel = new QLabel(m_levelValueRangeGroup);
        m_levelHighLimitLabel->setObjectName(QString::fromUtf8("m_levelHighLimitLabel"));

        hboxLayout1->addWidget(m_levelHighLimitLabel);

        m_levelHighLimitSpin = new QSpinBox(m_levelValueRangeGroup);
        m_levelHighLimitSpin->setObjectName(QString::fromUtf8("m_levelHighLimitSpin"));
        m_levelHighLimitSpin->setMaximum(255);
        m_levelHighLimitSpin->setValue(255);

        hboxLayout1->addWidget(m_levelHighLimitSpin);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        m_levelCapabilityButton = new QPushButton(m_levelValueRangeGroup);
        m_levelCapabilityButton->setObjectName(QString::fromUtf8("m_levelCapabilityButton"));
        m_levelCapabilityButton->setEnabled(false);

        hboxLayout1->addWidget(m_levelCapabilityButton);


        vboxLayout3->addWidget(m_levelValueRangeGroup);

        m_levelList = new QTreeWidget(Level);
        m_levelList->setObjectName(QString::fromUtf8("m_levelList"));
        m_levelList->setAlternatingRowColors(true);
        m_levelList->setSelectionMode(QAbstractItemView::SingleSelection);
        m_levelList->setAllColumnsShowFocus(true);

        vboxLayout3->addWidget(m_levelList);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        m_levelAllButton = new QPushButton(Level);
        m_levelAllButton->setObjectName(QString::fromUtf8("m_levelAllButton"));

        hboxLayout2->addWidget(m_levelAllButton);

        m_levelNoneButton = new QPushButton(Level);
        m_levelNoneButton->setObjectName(QString::fromUtf8("m_levelNoneButton"));

        hboxLayout2->addWidget(m_levelNoneButton);

        m_levelInvertButton = new QPushButton(Level);
        m_levelInvertButton->setObjectName(QString::fromUtf8("m_levelInvertButton"));

        hboxLayout2->addWidget(m_levelInvertButton);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        m_levelByGroupButton = new QPushButton(Level);
        m_levelByGroupButton->setObjectName(QString::fromUtf8("m_levelByGroupButton"));

        hboxLayout2->addWidget(m_levelByGroupButton);


        vboxLayout3->addLayout(hboxLayout2);

        m_switchToLevelModeButton = new QPushButton(Level);
        m_switchToLevelModeButton->setObjectName(QString::fromUtf8("m_switchToLevelModeButton"));

        vboxLayout3->addWidget(m_switchToLevelModeButton);

        tabWidget->addTab(Level, QString());
        Submaster = new QWidget();
        Submaster->setObjectName(QString::fromUtf8("Submaster"));
        vboxLayout4 = new QVBoxLayout(Submaster);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        label = new QLabel(Submaster);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        vboxLayout4->addWidget(label);

        tabWidget->addTab(Submaster, QString());

        vboxLayout->addWidget(tabWidget);

        m_buttonBox = new QDialogButtonBox(VCSliderProperties);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_buttonBox);


        retranslateUi(VCSliderProperties);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), VCSliderProperties, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), VCSliderProperties, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VCSliderProperties);
    } // setupUi

    void retranslateUi(QDialog *VCSliderProperties)
    {
        VCSliderProperties->setWindowTitle(QApplication::translate("VCSliderProperties", "Slider properties", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        m_nameLabel->setText(QApplication::translate("VCSliderProperties", "Slider name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_nameEdit->setToolTip(QApplication::translate("VCSliderProperties", "Name of the slider", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_valueGroup->setTitle(QApplication::translate("VCSliderProperties", "Value display style", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_valueExactRadio->setToolTip(QApplication::translate("VCSliderProperties", "Show exact DMX values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_valueExactRadio->setText(QApplication::translate("VCSliderProperties", "DMX / Time", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_valuePercentageRadio->setToolTip(QApplication::translate("VCSliderProperties", "Show value as percentage", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_valuePercentageRadio->setText(QApplication::translate("VCSliderProperties", "Percentage", 0, QApplication::UnicodeUTF8));
        m_sliderMovementGroup->setTitle(QApplication::translate("VCSliderProperties", "Slider movement", 0, QApplication::UnicodeUTF8));
        m_sliderMovementNormalRadio->setText(QApplication::translate("VCSliderProperties", "Normal", 0, QApplication::UnicodeUTF8));
        m_sliderMovementInvertedRadio->setText(QApplication::translate("VCSliderProperties", "Inverted", 0, QApplication::UnicodeUTF8));
        m_externalInputGroup->setTitle(QApplication::translate("VCSliderProperties", "External Input", 0, QApplication::UnicodeUTF8));
        m_inputUniverseLabel->setText(QApplication::translate("VCSliderProperties", "Input universe", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_inputUniverseEdit->setToolTip(QApplication::translate("VCSliderProperties", "The input universe that sends data to this widget", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_inputChannelLabel->setText(QApplication::translate("VCSliderProperties", "Input channel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_inputChannelEdit->setToolTip(QApplication::translate("VCSliderProperties", "The particular input channel within the input universe that sends data to this widget", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_chooseInputButton->setToolTip(QApplication::translate("VCSliderProperties", "Choose an external input universe & channel that this widget should listen to", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_chooseInputButton->setText(QApplication::translate("VCSliderProperties", "Choose...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_autoDetectInputButton->setToolTip(QApplication::translate("VCSliderProperties", "When toggled, you can move an external slider/knob to assign it to this virtual console slider.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_autoDetectInputButton->setText(QApplication::translate("VCSliderProperties", "Auto Detect", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(General), QApplication::translate("VCSliderProperties", "General", 0, QApplication::UnicodeUTF8));
        m_busValueRangeGroup->setTitle(QApplication::translate("VCSliderProperties", "Value range", 0, QApplication::UnicodeUTF8));
        m_busLowLimitLabel->setText(QApplication::translate("VCSliderProperties", "Low limit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_busLowLimitSpin->setToolTip(QApplication::translate("VCSliderProperties", "The lowest value that can be set with this slider for a bus", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_busLowLimitSpin->setSuffix(QApplication::translate("VCSliderProperties", "s", 0, QApplication::UnicodeUTF8));
        m_busHighLimitLabel->setText(QApplication::translate("VCSliderProperties", "High limit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_busHighLimitSpin->setToolTip(QApplication::translate("VCSliderProperties", "The highest value that can be set with this slider for a bus", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_busHighLimitSpin->setSuffix(QApplication::translate("VCSliderProperties", "s", 0, QApplication::UnicodeUTF8));
        m_busGroup->setTitle(QApplication::translate("VCSliderProperties", "Bus", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_switchToBusModeButton->setToolTip(QApplication::translate("VCSliderProperties", "Make the slider control a bus", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_switchToBusModeButton->setText(QApplication::translate("VCSliderProperties", "Switch to Bus Mode", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Bus), QApplication::translate("VCSliderProperties", "Bus", 0, QApplication::UnicodeUTF8));
        m_levelValueRangeGroup->setTitle(QApplication::translate("VCSliderProperties", "Value range", 0, QApplication::UnicodeUTF8));
        m_levelLowLimitLabel->setText(QApplication::translate("VCSliderProperties", "Low limit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_levelLowLimitSpin->setToolTip(QApplication::translate("VCSliderProperties", "Lowest DMX value that can be set with this slider", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_levelHighLimitLabel->setText(QApplication::translate("VCSliderProperties", "High limit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_levelHighLimitSpin->setToolTip(QApplication::translate("VCSliderProperties", "Highest DMX value that can be set with this slider", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_levelCapabilityButton->setToolTip(QApplication::translate("VCSliderProperties", "Set value range from the selected capability", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_levelCapabilityButton->setText(QApplication::translate("VCSliderProperties", "From capability", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_levelList->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("VCSliderProperties", "Range", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("VCSliderProperties", "Type", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("VCSliderProperties", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_levelAllButton->setToolTip(QApplication::translate("VCSliderProperties", "Select all channels", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_levelAllButton->setText(QApplication::translate("VCSliderProperties", "All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_levelNoneButton->setToolTip(QApplication::translate("VCSliderProperties", "Unselect everything", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_levelNoneButton->setText(QApplication::translate("VCSliderProperties", "None", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_levelInvertButton->setToolTip(QApplication::translate("VCSliderProperties", "Invert selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_levelInvertButton->setText(QApplication::translate("VCSliderProperties", "Invert", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_levelByGroupButton->setToolTip(QApplication::translate("VCSliderProperties", "Choose channels by channel group", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_levelByGroupButton->setText(QApplication::translate("VCSliderProperties", "By group...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_switchToLevelModeButton->setToolTip(QApplication::translate("VCSliderProperties", "Make the slider control the level of a set of channels", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_switchToLevelModeButton->setText(QApplication::translate("VCSliderProperties", "Switch to Level Mode", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Level), QApplication::translate("VCSliderProperties", "Level", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VCSliderProperties", "Not implemented yet", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Submaster), QApplication::translate("VCSliderProperties", "Submaster", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VCSliderProperties: public Ui_VCSliderProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCSLIDERPROPERTIES_H
