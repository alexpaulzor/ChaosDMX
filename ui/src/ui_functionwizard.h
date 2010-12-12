/********************************************************************************
** Form generated from reading UI file 'functionwizard.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONWIZARD_H
#define UI_FUNCTIONWIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_FunctionWizard
{
public:
    QGridLayout *gridLayout_2;
    QTreeWidget *m_fixtureTree;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *m_coloursCheck;
    QCheckBox *m_goboCheck;
    QCheckBox *m_shutterCheck;
    QDialogButtonBox *m_buttonBox;
    QToolButton *m_addButton;
    QToolButton *m_removeButton;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *m_intensityCheck;

    void setupUi(QDialog *FunctionWizard)
    {
        if (FunctionWizard->objectName().isEmpty())
            FunctionWizard->setObjectName(QString::fromUtf8("FunctionWizard"));
        FunctionWizard->resize(481, 338);
        gridLayout_2 = new QGridLayout(FunctionWizard);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_fixtureTree = new QTreeWidget(FunctionWizard);
        m_fixtureTree->setObjectName(QString::fromUtf8("m_fixtureTree"));
        m_fixtureTree->setAlternatingRowColors(true);
        m_fixtureTree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        m_fixtureTree->setRootIsDecorated(false);
        m_fixtureTree->setItemsExpandable(false);
        m_fixtureTree->setSortingEnabled(true);
        m_fixtureTree->setAllColumnsShowFocus(true);
        m_fixtureTree->setExpandsOnDoubleClick(false);

        gridLayout_2->addWidget(m_fixtureTree, 0, 0, 3, 1);

        verticalSpacer = new QSpacerItem(20, 237, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 3, 1);

        groupBox = new QGroupBox(FunctionWizard);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_coloursCheck = new QCheckBox(groupBox);
        m_coloursCheck->setObjectName(QString::fromUtf8("m_coloursCheck"));
        m_coloursCheck->setChecked(true);

        gridLayout->addWidget(m_coloursCheck, 0, 0, 1, 1);

        m_goboCheck = new QCheckBox(groupBox);
        m_goboCheck->setObjectName(QString::fromUtf8("m_goboCheck"));
        m_goboCheck->setChecked(true);

        gridLayout->addWidget(m_goboCheck, 0, 1, 1, 1);

        m_shutterCheck = new QCheckBox(groupBox);
        m_shutterCheck->setObjectName(QString::fromUtf8("m_shutterCheck"));
        m_shutterCheck->setChecked(true);

        gridLayout->addWidget(m_shutterCheck, 0, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 3, 0, 1, 1);

        m_buttonBox = new QDialogButtonBox(FunctionWizard);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(m_buttonBox, 5, 0, 1, 2);

        m_addButton = new QToolButton(FunctionWizard);
        m_addButton->setObjectName(QString::fromUtf8("m_addButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_addButton->setIcon(icon);
        m_addButton->setIconSize(QSize(26, 26));

        gridLayout_2->addWidget(m_addButton, 0, 1, 1, 1);

        m_removeButton = new QToolButton(FunctionWizard);
        m_removeButton->setObjectName(QString::fromUtf8("m_removeButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_removeButton->setIcon(icon1);
        m_removeButton->setIconSize(QSize(26, 26));

        gridLayout_2->addWidget(m_removeButton, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(FunctionWizard);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_intensityCheck = new QCheckBox(groupBox_2);
        m_intensityCheck->setObjectName(QString::fromUtf8("m_intensityCheck"));
        m_intensityCheck->setChecked(true);

        horizontalLayout->addWidget(m_intensityCheck);


        gridLayout_2->addWidget(groupBox_2, 4, 0, 1, 1);


        retranslateUi(FunctionWizard);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), FunctionWizard, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), FunctionWizard, SLOT(reject()));
        QObject::connect(m_addButton, SIGNAL(clicked()), FunctionWizard, SLOT(slotAddClicked()));
        QObject::connect(m_removeButton, SIGNAL(clicked()), FunctionWizard, SLOT(slotRemoveClicked()));

        QMetaObject::connectSlotsByName(FunctionWizard);
    } // setupUi

    void retranslateUi(QDialog *FunctionWizard)
    {
        FunctionWizard->setWindowTitle(QApplication::translate("FunctionWizard", "Function Wizard", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_fixtureTree->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("FunctionWizard", "Supported capabilities", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("FunctionWizard", "Fixtures", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_fixtureTree->setToolTip(QApplication::translate("FunctionWizard", "Fixtures that will be included in automatic function creation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("FunctionWizard", "Scenes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_coloursCheck->setToolTip(QApplication::translate("FunctionWizard", "Colour wheel presets", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_coloursCheck->setText(QApplication::translate("FunctionWizard", "Colours", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_goboCheck->setToolTip(QApplication::translate("FunctionWizard", "Gobo wheel presets", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_goboCheck->setText(QApplication::translate("FunctionWizard", "Gobos", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_shutterCheck->setToolTip(QApplication::translate("FunctionWizard", "Strobe, open, closed...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_shutterCheck->setText(QApplication::translate("FunctionWizard", "Shutter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_addButton->setToolTip(QApplication::translate("FunctionWizard", "Select fixtures that will be included in the automatically created functions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_addButton->setText(QApplication::translate("FunctionWizard", "Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_removeButton->setToolTip(QApplication::translate("FunctionWizard", "Don't include selected fixtures in the created functions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_removeButton->setText(QApplication::translate("FunctionWizard", "Remove", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("FunctionWizard", "Chasers", 0, QApplication::UnicodeUTF8));
        m_intensityCheck->setText(QApplication::translate("FunctionWizard", "Intensity", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FunctionWizard: public Ui_FunctionWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONWIZARD_H
