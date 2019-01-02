/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QTableView *tableView;
    QWidget *Ru_CommonInput;
    QGridLayout *gridLayout_3;
    QTableView *tableView_2;
    QWidget *Te_CommonInput;
    QGridLayout *gridLayout_4;
    QTableView *tableView_3;
    QWidget *RumaCreateCustom;
    QGridLayout *gridLayout_5;
    QTableView *tableView_4;
    QWidget *tab_6;
    QGridLayout *gridLayout_6;
    QTableView *tableView_5;
    QWidget *tab_7;
    QGridLayout *gridLayout_7;
    QTableView *tableView_6;
    QWidget *tab_8;
    QGridLayout *gridLayout_8;
    QTableView *tableView_7;
    QWidget *tab_9;
    QGridLayout *gridLayout_9;
    QTableView *tableView_8;
    QWidget *tab_10;
    QGridLayout *gridLayout_10;
    QTableView *tableView_9;
    QWidget *tab_3;
    QGridLayout *gridLayout_11;
    QTableView *tableView_10;
    QWidget *tab;
    QGridLayout *gridLayout_14;
    QTableView *tableView_11;
    QWidget *tab_11;
    QGridLayout *gridLayout_15;
    QTableView *tableView_12;
    QWidget *tab_12;
    QGridLayout *gridLayout_16;
    QTableView *tableView_13;
    QWidget *tab_13;
    QGridLayout *gridLayout_17;
    QTableView *tableView_14;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(931, 496);
        actionLink = new QAction(MainWindow);
        actionLink->setObjectName(QStringLiteral("actionLink"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Action/actionimage/imageresource/link.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLink->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_12 = new QGridLayout(centralWidget);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        treeView = new QTreeView(groupBox);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setAcceptDrops(false);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral(""));
        Agenda = new QWidget();
        Agenda->setObjectName(QStringLiteral("Agenda"));
        gridLayout_13 = new QGridLayout(Agenda);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        tableView = new QTableView(Agenda);
        tableView->setObjectName(QStringLiteral("tableView"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy2);

        gridLayout_13->addWidget(tableView, 0, 0, 1, 1);

        tabWidget->addTab(Agenda, QString());
        Ru_CommonInput = new QWidget();
        Ru_CommonInput->setObjectName(QStringLiteral("Ru_CommonInput"));
        gridLayout_3 = new QGridLayout(Ru_CommonInput);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableView_2 = new QTableView(Ru_CommonInput);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        gridLayout_3->addWidget(tableView_2, 0, 0, 1, 1);

        tabWidget->addTab(Ru_CommonInput, QString());
        Te_CommonInput = new QWidget();
        Te_CommonInput->setObjectName(QStringLiteral("Te_CommonInput"));
        gridLayout_4 = new QGridLayout(Te_CommonInput);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tableView_3 = new QTableView(Te_CommonInput);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));

        gridLayout_4->addWidget(tableView_3, 0, 0, 1, 1);

        tabWidget->addTab(Te_CommonInput, QString());
        RumaCreateCustom = new QWidget();
        RumaCreateCustom->setObjectName(QStringLiteral("RumaCreateCustom"));
        gridLayout_5 = new QGridLayout(RumaCreateCustom);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        tableView_4 = new QTableView(RumaCreateCustom);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));

        gridLayout_5->addWidget(tableView_4, 0, 0, 1, 1);

        tabWidget->addTab(RumaCreateCustom, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayout_6 = new QGridLayout(tab_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        tableView_5 = new QTableView(tab_6);
        tableView_5->setObjectName(QStringLiteral("tableView_5"));

        gridLayout_6->addWidget(tableView_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        gridLayout_7 = new QGridLayout(tab_7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        tableView_6 = new QTableView(tab_7);
        tableView_6->setObjectName(QStringLiteral("tableView_6"));

        gridLayout_7->addWidget(tableView_6, 0, 0, 1, 1);

        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        gridLayout_8 = new QGridLayout(tab_8);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        tableView_7 = new QTableView(tab_8);
        tableView_7->setObjectName(QStringLiteral("tableView_7"));

        gridLayout_8->addWidget(tableView_7, 0, 0, 1, 1);

        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        gridLayout_9 = new QGridLayout(tab_9);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        tableView_8 = new QTableView(tab_9);
        tableView_8->setObjectName(QStringLiteral("tableView_8"));

        gridLayout_9->addWidget(tableView_8, 0, 0, 1, 1);

        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        gridLayout_10 = new QGridLayout(tab_10);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        tableView_9 = new QTableView(tab_10);
        tableView_9->setObjectName(QStringLiteral("tableView_9"));

        gridLayout_10->addWidget(tableView_9, 0, 0, 1, 1);

        tabWidget->addTab(tab_10, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_11 = new QGridLayout(tab_3);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        tableView_10 = new QTableView(tab_3);
        tableView_10->setObjectName(QStringLiteral("tableView_10"));

        gridLayout_11->addWidget(tableView_10, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_14 = new QGridLayout(tab);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        tableView_11 = new QTableView(tab);
        tableView_11->setObjectName(QStringLiteral("tableView_11"));

        gridLayout_14->addWidget(tableView_11, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        gridLayout_15 = new QGridLayout(tab_11);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        tableView_12 = new QTableView(tab_11);
        tableView_12->setObjectName(QStringLiteral("tableView_12"));

        gridLayout_15->addWidget(tableView_12, 0, 0, 1, 1);

        tabWidget->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        gridLayout_16 = new QGridLayout(tab_12);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        tableView_13 = new QTableView(tab_12);
        tableView_13->setObjectName(QStringLiteral("tableView_13"));

        gridLayout_16->addWidget(tableView_13, 0, 0, 1, 1);

        tabWidget->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        gridLayout_17 = new QGridLayout(tab_13);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        tableView_14 = new QTableView(tab_13);
        tableView_14->setObjectName(QStringLiteral("tableView_14"));

        gridLayout_17->addWidget(tableView_14, 0, 0, 1, 1);

        tabWidget->addTab(tab_13, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        splitter->addWidget(groupBox_2);

        gridLayout_12->addWidget(splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 931, 17));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAbout->menuAction());
        mainToolBar->addAction(actionLink);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionLink->setText(QApplication::translate("MainWindow", "Link", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLink->setToolTip(QApplication::translate("MainWindow", " push the  button to link the database", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionLink->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        groupBox->setTitle(QApplication::translate("MainWindow", "product list", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "product info", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Agenda), QApplication::translate("MainWindow", "Agenda", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Ru_CommonInput), QApplication::translate("MainWindow", "Ru_CommonInput", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Te_CommonInput), QApplication::translate("MainWindow", "Te_CommonInput", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(RumaCreateCustom), QApplication::translate("MainWindow", "RumaCreateCustom", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "RPV_CommonInput", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "RCA_CommonInput", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "ParHr_CommonInput", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "MicroSlp_CommonInput", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("MainWindow", "CAL_TA_CommonInput", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "ManualTcConfig", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "RCA_RS", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_11), QApplication::translate("MainWindow", "Internal_RS", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_12), QApplication::translate("MainWindow", "SPD", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_13), QApplication::translate("MainWindow", "FCC_RS", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
