/********************************************************************************
** Form generated from reading UI file 'vcxypadproperties.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VCXYPADPROPERTIES_H
#define UI_VCXYPADPROPERTIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VCXYPadProperties
{
public:
    QGridLayout *gridLayout;
    QLabel *m_nameLabel;
    QLineEdit *m_nameEdit;
    QTreeWidget *m_tree;
    QVBoxLayout *verticalLayout;
    QToolButton *m_addButton;
    QToolButton *m_removeButton;
    QToolButton *m_editButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *VCXYPadProperties)
    {
        if (VCXYPadProperties->objectName().isEmpty())
            VCXYPadProperties->setObjectName(QString::fromUtf8("VCXYPadProperties"));
        VCXYPadProperties->resize(444, 317);
        gridLayout = new QGridLayout(VCXYPadProperties);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_nameLabel = new QLabel(VCXYPadProperties);
        m_nameLabel->setObjectName(QString::fromUtf8("m_nameLabel"));

        gridLayout->addWidget(m_nameLabel, 0, 0, 1, 1);

        m_nameEdit = new QLineEdit(VCXYPadProperties);
        m_nameEdit->setObjectName(QString::fromUtf8("m_nameEdit"));

        gridLayout->addWidget(m_nameEdit, 0, 1, 1, 1);

        m_tree = new QTreeWidget(VCXYPadProperties);
        m_tree->setObjectName(QString::fromUtf8("m_tree"));
        m_tree->setProperty("showDropIndicator", QVariant(false));
        m_tree->setAlternatingRowColors(true);
        m_tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        m_tree->setRootIsDecorated(false);
        m_tree->setItemsExpandable(false);
        m_tree->setAllColumnsShowFocus(true);
        m_tree->setExpandsOnDoubleClick(false);

        gridLayout->addWidget(m_tree, 1, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_addButton = new QToolButton(VCXYPadProperties);
        m_addButton->setObjectName(QString::fromUtf8("m_addButton"));
        m_addButton->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_addButton->setIcon(icon);
        m_addButton->setIconSize(QSize(26, 26));

        verticalLayout->addWidget(m_addButton);

        m_removeButton = new QToolButton(VCXYPadProperties);
        m_removeButton->setObjectName(QString::fromUtf8("m_removeButton"));
        m_removeButton->setText(QString::fromUtf8("..."));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_removeButton->setIcon(icon1);
        m_removeButton->setIconSize(QSize(26, 26));

        verticalLayout->addWidget(m_removeButton);

        m_editButton = new QToolButton(VCXYPadProperties);
        m_editButton->setObjectName(QString::fromUtf8("m_editButton"));
        m_editButton->setText(QString::fromUtf8("..."));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_editButton->setIcon(icon2);
        m_editButton->setIconSize(QSize(26, 26));

        verticalLayout->addWidget(m_editButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 1, 2, 1, 1);

        m_buttonBox = new QDialogButtonBox(VCXYPadProperties);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(m_buttonBox, 2, 0, 1, 3);


        retranslateUi(VCXYPadProperties);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), VCXYPadProperties, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), VCXYPadProperties, SLOT(reject()));
        QObject::connect(m_addButton, SIGNAL(clicked()), VCXYPadProperties, SLOT(slotAddClicked()));
        QObject::connect(m_removeButton, SIGNAL(clicked()), VCXYPadProperties, SLOT(slotRemoveClicked()));
        QObject::connect(m_editButton, SIGNAL(clicked()), VCXYPadProperties, SLOT(slotEditClicked()));
        QObject::connect(m_tree, SIGNAL(currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)), VCXYPadProperties, SLOT(slotSelectionChanged(QTreeWidgetItem*)));

        QMetaObject::connectSlotsByName(VCXYPadProperties);
    } // setupUi

    void retranslateUi(QDialog *VCXYPadProperties)
    {
        VCXYPadProperties->setWindowTitle(QApplication::translate("VCXYPadProperties", "XY Pad Properties", 0, QApplication::UnicodeUTF8));
        m_nameLabel->setText(QApplication::translate("VCXYPadProperties", "XY Pad Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_nameEdit->setToolTip(QApplication::translate("VCXYPadProperties", "The name of this XY Pad", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = m_tree->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("VCXYPadProperties", "Y-Axis", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("VCXYPadProperties", "X-Axis", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("VCXYPadProperties", "Fixture", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_tree->setToolTip(QApplication::translate("VCXYPadProperties", "List of fixtures that are controlled by this pad", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_addButton->setToolTip(QApplication::translate("VCXYPadProperties", "Add fixture(s) to the pad", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_removeButton->setToolTip(QApplication::translate("VCXYPadProperties", "Remove selected fixture(s) from the pad", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_editButton->setToolTip(QApplication::translate("VCXYPadProperties", "Edit the selected fixture's axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class VCXYPadProperties: public Ui_VCXYPadProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCXYPADPROPERTIES_H
