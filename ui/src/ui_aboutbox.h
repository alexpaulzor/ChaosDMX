/********************************************************************************
** Form generated from reading UI file 'aboutbox.ui'
**
** Created: Sun Dec 12 05:56:20 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTBOX_H
#define UI_ABOUTBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_AboutBox
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *m_titleLabel;
    QListWidget *m_contributors;
    QLabel *m_versionLabel;
    QLabel *m_copyrightLabel;
    QLabel *m_websiteLabel;
    QLabel *m_licenseLabel;
    QTextBrowser *m_licenseBrowser;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QDialog *AboutBox)
    {
        if (AboutBox->objectName().isEmpty())
            AboutBox->setObjectName(QString::fromUtf8("AboutBox"));
        AboutBox->resize(581, 390);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qlc.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutBox->setWindowIcon(icon);
        gridLayout = new QGridLayout(AboutBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(AboutBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/qlc.png")));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label, 0, 0, 4, 1);

        m_titleLabel = new QLabel(AboutBox);
        m_titleLabel->setObjectName(QString::fromUtf8("m_titleLabel"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        m_titleLabel->setFont(font);
        m_titleLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(m_titleLabel, 0, 1, 1, 1);

        m_contributors = new QListWidget(AboutBox);
        m_contributors->setObjectName(QString::fromUtf8("m_contributors"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_contributors->sizePolicy().hasHeightForWidth());
        m_contributors->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(m_contributors, 0, 2, 4, 1);

        m_versionLabel = new QLabel(AboutBox);
        m_versionLabel->setObjectName(QString::fromUtf8("m_versionLabel"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        m_versionLabel->setFont(font1);
        m_versionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(m_versionLabel, 1, 1, 1, 1);

        m_copyrightLabel = new QLabel(AboutBox);
        m_copyrightLabel->setObjectName(QString::fromUtf8("m_copyrightLabel"));
        m_copyrightLabel->setTextFormat(Qt::RichText);

        gridLayout->addWidget(m_copyrightLabel, 2, 1, 1, 1);

        m_websiteLabel = new QLabel(AboutBox);
        m_websiteLabel->setObjectName(QString::fromUtf8("m_websiteLabel"));

        gridLayout->addWidget(m_websiteLabel, 3, 1, 1, 1);

        m_licenseLabel = new QLabel(AboutBox);
        m_licenseLabel->setObjectName(QString::fromUtf8("m_licenseLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_licenseLabel->sizePolicy().hasHeightForWidth());
        m_licenseLabel->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        m_licenseLabel->setFont(font2);
        m_licenseLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m_licenseLabel, 4, 0, 1, 3);

        m_licenseBrowser = new QTextBrowser(AboutBox);
        m_licenseBrowser->setObjectName(QString::fromUtf8("m_licenseBrowser"));

        gridLayout->addWidget(m_licenseBrowser, 5, 0, 1, 3);

        m_buttonBox = new QDialogButtonBox(AboutBox);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setOrientation(Qt::Horizontal);
        m_buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(m_buttonBox, 6, 0, 1, 3);


        retranslateUi(AboutBox);
        QObject::connect(m_buttonBox, SIGNAL(accepted()), AboutBox, SLOT(accept()));
        QObject::connect(m_buttonBox, SIGNAL(rejected()), AboutBox, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutBox);
    } // setupUi

    void retranslateUi(QDialog *AboutBox)
    {
        AboutBox->setWindowTitle(QApplication::translate("AboutBox", "About Q Light Controller", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        m_titleLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_contributors->setToolTip(QApplication::translate("AboutBox", "Contributors", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_versionLabel->setText(QString());
        m_licenseLabel->setText(QApplication::translate("AboutBox", "This application is licensed under the terms of GNU GPL version 2.", 0, QApplication::UnicodeUTF8));
        m_licenseBrowser->setHtml(QApplication::translate("AboutBox", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:14pt; font-weight:600;\">GNU GENERAL PUBLIC LICENSE</span></p>\n"
"<p align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:14pt; font-weight:600;\">Version 2, June 1991</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">Copyrigh"
                        "t (C) 1989, 1991 Free Software Foundation, Inc. 675 Mass Ave, Cambridge, MA 02139, USAEveryone is permitted to copy and distribute verbatim copies of this license document, but changing it is not allowed.</span></p>\n"
"<p align=\"center\" style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt; font-weight:600;\">Preamble</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">The licenses for most software are designed to take away your freedom to share and change it.  By contrast, the GNU General Public License is intended to guarantee your freedom to share and change free software--to make sure the software is free for all its users.  This General Public License applies to most of the Free Software Foundation's software and to any other program whose authors com"
                        "mit tousing it.  (Some other Free Software Foundation software is covered by the GNU Library General Public License instead.)  You can apply it to your programs, too.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">When we speak of free software, we are referring to freedom, not price.  Our General Public Licenses are designed to make sure that you have the freedom to distribute copies of free software (and charge for this service if you wish), that you receive source code or can get it if you want it, that you can change the software or use pieces of it in new free programs; and that you know you can do these things.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">To protect your rights, we need to make restrictions that forbid "
                        "anyone to deny you these rights or to ask you to surrender the rights. These restrictions translate to certain responsibilities for you if youdistribute copies of the software, or if you modify it.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">For example, if you distribute copies of such a program, whether gratis or for a fee, you must give the recipients all the rights that you have.  You must make sure that they, too, receive or can get thesource code.  And you must show them these terms so they know their rights.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\"> We protect your rights with two steps: (1) copyright the software, and (2) offer you this license which gives you legal permission to copy, distribute and/or modify th"
                        "e software.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">Also, for each author's protection and ours, we want to make certain that everyone understands that there is no warranty for this free software.  If the software is modified by someone else and passed on, we want its recipients to know that what they have is not the original, so that any problems introduced by others will not reflect on the original authors' reputations.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">Finally, any free program is threatened constantly by software patents.  We wish to avoid the danger that redistributors of a free program will individually obtain patent licenses, in effect making the program proprietary.  To prevent this, we have made it "
                        "clear that any patent must be licensed for everyone's free use or not licensed at all.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">The precise terms and conditions for copying, distribution and modification follow.</span></p>\n"
"<p align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt; font-weight:600;\">GNU GENERAL PUBLIC LICENSE TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">0. This License applies to any program or other work which containsa notice placed by the copyright holder saying it may be distributedunder the terms of th"
                        "is General Public License.  The &quot;Program&quot;, below,refers to any such program or work, and a &quot;work based on the Program&quot;means either the Program or any derivative work under copyright law:that is to say, a work containing the Program or a portion of it,either verbatim or with modifications and/or translated into anotherlanguage.  (Hereinafter, translation is included without limitation inthe term &quot;modification&quot;.)  Each licensee is addressed as &quot;you&quot;.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">Activities other than copying, distribution and modification are notcovered by this License; they are outside its scope.  The act ofrunning the Program is not restricted, and the output from the Programis covered only if its contents constitute a work based on theProgram (independent of having been made by running the Program).Whether that"
                        " is true depends on what the Program does.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">1. You may copy and distribute verbatim copies of the Program'ssource code as you receive it, in any medium, provided that youconspicuously and appropriately publish on each copy an appropriatecopyright notice and disclaimer of warranty; keep intact all thenotices that refer to this License and to the absence of any warranty;and give any other recipients of the Program a copy of this Licensealong with the Program.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">You may charge a fee for the physical act of transferring a copy, andyou may at your option offer warranty protection in exchange for a fee.</span></p>\n"
"<p style=\" margin-top:12p"
                        "x; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">2. You may modify your copy or copies of the Program or any portionof it, thus forming a work based on the Program, and copy anddistribute such modifications or work under the terms of Section 1above, provided that you also meet all of these conditions:</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">a) You must cause the modified files to carry prominent notices stating that you changed the files and the date of any change.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">b) You must cause any work that you distribute or publish, that in whole or in part contains or is derived from "
                        "the Program or any part thereof, to be licensed as a whole at no charge to all third parties under the terms of this License.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">c) If the modified program normally reads commands interactively when run, you must cause it, when started running for such interactive use in the most ordinary way, to print or display an announcement including an appropriate copyright notice and a notice that there is no warranty (or else, saying that you provide    a warranty) and that users may redistribute the program under these conditions, and telling the user how to view a copy of this License. (Exception: if the Program itself is interactive but does not normally print such an announcement, your work based on the Program is not required to print an announcement.)</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0p"
                        "x; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">These requirements apply to the modified work as a whole.  Ifidentifiable sections of that work are not derived from the Program,and can be reasonably considered independent and separate works inthemselves, then this License, and its terms, do not apply to thosesections when you distribute them as separate works.  But when youdistribute the same sections as part of a whole which is a work basedon the Program, the distribution of the whole must be on the terms ofthis License, whose permissions for other licensees extend to theentire whole, and thus to each and every part regardless of who wrote it.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">Thus, it is not the intent of this section to claim rights or contestyour rights to work written entirely by you; ra"
                        "ther, the intent is toexercise the right to control the distribution of derivative orcollective works based on the Program.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">In addition, mere aggregation of another work not based on the Programwith the Program (or with a work based on the Program) on a volume ofa storage or distribution medium does not bring the other work underthe scope of this License.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">3. You may copy and distribute the Program (or a work based on it,under Section 2) in object code or executable form under the terms ofSections 1 and 2 above provided that you also do one of the following:</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px"
                        "; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">a) Accompany it with the complete corresponding machine-readable source code, which must be distributed under the terms of Sections 1 and 2 above on a medium customarily used for software interchange; or, </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">b) Accompany it with a written offer, valid for at least three years, to give any third party, for a charge no more than your cost of physically performing source distribution, a complete machine-readable copy of the corresponding source code, to be distributed under the terms of Sections 1 and 2 above on a medium    customarily used for software interchange; or, </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style"
                        "=\" font-family:'Arial'; font-size:9pt;\">c) Accompany it with the information you received as to the offer to distribute corresponding source code. (This alternative is allowed only for noncommercial distribution and only if you received the program in object code or executable form with such an offer, in accord with Subsection b above.)</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">The source code for a work means the preferred form of the work formaking modifications to it.  For an executable work, complete sourcecode means all the source code for all modules it contains, plus anyassociated interface definition files, plus the scripts used tocontrol compilation and installation of the executable.  However, as aspecial exception, the source code distributed need not includeanything that is normally distributed (in either source or binaryform) with the major componen"
                        "ts (compiler, kernel, and so on) of theoperating system on which the executable runs, unless that componentitself accompanies the executable.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">If distribution of executable or object code is made by offeringaccess to copy from a designated place, then offering equivalentaccess to copy the source code from the same place counts asdistribution of the source code, even though third parties are notcompelled to copy the source along with the object code.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">4. You may not copy, modify, sublicense, or distribute the Programexcept as expressly provided under this License.  Any attemptotherwise to copy, modify, sublicense or distribute the Program"
                        " isvoid, and will automatically terminate your rights under this License.However, parties who have received copies, or rights, from you underthis License will not have their licenses terminated so long as suchparties remain in full compliance.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">5. You are not required to accept this License, since you have notsigned it.  However, nothing else grants you permission to modify ordistribute the Program or its derivative works.  These actions areprohibited by law if you do not accept this License.  Therefore, bymodifying or distributing the Program (or any work based on theProgram), you indicate your acceptance of this License to do so, andall its terms and conditions for copying, distributing or modifyingthe Program or works based on it.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-rig"
                        "ht:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">6. Each time you redistribute the Program (or any work based on theProgram), the recipient automatically receives a license from theoriginal licensor to copy, distribute or modify the Program subject tothese terms and conditions.  You may not impose any furtherrestrictions on the recipients' exercise of the rights granted herein.You are not responsible for enforcing compliance by third parties tothis License.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">7. If, as a consequence of a court judgment or allegation of patentinfringement or for any other reason (not limited to patent issues),conditions are imposed on you (whether by court order, agreement orotherwise) that contradict the conditions of this License, they do notexcuse you from the conditions of this License.  "
                        "If you cannotdistribute so as to satisfy simultaneously your obligations under thisLicense and any other pertinent obligations, then as a consequence youmay not distribute the Program at all.  For example, if a patentlicense would not permit royalty-free redistribution of the Program byall those who receive copies directly or indirectly through you, thenthe only way you could satisfy both it and this License would be torefrain entirely from distribution of the Program.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">If any portion of this section is held invalid or unenforceable underany particular circumstance, the balance of the section is intended toapply and the section as a whole is intended to apply in othercircumstances.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
                        "style=\" font-family:'Arial'; font-size:9pt;\">It is not the purpose of this section to induce you to infringe anypatents or other property right claims or to contest validity of anysuch claims; this section has the sole purpose of protecting theintegrity of the free software distribution system, which isimplemented by public license practices.  Many people have madegenerous contributions to the wide range of software distributedthrough that system in reliance on consistent application of thatsystem; it is up to the author/donor to decide if he or she is willingto distribute software through any other system and a licensee cannotimpose that choice.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">This section is intended to make thoroughly clear what is believed tobe a consequence of the rest of this License.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px"
                        "; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">8. If the distribution and/or use of the Program is restricted incertain countries either by patents or by copyrighted interfaces, theoriginal copyright holder who places the Program under this Licensemay add an explicit geographical distribution limitation excludingthose countries, so that distribution is permitted only in or amongcountries not thus excluded.  In such case, this License incorporatesthe limitation as if written in the body of this License.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">9. The Free Software Foundation may publish revised and/or new versionsof the General Public License from time to time.  Such new versions willbe similar in spirit to the present version, but may differ in detail toaddress new problems or conce"
                        "rns.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">Each version is given a distinguishing version number.  If the Programspecifies a version number of this License which applies to it and &quot;anylater version&quot;, you have the option of following the terms and conditionseither of that version or of any later version published by the FreeSoftware Foundation.  If the Program does not specify a version number ofthis License, you may choose any version ever published by the Free SoftwareFoundation.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">10. If you wish to incorporate parts of the Program into other freeprograms whose distribution conditions are different, write to the authorto ask for permission.  For software which is"
                        " copyrighted by the FreeSoftware Foundation, write to the Free Software Foundation; we sometimesmake exceptions for this.  Our decision will be guided by the two goalsof preserving the free status of all derivatives of our free software andof promoting the sharing and reuse of software generally.</span></p>\n"
"<p align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt; font-weight:600;\">NO WARRANTY</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTYFOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW.  EXCEPT WHENOTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIESPROVIDE THE PROGRAM &quot;AS IS&quot; WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSEDO"
                        "R IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OFMERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK ASTO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THEPROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING,REPAIR OR CORRECTION.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt;\">12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITINGWILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY AND/ORREDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES,INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISINGOUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITEDTO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BYYOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHERPROGRAMS), EVEN IF SUC"
                        "H HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THEPOSSIBILITY OF SUCH DAMAGES.</span></p>\n"
"<p align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:9pt; font-weight:600;\">END OF TERMS AND CONDITIONS</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutBox: public Ui_AboutBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTBOX_H
