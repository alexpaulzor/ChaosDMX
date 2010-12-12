/********************************************************************************
** Form generated from reading UI file 'addvcbuttonmatrix.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVCBUTTONMATRIX_H
#define UI_ADDVCBUTTONMATRIX_H

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
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_AddVCButtonMatrix
{
public:
    QGridLayout *gridLayout_2;
    QTreeWidget *m_tree;
    QToolButton *m_addButton;
    QToolButton *m_removeButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *m_dimensionsGroup;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *m_horizontalSpin;
    QLabel *label_3;
    QSpinBox *m_sizeSpin;
    QLabel *label_2;
    QSpinBox *m_verticalSpin;
    QLabel *label_4;
    QLineEdit *m_allocationEdit;
    QGroupBox *m_frameGroup;
    QHBoxLayout *horizontalLayout;
    QRadioButton *m_frameNormalRadio;
    QRadioButton *m_frameSoloRadio;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *AddVCButtonMatrix)
    {
        if (AddVCButtonMatrix->objectName().isEmpty())
            AddVCButtonMatrix->setObjectName(QString::fromUtf8("AddVCButtonMatrix"));
        AddVCButtonMatrix->resize(409, 415);
        gridLayout_2 = new QGridLayout(AddVCButtonMatrix);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_tree = new QTreeWidget(AddVCButtonMatrix);
        m_tree->setObjectName(QString::fromUtf8("m_tree"));

        gridLayout_2->addWidget(m_tree, 0, 0, 3, 1);

        m_addButton = new QToolButton(AddVCButtonMatrix);
        m_addButton->setObjectName(QString::fromUtf8("m_addButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_addButton->setIcon(icon);
        m_addButton->setIconSize(QSize(26, 26));

        gridLayout_2->addWidget(m_addButton, 0, 1, 1, 1);

        m_removeButton = new QToolButton(AddVCButtonMatrix);
        m_removeButton->setObjectName(QString::fromUtf8("m_removeButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_removeButton->setIcon(icon1);
        m_removeButton->setIconSize(QSize(26, 26));

        gridLayout_2->addWidget(m_removeButton, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 174, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 3, 1);

        m_dimensionsGroup = new QGroupBox(AddVCButtonMatrix);
        m_dimensionsGroup->setObjectName(QString::fromUtf8("m_dimensionsGroup"));
        gridLayout = new QGridLayout(m_dimensionsGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(m_dimensionsGroup);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_horizontalSpin = new QSpinBox(m_dimensionsGroup);
        m_horizontalSpin->setObjectName(QString::fromUtf8("m_horizontalSpin"));
        m_horizontalSpin->setMinimum(1);
        m_horizontalSpin->setValue(1);

        gridLayout->addWidget(m_horizontalSpin, 0, 1, 1, 1);

        label_3 = new QLabel(m_dimensionsGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        m_sizeSpin = new QSpinBox(m_dimensionsGroup);
        m_sizeSpin->setObjectName(QString::fromUtf8("m_sizeSpin"));
        m_sizeSpin->setMinimum(20);
        m_sizeSpin->setValue(60);

        gridLayout->addWidget(m_sizeSpin, 0, 3, 1, 1);

        label_2 = new QLabel(m_dimensionsGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_verticalSpin = new QSpinBox(m_dimensionsGroup);
        m_verticalSpin->setObjectName(QString::fromUtf8("m_verticalSpin"));
        m_verticalSpin->setMinimum(1);

        gridLayout->addWidget(m_verticalSpin, 1, 1, 1, 1);

        label_4 = new QLabel(m_dimensionsGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        m_allocationEdit = new QLineEdit(m_dimensionsGroup);
        m_allocationEdit->setObjectName(QString::fromUtf8("m_allocationEdit"));
        m_allocationEdit->setReadOnly(true);

        gridLayout->addWidget(m_allocationEdit, 1, 3, 1, 1);


        gridLayout_2->addWidget(m_dimensionsGroup, 3, 0, 1, 1);

        m_frameGroup = new QGroupBox(AddVCButtonMatrix);
        m_frameGroup->setObjectName(QString::fromUtf8("m_frameGroup"));
        horizontalLayout = new QHBoxLayout(m_frameGroup);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_frameNormalRadio = new QRadioButton(m_frameGroup);
        m_frameNormalRadio->setObjectName(QString::fromUtf8("m_frameNormalRadio"));

        horizontalLayout->addWidget(m_frameNormalRadio);

        m_frameSoloRadio = new QRadioButton(m_frameGroup);
        m_frameSoloRadio->setObjectName(QString::fromUtf8("m_frameSoloRadio"));

        horizontalLayout->addWidget(m_frameSoloRadio);


        gridLayout_2->addWidget(m_frameGroup, 4, 0, 1, 1);

        m_buttonBox = new QDialogButtonBox(AddVCButtonMatrix);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(m_buttonBox, 5, 0, 1, 2);


        retranslateUi(AddVCButtonMatrix);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), AddVCButtonMatrix, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), AddVCButtonMatrix, SLOT(reject()));
        QObject::connect(m_addButton, SIGNAL(clicked()), AddVCButtonMatrix, SLOT(slotAddClicked()));
        QObject::connect(m_removeButton, SIGNAL(clicked()), AddVCButtonMatrix, SLOT(slotRemoveClicked()));
        QObject::connect(m_horizontalSpin, SIGNAL(valueChanged(int)), AddVCButtonMatrix, SLOT(slotHorizontalChanged()));
        QObject::connect(m_verticalSpin, SIGNAL(valueChanged(int)), AddVCButtonMatrix, SLOT(slotVerticalChanged()));
        QObject::connect(m_sizeSpin, SIGNAL(valueChanged(int)), AddVCButtonMatrix, SLOT(slotButtonSizeChanged()));
        QObject::connect(m_frameNormalRadio, SIGNAL(toggled(bool)), AddVCButtonMatrix, SLOT(slotNormalFrameToggled(bool)));

        QMetaObject::connectSlotsByName(AddVCButtonMatrix);
    } // setupUi

    void retranslateUi(QDialog *AddVCButtonMatrix)
    {
        AddVCButtonMatrix->setWindowTitle(QApplication::translate("AddVCButtonMatrix", "Add Button Matrix", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_tree->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("AddVCButtonMatrix", "Type", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("AddVCButtonMatrix", "Function", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_addButton->setToolTip(QApplication::translate("AddVCButtonMatrix", "Add functions to be attached to the buttons in the matrix", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_addButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_removeButton->setToolTip(QApplication::translate("AddVCButtonMatrix", "Remove selected functions from the list of functions to attach", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_removeButton->setText(QString());
        m_dimensionsGroup->setTitle(QApplication::translate("AddVCButtonMatrix", "Dimensions", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddVCButtonMatrix", "Horizontal button count", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_horizontalSpin->setToolTip(QApplication::translate("AddVCButtonMatrix", "Number of buttons per horizontal row", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("AddVCButtonMatrix", "Button size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_sizeSpin->setToolTip(QApplication::translate("AddVCButtonMatrix", "Created buttons' size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_sizeSpin->setSuffix(QApplication::translate("AddVCButtonMatrix", " px", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddVCButtonMatrix", "Vertical button count", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_verticalSpin->setToolTip(QApplication::translate("AddVCButtonMatrix", "Number of buttons per vertical column", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("AddVCButtonMatrix", "Allocation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_allocationEdit->setToolTip(QApplication::translate("AddVCButtonMatrix", "Functions / Buttons", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_frameGroup->setTitle(QApplication::translate("AddVCButtonMatrix", "Frame", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_frameNormalRadio->setToolTip(QApplication::translate("AddVCButtonMatrix", "Place the buttons inside a normal frame", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_frameNormalRadio->setText(QApplication::translate("AddVCButtonMatrix", "Normal", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_frameSoloRadio->setToolTip(QApplication::translate("AddVCButtonMatrix", "Place the buttons inside a frame that ensures that only one of them is pressed at a time", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_frameSoloRadio->setText(QApplication::translate("AddVCButtonMatrix", "Solo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddVCButtonMatrix: public Ui_AddVCButtonMatrix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVCBUTTONMATRIX_H
