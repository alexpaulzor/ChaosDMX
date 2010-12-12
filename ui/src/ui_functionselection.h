/********************************************************************************
** Form generated from reading UI file 'functionselection.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONSELECTION_H
#define UI_FUNCTIONSELECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FunctionSelection
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *m_tree;
    QGroupBox *m_filterGroup;
    QHBoxLayout *horizontalLayout;
    QCheckBox *m_sceneCheck;
    QCheckBox *m_chaserCheck;
    QCheckBox *m_efxCheck;
    QCheckBox *m_collectionCheck;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *FunctionSelection)
    {
        if (FunctionSelection->objectName().isEmpty())
            FunctionSelection->setObjectName(QString::fromUtf8("FunctionSelection"));
        FunctionSelection->resize(528, 399);
        vboxLayout = new QVBoxLayout(FunctionSelection);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_tree = new QTreeWidget(FunctionSelection);
        m_tree->setObjectName(QString::fromUtf8("m_tree"));
        m_tree->setAlternatingRowColors(true);
        m_tree->setRootIsDecorated(false);
        m_tree->setItemsExpandable(false);
        m_tree->setSortingEnabled(true);
        m_tree->setAllColumnsShowFocus(true);

        vboxLayout->addWidget(m_tree);

        m_filterGroup = new QGroupBox(FunctionSelection);
        m_filterGroup->setObjectName(QString::fromUtf8("m_filterGroup"));
        horizontalLayout = new QHBoxLayout(m_filterGroup);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_sceneCheck = new QCheckBox(m_filterGroup);
        m_sceneCheck->setObjectName(QString::fromUtf8("m_sceneCheck"));

        horizontalLayout->addWidget(m_sceneCheck);

        m_chaserCheck = new QCheckBox(m_filterGroup);
        m_chaserCheck->setObjectName(QString::fromUtf8("m_chaserCheck"));

        horizontalLayout->addWidget(m_chaserCheck);

        m_efxCheck = new QCheckBox(m_filterGroup);
        m_efxCheck->setObjectName(QString::fromUtf8("m_efxCheck"));

        horizontalLayout->addWidget(m_efxCheck);

        m_collectionCheck = new QCheckBox(m_filterGroup);
        m_collectionCheck->setObjectName(QString::fromUtf8("m_collectionCheck"));

        horizontalLayout->addWidget(m_collectionCheck);


        vboxLayout->addWidget(m_filterGroup);

        m_buttonBox = new QDialogButtonBox(FunctionSelection);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_buttonBox);


        retranslateUi(FunctionSelection);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), FunctionSelection, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), FunctionSelection, SLOT(reject()));

        QMetaObject::connectSlotsByName(FunctionSelection);
    } // setupUi

    void retranslateUi(QDialog *FunctionSelection)
    {
        FunctionSelection->setWindowTitle(QApplication::translate("FunctionSelection", "Select Function", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_tree->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("FunctionSelection", "Type", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("FunctionSelection", "Name", 0, QApplication::UnicodeUTF8));
        m_filterGroup->setTitle(QApplication::translate("FunctionSelection", "Filter", 0, QApplication::UnicodeUTF8));
        m_sceneCheck->setText(QApplication::translate("FunctionSelection", "Scenes", 0, QApplication::UnicodeUTF8));
        m_chaserCheck->setText(QApplication::translate("FunctionSelection", "Chasers", 0, QApplication::UnicodeUTF8));
        m_efxCheck->setText(QApplication::translate("FunctionSelection", "EFX's", 0, QApplication::UnicodeUTF8));
        m_collectionCheck->setText(QApplication::translate("FunctionSelection", "Collections", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FunctionSelection: public Ui_FunctionSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONSELECTION_H
