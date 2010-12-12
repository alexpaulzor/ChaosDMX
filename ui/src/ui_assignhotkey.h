/********************************************************************************
** Form generated from reading UI file 'assignhotkey.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNHOTKEY_H
#define UI_ASSIGNHOTKEY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AssignHotKey
{
public:
    QVBoxLayout *vboxLayout;
    QTextBrowser *m_infoText;
    QLabel *m_previewLabel;
    QLineEdit *m_previewEdit;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *AssignHotKey)
    {
        if (AssignHotKey->objectName().isEmpty())
            AssignHotKey->setObjectName(QString::fromUtf8("AssignHotKey"));
        AssignHotKey->resize(282, 343);
        vboxLayout = new QVBoxLayout(AssignHotKey);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_infoText = new QTextBrowser(AssignHotKey);
        m_infoText->setObjectName(QString::fromUtf8("m_infoText"));

        vboxLayout->addWidget(m_infoText);

        m_previewLabel = new QLabel(AssignHotKey);
        m_previewLabel->setObjectName(QString::fromUtf8("m_previewLabel"));
        m_previewLabel->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(m_previewLabel);

        m_previewEdit = new QLineEdit(AssignHotKey);
        m_previewEdit->setObjectName(QString::fromUtf8("m_previewEdit"));
        m_previewEdit->setAlignment(Qt::AlignCenter);
        m_previewEdit->setReadOnly(true);

        vboxLayout->addWidget(m_previewEdit);

        m_buttonBox = new QDialogButtonBox(AssignHotKey);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_buttonBox);


        retranslateUi(AssignHotKey);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), AssignHotKey, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), AssignHotKey, SLOT(reject()));

        QMetaObject::connectSlotsByName(AssignHotKey);
    } // setupUi

    void retranslateUi(QDialog *AssignHotKey)
    {
        AssignHotKey->setWindowTitle(QApplication::translate("AssignHotKey", "Assign a key combination to button", 0, QApplication::UnicodeUTF8));
        m_previewLabel->setText(QApplication::translate("AssignHotKey", "Key combination", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AssignHotKey: public Ui_AssignHotKey {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNHOTKEY_H
