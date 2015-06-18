/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *ev_open;
    QAction *ev_save;
    QAction *ev_saveAs;
    QAction *ev_exit;
    QAction *ev_manual;
    QAction *ev_about;
    QAction *upgrade;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QLineEdit *E_fonona;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QLineEdit *eps_0;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QLineEdit *eps_nesk;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_4;
    QCheckBox *chRandomAngle;
    QLineEdit *n_iter;
    QLineEdit *obl_localizacii;
    QLineEdit *temperatura;
    QLineEdit *kut;
    QLineEdit *napr_polia;
    QLineEdit *koef_elektr_sporidn;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_6;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QPushButton *showGraph;
    QPushButton *showTable;
    QPushButton *b_modeling;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout_3;
    QLabel *label_12;
    QComboBox *CheckIntegral;
    QWidget *layoutWidget_3;
    QFormLayout *formLayout_4;
    QComboBox *CheckLow;
    QLabel *label_13;
    QCheckBox *checkBox;
    QWidget *layoutWidget3;
    QFormLayout *formLayout_2;
    QLabel *label_11;
    QComboBox *CheckCristal;
    QLabel *label_14;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(769, 435);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(609, 343));
        MainWindow->setMaximumSize(QSize(900, 500));
        QIcon icon;
        icon.addFile(QStringLiteral("2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        ev_open = new QAction(MainWindow);
        ev_open->setObjectName(QStringLiteral("ev_open"));
        ev_save = new QAction(MainWindow);
        ev_save->setObjectName(QStringLiteral("ev_save"));
        ev_saveAs = new QAction(MainWindow);
        ev_saveAs->setObjectName(QStringLiteral("ev_saveAs"));
        ev_exit = new QAction(MainWindow);
        ev_exit->setObjectName(QStringLiteral("ev_exit"));
        ev_manual = new QAction(MainWindow);
        ev_manual->setObjectName(QStringLiteral("ev_manual"));
        ev_about = new QAction(MainWindow);
        ev_about->setObjectName(QStringLiteral("ev_about"));
        upgrade = new QAction(MainWindow);
        upgrade->setObjectName(QStringLiteral("upgrade"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 601, 315));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(191, 133));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(17, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        E_fonona = new QLineEdit(groupBox_2);
        E_fonona->setObjectName(QStringLiteral("E_fonona"));

        verticalLayout_2->addWidget(E_fonona);

        verticalSpacer_6 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setMinimumSize(QSize(221, 133));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 191, 111));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        eps_0 = new QLineEdit(layoutWidget1);
        eps_0->setObjectName(QStringLiteral("eps_0"));

        verticalLayout_3->addWidget(eps_0);

        verticalSpacer_2 = new QSpacerItem(17, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        eps_nesk = new QLineEdit(layoutWidget1);
        eps_nesk->setObjectName(QStringLiteral("eps_nesk"));

        verticalLayout_3->addWidget(eps_nesk);

        verticalSpacer_4 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        verticalLayout_4->addWidget(groupBox);


        formLayout->setWidget(0, QFormLayout::LabelRole, groupBox_3);

        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        chRandomAngle = new QCheckBox(groupBox_4);
        chRandomAngle->setObjectName(QStringLiteral("chRandomAngle"));
        chRandomAngle->setGeometry(QRect(70, 210, 141, 20));
        n_iter = new QLineEdit(groupBox_4);
        n_iter->setObjectName(QStringLiteral("n_iter"));
        n_iter->setGeometry(QRect(13, 50, 265, 20));
        obl_localizacii = new QLineEdit(groupBox_4);
        obl_localizacii->setObjectName(QStringLiteral("obl_localizacii"));
        obl_localizacii->setGeometry(QRect(13, 96, 265, 20));
        temperatura = new QLineEdit(groupBox_4);
        temperatura->setObjectName(QStringLiteral("temperatura"));
        temperatura->setGeometry(QRect(13, 281, 265, 21));
        kut = new QLineEdit(groupBox_4);
        kut->setObjectName(QStringLiteral("kut"));
        kut->setGeometry(QRect(13, 235, 265, 20));
        napr_polia = new QLineEdit(groupBox_4);
        napr_polia->setObjectName(QStringLiteral("napr_polia"));
        napr_polia->setGeometry(QRect(13, 189, 265, 20));
        koef_elektr_sporidn = new QLineEdit(groupBox_4);
        koef_elektr_sporidn->setObjectName(QStringLiteral("koef_elektr_sporidn"));
        koef_elektr_sporidn->setGeometry(QRect(13, 142, 265, 21));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(13, 261, 87, 16));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(13, 169, 126, 16));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(13, 122, 259, 16));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(13, 215, 28, 16));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(13, 76, 129, 16));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 30, 119, 16));
        n_iter->raise();
        obl_localizacii->raise();
        temperatura->raise();
        kut->raise();
        napr_polia->raise();
        koef_elektr_sporidn->raise();
        label_10->raise();
        label_8->raise();
        label_4->raise();
        label_9->raise();
        label_7->raise();
        label_6->raise();
        chRandomAngle->raise();

        formLayout->setWidget(0, QFormLayout::FieldRole, groupBox_4);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(620, 110, 101, 111));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        showGraph = new QPushButton(layoutWidget2);
        showGraph->setObjectName(QStringLiteral("showGraph"));

        verticalLayout->addWidget(showGraph);

        showTable = new QPushButton(layoutWidget2);
        showTable->setObjectName(QStringLiteral("showTable"));

        verticalLayout->addWidget(showTable);


        verticalLayout_5->addLayout(verticalLayout);

        b_modeling = new QPushButton(layoutWidget2);
        b_modeling->setObjectName(QStringLiteral("b_modeling"));

        verticalLayout_5->addWidget(b_modeling);

        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 330, 197, 51));
        formLayout_3 = new QFormLayout(layoutWidget_2);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_12);

        CheckIntegral = new QComboBox(layoutWidget_2);
        CheckIntegral->setObjectName(QStringLiteral("CheckIntegral"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, CheckIntegral);

        layoutWidget_3 = new QWidget(centralWidget);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(240, 330, 197, 51));
        formLayout_4 = new QFormLayout(layoutWidget_3);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        CheckLow = new QComboBox(layoutWidget_3);
        CheckLow->setObjectName(QStringLiteral("CheckLow"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, CheckLow);

        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_13);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(450, 330, 291, 16));
        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(610, 10, 112, 44));
        formLayout_2 = new QFormLayout(layoutWidget3);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_11);

        CheckCristal = new QComboBox(layoutWidget3);
        CheckCristal->setObjectName(QStringLiteral("CheckCristal"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, CheckCristal);

        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(610, 270, 266, 14));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(610, 290, 141, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 769, 19));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(ev_open);
        menu->addAction(ev_save);
        menu->addAction(ev_saveAs);
        menu->addSeparator();
        menu->addAction(ev_exit);
        menu_2->addSeparator();
        menu_2->addSeparator();
        menu_2->addAction(ev_manual);
        menu_2->addSeparator();
        menu_2->addAction(ev_about);
        menu_2->addAction(upgrade);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ExCiton 0.2", 0));
        ev_open->setText(QApplication::translate("MainWindow", "\320\222\321\226\320\264\320\272\321\200\320\270\321\202\320\270 \320\272\320\276\320\275\321\204\321\226\320\263\321\203\321\200\320\260\321\206\321\226\320\271\320\275\320\270\320\271 \321\204\320\260\320\271\320\273", 0));
        ev_open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        ev_save->setText(QApplication::translate("MainWindow", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", 0));
        ev_save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        ev_saveAs->setText(QApplication::translate("MainWindow", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270 \321\217\320\272", 0));
        ev_saveAs->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        ev_exit->setText(QApplication::translate("MainWindow", "\320\222\320\270\321\205\321\226\320\264", 0));
        ev_exit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        ev_manual->setText(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
        ev_manual->setShortcut(QApplication::translate("MainWindow", "F1", 0));
        ev_about->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\321\203", 0));
        upgrade->setText(QApplication::translate("MainWindow", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270", 0));
        groupBox_3->setTitle(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\270 \321\204\320\276\320\275\320\276\320\275\321\226\320\262", 0));
        label_5->setText(QApplication::translate("MainWindow", "\320\225\320\275\320\265\321\200\320\263\321\226\321\217 \321\204\320\276\320\275\320\276\320\275\320\260, \320\265\320\222", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\224\321\226\320\265\320\273\320\265\320\272\321\202\321\200\320\270\321\207\320\275\320\260 \320\277\321\200\320\276\320\275\320\270\320\272\320\273\320\270\320\262\321\226\321\201\321\202\321\214 \320\274\320\260\321\202\320\265\321\200\321\226\320\260\320\273\321\203", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\207\320\275\320\260", 0));
        label->setText(QApplication::translate("MainWindow", "\320\222\320\270\321\201\320\276\320\272\320\276\321\207\320\260\321\201\321\202\320\276\321\202\320\275\320\260", 0));
        groupBox_4->setTitle(QString());
        chRandomAngle->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\275\320\264\320\276\320\274\320\275\320\270\320\271 \320\272\321\203\321\202", 0));
        label_10->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", 0));
        label_8->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\321\203\320\266\320\265\320\275\321\226\321\201\321\202\321\214 \320\277\320\276\320\273\321\217", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\265\321\204\321\226\321\206\321\226\321\224\320\275\321\202 \320\265\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\320\276\320\263\320\276 \321\201\320\277\320\276\321\200\321\226\320\264\320\275\320\265\320\275\320\275\321\217", 0));
        label_9->setText(QApplication::translate("MainWindow", "\320\232\321\203\321\202 ", 0));
        label_7->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\273\320\260\321\201\321\202\321\214 \320\273\320\276\320\272\320\260\320\273\321\226\320\267\320\260\321\206\321\226\321\227", 0));
        label_6->setText(QApplication::translate("MainWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \321\226\321\202\320\265\321\200\320\260\321\206\321\226\320\271", 0));
        showGraph->setText(QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\321\226\320\272", 0));
        showTable->setText(QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\321\217", 0));
        b_modeling->setText(QApplication::translate("MainWindow", "\320\227\320\274\320\276\320\264\320\265\320\273\321\216\320\262\320\260\321\202\320\270", 0));
        label_12->setText(QApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264 \321\200\320\276\320\267\321\200\320\260\321\205\321\203\320\275\320\272\321\203 \321\226\320\275\321\202\320\265\320\263\321\200\320\260\320\273\321\203", 0));
        label_13->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\320\276\320\275 \321\200\320\276\321\201\320\277\320\276\320\264\321\226\320\273\321\203", 0));
        checkBox->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\260\321\205\321\203\320\262\320\260\321\202\320\270 \320\275\320\260\321\217\320\262\320\275\321\226\321\201\321\202\321\214 \321\202\320\276\321\207\320\272\320\276\320\262\320\270\321\205 \320\264\320\265\321\204\320\265\320\272\321\202\321\226\320\262", 0));
        label_11->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\261\321\226\321\200 \320\272\321\200\320\270\321\201\321\202\320\260\320\273\321\203", 0));
        label_14->setText(QApplication::translate("MainWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\225\320\225", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
