/********************************************************************************
** Form generated from reading UI file 'inputprofileeditor.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTPROFILEEDITOR_H
#define UI_INPUTPROFILEEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputProfileEditor
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *m_tab;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *m_manufacturerLabel;
    QLineEdit *m_manufacturerEdit;
    QLabel *m_modelLabel;
    QLineEdit *m_modelEdit;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QTreeWidget *m_tree;
    QToolButton *m_addButton;
    QToolButton *m_removeButton;
    QToolButton *m_editButton;
    QToolButton *m_wizardButton;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *InputProfileEditor)
    {
        if (InputProfileEditor->objectName().isEmpty())
            InputProfileEditor->setObjectName(QString::fromUtf8("InputProfileEditor"));
        InputProfileEditor->resize(472, 375);
        verticalLayout = new QVBoxLayout(InputProfileEditor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_tab = new QTabWidget(InputProfileEditor);
        m_tab->setObjectName(QString::fromUtf8("m_tab"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_manufacturerLabel = new QLabel(tab);
        m_manufacturerLabel->setObjectName(QString::fromUtf8("m_manufacturerLabel"));

        gridLayout->addWidget(m_manufacturerLabel, 0, 0, 1, 1);

        m_manufacturerEdit = new QLineEdit(tab);
        m_manufacturerEdit->setObjectName(QString::fromUtf8("m_manufacturerEdit"));

        gridLayout->addWidget(m_manufacturerEdit, 0, 1, 1, 1);

        m_modelLabel = new QLabel(tab);
        m_modelLabel->setObjectName(QString::fromUtf8("m_modelLabel"));

        gridLayout->addWidget(m_modelLabel, 1, 0, 1, 1);

        m_modelEdit = new QLineEdit(tab);
        m_modelEdit->setObjectName(QString::fromUtf8("m_modelEdit"));

        gridLayout->addWidget(m_modelEdit, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        m_tab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_tree = new QTreeWidget(tab_2);
        m_tree->setObjectName(QString::fromUtf8("m_tree"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_tree->sizePolicy().hasHeightForWidth());
        m_tree->setSizePolicy(sizePolicy);
        m_tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        m_tree->setRootIsDecorated(false);
        m_tree->setItemsExpandable(false);
        m_tree->setAllColumnsShowFocus(true);

        gridLayout_2->addWidget(m_tree, 0, 0, 6, 1);

        m_addButton = new QToolButton(tab_2);
        m_addButton->setObjectName(QString::fromUtf8("m_addButton"));
        m_addButton->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_addButton->setIcon(icon);
        m_addButton->setIconSize(QSize(26, 26));

        gridLayout_2->addWidget(m_addButton, 0, 1, 1, 1);

        m_removeButton = new QToolButton(tab_2);
        m_removeButton->setObjectName(QString::fromUtf8("m_removeButton"));
        m_removeButton->setText(QString::fromUtf8("..."));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_removeButton->setIcon(icon1);
        m_removeButton->setIconSize(QSize(26, 26));

        gridLayout_2->addWidget(m_removeButton, 1, 1, 1, 1);

        m_editButton = new QToolButton(tab_2);
        m_editButton->setObjectName(QString::fromUtf8("m_editButton"));
        m_editButton->setText(QString::fromUtf8("..."));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_editButton->setIcon(icon2);
        m_editButton->setIconSize(QSize(26, 26));

        gridLayout_2->addWidget(m_editButton, 2, 1, 1, 1);

        m_wizardButton = new QToolButton(tab_2);
        m_wizardButton->setObjectName(QString::fromUtf8("m_wizardButton"));
        m_wizardButton->setText(QString::fromUtf8("..."));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/wizard.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_wizardButton->setIcon(icon3);
        m_wizardButton->setIconSize(QSize(26, 26));
        m_wizardButton->setCheckable(true);

        gridLayout_2->addWidget(m_wizardButton, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(22, 131, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 1, 1, 1);

        line = new QFrame(tab_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 3, 1, 1, 1);

        m_tab->addTab(tab_2, QString());

        verticalLayout->addWidget(m_tab);

        m_buttonBox = new QDialogButtonBox(InputProfileEditor);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(m_buttonBox);


        retranslateUi(InputProfileEditor);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), InputProfileEditor, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), InputProfileEditor, SLOT(reject()));

        m_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InputProfileEditor);
    } // setupUi

    void retranslateUi(QDialog *InputProfileEditor)
    {
        InputProfileEditor->setWindowTitle(QApplication::translate("InputProfileEditor", "Input Profile Editor", 0, QApplication::UnicodeUTF8));
        m_manufacturerLabel->setText(QApplication::translate("InputProfileEditor", "Manufacturer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_manufacturerEdit->setToolTip(QApplication::translate("InputProfileEditor", "The name of the company that made the device", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_manufacturerEdit->setText(QString());
        m_modelLabel->setText(QApplication::translate("InputProfileEditor", "Model", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_modelEdit->setToolTip(QApplication::translate("InputProfileEditor", "The device's model name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_tab->setTabText(m_tab->indexOf(tab), QApplication::translate("InputProfileEditor", "General", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_tree->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("InputProfileEditor", "Type", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("InputProfileEditor", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("InputProfileEditor", "Channel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_addButton->setToolTip(QApplication::translate("InputProfileEditor", "Add a new channel description", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_removeButton->setToolTip(QApplication::translate("InputProfileEditor", "Remove the selected channels", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_editButton->setToolTip(QApplication::translate("InputProfileEditor", "Edit the selected channel", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_wizardButton->setToolTip(QApplication::translate("InputProfileEditor", "Automatically add channels to the list when you wiggle the device's controls", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_tab->setTabText(m_tab->indexOf(tab_2), QApplication::translate("InputProfileEditor", "Channels", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InputProfileEditor: public Ui_InputProfileEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTPROFILEEDITOR_H
