#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QtWinExtras/QtWinExtras>
#include "resource.h"
#include "login.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    int LinkToDataBase();
	int ConnectToDataBase();
	bool SaveData();
	bool SearchDataAndDisplay();
	bool GetProductinfro();
private:
	void cleardatatableview();
	void connectslots();
	void initdataModel();

private:
    Ui::MainWindow				*ui;
    Login						*m_ploginform;
    QSqlDatabase				 m_db;
	bool						 m_dbbsisconnect;
	std::map<std::string, QSqlTableModel*>	 m_pquerymodellist;
	std::vector<std::string>	m_teconfigname;
	QSqlTableModel				*m_dbproductinfrotable;
	QStringList					m_productclasslist;
	QStandardItemModel			*m_productclasslistmodel;
	QList<QStandardItem*>		m_productItemlist;
	//std::map<std::string, QSqlQueryModel*>	 m_pquerymodellist;
};

#endif // MAINWINDOW_H
