/********************************************************************************
** Form generated from reading UI file 'editcapability.ui'
**
** Created: Sun Dec 12 05:59:00 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCAPABILITY_H
#define UI_EDITCAPABILITY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditCapability
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *m_valueGroup;
    QGridLayout *gridLayout;
    QLabel *m_minLabel;
    QLabel *m_maxLabel;
    QLabel *m_descriptionLabel;
    QSpinBox *m_minSpin;
    QSpinBox *m_maxSpin;
    QLineEdit *m_descriptionEdit;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *EditCapability)
    {
        if (EditCapability->objectName().isEmpty())
            EditCapability->setObjectName(QString::fromUtf8("EditCapability"));
        EditCapability->resize(418, 142);
        vboxLayout = new QVBoxLayout(EditCapability);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_valueGroup = new QGroupBox(EditCapability);
        m_valueGroup->setObjectName(QString::fromUtf8("m_valueGroup"));
        gridLayout = new QGridLayout(m_valueGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_minLabel = new QLabel(m_valueGroup);
        m_minLabel->setObjectName(QString::fromUtf8("m_minLabel"));

        gridLayout->addWidget(m_minLabel, 0, 0, 1, 1);

        m_maxLabel = new QLabel(m_valueGroup);
        m_maxLabel->setObjectName(QString::fromUtf8("m_maxLabel"));

        gridLayout->addWidget(m_maxLabel, 0, 1, 1, 1);

        m_descriptionLabel = new QLabel(m_valueGroup);
        m_descriptionLabel->setObjectName(QString::fromUtf8("m_descriptionLabel"));

        gridLayout->addWidget(m_descriptionLabel, 0, 2, 1, 1);

        m_minSpin = new QSpinBox(m_valueGroup);
        m_minSpin->setObjectName(QString::fromUtf8("m_minSpin"));
        m_minSpin->setAccelerated(true);
        m_minSpin->setMaximum(255);

        gridLayout->addWidget(m_minSpin, 1, 0, 1, 1);

        m_maxSpin = new QSpinBox(m_valueGroup);
        m_maxSpin->setObjectName(QString::fromUtf8("m_maxSpin"));
        m_maxSpin->setAccelerated(true);
        m_maxSpin->setMaximum(255);

        gridLayout->addWidget(m_maxSpin, 1, 1, 1, 1);

        m_descriptionEdit = new QLineEdit(m_valueGroup);
        m_descriptionEdit->setObjectName(QString::fromUtf8("m_descriptionEdit"));

        gridLayout->addWidget(m_descriptionEdit, 1, 2, 1, 1);


        vboxLayout->addWidget(m_valueGroup);

        m_buttonBox = new QDialogButtonBox(EditCapability);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_buttonBox);


        retranslateUi(EditCapability);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), EditCapability, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), EditCapability, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditCapability);
    } // setupUi

    void retranslateUi(QDialog *EditCapability)
    {
        EditCapability->setWindowTitle(QApplication::translate("EditCapability", "Edit Capability", 0, QApplication::UnicodeUTF8));
        m_valueGroup->setTitle(QApplication::translate("EditCapability", "Capability Values", 0, QApplication::UnicodeUTF8));
        m_minLabel->setText(QApplication::translate("EditCapability", "Min", 0, QApplication::UnicodeUTF8));
        m_maxLabel->setText(QApplication::translate("EditCapability", "Max", 0, QApplication::UnicodeUTF8));
        m_descriptionLabel->setText(QApplication::translate("EditCapability", "Description", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditCapability: public Ui_EditCapability {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCAPABILITY_H
