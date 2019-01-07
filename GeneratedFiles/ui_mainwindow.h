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
    QAction *actionSave;
    QWidget *centralWidget;
    QGridLayout *gridLayout_12;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTreeView *product_treeView;
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1116, 706);
        actionLink = new QAction(MainWindow);
        actionLink->setObjectName(QStringLiteral("actionLink"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Action/actionimage/imageresource/link.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLink->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Action/actionimage/imageresource/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
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
        product_treeView = new QTreeView(groupBox);
        product_treeView->setObjectName(QStringLiteral("product_treeView"));
        product_treeView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        gridLayout->addWidget(product_treeView, 0, 0, 1, 1);

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
        Agenda_view = new QTableView(Agenda);
        Agenda_view->setObjectName(QStringLiteral("Agenda_view"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Agenda_view->sizePolicy().hasHeightForWidth());
        Agenda_view->setSizePolicy(sizePolicy2);

        gridLayout_13->addWidget(Agenda_view, 0, 0, 1, 1);

        tabWidget->addTab(Agenda, QString());
        Ru_CommonInput = new QWidget();
        Ru_CommonInput->setObjectName(QStringLiteral("Ru_CommonInput"));
        gridLayout_3 = new QGridLayout(Ru_CommonInput);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        Ru_view = new QTableView(Ru_CommonInput);
        Ru_view->setObjectName(QStringLiteral("Ru_view"));

        gridLayout_3->addWidget(Ru_view, 0, 0, 1, 1);

        tabWidget->addTab(Ru_CommonInput, QString());
        Te_CommonInput = new QWidget();
        Te_CommonInput->setObjectName(QStringLiteral("Te_CommonInput"));
        gridLayout_4 = new QGridLayout(Te_CommonInput);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        Te_view = new QTableView(Te_CommonInput);
        Te_view->setObjectName(QStringLiteral("Te_view"));

        gridLayout_4->addWidget(Te_view, 0, 0, 1, 1);

        tabWidget->addTab(Te_CommonInput, QString());
        RumaCreateCustom = new QWidget();
        RumaCreateCustom->setObjectName(QStringLiteral("RumaCreateCustom"));
        gridLayout_5 = new QGridLayout(RumaCreateCustom);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        Ruma_view = new QTableView(RumaCreateCustom);
        Ruma_view->setObjectName(QStringLiteral("Ruma_view"));

        gridLayout_5->addWidget(Ruma_view, 0, 0, 1, 1);

        tabWidget->addTab(RumaCreateCustom, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayout_6 = new QGridLayout(tab_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        RPV_view = new QTableView(tab_6);
        RPV_view->setObjectName(QStringLiteral("RPV_view"));

        gridLayout_6->addWidget(RPV_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        gridLayout_8 = new QGridLayout(tab_8);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        ParHr_view = new QTableView(tab_8);
        ParHr_view->setObjectName(QStringLiteral("ParHr_view"));

        gridLayout_8->addWidget(ParHr_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        gridLayout_7 = new QGridLayout(tab_7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        RCA_view = new QTableView(tab_7);
        RCA_view->setObjectName(QStringLiteral("RCA_view"));

        gridLayout_7->addWidget(RCA_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        gridLayout_9 = new QGridLayout(tab_9);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        Mirco_view = new QTableView(tab_9);
        Mirco_view->setObjectName(QStringLiteral("Mirco_view"));

        gridLayout_9->addWidget(Mirco_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        gridLayout_10 = new QGridLayout(tab_10);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        CAL_TA_view = new QTableView(tab_10);
        CAL_TA_view->setObjectName(QStringLiteral("CAL_TA_view"));

        gridLayout_10->addWidget(CAL_TA_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_10, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_11 = new QGridLayout(tab_3);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        ManualTc_view = new QTableView(tab_3);
        ManualTc_view->setObjectName(QStringLiteral("ManualTc_view"));

        gridLayout_11->addWidget(ManualTc_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_14 = new QGridLayout(tab);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        RCA_RS_view = new QTableView(tab);
        RCA_RS_view->setObjectName(QStringLiteral("RCA_RS_view"));

        gridLayout_14->addWidget(RCA_RS_view, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        gridLayout_15 = new QGridLayout(tab_11);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        Inter_RS_view = new QTableView(tab_11);
        Inter_RS_view->setObjectName(QStringLiteral("Inter_RS_view"));

        gridLayout_15->addWidget(Inter_RS_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        gridLayout_16 = new QGridLayout(tab_12);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        SPD_view = new QTableView(tab_12);
        SPD_view->setObjectName(QStringLiteral("SPD_view"));

        gridLayout_16->addWidget(SPD_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        gridLayout_17 = new QGridLayout(tab_13);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        FCC_RS_view = new QTableView(tab_13);
        FCC_RS_view->setObjectName(QStringLiteral("FCC_RS_view"));

        gridLayout_17->addWidget(FCC_RS_view, 0, 0, 1, 1);

        tabWidget->addTab(tab_13, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        splitter->addWidget(groupBox_2);

        gridLayout_12->addWidget(splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1116, 31));
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
        mainToolBar->addAction(actionSave);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


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
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "push this button to save data", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        groupBox->setTitle(QApplication::translate("MainWindow", "product list", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "product info", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Agenda), QApplication::translate("MainWindow", "Agenda", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Ru_CommonInput), QApplication::translate("MainWindow", "Ru_CommonInput", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Te_CommonInput), QApplication::translate("MainWindow", "Te_CommonInput", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(RumaCreateCustom), QApplication::translate("MainWindow", "RumaCreateCustom", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "RPV_CommonInput", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "ParHr_CommonInput", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "RCA_CommonInput", Q_NULLPTR));
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
