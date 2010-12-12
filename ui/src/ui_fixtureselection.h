/********************************************************************************
** Form generated from reading UI file 'fixtureselection.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIXTURESELECTION_H
#define UI_FIXTURESELECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FixtureSelection
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *m_tree;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *FixtureSelection)
    {
        if (FixtureSelection->objectName().isEmpty())
            FixtureSelection->setObjectName(QString::fromUtf8("FixtureSelection"));
        FixtureSelection->resize(453, 345);
        vboxLayout = new QVBoxLayout(FixtureSelection);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_tree = new QTreeWidget(FixtureSelection);
        m_tree->setObjectName(QString::fromUtf8("m_tree"));
        m_tree->setAlternatingRowColors(true);
        m_tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        m_tree->setRootIsDecorated(false);
        m_tree->setItemsExpandable(false);
        m_tree->setSortingEnabled(true);
        m_tree->setAllColumnsShowFocus(true);

        vboxLayout->addWidget(m_tree);

        m_buttonBox = new QDialogButtonBox(FixtureSelection);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_buttonBox);


        retranslateUi(FixtureSelection);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), FixtureSelection, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), FixtureSelection, SLOT(reject()));

        QMetaObject::connectSlotsByName(FixtureSelection);
    } // setupUi

    void retranslateUi(QDialog *FixtureSelection)
    {
        FixtureSelection->setWindowTitle(QApplication::translate("FixtureSelection", "Select fixture", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_tree->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("FixtureSelection", "Model", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("FixtureSelection", "Manufacturer", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("FixtureSelection", "Name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FixtureSelection: public Ui_FixtureSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIXTURESELECTION_H
