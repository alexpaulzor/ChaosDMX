/********************************************************************************
** Form generated from reading UI file 'addfixture.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFIXTURE_H
#define UI_ADDFIXTURE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QSpinBox>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_AddFixture
{
public:
    QGridLayout *gridLayout_3;
    QTreeWidget *m_tree;
    QGroupBox *m_propertiesGroup;
    QGridLayout *gridLayout;
    QLabel *m_nameLabel;
    QLineEdit *m_nameEdit;
    QLabel *m_modeLabel;
    QComboBox *m_modeCombo;
    QLabel *m_addressLabel;
    QSpinBox *m_addressSpin;
    QLabel *m_channelsLabel;
    QSpinBox *m_channelsSpin;
    QListWidget *m_channelList;
    QLabel *m_universeLabel;
    QComboBox *m_universeCombo;
    QFrame *line;
    QGroupBox *m_multipleGroup;
    QGridLayout *gridLayout_2;
    QLabel *m_amountLabel;
    QSpinBox *m_amountSpin;
    QLabel *m_gapLabel;
    QSpinBox *m_gapSpin;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *AddFixture)
    {
        if (AddFixture->objectName().isEmpty())
            AddFixture->setObjectName(QString::fromUtf8("AddFixture"));
        AddFixture->resize(550, 460);
        gridLayout_3 = new QGridLayout(AddFixture);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        m_tree = new QTreeWidget(AddFixture);
        m_tree->setObjectName(QString::fromUtf8("m_tree"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_tree->sizePolicy().hasHeightForWidth());
        m_tree->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(m_tree, 0, 0, 2, 1);

        m_propertiesGroup = new QGroupBox(AddFixture);
        m_propertiesGroup->setObjectName(QString::fromUtf8("m_propertiesGroup"));
        gridLayout = new QGridLayout(m_propertiesGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_nameLabel = new QLabel(m_propertiesGroup);
        m_nameLabel->setObjectName(QString::fromUtf8("m_nameLabel"));

        gridLayout->addWidget(m_nameLabel, 0, 0, 1, 1);

        m_nameEdit = new QLineEdit(m_propertiesGroup);
        m_nameEdit->setObjectName(QString::fromUtf8("m_nameEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_nameEdit->sizePolicy().hasHeightForWidth());
        m_nameEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_nameEdit, 0, 2, 1, 1);

        m_modeLabel = new QLabel(m_propertiesGroup);
        m_modeLabel->setObjectName(QString::fromUtf8("m_modeLabel"));

        gridLayout->addWidget(m_modeLabel, 1, 0, 1, 1);

        m_modeCombo = new QComboBox(m_propertiesGroup);
        m_modeCombo->setObjectName(QString::fromUtf8("m_modeCombo"));
        sizePolicy1.setHeightForWidth(m_modeCombo->sizePolicy().hasHeightForWidth());
        m_modeCombo->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_modeCombo, 1, 2, 1, 1);

        m_addressLabel = new QLabel(m_propertiesGroup);
        m_addressLabel->setObjectName(QString::fromUtf8("m_addressLabel"));

        gridLayout->addWidget(m_addressLabel, 4, 0, 1, 1);

        m_addressSpin = new QSpinBox(m_propertiesGroup);
        m_addressSpin->setObjectName(QString::fromUtf8("m_addressSpin"));
        sizePolicy1.setHeightForWidth(m_addressSpin->sizePolicy().hasHeightForWidth());
        m_addressSpin->setSizePolicy(sizePolicy1);
        m_addressSpin->setMinimum(1);
        m_addressSpin->setMaximum(512);

        gridLayout->addWidget(m_addressSpin, 4, 2, 1, 1);

        m_channelsLabel = new QLabel(m_propertiesGroup);
        m_channelsLabel->setObjectName(QString::fromUtf8("m_channelsLabel"));

        gridLayout->addWidget(m_channelsLabel, 6, 0, 1, 1);

        m_channelsSpin = new QSpinBox(m_propertiesGroup);
        m_channelsSpin->setObjectName(QString::fromUtf8("m_channelsSpin"));
        m_channelsSpin->setEnabled(false);
        sizePolicy1.setHeightForWidth(m_channelsSpin->sizePolicy().hasHeightForWidth());
        m_channelsSpin->setSizePolicy(sizePolicy1);
        m_channelsSpin->setMinimum(1);
        m_channelsSpin->setMaximum(128);
        m_channelsSpin->setValue(1);

        gridLayout->addWidget(m_channelsSpin, 6, 2, 1, 1);

        m_channelList = new QListWidget(m_propertiesGroup);
        m_channelList->setObjectName(QString::fromUtf8("m_channelList"));
        m_channelList->setAlternatingRowColors(true);
        m_channelList->setSelectionMode(QAbstractItemView::NoSelection);

        gridLayout->addWidget(m_channelList, 7, 0, 1, 3);

        m_universeLabel = new QLabel(m_propertiesGroup);
        m_universeLabel->setObjectName(QString::fromUtf8("m_universeLabel"));

        gridLayout->addWidget(m_universeLabel, 3, 0, 1, 1);

        m_universeCombo = new QComboBox(m_propertiesGroup);
        m_universeCombo->setObjectName(QString::fromUtf8("m_universeCombo"));
        m_universeCombo->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        m_universeCombo->setMinimumContentsLength(16);

        gridLayout->addWidget(m_universeCombo, 3, 2, 1, 1);

        line = new QFrame(m_propertiesGroup);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 3);


        gridLayout_3->addWidget(m_propertiesGroup, 0, 1, 1, 1);

        m_multipleGroup = new QGroupBox(AddFixture);
        m_multipleGroup->setObjectName(QString::fromUtf8("m_multipleGroup"));
        gridLayout_2 = new QGridLayout(m_multipleGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_amountLabel = new QLabel(m_multipleGroup);
        m_amountLabel->setObjectName(QString::fromUtf8("m_amountLabel"));

        gridLayout_2->addWidget(m_amountLabel, 0, 0, 1, 1);

        m_amountSpin = new QSpinBox(m_multipleGroup);
        m_amountSpin->setObjectName(QString::fromUtf8("m_amountSpin"));
        sizePolicy1.setHeightForWidth(m_amountSpin->sizePolicy().hasHeightForWidth());
        m_amountSpin->setSizePolicy(sizePolicy1);
        m_amountSpin->setMinimum(1);
        m_amountSpin->setMaximum(128);

        gridLayout_2->addWidget(m_amountSpin, 0, 1, 1, 1);

        m_gapLabel = new QLabel(m_multipleGroup);
        m_gapLabel->setObjectName(QString::fromUtf8("m_gapLabel"));

        gridLayout_2->addWidget(m_gapLabel, 1, 0, 1, 1);

        m_gapSpin = new QSpinBox(m_multipleGroup);
        m_gapSpin->setObjectName(QString::fromUtf8("m_gapSpin"));
        sizePolicy1.setHeightForWidth(m_gapSpin->sizePolicy().hasHeightForWidth());
        m_gapSpin->setSizePolicy(sizePolicy1);
        m_gapSpin->setMaximum(128);

        gridLayout_2->addWidget(m_gapSpin, 1, 1, 1, 1);


        gridLayout_3->addWidget(m_multipleGroup, 1, 1, 1, 1);

        m_buttonBox = new QDialogButtonBox(AddFixture);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(m_buttonBox, 2, 0, 1, 2);


        retranslateUi(AddFixture);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), AddFixture, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), AddFixture, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddFixture);
    } // setupUi

    void retranslateUi(QDialog *AddFixture)
    {
        AddFixture->setWindowTitle(QApplication::translate("AddFixture", "Add fixture", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_tree->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("AddFixture", "Fixture Type", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("AddFixture", "Fixture Model", 0, QApplication::UnicodeUTF8));
        m_propertiesGroup->setTitle(QApplication::translate("AddFixture", "Fixture Properties", 0, QApplication::UnicodeUTF8));
        m_nameLabel->setText(QApplication::translate("AddFixture", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_nameEdit->setToolTip(QApplication::translate("AddFixture", "A friendly name for the new fixture", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_modeLabel->setText(QApplication::translate("AddFixture", "Mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_modeCombo->setToolTip(QApplication::translate("AddFixture", "Selected fixture mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_addressLabel->setText(QApplication::translate("AddFixture", "Address", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_addressSpin->setToolTip(QApplication::translate("AddFixture", "The starting address of the (first) added fixture", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_channelsLabel->setText(QApplication::translate("AddFixture", "Channels", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_channelsSpin->setToolTip(QApplication::translate("AddFixture", "Number of channels in the selected fixture", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_channelList->setToolTip(QApplication::translate("AddFixture", "List of channels in the selected fixture mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_universeLabel->setText(QApplication::translate("AddFixture", "Universe", 0, QApplication::UnicodeUTF8));
        m_multipleGroup->setTitle(QApplication::translate("AddFixture", "Multiple Fixtures", 0, QApplication::UnicodeUTF8));
        m_amountLabel->setText(QApplication::translate("AddFixture", "Amount", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_amountSpin->setToolTip(QApplication::translate("AddFixture", "Number of fixtures to add", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_gapLabel->setText(QApplication::translate("AddFixture", "Address gap", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_gapSpin->setToolTip(QApplication::translate("AddFixture", "Number of empty channels to leave between added fixtures", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class AddFixture: public Ui_AddFixture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFIXTURE_H
