/********************************************************************************
** Form generated from reading UI file 'inputchanneleditor.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTCHANNELEDITOR_H
#define UI_INPUTCHANNELEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
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

class Ui_InputChannelEditor
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *m_numberSpin;
    QLineEdit *m_nameEdit;
    QComboBox *m_typeCombo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InputChannelEditor)
    {
        if (InputChannelEditor->objectName().isEmpty())
            InputChannelEditor->setObjectName(QString::fromUtf8("InputChannelEditor"));
        InputChannelEditor->resize(432, 139);
        verticalLayout = new QVBoxLayout(InputChannelEditor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(InputChannelEditor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        m_numberSpin = new QSpinBox(groupBox);
        m_numberSpin->setObjectName(QString::fromUtf8("m_numberSpin"));
        m_numberSpin->setMinimum(1);
        m_numberSpin->setMaximum(512);

        gridLayout->addWidget(m_numberSpin, 1, 0, 1, 1);

        m_nameEdit = new QLineEdit(groupBox);
        m_nameEdit->setObjectName(QString::fromUtf8("m_nameEdit"));

        gridLayout->addWidget(m_nameEdit, 1, 1, 1, 1);

        m_typeCombo = new QComboBox(groupBox);
        m_typeCombo->setObjectName(QString::fromUtf8("m_typeCombo"));

        gridLayout->addWidget(m_typeCombo, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(InputChannelEditor);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(InputChannelEditor);
        QObject::connect(buttonBox, SIGNAL(accepted()), InputChannelEditor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InputChannelEditor, SLOT(reject()));

        QMetaObject::connectSlotsByName(InputChannelEditor);
    } // setupUi

    void retranslateUi(QDialog *InputChannelEditor)
    {
        InputChannelEditor->setWindowTitle(QApplication::translate("InputChannelEditor", "Input Channel Editor", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("InputChannelEditor", "Input Channel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("InputChannelEditor", "Number", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("InputChannelEditor", "Name", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("InputChannelEditor", "Type", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InputChannelEditor: public Ui_InputChannelEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTCHANNELEDITOR_H
