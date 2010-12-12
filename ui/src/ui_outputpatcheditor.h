/********************************************************************************
** Form generated from reading UI file 'outputpatcheditor.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTPATCHEDITOR_H
#define UI_OUTPUTPATCHEDITOR_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OutputPatchEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *m_mappingGroup;
    QVBoxLayout *verticalLayout;
    QTreeWidget *m_tree;
    QGroupBox *m_infoGroup;
    QGridLayout *gridLayout;
    QTextBrowser *m_infoBrowser;
    QToolButton *m_configureButton;
    QSpacerItem *verticalSpacer;
    QToolButton *m_reconnectButton;
    QCheckBox *m_zeroBasedDMXCheckBox;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *OutputPatchEditor)
    {
        if (OutputPatchEditor->objectName().isEmpty())
            OutputPatchEditor->setObjectName(QString::fromUtf8("OutputPatchEditor"));
        OutputPatchEditor->resize(436, 464);
        verticalLayout_2 = new QVBoxLayout(OutputPatchEditor);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_mappingGroup = new QGroupBox(OutputPatchEditor);
        m_mappingGroup->setObjectName(QString::fromUtf8("m_mappingGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_mappingGroup->sizePolicy().hasHeightForWidth());
        m_mappingGroup->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(m_mappingGroup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_tree = new QTreeWidget(m_mappingGroup);
        m_tree->setObjectName(QString::fromUtf8("m_tree"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_tree->sizePolicy().hasHeightForWidth());
        m_tree->setSizePolicy(sizePolicy1);
        m_tree->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(m_tree);


        verticalLayout_2->addWidget(m_mappingGroup);

        m_infoGroup = new QGroupBox(OutputPatchEditor);
        m_infoGroup->setObjectName(QString::fromUtf8("m_infoGroup"));
        sizePolicy.setHeightForWidth(m_infoGroup->sizePolicy().hasHeightForWidth());
        m_infoGroup->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(m_infoGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_infoBrowser = new QTextBrowser(m_infoGroup);
        m_infoBrowser->setObjectName(QString::fromUtf8("m_infoBrowser"));
        m_infoBrowser->setOpenLinks(false);

        gridLayout->addWidget(m_infoBrowser, 0, 0, 3, 1);

        m_configureButton = new QToolButton(m_infoGroup);
        m_configureButton->setObjectName(QString::fromUtf8("m_configureButton"));
        m_configureButton->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_configureButton->setIcon(icon);
        m_configureButton->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_configureButton, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        m_reconnectButton = new QToolButton(m_infoGroup);
        m_reconnectButton->setObjectName(QString::fromUtf8("m_reconnectButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/detach.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_reconnectButton->setIcon(icon1);
        m_reconnectButton->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_reconnectButton, 1, 1, 1, 1);


        verticalLayout_2->addWidget(m_infoGroup);

        m_zeroBasedDMXCheckBox = new QCheckBox(OutputPatchEditor);
        m_zeroBasedDMXCheckBox->setObjectName(QString::fromUtf8("m_zeroBasedDMXCheckBox"));

        verticalLayout_2->addWidget(m_zeroBasedDMXCheckBox);

        m_buttonBox = new QDialogButtonBox(OutputPatchEditor);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(m_buttonBox);


        retranslateUi(OutputPatchEditor);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), OutputPatchEditor, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), OutputPatchEditor, SLOT(reject()));

        QMetaObject::connectSlotsByName(OutputPatchEditor);
    } // setupUi

    void retranslateUi(QDialog *OutputPatchEditor)
    {
        OutputPatchEditor->setWindowTitle(QApplication::translate("OutputPatchEditor", "Output patch editor", 0, QApplication::UnicodeUTF8));
        m_mappingGroup->setTitle(QApplication::translate("OutputPatchEditor", "Mapping", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_tree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("OutputPatchEditor", "Plugins/Outputs", 0, QApplication::UnicodeUTF8));
        m_infoGroup->setTitle(QApplication::translate("OutputPatchEditor", "Output Information", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_infoBrowser->setToolTip(QApplication::translate("OutputPatchEditor", "Information related to the currently selected plugin or output", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_configureButton->setToolTip(QApplication::translate("OutputPatchEditor", "Configure the selected plugin/output", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_reconnectButton->setToolTip(QApplication::translate("OutputPatchEditor", "Attempt to re-connect the current plugin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_reconnectButton->setText(QApplication::translate("OutputPatchEditor", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_zeroBasedDMXCheckBox->setToolTip(QApplication::translate("OutputPatchEditor", "Display 0-511 (instead of 1-512) as the DMX address space for this universe", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_zeroBasedDMXCheckBox->setText(QApplication::translate("OutputPatchEditor", "Display zero-based DMX addresses for this universe", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OutputPatchEditor: public Ui_OutputPatchEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTPATCHEDITOR_H
