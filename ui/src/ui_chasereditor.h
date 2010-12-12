/********************************************************************************
** Form generated from reading UI file 'chasereditor.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHASEREDITOR_H
#define UI_CHASEREDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChaserEditor
{
public:
    QGridLayout *gridLayout;
    QLabel *m_nameLabel;
    QLineEdit *m_nameEdit;
    QTreeWidget *m_tree;
    QToolButton *m_add;
    QToolButton *m_remove;
    QToolButton *m_raise;
    QToolButton *m_lower;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *m_loop;
    QRadioButton *m_singleShot;
    QRadioButton *m_pingPong;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *m_forward;
    QRadioButton *m_backward;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QComboBox *m_busCombo;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *ChaserEditor)
    {
        if (ChaserEditor->objectName().isEmpty())
            ChaserEditor->setObjectName(QString::fromUtf8("ChaserEditor"));
        ChaserEditor->resize(442, 424);
        gridLayout = new QGridLayout(ChaserEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_nameLabel = new QLabel(ChaserEditor);
        m_nameLabel->setObjectName(QString::fromUtf8("m_nameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_nameLabel->sizePolicy().hasHeightForWidth());
        m_nameLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(m_nameLabel, 0, 0, 1, 1);

        m_nameEdit = new QLineEdit(ChaserEditor);
        m_nameEdit->setObjectName(QString::fromUtf8("m_nameEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_nameEdit->sizePolicy().hasHeightForWidth());
        m_nameEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_nameEdit, 0, 1, 1, 3);

        m_tree = new QTreeWidget(ChaserEditor);
        m_tree->setObjectName(QString::fromUtf8("m_tree"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(m_tree->sizePolicy().hasHeightForWidth());
        m_tree->setSizePolicy(sizePolicy2);
        m_tree->setRootIsDecorated(false);
        m_tree->setItemsExpandable(false);
        m_tree->setAllColumnsShowFocus(true);

        gridLayout->addWidget(m_tree, 1, 0, 5, 3);

        m_add = new QToolButton(ChaserEditor);
        m_add->setObjectName(QString::fromUtf8("m_add"));
        m_add->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_add->setIcon(icon);
        m_add->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_add, 1, 3, 1, 1);

        m_remove = new QToolButton(ChaserEditor);
        m_remove->setObjectName(QString::fromUtf8("m_remove"));
        m_remove->setText(QString::fromUtf8("..."));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_remove->setIcon(icon1);
        m_remove->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_remove, 2, 3, 1, 1);

        m_raise = new QToolButton(ChaserEditor);
        m_raise->setObjectName(QString::fromUtf8("m_raise"));
        m_raise->setText(QString::fromUtf8("..."));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_raise->setIcon(icon2);
        m_raise->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_raise, 3, 3, 1, 1);

        m_lower = new QToolButton(ChaserEditor);
        m_lower->setObjectName(QString::fromUtf8("m_lower"));
        m_lower->setText(QString::fromUtf8("..."));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_lower->setIcon(icon3);
        m_lower->setIconSize(QSize(26, 26));

        gridLayout->addWidget(m_lower, 4, 3, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 3, 1, 1);

        groupBox = new QGroupBox(ChaserEditor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_loop = new QRadioButton(groupBox);
        m_loop->setObjectName(QString::fromUtf8("m_loop"));
        m_loop->setChecked(true);

        verticalLayout_2->addWidget(m_loop);

        m_singleShot = new QRadioButton(groupBox);
        m_singleShot->setObjectName(QString::fromUtf8("m_singleShot"));

        verticalLayout_2->addWidget(m_singleShot);

        m_pingPong = new QRadioButton(groupBox);
        m_pingPong->setObjectName(QString::fromUtf8("m_pingPong"));

        verticalLayout_2->addWidget(m_pingPong);


        gridLayout->addWidget(groupBox, 6, 0, 1, 1);

        groupBox_2 = new QGroupBox(ChaserEditor);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        m_forward = new QRadioButton(groupBox_2);
        m_forward->setObjectName(QString::fromUtf8("m_forward"));
        m_forward->setChecked(true);

        verticalLayout_3->addWidget(m_forward);

        m_backward = new QRadioButton(groupBox_2);
        m_backward->setObjectName(QString::fromUtf8("m_backward"));

        verticalLayout_3->addWidget(m_backward);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        gridLayout->addWidget(groupBox_2, 6, 1, 1, 1);

        groupBox_3 = new QGroupBox(ChaserEditor);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_busCombo = new QComboBox(groupBox_3);
        m_busCombo->setObjectName(QString::fromUtf8("m_busCombo"));

        verticalLayout->addWidget(m_busCombo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addWidget(groupBox_3, 6, 2, 1, 2);

        m_buttonBox = new QDialogButtonBox(ChaserEditor);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(m_buttonBox, 7, 0, 1, 4);


        retranslateUi(ChaserEditor);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), ChaserEditor, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), ChaserEditor, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChaserEditor);
    } // setupUi

    void retranslateUi(QDialog *ChaserEditor)
    {
        ChaserEditor->setWindowTitle(QApplication::translate("ChaserEditor", "Chaser editor", 0, QApplication::UnicodeUTF8));
        m_nameLabel->setText(QApplication::translate("ChaserEditor", "Chaser name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_nameEdit->setToolTip(QApplication::translate("ChaserEditor", "Name of the chaser being edited", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = m_tree->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("ChaserEditor", "Function", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("ChaserEditor", "Step", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_add->setToolTip(QApplication::translate("ChaserEditor", "Add step(s) to the current position", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_remove->setToolTip(QApplication::translate("ChaserEditor", "Remove the selected step", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_raise->setToolTip(QApplication::translate("ChaserEditor", "Raise the selected step once", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_lower->setToolTip(QApplication::translate("ChaserEditor", "Lower the selected step once", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("ChaserEditor", "Run Order", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_loop->setToolTip(QApplication::translate("ChaserEditor", "Run through over and over again", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_loop->setText(QApplication::translate("ChaserEditor", "Loop", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_singleShot->setToolTip(QApplication::translate("ChaserEditor", "Run through once and stop", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_singleShot->setText(QApplication::translate("ChaserEditor", "Single Shot", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pingPong->setToolTip(QApplication::translate("ChaserEditor", "First run forwards, then backwards, again forwards, etc.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pingPong->setText(QApplication::translate("ChaserEditor", "Ping Pong", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ChaserEditor", "Direction", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_forward->setToolTip(QApplication::translate("ChaserEditor", "Start from the first step", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_forward->setText(QApplication::translate("ChaserEditor", "Forward", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_backward->setToolTip(QApplication::translate("ChaserEditor", "Start from the last step", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_backward->setText(QApplication::translate("ChaserEditor", "Backward", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("ChaserEditor", "Speed bus", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChaserEditor: public Ui_ChaserEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHASEREDITOR_H
