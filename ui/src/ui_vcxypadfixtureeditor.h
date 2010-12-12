/********************************************************************************
** Form generated from reading UI file 'vcxypadfixtureeditor.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VCXYPADFIXTUREEDITOR_H
#define UI_VCXYPADFIXTUREEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_VCXYPadFixtureEditor
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *m_xGroup;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpinBox *m_xMin;
    QLabel *label_2;
    QSpinBox *m_xMax;
    QCheckBox *m_xReverse;
    QGroupBox *m_yGroup;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpinBox *m_yMin;
    QLabel *label_4;
    QSpinBox *m_yMax;
    QCheckBox *m_yReverse;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *VCXYPadFixtureEditor)
    {
        if (VCXYPadFixtureEditor->objectName().isEmpty())
            VCXYPadFixtureEditor->setObjectName(QString::fromUtf8("VCXYPadFixtureEditor"));
        VCXYPadFixtureEditor->resize(347, 190);
        gridLayout_3 = new QGridLayout(VCXYPadFixtureEditor);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        m_xGroup = new QGroupBox(VCXYPadFixtureEditor);
        m_xGroup->setObjectName(QString::fromUtf8("m_xGroup"));
        gridLayout_2 = new QGridLayout(m_xGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(m_xGroup);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        m_xMin = new QSpinBox(m_xGroup);
        m_xMin->setObjectName(QString::fromUtf8("m_xMin"));
        m_xMin->setMaximum(99);

        gridLayout_2->addWidget(m_xMin, 0, 1, 1, 1);

        label_2 = new QLabel(m_xGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        m_xMax = new QSpinBox(m_xGroup);
        m_xMax->setObjectName(QString::fromUtf8("m_xMax"));
        m_xMax->setMinimum(1);
        m_xMax->setMaximum(100);
        m_xMax->setValue(100);

        gridLayout_2->addWidget(m_xMax, 1, 1, 1, 1);

        m_xReverse = new QCheckBox(m_xGroup);
        m_xReverse->setObjectName(QString::fromUtf8("m_xReverse"));

        gridLayout_2->addWidget(m_xReverse, 2, 0, 1, 2);


        gridLayout_3->addWidget(m_xGroup, 0, 0, 1, 1);

        m_yGroup = new QGroupBox(VCXYPadFixtureEditor);
        m_yGroup->setObjectName(QString::fromUtf8("m_yGroup"));
        gridLayout = new QGridLayout(m_yGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(m_yGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        m_yMin = new QSpinBox(m_yGroup);
        m_yMin->setObjectName(QString::fromUtf8("m_yMin"));
        m_yMin->setMaximum(99);

        gridLayout->addWidget(m_yMin, 0, 1, 1, 1);

        label_4 = new QLabel(m_yGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        m_yMax = new QSpinBox(m_yGroup);
        m_yMax->setObjectName(QString::fromUtf8("m_yMax"));
        m_yMax->setMinimum(1);
        m_yMax->setMaximum(100);
        m_yMax->setValue(100);

        gridLayout->addWidget(m_yMax, 1, 1, 1, 1);

        m_yReverse = new QCheckBox(m_yGroup);
        m_yReverse->setObjectName(QString::fromUtf8("m_yReverse"));

        gridLayout->addWidget(m_yReverse, 2, 0, 1, 2);


        gridLayout_3->addWidget(m_yGroup, 0, 1, 1, 1);

        m_buttonBox = new QDialogButtonBox(VCXYPadFixtureEditor);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(m_buttonBox, 1, 0, 1, 2);


        retranslateUi(VCXYPadFixtureEditor);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), VCXYPadFixtureEditor, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), VCXYPadFixtureEditor, SLOT(reject()));
        QObject::connect(m_xMin, SIGNAL(valueChanged(int)), VCXYPadFixtureEditor, SLOT(slotXMinChanged(int)));
        QObject::connect(m_xMax, SIGNAL(valueChanged(int)), VCXYPadFixtureEditor, SLOT(slotXMaxChanged(int)));
        QObject::connect(m_yMin, SIGNAL(valueChanged(int)), VCXYPadFixtureEditor, SLOT(slotYMinChanged(int)));
        QObject::connect(m_yMax, SIGNAL(valueChanged(int)), VCXYPadFixtureEditor, SLOT(slotYMaxChanged(int)));

        QMetaObject::connectSlotsByName(VCXYPadFixtureEditor);
    } // setupUi

    void retranslateUi(QDialog *VCXYPadFixtureEditor)
    {
        VCXYPadFixtureEditor->setWindowTitle(QApplication::translate("VCXYPadFixtureEditor", "XY Pad Fixture", 0, QApplication::UnicodeUTF8));
        m_xGroup->setTitle(QApplication::translate("VCXYPadFixtureEditor", "Horizontal X-Axis", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VCXYPadFixtureEditor", "Minimum", 0, QApplication::UnicodeUTF8));
        m_xMin->setSuffix(QApplication::translate("VCXYPadFixtureEditor", "%", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("VCXYPadFixtureEditor", "Maximum", 0, QApplication::UnicodeUTF8));
        m_xMax->setSuffix(QApplication::translate("VCXYPadFixtureEditor", "%", 0, QApplication::UnicodeUTF8));
        m_xReverse->setText(QApplication::translate("VCXYPadFixtureEditor", "Reverse", 0, QApplication::UnicodeUTF8));
        m_yGroup->setTitle(QApplication::translate("VCXYPadFixtureEditor", "Vertical Y-Axis", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("VCXYPadFixtureEditor", "Minimum", 0, QApplication::UnicodeUTF8));
        m_yMin->setSuffix(QApplication::translate("VCXYPadFixtureEditor", "%", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("VCXYPadFixtureEditor", "Maximum", 0, QApplication::UnicodeUTF8));
        m_yMax->setSuffix(QApplication::translate("VCXYPadFixtureEditor", "%", 0, QApplication::UnicodeUTF8));
        m_yReverse->setText(QApplication::translate("VCXYPadFixtureEditor", "Reverse", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VCXYPadFixtureEditor: public Ui_VCXYPadFixtureEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCXYPADFIXTUREEDITOR_H
