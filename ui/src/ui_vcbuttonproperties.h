/********************************************************************************
** Form generated from reading UI file 'vcbuttonproperties.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VCBUTTONPROPERTIES_H
#define UI_VCBUTTONPROPERTIES_H

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
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VCButtonProperties
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayoutGeneral;
    QLabel *m_nameLabel;
    QLineEdit *m_nameEdit;
    QLabel *m_functionLabel;
    QLineEdit *m_functionEdit;
    QToolButton *m_attachFunction;
    QToolButton *m_detachFunction;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout;
    QLineEdit *m_keyEdit;
    QToolButton *m_attachKey;
    QToolButton *m_detachKey;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayoutExternalInput;
    QLabel *label_4;
    QLineEdit *m_inputUniverseEdit;
    QLabel *label_5;
    QLineEdit *m_inputChannelEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_chooseInputButton;
    QPushButton *m_autoDetectInputButton;
    QGroupBox *groupBox_4;
    QVBoxLayout *vboxLayout;
    QRadioButton *m_toggle;
    QRadioButton *m_flash;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *VCButtonProperties)
    {
        if (VCButtonProperties->objectName().isEmpty())
            VCButtonProperties->setObjectName(QString::fromUtf8("VCButtonProperties"));
        VCButtonProperties->resize(397, 490);
        verticalLayout = new QVBoxLayout(VCButtonProperties);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(VCButtonProperties);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayoutGeneral = new QGridLayout(groupBox);
        gridLayoutGeneral->setObjectName(QString::fromUtf8("gridLayoutGeneral"));
        m_nameLabel = new QLabel(groupBox);
        m_nameLabel->setObjectName(QString::fromUtf8("m_nameLabel"));

        gridLayoutGeneral->addWidget(m_nameLabel, 0, 0, 1, 1);

        m_nameEdit = new QLineEdit(groupBox);
        m_nameEdit->setObjectName(QString::fromUtf8("m_nameEdit"));

        gridLayoutGeneral->addWidget(m_nameEdit, 0, 1, 1, 3);

        m_functionLabel = new QLabel(groupBox);
        m_functionLabel->setObjectName(QString::fromUtf8("m_functionLabel"));

        gridLayoutGeneral->addWidget(m_functionLabel, 1, 0, 1, 1);

        m_functionEdit = new QLineEdit(groupBox);
        m_functionEdit->setObjectName(QString::fromUtf8("m_functionEdit"));
        m_functionEdit->setReadOnly(true);

        gridLayoutGeneral->addWidget(m_functionEdit, 1, 1, 1, 1);

        m_attachFunction = new QToolButton(groupBox);
        m_attachFunction->setObjectName(QString::fromUtf8("m_attachFunction"));
        m_attachFunction->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/attach.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_attachFunction->setIcon(icon);
        m_attachFunction->setIconSize(QSize(26, 26));

        gridLayoutGeneral->addWidget(m_attachFunction, 1, 2, 1, 1);

        m_detachFunction = new QToolButton(groupBox);
        m_detachFunction->setObjectName(QString::fromUtf8("m_detachFunction"));
        m_detachFunction->setText(QString::fromUtf8("..."));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/detach.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_detachFunction->setIcon(icon1);
        m_detachFunction->setIconSize(QSize(26, 26));

        gridLayoutGeneral->addWidget(m_detachFunction, 1, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(VCButtonProperties);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        hboxLayout = new QHBoxLayout(groupBox_2);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_keyEdit = new QLineEdit(groupBox_2);
        m_keyEdit->setObjectName(QString::fromUtf8("m_keyEdit"));
        m_keyEdit->setReadOnly(true);

        hboxLayout->addWidget(m_keyEdit);

        m_attachKey = new QToolButton(groupBox_2);
        m_attachKey->setObjectName(QString::fromUtf8("m_attachKey"));
        m_attachKey->setText(QString::fromUtf8("..."));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/key_bindings.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_attachKey->setIcon(icon2);
        m_attachKey->setIconSize(QSize(26, 26));

        hboxLayout->addWidget(m_attachKey);

        m_detachKey = new QToolButton(groupBox_2);
        m_detachKey->setObjectName(QString::fromUtf8("m_detachKey"));
        m_detachKey->setText(QString::fromUtf8("..."));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/fileclose.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_detachKey->setIcon(icon3);
        m_detachKey->setIconSize(QSize(26, 26));

        hboxLayout->addWidget(m_detachKey);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(VCButtonProperties);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayoutExternalInput = new QGridLayout(groupBox_3);
        gridLayoutExternalInput->setObjectName(QString::fromUtf8("gridLayoutExternalInput"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayoutExternalInput->addWidget(label_4, 0, 0, 1, 1);

        m_inputUniverseEdit = new QLineEdit(groupBox_3);
        m_inputUniverseEdit->setObjectName(QString::fromUtf8("m_inputUniverseEdit"));
        m_inputUniverseEdit->setReadOnly(true);

        gridLayoutExternalInput->addWidget(m_inputUniverseEdit, 0, 1, 1, 3);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayoutExternalInput->addWidget(label_5, 1, 0, 1, 1);

        m_inputChannelEdit = new QLineEdit(groupBox_3);
        m_inputChannelEdit->setObjectName(QString::fromUtf8("m_inputChannelEdit"));
        m_inputChannelEdit->setReadOnly(true);

        gridLayoutExternalInput->addWidget(m_inputChannelEdit, 1, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(268, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayoutExternalInput->addItem(horizontalSpacer, 2, 0, 1, 2);

        m_chooseInputButton = new QPushButton(groupBox_3);
        m_chooseInputButton->setObjectName(QString::fromUtf8("m_chooseInputButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_chooseInputButton->sizePolicy().hasHeightForWidth());
        m_chooseInputButton->setSizePolicy(sizePolicy);

        gridLayoutExternalInput->addWidget(m_chooseInputButton, 2, 3, 1, 1);

        m_autoDetectInputButton = new QPushButton(groupBox_3);
        m_autoDetectInputButton->setObjectName(QString::fromUtf8("m_autoDetectInputButton"));
        m_autoDetectInputButton->setCheckable(true);
        m_autoDetectInputButton->setChecked(false);
        m_autoDetectInputButton->setFlat(false);

        gridLayoutExternalInput->addWidget(m_autoDetectInputButton, 2, 2, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(VCButtonProperties);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        vboxLayout = new QVBoxLayout(groupBox_4);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_toggle = new QRadioButton(groupBox_4);
        m_toggle->setObjectName(QString::fromUtf8("m_toggle"));
        m_toggle->setChecked(true);

        vboxLayout->addWidget(m_toggle);

        m_flash = new QRadioButton(groupBox_4);
        m_flash->setObjectName(QString::fromUtf8("m_flash"));

        vboxLayout->addWidget(m_flash);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);


        verticalLayout->addWidget(groupBox_4);

        m_buttonBox = new QDialogButtonBox(VCButtonProperties);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(m_buttonBox);

        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        m_buttonBox->raise();
        groupBox_4->raise();

        retranslateUi(VCButtonProperties);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), VCButtonProperties, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), VCButtonProperties, SLOT(reject()));

        QMetaObject::connectSlotsByName(VCButtonProperties);
    } // setupUi

    void retranslateUi(QDialog *VCButtonProperties)
    {
        VCButtonProperties->setWindowTitle(QApplication::translate("VCButtonProperties", "Button properties", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("VCButtonProperties", "General", 0, QApplication::UnicodeUTF8));
        m_nameLabel->setText(QApplication::translate("VCButtonProperties", "Button label", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_nameEdit->setToolTip(QApplication::translate("VCButtonProperties", "Text to display on the button", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_functionLabel->setText(QApplication::translate("VCButtonProperties", "Function", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_functionEdit->setToolTip(QApplication::translate("VCButtonProperties", "The function that this button controls", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_attachFunction->setToolTip(QApplication::translate("VCButtonProperties", "Attach a function to this button", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_detachFunction->setToolTip(QApplication::translate("VCButtonProperties", "Detach the button's function attachment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("VCButtonProperties", "Key combination", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_keyEdit->setToolTip(QApplication::translate("VCButtonProperties", "Keyboard combination that toggles this button", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_attachKey->setToolTip(QApplication::translate("VCButtonProperties", "Set a key combination for this button", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_detachKey->setToolTip(QApplication::translate("VCButtonProperties", "Remove the button's keyboard shortcut key", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("VCButtonProperties", "External Input", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("VCButtonProperties", "Input Universe", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_inputUniverseEdit->setToolTip(QApplication::translate("VCButtonProperties", "The input universe that sends data to this widget", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("VCButtonProperties", "Input Channel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_inputChannelEdit->setToolTip(QApplication::translate("VCButtonProperties", "The particular input channel within the input universe that sends data to this widget", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_chooseInputButton->setToolTip(QApplication::translate("VCButtonProperties", "Choose an external input universe & channel that this button should listen to.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_chooseInputButton->setText(QApplication::translate("VCButtonProperties", "Choose...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_autoDetectInputButton->setToolTip(QApplication::translate("VCButtonProperties", "When toggled, you can click an external button to assign it to this virtual console button.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_autoDetectInputButton->setText(QApplication::translate("VCButtonProperties", "Auto Detect", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("VCButtonProperties", "On button press...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_toggle->setToolTip(QApplication::translate("VCButtonProperties", "Toggle the assigned function on/off with this button", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_toggle->setText(QApplication::translate("VCButtonProperties", "Toggle function on/off", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_flash->setToolTip(QApplication::translate("VCButtonProperties", "Flash the assigned function with this button", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_flash->setText(QApplication::translate("VCButtonProperties", "Flash function (only for scenes)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VCButtonProperties: public Ui_VCButtonProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCBUTTONPROPERTIES_H
