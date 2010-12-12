/********************************************************************************
** Form generated from reading UI file 'collectioneditor.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLECTIONEDITOR_H
#define UI_COLLECTIONEDITOR_H

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

QT_BEGIN_NAMESPACE

class Ui_CollectionEditor
{
public:
    QGridLayout *gridLayout;
    QLabel *m_nameLabel;
    QLineEdit *m_nameEdit;
    QTreeWidget *m_tree;
    QToolButton *m_add;
    QToolButton *m_remove;
    QSpacerItem *spacerItem;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *CollectionEditor)
    {
        if (CollectionEditor->objectName().isEmpty())
            CollectionEditor->setObjectName(QString::fromUtf8("CollectionEditor"));
        CollectionEditor->resize(449, 351);
        gridLayout = new QGridLayout(CollectionEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_nameLabel = new QLabel(CollectionEditor);
        m_nameLabel->setObjectName(QString::fromUtf8("m_nameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_nameLabel->sizePolicy().hasHeightForWidth());
        m_nameLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_nameLabel, 0, 0, 1, 1);

        m_nameEdit = new QLineEdit(CollectionEditor);
        m_nameEdit->setObjectName(QString::fromUtf8("m_nameEdit"));

        gridLayout->addWidget(m_nameEdit, 0, 1, 1, 2);

        m_tree = new QTreeWidget(CollectionEditor);
        m_tree->setObjectName(QString::fromUtf8("m_tree"));
        m_tree->setRootIsDecorated(false);
        m_tree->setItemsExpandable(false);
        m_tree->setSortingEnabled(true);
        m_tree->setAllColumnsShowFocus(true);

        gridLayout->addWidget(m_tree, 1, 0, 3, 2);

        m_add = new QToolButton(CollectionEditor);
        m_add->setObjectName(QString::fromUtf8("m_add"));
        m_add->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_add->setIcon(icon);
        m_add->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_add, 1, 2, 1, 1);

        m_remove = new QToolButton(CollectionEditor);
        m_remove->setObjectName(QString::fromUtf8("m_remove"));
        m_remove->setText(QString::fromUtf8("..."));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_remove->setIcon(icon1);
        m_remove->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_remove, 2, 2, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 2, 1, 1);

        m_buttonBox = new QDialogButtonBox(CollectionEditor);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(m_buttonBox, 4, 0, 1, 3);


        retranslateUi(CollectionEditor);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), CollectionEditor, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), CollectionEditor, SLOT(reject()));

        QMetaObject::connectSlotsByName(CollectionEditor);
    } // setupUi

    void retranslateUi(QDialog *CollectionEditor)
    {
        CollectionEditor->setWindowTitle(QApplication::translate("CollectionEditor", "Collection editor", 0, QApplication::UnicodeUTF8));
        m_nameLabel->setText(QApplication::translate("CollectionEditor", "Collection name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_nameEdit->setToolTip(QApplication::translate("CollectionEditor", "Name of the function being edited", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = m_tree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("CollectionEditor", "Function", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_add->setToolTip(QApplication::translate("CollectionEditor", "Add function(s) to the collection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_remove->setToolTip(QApplication::translate("CollectionEditor", "Remove the selected function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class CollectionEditor: public Ui_CollectionEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLECTIONEDITOR_H
