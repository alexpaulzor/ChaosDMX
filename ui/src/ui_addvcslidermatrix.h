/********************************************************************************
** Form generated from reading UI file 'addvcslidermatrix.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVCSLIDERMATRIX_H
#define UI_ADDVCSLIDERMATRIX_H

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
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddVCSliderMatrix
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *m_amountLabel;
    QSpinBox *m_amountSpin;
    QLabel *m_heightLabel;
    QSpinBox *m_heightSpin;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddVCSliderMatrix)
    {
        if (AddVCSliderMatrix->objectName().isEmpty())
            AddVCSliderMatrix->setObjectName(QString::fromUtf8("AddVCSliderMatrix"));
        AddVCSliderMatrix->resize(270, 159);
        verticalLayout = new QVBoxLayout(AddVCSliderMatrix);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(AddVCSliderMatrix);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_amountLabel = new QLabel(groupBox);
        m_amountLabel->setObjectName(QString::fromUtf8("m_amountLabel"));

        gridLayout->addWidget(m_amountLabel, 0, 0, 1, 1);

        m_amountSpin = new QSpinBox(groupBox);
        m_amountSpin->setObjectName(QString::fromUtf8("m_amountSpin"));
        m_amountSpin->setMinimum(1);

        gridLayout->addWidget(m_amountSpin, 0, 1, 1, 1);

        m_heightLabel = new QLabel(groupBox);
        m_heightLabel->setObjectName(QString::fromUtf8("m_heightLabel"));

        gridLayout->addWidget(m_heightLabel, 1, 0, 1, 1);

        m_heightSpin = new QSpinBox(groupBox);
        m_heightSpin->setObjectName(QString::fromUtf8("m_heightSpin"));
        m_heightSpin->setMinimum(200);
        m_heightSpin->setMaximum(9999);

        gridLayout->addWidget(m_heightSpin, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(AddVCSliderMatrix);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddVCSliderMatrix);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddVCSliderMatrix, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddVCSliderMatrix, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddVCSliderMatrix);
    } // setupUi

    void retranslateUi(QDialog *AddVCSliderMatrix)
    {
        AddVCSliderMatrix->setWindowTitle(QApplication::translate("AddVCSliderMatrix", "Add Slider Matrix", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("AddVCSliderMatrix", "Sliders", 0, QApplication::UnicodeUTF8));
        m_amountLabel->setText(QApplication::translate("AddVCSliderMatrix", "Amount", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_amountSpin->setToolTip(QApplication::translate("AddVCSliderMatrix", "Number of sliders to create", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_heightLabel->setText(QApplication::translate("AddVCSliderMatrix", "Height", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_heightSpin->setToolTip(QApplication::translate("AddVCSliderMatrix", "Vertical height of each slider", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_heightSpin->setSuffix(QApplication::translate("AddVCSliderMatrix", "px", 0, QApplication::UnicodeUTF8));
        m_heightSpin->setPrefix(QString());
    } // retranslateUi

};

namespace Ui {
    class AddVCSliderMatrix: public Ui_AddVCSliderMatrix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVCSLIDERMATRIX_H
