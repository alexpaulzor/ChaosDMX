/********************************************************************************
** Form generated from reading UI file 'sceneeditor.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENEEDITOR_H
#define UI_SCENEEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SceneEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *m_tab;
    QWidget *General;
    QGridLayout *gridLayout;
    QLabel *m_nameLabel;
    QLineEdit *m_nameEdit;
    QTreeWidget *m_tree;
    QToolButton *m_addFixtureButton;
    QToolButton *m_removeFixtureButton;
    QSpacerItem *verticalSpacer;
    QPushButton *m_enableChannelsButton;
    QPushButton *m_disableChannelsButton;
    QSpacerItem *horizontalSpacer;
    QLabel *m_busLabel;
    QComboBox *m_busCombo;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *SceneEditor)
    {
        if (SceneEditor->objectName().isEmpty())
            SceneEditor->setObjectName(QString::fromUtf8("SceneEditor"));
        SceneEditor->resize(555, 385);
        verticalLayout_2 = new QVBoxLayout(SceneEditor);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_tab = new QTabWidget(SceneEditor);
        m_tab->setObjectName(QString::fromUtf8("m_tab"));
        General = new QWidget();
        General->setObjectName(QString::fromUtf8("General"));
        gridLayout = new QGridLayout(General);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_nameLabel = new QLabel(General);
        m_nameLabel->setObjectName(QString::fromUtf8("m_nameLabel"));

        gridLayout->addWidget(m_nameLabel, 0, 0, 1, 1);

        m_nameEdit = new QLineEdit(General);
        m_nameEdit->setObjectName(QString::fromUtf8("m_nameEdit"));

        gridLayout->addWidget(m_nameEdit, 0, 1, 1, 6);

        m_tree = new QTreeWidget(General);
        m_tree->setObjectName(QString::fromUtf8("m_tree"));
        m_tree->setAlternatingRowColors(true);
        m_tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        m_tree->setRootIsDecorated(false);
        m_tree->setItemsExpandable(false);
        m_tree->setSortingEnabled(false);
        m_tree->setAllColumnsShowFocus(true);

        gridLayout->addWidget(m_tree, 1, 0, 3, 6);

        m_addFixtureButton = new QToolButton(General);
        m_addFixtureButton->setObjectName(QString::fromUtf8("m_addFixtureButton"));
        m_addFixtureButton->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_addFixtureButton->setIcon(icon);
        m_addFixtureButton->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_addFixtureButton, 1, 6, 1, 1);

        m_removeFixtureButton = new QToolButton(General);
        m_removeFixtureButton->setObjectName(QString::fromUtf8("m_removeFixtureButton"));
        m_removeFixtureButton->setText(QString::fromUtf8("..."));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_removeFixtureButton->setIcon(icon1);
        m_removeFixtureButton->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_removeFixtureButton, 2, 6, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 6, 2, 1);

        m_enableChannelsButton = new QPushButton(General);
        m_enableChannelsButton->setObjectName(QString::fromUtf8("m_enableChannelsButton"));

        gridLayout->addWidget(m_enableChannelsButton, 4, 0, 1, 2);

        m_disableChannelsButton = new QPushButton(General);
        m_disableChannelsButton->setObjectName(QString::fromUtf8("m_disableChannelsButton"));

        gridLayout->addWidget(m_disableChannelsButton, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(299, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 3, 1, 1);

        m_busLabel = new QLabel(General);
        m_busLabel->setObjectName(QString::fromUtf8("m_busLabel"));

        gridLayout->addWidget(m_busLabel, 4, 4, 1, 1);

        m_busCombo = new QComboBox(General);
        m_busCombo->setObjectName(QString::fromUtf8("m_busCombo"));

        gridLayout->addWidget(m_busCombo, 4, 5, 1, 1);

        m_tab->addTab(General, QString());

        verticalLayout_2->addWidget(m_tab);

        m_buttonBox = new QDialogButtonBox(SceneEditor);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(m_buttonBox);


        retranslateUi(SceneEditor);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), SceneEditor, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), SceneEditor, SLOT(reject()));
        QObject::connect(m_enableChannelsButton, SIGNAL(clicked()), SceneEditor, SLOT(slotEnableAll()));
        QObject::connect(m_disableChannelsButton, SIGNAL(clicked()), SceneEditor, SLOT(slotDisableAll()));

        m_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SceneEditor);
    } // setupUi

    void retranslateUi(QDialog *SceneEditor)
    {
        SceneEditor->setWindowTitle(QApplication::translate("SceneEditor", "Scene editor", 0, QApplication::UnicodeUTF8));
        m_nameLabel->setText(QApplication::translate("SceneEditor", "Scene name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_nameEdit->setToolTip(QApplication::translate("SceneEditor", "Name of this scene", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = m_tree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("SceneEditor", "Fixtures used in this scene", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_addFixtureButton->setToolTip(QApplication::translate("SceneEditor", "Add a new fixture to this scene", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_removeFixtureButton->setToolTip(QApplication::translate("SceneEditor", "Remove the selected fixture(s) from this scene", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_enableChannelsButton->setToolTip(QApplication::translate("SceneEditor", "Enable all fixtures' channels", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_enableChannelsButton->setText(QApplication::translate("SceneEditor", "Enable all", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_disableChannelsButton->setToolTip(QApplication::translate("SceneEditor", "Disable all fixtures' channels", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_disableChannelsButton->setText(QApplication::translate("SceneEditor", "Disable all", 0, QApplication::UnicodeUTF8));
        m_busLabel->setText(QApplication::translate("SceneEditor", "Speed bus", 0, QApplication::UnicodeUTF8));
        m_tab->setTabText(m_tab->indexOf(General), QApplication::translate("SceneEditor", "General", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SceneEditor: public Ui_SceneEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENEEDITOR_H
