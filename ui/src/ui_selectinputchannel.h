/********************************************************************************
** Form generated from reading UI file 'selectinputchannel.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTINPUTCHANNEL_H
#define UI_SELECTINPUTCHANNEL_H

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

class Ui_SelectInputChannel
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *m_tree;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *SelectInputChannel)
    {
        if (SelectInputChannel->objectName().isEmpty())
            SelectInputChannel->setObjectName(QString::fromUtf8("SelectInputChannel"));
        SelectInputChannel->resize(425, 334);
        verticalLayout = new QVBoxLayout(SelectInputChannel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_tree = new QTreeWidget(SelectInputChannel);
        m_tree->setObjectName(QString::fromUtf8("m_tree"));
        m_tree->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(m_tree);

        m_buttonBox = new QDialogButtonBox(SelectInputChannel);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(m_buttonBox);


        retranslateUi(SelectInputChannel);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), SelectInputChannel, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), SelectInputChannel, SLOT(reject()));
        QObject::connect(m_tree, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), SelectInputChannel, SLOT(slotItemDoubleClicked(QTreeWidgetItem*,int)));

        QMetaObject::connectSlotsByName(SelectInputChannel);
    } // setupUi

    void retranslateUi(QDialog *SelectInputChannel)
    {
        SelectInputChannel->setWindowTitle(QApplication::translate("SelectInputChannel", "Select input channel", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_tree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("SelectInputChannel", "Name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SelectInputChannel: public Ui_SelectInputChannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTINPUTCHANNEL_H
