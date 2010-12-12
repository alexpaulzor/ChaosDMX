/********************************************************************************
** Form generated from reading UI file 'editmode.ui'
**
** Created: Sun Dec 12 05:59:00 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITMODE_H
#define UI_EDITMODE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditMode
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *m_modeNameLabel;
    QLineEdit *m_modeNameEdit;
    QTabWidget *m_tab;
    QWidget *tab_channels;
    QHBoxLayout *hboxLayout1;
    QTreeWidget *m_channelList;
    QVBoxLayout *vboxLayout1;
    QToolButton *m_addChannelButton;
    QToolButton *m_removeChannelButton;
    QToolButton *m_raiseChannelButton;
    QToolButton *m_lowerChannelButton;
    QSpacerItem *spacerItem;
    QWidget *tab_physical;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout2;
    QLabel *m_bulbTypeLabel;
    QComboBox *m_bulbTypeCombo;
    QHBoxLayout *hboxLayout3;
    QLabel *m_bulbLumensLabel;
    QSpinBox *m_bulbLumensSpin;
    QHBoxLayout *hboxLayout4;
    QLabel *m_bulbTempLabel;
    QComboBox *m_bulbTempCombo;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout5;
    QLabel *m_weightLabel;
    QDoubleSpinBox *m_weightSpin;
    QHBoxLayout *hboxLayout6;
    QLabel *m_widthLabel;
    QSpinBox *m_widthSpin;
    QHBoxLayout *hboxLayout7;
    QLabel *m_heightLabel;
    QSpinBox *m_heightSpin;
    QHBoxLayout *hboxLayout8;
    QLabel *m_depthLabel;
    QSpinBox *m_depthSpin;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout4;
    QHBoxLayout *hboxLayout9;
    QLabel *m_lensNameLabel;
    QComboBox *m_lensNameCombo;
    QHBoxLayout *hboxLayout10;
    QLabel *m_lensDegreesMinLabel;
    QSpinBox *m_lensDegreesMinSpin;
    QHBoxLayout *hboxLayout11;
    QLabel *m_lensDegreesMaxLabel;
    QSpinBox *m_lensDegreesMaxSpin;
    QGroupBox *groupBox_4;
    QVBoxLayout *vboxLayout5;
    QHBoxLayout *hboxLayout12;
    QLabel *m_focusTypeLabel;
    QComboBox *m_focusTypeCombo;
    QHBoxLayout *hboxLayout13;
    QLabel *m_panMaxLabel;
    QSpinBox *m_panMaxSpin;
    QHBoxLayout *hboxLayout14;
    QLabel *m_tiltMaxLabel;
    QSpinBox *m_tiltMaxSpin;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout15;
    QLabel *m_powerConsumptionLabel;
    QSpinBox *m_powerConsumptionSpin;
    QHBoxLayout *horizontalLayout;
    QLabel *m_dmxConnectorLabel;
    QComboBox *m_dmxConnectorCombo;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *EditMode)
    {
        if (EditMode->objectName().isEmpty())
            EditMode->setObjectName(QString::fromUtf8("EditMode"));
        EditMode->resize(595, 567);
        vboxLayout = new QVBoxLayout(EditMode);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_modeNameLabel = new QLabel(EditMode);
        m_modeNameLabel->setObjectName(QString::fromUtf8("m_modeNameLabel"));

        hboxLayout->addWidget(m_modeNameLabel);

        m_modeNameEdit = new QLineEdit(EditMode);
        m_modeNameEdit->setObjectName(QString::fromUtf8("m_modeNameEdit"));

        hboxLayout->addWidget(m_modeNameEdit);


        vboxLayout->addLayout(hboxLayout);

        m_tab = new QTabWidget(EditMode);
        m_tab->setObjectName(QString::fromUtf8("m_tab"));
        tab_channels = new QWidget();
        tab_channels->setObjectName(QString::fromUtf8("tab_channels"));
        hboxLayout1 = new QHBoxLayout(tab_channels);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        m_channelList = new QTreeWidget(tab_channels);
        m_channelList->setObjectName(QString::fromUtf8("m_channelList"));
        m_channelList->setAlternatingRowColors(true);
        m_channelList->setRootIsDecorated(false);
        m_channelList->setItemsExpandable(false);
        m_channelList->setAllColumnsShowFocus(true);

        hboxLayout1->addWidget(m_channelList);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        m_addChannelButton = new QToolButton(tab_channels);
        m_addChannelButton->setObjectName(QString::fromUtf8("m_addChannelButton"));
        m_addChannelButton->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_addChannelButton->setIcon(icon);
        m_addChannelButton->setIconSize(QSize(26, 26));

        vboxLayout1->addWidget(m_addChannelButton);

        m_removeChannelButton = new QToolButton(tab_channels);
        m_removeChannelButton->setObjectName(QString::fromUtf8("m_removeChannelButton"));
        m_removeChannelButton->setText(QString::fromUtf8("..."));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_removeChannelButton->setIcon(icon1);
        m_removeChannelButton->setIconSize(QSize(26, 26));

        vboxLayout1->addWidget(m_removeChannelButton);

        m_raiseChannelButton = new QToolButton(tab_channels);
        m_raiseChannelButton->setObjectName(QString::fromUtf8("m_raiseChannelButton"));
        m_raiseChannelButton->setText(QString::fromUtf8("..."));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_raiseChannelButton->setIcon(icon2);
        m_raiseChannelButton->setIconSize(QSize(26, 26));

        vboxLayout1->addWidget(m_raiseChannelButton);

        m_lowerChannelButton = new QToolButton(tab_channels);
        m_lowerChannelButton->setObjectName(QString::fromUtf8("m_lowerChannelButton"));
        m_lowerChannelButton->setText(QString::fromUtf8("..."));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_lowerChannelButton->setIcon(icon3);
        m_lowerChannelButton->setIconSize(QSize(26, 26));

        vboxLayout1->addWidget(m_lowerChannelButton);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        hboxLayout1->addLayout(vboxLayout1);

        m_tab->addTab(tab_channels, QString());
        tab_physical = new QWidget();
        tab_physical->setObjectName(QString::fromUtf8("tab_physical"));
        gridLayout = new QGridLayout(tab_physical);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(tab_physical);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout2 = new QVBoxLayout(groupBox);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        m_bulbTypeLabel = new QLabel(groupBox);
        m_bulbTypeLabel->setObjectName(QString::fromUtf8("m_bulbTypeLabel"));

        hboxLayout2->addWidget(m_bulbTypeLabel);

        m_bulbTypeCombo = new QComboBox(groupBox);
        m_bulbTypeCombo->insertItems(0, QStringList()
         << QString::fromUtf8("CDM 70W")
         << QString::fromUtf8("CDM 150W")
         << QString::fromUtf8("CP29 5000W")
         << QString::fromUtf8("CP41 2000W")
         << QString::fromUtf8("CP60 1000W")
         << QString::fromUtf8("CP61 1000W")
         << QString::fromUtf8("CP62 1000W")
         << QString::fromUtf8("CP86 500W")
         << QString::fromUtf8("CP87 500W")
         << QString::fromUtf8("CP88 500W")
         << QString::fromUtf8("EFP 100W")
         << QString::fromUtf8("EFP 150W")
         << QString::fromUtf8("EFR 100W")
         << QString::fromUtf8("EFR 150W")
         << QString::fromUtf8("ELC 250W")
         << QString::fromUtf8("HMI 1200W")
         << QString::fromUtf8("HMI 4000W")
         << QString::fromUtf8("HTI 150W")
         << QString::fromUtf8("HTI 250W")
         << QString::fromUtf8("HTI 300W")
         << QString::fromUtf8("HTI 400W")
         << QString::fromUtf8("HTI 575W")
         << QString::fromUtf8("HTI 700W")
         << QString::fromUtf8("HTI 1200W")
         << QString::fromUtf8("HTI 2500W")
         << QString::fromUtf8("LED")
         << QString::fromUtf8("MSD 200W")
         << QString::fromUtf8("MSD 250W")
         << QString::fromUtf8("MSD 275W")
         << QString::fromUtf8("MSD 575W")
         << QString::fromUtf8("MSR 700W")
         << QString::fromUtf8("MSR 1200W")
        );
        m_bulbTypeCombo->setObjectName(QString::fromUtf8("m_bulbTypeCombo"));
        m_bulbTypeCombo->setEditable(true);

        hboxLayout2->addWidget(m_bulbTypeCombo);


        vboxLayout2->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        m_bulbLumensLabel = new QLabel(groupBox);
        m_bulbLumensLabel->setObjectName(QString::fromUtf8("m_bulbLumensLabel"));

        hboxLayout3->addWidget(m_bulbLumensLabel);

        m_bulbLumensSpin = new QSpinBox(groupBox);
        m_bulbLumensSpin->setObjectName(QString::fromUtf8("m_bulbLumensSpin"));
        m_bulbLumensSpin->setAccelerated(true);
        m_bulbLumensSpin->setMaximum(99999);
        m_bulbLumensSpin->setValue(18000);

        hboxLayout3->addWidget(m_bulbLumensSpin);


        vboxLayout2->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        m_bulbTempLabel = new QLabel(groupBox);
        m_bulbTempLabel->setObjectName(QString::fromUtf8("m_bulbTempLabel"));

        hboxLayout4->addWidget(m_bulbTempLabel);

        m_bulbTempCombo = new QComboBox(groupBox);
        m_bulbTempCombo->setObjectName(QString::fromUtf8("m_bulbTempCombo"));
        m_bulbTempCombo->setEditable(true);

        hboxLayout4->addWidget(m_bulbTempCombo);


        vboxLayout2->addLayout(hboxLayout4);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(tab_physical);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        vboxLayout3 = new QVBoxLayout(groupBox_3);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        m_weightLabel = new QLabel(groupBox_3);
        m_weightLabel->setObjectName(QString::fromUtf8("m_weightLabel"));

        hboxLayout5->addWidget(m_weightLabel);

        m_weightSpin = new QDoubleSpinBox(groupBox_3);
        m_weightSpin->setObjectName(QString::fromUtf8("m_weightSpin"));
        m_weightSpin->setMaximum(999.99);

        hboxLayout5->addWidget(m_weightSpin);


        vboxLayout3->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        m_widthLabel = new QLabel(groupBox_3);
        m_widthLabel->setObjectName(QString::fromUtf8("m_widthLabel"));

        hboxLayout6->addWidget(m_widthLabel);

        m_widthSpin = new QSpinBox(groupBox_3);
        m_widthSpin->setObjectName(QString::fromUtf8("m_widthSpin"));
        m_widthSpin->setAccelerated(true);
        m_widthSpin->setMaximum(9999);

        hboxLayout6->addWidget(m_widthSpin);


        vboxLayout3->addLayout(hboxLayout6);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        m_heightLabel = new QLabel(groupBox_3);
        m_heightLabel->setObjectName(QString::fromUtf8("m_heightLabel"));

        hboxLayout7->addWidget(m_heightLabel);

        m_heightSpin = new QSpinBox(groupBox_3);
        m_heightSpin->setObjectName(QString::fromUtf8("m_heightSpin"));
        m_heightSpin->setAccelerated(true);
        m_heightSpin->setMaximum(9999);

        hboxLayout7->addWidget(m_heightSpin);


        vboxLayout3->addLayout(hboxLayout7);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        m_depthLabel = new QLabel(groupBox_3);
        m_depthLabel->setObjectName(QString::fromUtf8("m_depthLabel"));

        hboxLayout8->addWidget(m_depthLabel);

        m_depthSpin = new QSpinBox(groupBox_3);
        m_depthSpin->setObjectName(QString::fromUtf8("m_depthSpin"));
        m_depthSpin->setAccelerated(true);
        m_depthSpin->setMaximum(9999);

        hboxLayout8->addWidget(m_depthSpin);


        vboxLayout3->addLayout(hboxLayout8);


        gridLayout->addWidget(groupBox_3, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(tab_physical);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        vboxLayout4 = new QVBoxLayout(groupBox_2);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        m_lensNameLabel = new QLabel(groupBox_2);
        m_lensNameLabel->setObjectName(QString::fromUtf8("m_lensNameLabel"));

        hboxLayout9->addWidget(m_lensNameLabel);

        m_lensNameCombo = new QComboBox(groupBox_2);
        m_lensNameCombo->insertItems(0, QStringList()
         << QString::fromUtf8("Other")
         << QString::fromUtf8("PC")
         << QString::fromUtf8("Fresnel")
        );
        m_lensNameCombo->setObjectName(QString::fromUtf8("m_lensNameCombo"));
        m_lensNameCombo->setEditable(true);

        hboxLayout9->addWidget(m_lensNameCombo);


        vboxLayout4->addLayout(hboxLayout9);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        m_lensDegreesMinLabel = new QLabel(groupBox_2);
        m_lensDegreesMinLabel->setObjectName(QString::fromUtf8("m_lensDegreesMinLabel"));

        hboxLayout10->addWidget(m_lensDegreesMinLabel);

        m_lensDegreesMinSpin = new QSpinBox(groupBox_2);
        m_lensDegreesMinSpin->setObjectName(QString::fromUtf8("m_lensDegreesMinSpin"));
        m_lensDegreesMinSpin->setAccelerated(true);
        m_lensDegreesMinSpin->setMaximum(360);

        hboxLayout10->addWidget(m_lensDegreesMinSpin);


        vboxLayout4->addLayout(hboxLayout10);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        m_lensDegreesMaxLabel = new QLabel(groupBox_2);
        m_lensDegreesMaxLabel->setObjectName(QString::fromUtf8("m_lensDegreesMaxLabel"));

        hboxLayout11->addWidget(m_lensDegreesMaxLabel);

        m_lensDegreesMaxSpin = new QSpinBox(groupBox_2);
        m_lensDegreesMaxSpin->setObjectName(QString::fromUtf8("m_lensDegreesMaxSpin"));
        m_lensDegreesMaxSpin->setAccelerated(true);
        m_lensDegreesMaxSpin->setMaximum(360);

        hboxLayout11->addWidget(m_lensDegreesMaxSpin);


        vboxLayout4->addLayout(hboxLayout11);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(tab_physical);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        vboxLayout5 = new QVBoxLayout(groupBox_4);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        hboxLayout12 = new QHBoxLayout();
        hboxLayout12->setObjectName(QString::fromUtf8("hboxLayout12"));
        m_focusTypeLabel = new QLabel(groupBox_4);
        m_focusTypeLabel->setObjectName(QString::fromUtf8("m_focusTypeLabel"));

        hboxLayout12->addWidget(m_focusTypeLabel);

        m_focusTypeCombo = new QComboBox(groupBox_4);
        m_focusTypeCombo->insertItems(0, QStringList()
         << QString::fromUtf8("Fixed")
         << QString::fromUtf8("Head")
         << QString::fromUtf8("Mirror")
         << QString::fromUtf8("Barrel")
        );
        m_focusTypeCombo->setObjectName(QString::fromUtf8("m_focusTypeCombo"));
        m_focusTypeCombo->setEditable(true);

        hboxLayout12->addWidget(m_focusTypeCombo);


        vboxLayout5->addLayout(hboxLayout12);

        hboxLayout13 = new QHBoxLayout();
        hboxLayout13->setObjectName(QString::fromUtf8("hboxLayout13"));
        m_panMaxLabel = new QLabel(groupBox_4);
        m_panMaxLabel->setObjectName(QString::fromUtf8("m_panMaxLabel"));

        hboxLayout13->addWidget(m_panMaxLabel);

        m_panMaxSpin = new QSpinBox(groupBox_4);
        m_panMaxSpin->setObjectName(QString::fromUtf8("m_panMaxSpin"));
        m_panMaxSpin->setAccelerated(true);
        m_panMaxSpin->setMaximum(999);

        hboxLayout13->addWidget(m_panMaxSpin);


        vboxLayout5->addLayout(hboxLayout13);

        hboxLayout14 = new QHBoxLayout();
        hboxLayout14->setObjectName(QString::fromUtf8("hboxLayout14"));
        m_tiltMaxLabel = new QLabel(groupBox_4);
        m_tiltMaxLabel->setObjectName(QString::fromUtf8("m_tiltMaxLabel"));

        hboxLayout14->addWidget(m_tiltMaxLabel);

        m_tiltMaxSpin = new QSpinBox(groupBox_4);
        m_tiltMaxSpin->setObjectName(QString::fromUtf8("m_tiltMaxSpin"));
        m_tiltMaxSpin->setAccelerated(true);
        m_tiltMaxSpin->setMaximum(999);

        hboxLayout14->addWidget(m_tiltMaxSpin);


        vboxLayout5->addLayout(hboxLayout14);


        gridLayout->addWidget(groupBox_4, 1, 1, 1, 1);

        groupBox_5 = new QGroupBox(tab_physical);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout = new QVBoxLayout(groupBox_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hboxLayout15 = new QHBoxLayout();
        hboxLayout15->setObjectName(QString::fromUtf8("hboxLayout15"));
        m_powerConsumptionLabel = new QLabel(groupBox_5);
        m_powerConsumptionLabel->setObjectName(QString::fromUtf8("m_powerConsumptionLabel"));

        hboxLayout15->addWidget(m_powerConsumptionLabel);

        m_powerConsumptionSpin = new QSpinBox(groupBox_5);
        m_powerConsumptionSpin->setObjectName(QString::fromUtf8("m_powerConsumptionSpin"));
        m_powerConsumptionSpin->setAccelerated(true);
        m_powerConsumptionSpin->setMaximum(99999);

        hboxLayout15->addWidget(m_powerConsumptionSpin);


        verticalLayout->addLayout(hboxLayout15);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_dmxConnectorLabel = new QLabel(groupBox_5);
        m_dmxConnectorLabel->setObjectName(QString::fromUtf8("m_dmxConnectorLabel"));

        horizontalLayout->addWidget(m_dmxConnectorLabel);

        m_dmxConnectorCombo = new QComboBox(groupBox_5);
        m_dmxConnectorCombo->insertItems(0, QStringList()
         << QString::fromUtf8("5-pin")
         << QString::fromUtf8("3-pin")
         << QString::fromUtf8("3-pin and 5-pin")
        );
        m_dmxConnectorCombo->setObjectName(QString::fromUtf8("m_dmxConnectorCombo"));
        m_dmxConnectorCombo->setEditable(true);

        horizontalLayout->addWidget(m_dmxConnectorCombo);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(groupBox_5, 2, 0, 1, 1);

        m_tab->addTab(tab_physical, QString());

        vboxLayout->addWidget(m_tab);

        m_buttonBox = new QDialogButtonBox(EditMode);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_buttonBox);


        retranslateUi(EditMode);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), EditMode, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), EditMode, SLOT(reject()));

        m_tab->setCurrentIndex(0);
        m_bulbTypeCombo->setCurrentIndex(27);
        m_bulbTempCombo->setCurrentIndex(12);
        m_dmxConnectorCombo->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EditMode);
    } // setupUi

    void retranslateUi(QDialog *EditMode)
    {
        EditMode->setWindowTitle(QApplication::translate("EditMode", "Edit Mode", 0, QApplication::UnicodeUTF8));
        m_modeNameLabel->setText(QApplication::translate("EditMode", "Mode Name", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_channelList->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("EditMode", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("EditMode", "Number", 0, QApplication::UnicodeUTF8));
        m_tab->setTabText(m_tab->indexOf(tab_channels), QApplication::translate("EditMode", "Channels", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("EditMode", "Bulb", 0, QApplication::UnicodeUTF8));
        m_bulbTypeLabel->setText(QApplication::translate("EditMode", "Type", 0, QApplication::UnicodeUTF8));
        m_bulbLumensLabel->setText(QApplication::translate("EditMode", "Lumens", 0, QApplication::UnicodeUTF8));
        m_bulbTempLabel->setText(QApplication::translate("EditMode", "Color Temperature (K)", 0, QApplication::UnicodeUTF8));
        m_bulbTempCombo->clear();
        m_bulbTempCombo->insertItems(0, QStringList()
         << QApplication::translate("EditMode", "2000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditMode", "2800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditMode", "3200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditMode", "4000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditMode", "4500", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditMode", "5000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditMode", "5500", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditMode", "6000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditMode", "6500", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditMode", "7000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditMode", "7200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditMode", "8000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditMode", "8300", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditMode", "9000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditMode", "9300", 0, QApplication::UnicodeUTF8)
        );
        groupBox_3->setTitle(QApplication::translate("EditMode", "Dimensions", 0, QApplication::UnicodeUTF8));
        m_weightLabel->setText(QApplication::translate("EditMode", "Weight", 0, QApplication::UnicodeUTF8));
        m_weightSpin->setSuffix(QApplication::translate("EditMode", "kg", 0, QApplication::UnicodeUTF8));
        m_widthLabel->setText(QApplication::translate("EditMode", "Width", 0, QApplication::UnicodeUTF8));
        m_widthSpin->setSuffix(QApplication::translate("EditMode", "mm", 0, QApplication::UnicodeUTF8));
        m_heightLabel->setText(QApplication::translate("EditMode", "Height", 0, QApplication::UnicodeUTF8));
        m_heightSpin->setSuffix(QApplication::translate("EditMode", "mm", 0, QApplication::UnicodeUTF8));
        m_depthLabel->setText(QApplication::translate("EditMode", "Depth", 0, QApplication::UnicodeUTF8));
        m_depthSpin->setSuffix(QApplication::translate("EditMode", "mm", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("EditMode", "Lens", 0, QApplication::UnicodeUTF8));
        m_lensNameLabel->setText(QApplication::translate("EditMode", "Name", 0, QApplication::UnicodeUTF8));
        m_lensDegreesMinLabel->setText(QApplication::translate("EditMode", "Min Degrees", 0, QApplication::UnicodeUTF8));
        m_lensDegreesMaxLabel->setText(QApplication::translate("EditMode", "Max Degrees", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("EditMode", "Focus", 0, QApplication::UnicodeUTF8));
        m_focusTypeLabel->setText(QApplication::translate("EditMode", "Type", 0, QApplication::UnicodeUTF8));
        m_panMaxLabel->setText(QApplication::translate("EditMode", "Pan Max Degrees", 0, QApplication::UnicodeUTF8));
        m_tiltMaxLabel->setText(QApplication::translate("EditMode", "Tilt Max Degrees", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("EditMode", "Technical", 0, QApplication::UnicodeUTF8));
        m_powerConsumptionLabel->setText(QApplication::translate("EditMode", "Power Consumption", 0, QApplication::UnicodeUTF8));
        m_powerConsumptionSpin->setSuffix(QApplication::translate("EditMode", "W", 0, QApplication::UnicodeUTF8));
        m_dmxConnectorLabel->setText(QApplication::translate("EditMode", "DMX Connector", 0, QApplication::UnicodeUTF8));
        m_tab->setTabText(m_tab->indexOf(tab_physical), QApplication::translate("EditMode", "Physical", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditMode: public Ui_EditMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITMODE_H
