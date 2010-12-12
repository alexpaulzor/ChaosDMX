/********************************************************************************
** Form generated from reading UI file 'inputpatcheditor.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTPATCHEDITOR_H
#define UI_INPUTPATCHEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputPatchEditor
{
public:
    QGridLayout *gridLayout_3;
    QTabWidget *m_tab;
    QWidget *Mapping;
    QGridLayout *gridLayout_2;
    QTreeWidget *m_mapTree;
    QTextBrowser *m_infoBrowser;
    QToolButton *m_configureButton;
    QSpacerItem *verticalSpacer;
    QCheckBox *m_feedbackEnabledCheck;
    QToolButton *m_reconnectButton;
    QWidget *Profile;
    QGridLayout *gridLayout;
    QTreeWidget *m_profileTree;
    QToolButton *m_addProfileButton;
    QToolButton *m_removeProfileButton;
    QToolButton *m_editProfileButton;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *m_buttonBox;
    QRadioButton *m_editorUniverseRadio;

    void setupUi(QDialog *InputPatchEditor)
    {
        if (InputPatchEditor->objectName().isEmpty())
            InputPatchEditor->setObjectName(QString::fromUtf8("InputPatchEditor"));
        InputPatchEditor->resize(434, 464);
        gridLayout_3 = new QGridLayout(InputPatchEditor);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        m_tab = new QTabWidget(InputPatchEditor);
        m_tab->setObjectName(QString::fromUtf8("m_tab"));
        Mapping = new QWidget();
        Mapping->setObjectName(QString::fromUtf8("Mapping"));
        gridLayout_2 = new QGridLayout(Mapping);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_mapTree = new QTreeWidget(Mapping);
        m_mapTree->setObjectName(QString::fromUtf8("m_mapTree"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_mapTree->sizePolicy().hasHeightForWidth());
        m_mapTree->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(m_mapTree, 0, 0, 1, 2);

        m_infoBrowser = new QTextBrowser(Mapping);
        m_infoBrowser->setObjectName(QString::fromUtf8("m_infoBrowser"));
        sizePolicy.setHeightForWidth(m_infoBrowser->sizePolicy().hasHeightForWidth());
        m_infoBrowser->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(m_infoBrowser, 1, 0, 3, 1);

        m_configureButton = new QToolButton(Mapping);
        m_configureButton->setObjectName(QString::fromUtf8("m_configureButton"));
        m_configureButton->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_configureButton->setIcon(icon);
        m_configureButton->setIconSize(QSize(26, 26));

        gridLayout_2->addWidget(m_configureButton, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 109, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 1);

        m_feedbackEnabledCheck = new QCheckBox(Mapping);
        m_feedbackEnabledCheck->setObjectName(QString::fromUtf8("m_feedbackEnabledCheck"));

        gridLayout_2->addWidget(m_feedbackEnabledCheck, 4, 0, 1, 1);

        m_reconnectButton = new QToolButton(Mapping);
        m_reconnectButton->setObjectName(QString::fromUtf8("m_reconnectButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/detach.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_reconnectButton->setIcon(icon1);
        m_reconnectButton->setIconSize(QSize(26, 26));

        gridLayout_2->addWidget(m_reconnectButton, 2, 1, 1, 1);

        m_tab->addTab(Mapping, QString());
        Profile = new QWidget();
        Profile->setObjectName(QString::fromUtf8("Profile"));
        gridLayout = new QGridLayout(Profile);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_profileTree = new QTreeWidget(Profile);
        m_profileTree->setObjectName(QString::fromUtf8("m_profileTree"));
        m_profileTree->setRootIsDecorated(false);
        m_profileTree->setItemsExpandable(false);
        m_profileTree->setAllColumnsShowFocus(true);

        gridLayout->addWidget(m_profileTree, 0, 0, 4, 1);

        m_addProfileButton = new QToolButton(Profile);
        m_addProfileButton->setObjectName(QString::fromUtf8("m_addProfileButton"));
        m_addProfileButton->setText(QString::fromUtf8("..."));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_addProfileButton->setIcon(icon2);
        m_addProfileButton->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_addProfileButton, 0, 1, 1, 1);

        m_removeProfileButton = new QToolButton(Profile);
        m_removeProfileButton->setObjectName(QString::fromUtf8("m_removeProfileButton"));
        m_removeProfileButton->setText(QString::fromUtf8("..."));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_removeProfileButton->setIcon(icon3);
        m_removeProfileButton->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_removeProfileButton, 1, 1, 1, 1);

        m_editProfileButton = new QToolButton(Profile);
        m_editProfileButton->setObjectName(QString::fromUtf8("m_editProfileButton"));
        m_editProfileButton->setText(QString::fromUtf8("..."));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_editProfileButton->setIcon(icon4);
        m_editProfileButton->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_editProfileButton, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 170, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        m_tab->addTab(Profile, QString());

        gridLayout_3->addWidget(m_tab, 0, 0, 1, 2);

        m_buttonBox = new QDialogButtonBox(InputPatchEditor);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(m_buttonBox, 1, 1, 1, 1);

        m_editorUniverseRadio = new QRadioButton(InputPatchEditor);
        m_editorUniverseRadio->setObjectName(QString::fromUtf8("m_editorUniverseRadio"));

        gridLayout_3->addWidget(m_editorUniverseRadio, 1, 0, 1, 1);


        retranslateUi(InputPatchEditor);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), InputPatchEditor, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), InputPatchEditor, SLOT(reject()));
        QObject::connect(m_mapTree, SIGNAL(doubleClicked(QModelIndex)), InputPatchEditor, SLOT(accept()));
        QObject::connect(m_feedbackEnabledCheck, SIGNAL(toggled(bool)), InputPatchEditor, SLOT(slotFeedbackToggled(bool)));

        m_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InputPatchEditor);
    } // setupUi

    void retranslateUi(QDialog *InputPatchEditor)
    {
        InputPatchEditor->setWindowTitle(QApplication::translate("InputPatchEditor", "Input patch editor", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_mapTree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("InputPatchEditor", "Inputs", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_feedbackEnabledCheck->setToolTip(QApplication::translate("InputPatchEditor", "Send feedback data to the input universe for moving e.g. motorized sliders.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_feedbackEnabledCheck->setText(QApplication::translate("InputPatchEditor", "Feedback enabled", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_reconnectButton->setToolTip(QApplication::translate("InputPatchEditor", "Attempt to re-connect the current plugin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_reconnectButton->setText(QApplication::translate("InputPatchEditor", "...", 0, QApplication::UnicodeUTF8));
        m_tab->setTabText(m_tab->indexOf(Mapping), QApplication::translate("InputPatchEditor", "Mapping", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = m_profileTree->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("InputPatchEditor", "Profile", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_addProfileButton->setToolTip(QApplication::translate("InputPatchEditor", "Create a new input profile", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_removeProfileButton->setToolTip(QApplication::translate("InputPatchEditor", "Delete the selected input profile", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_editProfileButton->setToolTip(QApplication::translate("InputPatchEditor", "Edit the selected input profile", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_tab->setTabText(m_tab->indexOf(Profile), QApplication::translate("InputPatchEditor", "Profile", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_editorUniverseRadio->setToolTip(QApplication::translate("InputPatchEditor", "Use this universe for e.g. scene channel value setting in scene editor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_editorUniverseRadio->setText(QApplication::translate("InputPatchEditor", "Default editor universe", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InputPatchEditor: public Ui_InputPatchEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTPATCHEDITOR_H
