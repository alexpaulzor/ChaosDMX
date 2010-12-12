/********************************************************************************
** Form generated from reading UI file 'efxeditor.ui'
**
** Created: Sun Dec 12 05:56:21 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EFXEDITOR_H
#define UI_EFXEDITOR_H

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
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EFXEditor
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *m_tab;
    QWidget *General;
    QGridLayout *gridLayout_2;
    QLabel *m_nameLabel;
    QLineEdit *m_nameEdit;
    QTreeWidget *m_tree;
    QToolButton *m_addFixtureButton;
    QToolButton *m_removeFixtureButton;
    QToolButton *m_raiseFixtureButton;
    QToolButton *m_lowerFixtureButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *m_orderGroup;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *m_parallelRadio;
    QRadioButton *m_serialRadio;
    QGroupBox *m_busGroup;
    QVBoxLayout *verticalLayout_6;
    QComboBox *m_busCombo;
    QSpacerItem *verticalSpacer_4;
    QWidget *Movement;
    QGridLayout *gridLayout_3;
    QFrame *m_previewFrame;
    QGroupBox *m_algorithmGroup;
    QVBoxLayout *verticalLayout_3;
    QComboBox *m_algorithmCombo;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *m_parametersGroup;
    QGridLayout *gridLayout;
    QLabel *m_widthLabel;
    QSpinBox *m_widthSpin;
    QLabel *m_heightLabel;
    QSpinBox *m_heightSpin;
    QLabel *m_xOffsetLabel;
    QSpinBox *m_xOffsetSpin;
    QLabel *m_yOffsetLabel;
    QSpinBox *m_yOffsetSpin;
    QLabel *m_rotationLabel;
    QSpinBox *m_rotationSpin;
    QSpacerItem *spacerItem;
    QLabel *m_xFrequencyLabel;
    QSpinBox *m_xFrequencySpin;
    QLabel *m_yFrequencyLabel;
    QSpinBox *m_yFrequencySpin;
    QLabel *m_xPhaseLabel;
    QSpinBox *m_xPhaseSpin;
    QLabel *m_yPhaseLabel;
    QSpinBox *m_yPhaseSpin;
    QGroupBox *m_directionGroup;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *m_forward;
    QRadioButton *m_backward;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *m_runOrderGroup;
    QVBoxLayout *_2;
    QRadioButton *m_loop;
    QRadioButton *m_singleShot;
    QRadioButton *m_pingPong;
    QSpacerItem *verticalSpacer_3;
    QWidget *Initialization;
    QGridLayout *gridLayout1;
    QGroupBox *m_startSceneGroup;
    QVBoxLayout *vboxLayout;
    QTreeWidget *m_startSceneList;
    QGroupBox *m_stopSceneGroup;
    QVBoxLayout *vboxLayout1;
    QTreeWidget *m_stopSceneList;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EFXEditor)
    {
        if (EFXEditor->objectName().isEmpty())
            EFXEditor->setObjectName(QString::fromUtf8("EFXEditor"));
        EFXEditor->resize(429, 469);
        verticalLayout = new QVBoxLayout(EFXEditor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_tab = new QTabWidget(EFXEditor);
        m_tab->setObjectName(QString::fromUtf8("m_tab"));
        General = new QWidget();
        General->setObjectName(QString::fromUtf8("General"));
        gridLayout_2 = new QGridLayout(General);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_nameLabel = new QLabel(General);
        m_nameLabel->setObjectName(QString::fromUtf8("m_nameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_nameLabel->sizePolicy().hasHeightForWidth());
        m_nameLabel->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(m_nameLabel, 0, 0, 1, 1);

        m_nameEdit = new QLineEdit(General);
        m_nameEdit->setObjectName(QString::fromUtf8("m_nameEdit"));

        gridLayout_2->addWidget(m_nameEdit, 0, 1, 1, 3);

        m_tree = new QTreeWidget(General);
        m_tree->setObjectName(QString::fromUtf8("m_tree"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(m_tree->sizePolicy().hasHeightForWidth());
        m_tree->setSizePolicy(sizePolicy1);
        m_tree->setAlternatingRowColors(true);
        m_tree->setRootIsDecorated(false);
        m_tree->setItemsExpandable(false);
        m_tree->setAllColumnsShowFocus(true);

        gridLayout_2->addWidget(m_tree, 1, 0, 5, 3);

        m_addFixtureButton = new QToolButton(General);
        m_addFixtureButton->setObjectName(QString::fromUtf8("m_addFixtureButton"));
        m_addFixtureButton->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_addFixtureButton->setIcon(icon);
        m_addFixtureButton->setIconSize(QSize(26, 26));

        gridLayout_2->addWidget(m_addFixtureButton, 1, 3, 1, 1);

        m_removeFixtureButton = new QToolButton(General);
        m_removeFixtureButton->setObjectName(QString::fromUtf8("m_removeFixtureButton"));
        m_removeFixtureButton->setText(QString::fromUtf8("..."));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_removeFixtureButton->setIcon(icon1);
        m_removeFixtureButton->setIconSize(QSize(26, 26));

        gridLayout_2->addWidget(m_removeFixtureButton, 2, 3, 1, 1);

        m_raiseFixtureButton = new QToolButton(General);
        m_raiseFixtureButton->setObjectName(QString::fromUtf8("m_raiseFixtureButton"));
        m_raiseFixtureButton->setText(QString::fromUtf8("..."));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_raiseFixtureButton->setIcon(icon2);
        m_raiseFixtureButton->setIconSize(QSize(26, 26));

        gridLayout_2->addWidget(m_raiseFixtureButton, 3, 3, 1, 1);

        m_lowerFixtureButton = new QToolButton(General);
        m_lowerFixtureButton->setObjectName(QString::fromUtf8("m_lowerFixtureButton"));
        m_lowerFixtureButton->setText(QString::fromUtf8("..."));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_lowerFixtureButton->setIcon(icon3);
        m_lowerFixtureButton->setIconSize(QSize(26, 26));

        gridLayout_2->addWidget(m_lowerFixtureButton, 4, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 3, 1, 1);

        m_orderGroup = new QGroupBox(General);
        m_orderGroup->setObjectName(QString::fromUtf8("m_orderGroup"));
        verticalLayout_5 = new QVBoxLayout(m_orderGroup);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        m_parallelRadio = new QRadioButton(m_orderGroup);
        m_parallelRadio->setObjectName(QString::fromUtf8("m_parallelRadio"));
        m_parallelRadio->setChecked(true);

        verticalLayout_5->addWidget(m_parallelRadio);

        m_serialRadio = new QRadioButton(m_orderGroup);
        m_serialRadio->setObjectName(QString::fromUtf8("m_serialRadio"));

        verticalLayout_5->addWidget(m_serialRadio);


        gridLayout_2->addWidget(m_orderGroup, 6, 0, 1, 2);

        m_busGroup = new QGroupBox(General);
        m_busGroup->setObjectName(QString::fromUtf8("m_busGroup"));
        verticalLayout_6 = new QVBoxLayout(m_busGroup);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        m_busCombo = new QComboBox(m_busGroup);
        m_busCombo->setObjectName(QString::fromUtf8("m_busCombo"));

        verticalLayout_6->addWidget(m_busCombo);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);


        gridLayout_2->addWidget(m_busGroup, 6, 2, 1, 2);

        m_tab->addTab(General, QString());
        Movement = new QWidget();
        Movement->setObjectName(QString::fromUtf8("Movement"));
        gridLayout_3 = new QGridLayout(Movement);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        m_previewFrame = new QFrame(Movement);
        m_previewFrame->setObjectName(QString::fromUtf8("m_previewFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_previewFrame->sizePolicy().hasHeightForWidth());
        m_previewFrame->setSizePolicy(sizePolicy2);
        m_previewFrame->setMinimumSize(QSize(255, 255));
        m_previewFrame->setMaximumSize(QSize(255, 255));
        m_previewFrame->setFrameShape(QFrame::StyledPanel);
        m_previewFrame->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(m_previewFrame, 0, 0, 2, 2);

        m_algorithmGroup = new QGroupBox(Movement);
        m_algorithmGroup->setObjectName(QString::fromUtf8("m_algorithmGroup"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_algorithmGroup->sizePolicy().hasHeightForWidth());
        m_algorithmGroup->setSizePolicy(sizePolicy3);
        verticalLayout_3 = new QVBoxLayout(m_algorithmGroup);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        m_algorithmCombo = new QComboBox(m_algorithmGroup);
        m_algorithmCombo->setObjectName(QString::fromUtf8("m_algorithmCombo"));

        verticalLayout_3->addWidget(m_algorithmCombo);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_5);


        gridLayout_3->addWidget(m_algorithmGroup, 0, 2, 1, 1);

        m_parametersGroup = new QGroupBox(Movement);
        m_parametersGroup->setObjectName(QString::fromUtf8("m_parametersGroup"));
        gridLayout = new QGridLayout(m_parametersGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_widthLabel = new QLabel(m_parametersGroup);
        m_widthLabel->setObjectName(QString::fromUtf8("m_widthLabel"));

        gridLayout->addWidget(m_widthLabel, 0, 0, 1, 1);

        m_widthSpin = new QSpinBox(m_parametersGroup);
        m_widthSpin->setObjectName(QString::fromUtf8("m_widthSpin"));
        m_widthSpin->setMaximum(127);
        m_widthSpin->setValue(127);

        gridLayout->addWidget(m_widthSpin, 0, 1, 1, 1);

        m_heightLabel = new QLabel(m_parametersGroup);
        m_heightLabel->setObjectName(QString::fromUtf8("m_heightLabel"));

        gridLayout->addWidget(m_heightLabel, 1, 0, 1, 1);

        m_heightSpin = new QSpinBox(m_parametersGroup);
        m_heightSpin->setObjectName(QString::fromUtf8("m_heightSpin"));
        m_heightSpin->setMaximum(127);
        m_heightSpin->setValue(127);

        gridLayout->addWidget(m_heightSpin, 1, 1, 1, 1);

        m_xOffsetLabel = new QLabel(m_parametersGroup);
        m_xOffsetLabel->setObjectName(QString::fromUtf8("m_xOffsetLabel"));

        gridLayout->addWidget(m_xOffsetLabel, 2, 0, 1, 1);

        m_xOffsetSpin = new QSpinBox(m_parametersGroup);
        m_xOffsetSpin->setObjectName(QString::fromUtf8("m_xOffsetSpin"));
        m_xOffsetSpin->setMaximum(255);
        m_xOffsetSpin->setValue(127);

        gridLayout->addWidget(m_xOffsetSpin, 2, 1, 1, 1);

        m_yOffsetLabel = new QLabel(m_parametersGroup);
        m_yOffsetLabel->setObjectName(QString::fromUtf8("m_yOffsetLabel"));

        gridLayout->addWidget(m_yOffsetLabel, 3, 0, 1, 1);

        m_yOffsetSpin = new QSpinBox(m_parametersGroup);
        m_yOffsetSpin->setObjectName(QString::fromUtf8("m_yOffsetSpin"));
        m_yOffsetSpin->setMaximum(255);
        m_yOffsetSpin->setValue(127);

        gridLayout->addWidget(m_yOffsetSpin, 3, 1, 1, 1);

        m_rotationLabel = new QLabel(m_parametersGroup);
        m_rotationLabel->setObjectName(QString::fromUtf8("m_rotationLabel"));

        gridLayout->addWidget(m_rotationLabel, 4, 0, 1, 1);

        m_rotationSpin = new QSpinBox(m_parametersGroup);
        m_rotationSpin->setObjectName(QString::fromUtf8("m_rotationSpin"));
        m_rotationSpin->setMaximum(359);

        gridLayout->addWidget(m_rotationSpin, 4, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 0, 1, 2);

        m_xFrequencyLabel = new QLabel(m_parametersGroup);
        m_xFrequencyLabel->setObjectName(QString::fromUtf8("m_xFrequencyLabel"));
        m_xFrequencyLabel->setEnabled(false);

        gridLayout->addWidget(m_xFrequencyLabel, 6, 0, 1, 1);

        m_xFrequencySpin = new QSpinBox(m_parametersGroup);
        m_xFrequencySpin->setObjectName(QString::fromUtf8("m_xFrequencySpin"));
        m_xFrequencySpin->setEnabled(false);
        m_xFrequencySpin->setMaximum(5);
        m_xFrequencySpin->setValue(2);

        gridLayout->addWidget(m_xFrequencySpin, 6, 1, 1, 1);

        m_yFrequencyLabel = new QLabel(m_parametersGroup);
        m_yFrequencyLabel->setObjectName(QString::fromUtf8("m_yFrequencyLabel"));
        m_yFrequencyLabel->setEnabled(false);

        gridLayout->addWidget(m_yFrequencyLabel, 7, 0, 1, 1);

        m_yFrequencySpin = new QSpinBox(m_parametersGroup);
        m_yFrequencySpin->setObjectName(QString::fromUtf8("m_yFrequencySpin"));
        m_yFrequencySpin->setEnabled(false);
        m_yFrequencySpin->setMaximum(5);
        m_yFrequencySpin->setValue(1);

        gridLayout->addWidget(m_yFrequencySpin, 7, 1, 1, 1);

        m_xPhaseLabel = new QLabel(m_parametersGroup);
        m_xPhaseLabel->setObjectName(QString::fromUtf8("m_xPhaseLabel"));
        m_xPhaseLabel->setEnabled(false);

        gridLayout->addWidget(m_xPhaseLabel, 8, 0, 1, 1);

        m_xPhaseSpin = new QSpinBox(m_parametersGroup);
        m_xPhaseSpin->setObjectName(QString::fromUtf8("m_xPhaseSpin"));
        m_xPhaseSpin->setEnabled(false);
        m_xPhaseSpin->setMaximum(360);
        m_xPhaseSpin->setValue(90);

        gridLayout->addWidget(m_xPhaseSpin, 8, 1, 1, 1);

        m_yPhaseLabel = new QLabel(m_parametersGroup);
        m_yPhaseLabel->setObjectName(QString::fromUtf8("m_yPhaseLabel"));
        m_yPhaseLabel->setEnabled(false);

        gridLayout->addWidget(m_yPhaseLabel, 9, 0, 1, 1);

        m_yPhaseSpin = new QSpinBox(m_parametersGroup);
        m_yPhaseSpin->setObjectName(QString::fromUtf8("m_yPhaseSpin"));
        m_yPhaseSpin->setEnabled(false);
        m_yPhaseSpin->setMaximum(360);
        m_yPhaseSpin->setValue(90);

        gridLayout->addWidget(m_yPhaseSpin, 9, 1, 1, 1);


        gridLayout_3->addWidget(m_parametersGroup, 1, 2, 2, 1);

        m_directionGroup = new QGroupBox(Movement);
        m_directionGroup->setObjectName(QString::fromUtf8("m_directionGroup"));
        verticalLayout_2 = new QVBoxLayout(m_directionGroup);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_forward = new QRadioButton(m_directionGroup);
        m_forward->setObjectName(QString::fromUtf8("m_forward"));
        m_forward->setChecked(true);

        verticalLayout_2->addWidget(m_forward);

        m_backward = new QRadioButton(m_directionGroup);
        m_backward->setObjectName(QString::fromUtf8("m_backward"));

        verticalLayout_2->addWidget(m_backward);

        verticalSpacer_2 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        gridLayout_3->addWidget(m_directionGroup, 2, 0, 1, 1);

        m_runOrderGroup = new QGroupBox(Movement);
        m_runOrderGroup->setObjectName(QString::fromUtf8("m_runOrderGroup"));
        _2 = new QVBoxLayout(m_runOrderGroup);
        _2->setObjectName(QString::fromUtf8("_2"));
        m_loop = new QRadioButton(m_runOrderGroup);
        m_loop->setObjectName(QString::fromUtf8("m_loop"));
        m_loop->setChecked(true);

        _2->addWidget(m_loop);

        m_singleShot = new QRadioButton(m_runOrderGroup);
        m_singleShot->setObjectName(QString::fromUtf8("m_singleShot"));

        _2->addWidget(m_singleShot);

        m_pingPong = new QRadioButton(m_runOrderGroup);
        m_pingPong->setObjectName(QString::fromUtf8("m_pingPong"));

        _2->addWidget(m_pingPong);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _2->addItem(verticalSpacer_3);


        gridLayout_3->addWidget(m_runOrderGroup, 2, 1, 1, 1);

        m_tab->addTab(Movement, QString());
        Initialization = new QWidget();
        Initialization->setObjectName(QString::fromUtf8("Initialization"));
        gridLayout1 = new QGridLayout(Initialization);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        m_startSceneGroup = new QGroupBox(Initialization);
        m_startSceneGroup->setObjectName(QString::fromUtf8("m_startSceneGroup"));
        m_startSceneGroup->setCheckable(true);
        vboxLayout = new QVBoxLayout(m_startSceneGroup);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_startSceneList = new QTreeWidget(m_startSceneGroup);
        m_startSceneList->setObjectName(QString::fromUtf8("m_startSceneList"));
        m_startSceneList->setAlternatingRowColors(true);
        m_startSceneList->setRootIsDecorated(false);
        m_startSceneList->setItemsExpandable(false);
        m_startSceneList->setSortingEnabled(true);
        m_startSceneList->setAllColumnsShowFocus(true);

        vboxLayout->addWidget(m_startSceneList);


        gridLayout1->addWidget(m_startSceneGroup, 0, 0, 1, 1);

        m_stopSceneGroup = new QGroupBox(Initialization);
        m_stopSceneGroup->setObjectName(QString::fromUtf8("m_stopSceneGroup"));
        m_stopSceneGroup->setCheckable(true);
        vboxLayout1 = new QVBoxLayout(m_stopSceneGroup);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        m_stopSceneList = new QTreeWidget(m_stopSceneGroup);
        m_stopSceneList->setObjectName(QString::fromUtf8("m_stopSceneList"));
        m_stopSceneList->setAlternatingRowColors(true);
        m_stopSceneList->setRootIsDecorated(false);
        m_stopSceneList->setItemsExpandable(false);
        m_stopSceneList->setSortingEnabled(true);
        m_stopSceneList->setAllColumnsShowFocus(true);

        vboxLayout1->addWidget(m_stopSceneList);


        gridLayout1->addWidget(m_stopSceneGroup, 0, 1, 1, 1);

        m_tab->addTab(Initialization, QString());

        verticalLayout->addWidget(m_tab);

        buttonBox = new QDialogButtonBox(EFXEditor);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EFXEditor);
        QObject::connect(buttonBox, SIGNAL(accepted()), EFXEditor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EFXEditor, SLOT(reject()));

        m_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EFXEditor);
    } // setupUi

    void retranslateUi(QDialog *EFXEditor)
    {
        EFXEditor->setWindowTitle(QApplication::translate("EFXEditor", "EFX Editor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_tab->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        m_nameLabel->setText(QApplication::translate("EFXEditor", "EFX name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_nameEdit->setToolTip(QApplication::translate("EFXEditor", "The name of the function being edited", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = m_tree->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("EFXEditor", "Reverse", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("EFXEditor", "Fixture", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("EFXEditor", "Step", 0, QApplication::UnicodeUTF8));
        m_orderGroup->setTitle(QApplication::translate("EFXEditor", "Fixture order", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_parallelRadio->setToolTip(QApplication::translate("EFXEditor", "All fixtures move in parallel", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_parallelRadio->setText(QApplication::translate("EFXEditor", "Parallel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_serialRadio->setToolTip(QApplication::translate("EFXEditor", "The pattern propagates to each fixture in a sequential order", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_serialRadio->setText(QApplication::translate("EFXEditor", "Serial", 0, QApplication::UnicodeUTF8));
        m_busGroup->setTitle(QApplication::translate("EFXEditor", "Speed bus", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_busCombo->setToolTip(QApplication::translate("EFXEditor", "Bus that controls the speed of the pattern", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_tab->setTabText(m_tab->indexOf(General), QApplication::translate("EFXEditor", "General", 0, QApplication::UnicodeUTF8));
        m_algorithmGroup->setTitle(QApplication::translate("EFXEditor", "Pattern", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_algorithmCombo->setToolTip(QApplication::translate("EFXEditor", "Pattern for moving the mirror/head", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_parametersGroup->setTitle(QApplication::translate("EFXEditor", "Parameters", 0, QApplication::UnicodeUTF8));
        m_widthLabel->setText(QApplication::translate("EFXEditor", "Width", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_widthSpin->setToolTip(QApplication::translate("EFXEditor", "Value width of the pattern", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_heightLabel->setText(QApplication::translate("EFXEditor", "Height", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_heightSpin->setToolTip(QApplication::translate("EFXEditor", "Value height of the pattern", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_xOffsetLabel->setText(QApplication::translate("EFXEditor", "X offset", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_xOffsetSpin->setToolTip(QApplication::translate("EFXEditor", "Pattern's center point on the X axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_yOffsetLabel->setText(QApplication::translate("EFXEditor", "Y offset", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_yOffsetSpin->setToolTip(QApplication::translate("EFXEditor", "Pattern's center point on the Y axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_rotationLabel->setText(QApplication::translate("EFXEditor", "Rotation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_rotationSpin->setToolTip(QApplication::translate("EFXEditor", "Rotation of the pattern's starting point", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_xFrequencyLabel->setText(QApplication::translate("EFXEditor", "X frequency", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_xFrequencySpin->setToolTip(QApplication::translate("EFXEditor", "Lissajous pattern's X frequency", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_yFrequencyLabel->setText(QApplication::translate("EFXEditor", "Y frequency", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_yFrequencySpin->setToolTip(QApplication::translate("EFXEditor", "Lissajous pattern's Y frequency", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_xPhaseLabel->setText(QApplication::translate("EFXEditor", "X phase", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_xPhaseSpin->setToolTip(QApplication::translate("EFXEditor", "Lissajous pattern's X phase", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_yPhaseLabel->setText(QApplication::translate("EFXEditor", "Y phase", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_yPhaseSpin->setToolTip(QApplication::translate("EFXEditor", "Lissajous pattern's Y phase", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_directionGroup->setTitle(QApplication::translate("EFXEditor", "Direction", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_forward->setToolTip(QApplication::translate("EFXEditor", "Run the pattern forwards", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_forward->setText(QApplication::translate("EFXEditor", "Forward", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_backward->setToolTip(QApplication::translate("EFXEditor", "Run the pattern backwards", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_backward->setText(QApplication::translate("EFXEditor", "Backward", 0, QApplication::UnicodeUTF8));
        m_runOrderGroup->setTitle(QApplication::translate("EFXEditor", "Run order", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_loop->setToolTip(QApplication::translate("EFXEditor", "Run through over and over again", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_loop->setText(QApplication::translate("EFXEditor", "Loop", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_singleShot->setToolTip(QApplication::translate("EFXEditor", "Run through once and stop", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_singleShot->setText(QApplication::translate("EFXEditor", "Single shot", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_pingPong->setToolTip(QApplication::translate("EFXEditor", "First run forwards, then backwards, again forwards, etc...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_pingPong->setText(QApplication::translate("EFXEditor", "Ping pong", 0, QApplication::UnicodeUTF8));
        m_tab->setTabText(m_tab->indexOf(Movement), QApplication::translate("EFXEditor", "Movement", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_startSceneGroup->setToolTip(QApplication::translate("EFXEditor", "Initialize the fixture with the given scene values when the EFX starts", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_startSceneGroup->setTitle(QApplication::translate("EFXEditor", "Initialize fixtures", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = m_startSceneList->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("EFXEditor", "Scene", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_stopSceneGroup->setToolTip(QApplication::translate("EFXEditor", "De-initialize the fixture with the given scene values when the EFX stops", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_stopSceneGroup->setTitle(QApplication::translate("EFXEditor", "De-initialize fixtures", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = m_stopSceneList->headerItem();
        ___qtreewidgetitem2->setText(0, QApplication::translate("EFXEditor", "Scene", 0, QApplication::UnicodeUTF8));
        m_tab->setTabText(m_tab->indexOf(Initialization), QApplication::translate("EFXEditor", "Initialization", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EFXEditor: public Ui_EFXEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EFXEDITOR_H
