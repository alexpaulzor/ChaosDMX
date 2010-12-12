/********************************************************************************
** Form generated from reading UI file 'capabilitywizard.ui'
**
** Created: Sun Dec 12 05:59:00 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPABILITYWIZARD_H
#define UI_CAPABILITYWIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CapabilityWizard
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *m_startSpin;
    QLabel *label_2;
    QSpinBox *m_gapSpin;
    QLabel *label_3;
    QSpinBox *m_amountSpin;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *m_nameEdit;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QListWidget *m_list;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CapabilityWizard)
    {
        if (CapabilityWizard->objectName().isEmpty())
            CapabilityWizard->setObjectName(QString::fromUtf8("CapabilityWizard"));
        CapabilityWizard->resize(404, 406);
        verticalLayout_3 = new QVBoxLayout(CapabilityWizard);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(CapabilityWizard);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        m_startSpin = new QSpinBox(groupBox);
        m_startSpin->setObjectName(QString::fromUtf8("m_startSpin"));
        m_startSpin->setMaximum(255);

        horizontalLayout->addWidget(m_startSpin);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        m_gapSpin = new QSpinBox(groupBox);
        m_gapSpin->setObjectName(QString::fromUtf8("m_gapSpin"));
        m_gapSpin->setMinimum(0);
        m_gapSpin->setMaximum(255);
        m_gapSpin->setValue(0);

        horizontalLayout->addWidget(m_gapSpin);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        m_amountSpin = new QSpinBox(groupBox);
        m_amountSpin->setObjectName(QString::fromUtf8("m_amountSpin"));
        m_amountSpin->setMinimum(1);
        m_amountSpin->setMaximum(255);

        horizontalLayout->addWidget(m_amountSpin);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(CapabilityWizard);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_nameEdit = new QLineEdit(groupBox_2);
        m_nameEdit->setObjectName(QString::fromUtf8("m_nameEdit"));

        verticalLayout->addWidget(m_nameEdit);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(CapabilityWizard);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_list = new QListWidget(groupBox_3);
        m_list->setObjectName(QString::fromUtf8("m_list"));

        verticalLayout_2->addWidget(m_list);


        verticalLayout_3->addWidget(groupBox_3);

        buttonBox = new QDialogButtonBox(CapabilityWizard);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(CapabilityWizard);
        QObject::connect(buttonBox, SIGNAL(accepted()), CapabilityWizard, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CapabilityWizard, SLOT(reject()));
        QObject::connect(m_startSpin, SIGNAL(valueChanged(int)), CapabilityWizard, SLOT(slotCreateCapabilities()));
        QObject::connect(m_gapSpin, SIGNAL(valueChanged(int)), CapabilityWizard, SLOT(slotCreateCapabilities()));
        QObject::connect(m_amountSpin, SIGNAL(valueChanged(int)), CapabilityWizard, SLOT(slotCreateCapabilities()));
        QObject::connect(m_nameEdit, SIGNAL(textEdited(QString)), CapabilityWizard, SLOT(slotCreateCapabilities()));

        QMetaObject::connectSlotsByName(CapabilityWizard);
    } // setupUi

    void retranslateUi(QDialog *CapabilityWizard)
    {
        CapabilityWizard->setWindowTitle(QApplication::translate("CapabilityWizard", "Capability Wizard", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CapabilityWizard", "Values", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CapabilityWizard", "Start", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_startSpin->setToolTip(QApplication::translate("CapabilityWizard", "The starting DMX value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("CapabilityWizard", "Gap", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_gapSpin->setToolTip(QApplication::translate("CapabilityWizard", "Number of values per capability", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("CapabilityWizard", "Amount", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_amountSpin->setToolTip(QApplication::translate("CapabilityWizard", "Number of capabilities to create", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("CapabilityWizard", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_nameEdit->setToolTip(QApplication::translate("CapabilityWizard", "The common base name for all capabilities. Use hash '#' to create a running number.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_nameEdit->setText(QApplication::translate("CapabilityWizard", "Capability #", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("CapabilityWizard", "Sample", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_list->setToolTip(QApplication::translate("CapabilityWizard", "A list of capabilities that would be created with these settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class CapabilityWizard: public Ui_CapabilityWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPABILITYWIZARD_H
