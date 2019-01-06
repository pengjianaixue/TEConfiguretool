/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLink;
    QAction *actionSave;
    QWidget *centralWidget;
    QGridLayout *gridLayout_12;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTreeView *treeView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *Agenda;
    QGridLayout *gridLayout_13;
    QTableView *Agenda_view;
    QWidget *Ru_CommonInput;
    QGridLayout *gridLayout_3;
    QTableView *Ru_view;
    QWidget *Te_CommonInput;
    QGridLayout *gridLayout_4;
    QTableView *Te_view;
    QWidget *RumaCreateCustom;
    QGridLayout *gridLayout_5;
    QTableView *Ruma_view;
    QWidget *tab_6;
    QGridLayout *gridLayout_6;
    QTableView *RPV_view;
    QWidget *tab_8;
    QGridLayout *gridLayout_8;
    QTableView *ParHr_view;
    QWidget *tab_7;
    QGridLayout *gridLayout_7;
    QTableView *RCA_view;
    QWidget *tab_9;
    QGridLayout *gridLayout_9;
    QTableView *Mirco_view;
    QWidget *tab_10;
    QGridLayout *gridLayout_10;
    QTableView *CAL_TA_view;
    QWidget *tab_3;
    QGridLayout *gridLayout_11;
    QTableView *ManualTc_view;
    QWidget *tab;
    QGridLayout *gridLayout_14;
    QTableView *RCA_RS_view;
    QWidget *tab_11;
    QGridLayout *gridLayout_15;
    QTableView *Inter_RS_view;
    QWidget *tab_12;
    QGridLayout *gridLayout_16;
    QTableView *SPD_view;
    QWidget *tab_13;
    QGridLayout *gridLayout_17;
    QTableView *FCC_RS_view;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1116, 706);
        actionLink = new QAction(MainWindow);
        actionLink->setObjectName(QString::fromUtf8("actionLink"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Action/actionimage/imageresource/link.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLink->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Action/actionimage/imageresource/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_12 = new QGridLayout(centralWidget);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeView = new QTreeView(groupBox);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setAcceptDrops(false);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        Agenda = new QWidget();
        Agenda->setObjectName(QString::fromUtf8("Agenda"));
        gridLayout_13 = new QGridLayout(Agenda);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        Agenda_view = new QTableView(Agenda);
        Agenda_view->setObjectName(QString::fromUtf8("Agenda_view"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Agenda_view->sizePolicy().hasHeightForWidth());
        Agenda_view->setSizePolicy(sizePolicy2);

        gridLayout_13->addWidget(Agenda_view, 0, 0, 1, 1);

        tabWidget->addTab(Agenda, QString());
        Ru_CommonInput = new QWidget();
        Ru_CommonInput->setObjectName(QString::fromUtf8("Ru_CommonInput"));
        gridLayout_3 = new QGridLayout(Ru_CommonInput);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        Ru_view = new QTableView(Ru_CommonInput);
        Ru_view->setObjectName(QString::fromUtf8("Ru_view"));

        gridLayout_3->addWidget(Ru_view, 0, 0, 1, 1);

        tabWidget->addTab(Ru_CommonInput, QString());
        Te_CommonInput = new QWidget();
        Te_CommonInput->setObjectName(QString::fromUtf8("Te_CommonInput"));
        gridLayout_4 = new QGridLayout(Te_CommonInput);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        Te_view = new QTableView(Te_CommonInput);
        Te_view->setObjectName(QString::fromUtf8("Te_view"));

        gridLayout_4->addWidget(Te_view, 0, 0, 1, 1);

        tabWidget->addTab(Te_CommonInput, QString());
        RumaCreateCustom = new QWidget();
        RumaCreateCustom->setObjectName(QString::fromUtf8("RumaCreateCustom"));
        gridLayout_5 = new QGridLayout(RumaCreateCustom);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        Ruma_view = new QTableView(RumaCreateCustom);
        Ruma_view->setObjectName(QString::fromUtf8("Ruma_view"));

        gridLayout_5->addWidget(Ruma_view, 0, 0, 1, 1);

        tabWidget->addTab(RumaCreateCustom, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_6 = new QGridLayout(tab_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        RPV_view = new QTableView(tab_6);
        RPV_view->setObjectName(QString::fromUtf8("RPV_view"));

        gridLayout_6->addWidget(RPV_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        gridLayout_8 = new QGridLayout(tab_8);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        ParHr_view = new QTableView(tab_8);
        ParHr_view->setObjectName(QString::fromUtf8("ParHr_view"));

        gridLayout_8->addWidget(ParHr_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        gridLayout_7 = new QGridLayout(tab_7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        RCA_view = new QTableView(tab_7);
        RCA_view->setObjectName(QString::fromUtf8("RCA_view"));

        gridLayout_7->addWidget(RCA_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        gridLayout_9 = new QGridLayout(tab_9);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        Mirco_view = new QTableView(tab_9);
        Mirco_view->setObjectName(QString::fromUtf8("Mirco_view"));

        gridLayout_9->addWidget(Mirco_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        gridLayout_10 = new QGridLayout(tab_10);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        CAL_TA_view = new QTableView(tab_10);
        CAL_TA_view->setObjectName(QString::fromUtf8("CAL_TA_view"));

        gridLayout_10->addWidget(CAL_TA_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_10, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_11 = new QGridLayout(tab_3);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        ManualTc_view = new QTableView(tab_3);
        ManualTc_view->setObjectName(QString::fromUtf8("ManualTc_view"));

        gridLayout_11->addWidget(ManualTc_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_14 = new QGridLayout(tab);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        RCA_RS_view = new QTableView(tab);
        RCA_RS_view->setObjectName(QString::fromUtf8("RCA_RS_view"));

        gridLayout_14->addWidget(RCA_RS_view, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        gridLayout_15 = new QGridLayout(tab_11);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        Inter_RS_view = new QTableView(tab_11);
        Inter_RS_view->setObjectName(QString::fromUtf8("Inter_RS_view"));

        gridLayout_15->addWidget(Inter_RS_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        gridLayout_16 = new QGridLayout(tab_12);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        SPD_view = new QTableView(tab_12);
        SPD_view->setObjectName(QString::fromUtf8("SPD_view"));

        gridLayout_16->addWidget(SPD_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QString::fromUtf8("tab_13"));
        gridLayout_17 = new QGridLayout(tab_13);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        FCC_RS_view = new QTableView(tab_13);
        FCC_RS_view->setObjectName(QString::fromUtf8("FCC_RS_view"));

        gridLayout_17->addWidget(FCC_RS_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_13, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        splitter->addWidget(groupBox_2);

        gridLayout_12->addWidget(splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1116, 17));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAbout->menuAction());
        mainToolBar->addAction(actionLink);
        mainToolBar->addAction(actionSave);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLink->setText(QApplication::translate("MainWindow", "Link", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLink->setToolTip(QApplication::translate("MainWindow", " push the  button to link the database", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionLink->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "push this button to save data", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        groupBox->setTitle(QApplication::translate("MainWindow", "product list", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "product info", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Agenda), QApplication::translate("MainWindow", "Agenda", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Ru_CommonInput), QApplication::translate("MainWindow", "Ru_CommonInput", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Te_CommonInput), QApplication::translate("MainWindow", "Te_CommonInput", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(RumaCreateCustom), QApplication::translate("MainWindow", "RumaCreateCustom", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "RPV_CommonInput", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "ParHr_CommonInput", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "RCA_CommonInput", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "MicroSlp_CommonInput", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("MainWindow", "CAL_TA_CommonInput", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "ManualTcConfig", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "RCA_RS", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_11), QApplication::translate("MainWindow", "Internal_RS", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_12), QApplication::translate("MainWindow", "SPD", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_13), QApplication::translate("MainWindow", "FCC_RS", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
