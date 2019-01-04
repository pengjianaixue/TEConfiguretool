#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
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
	bool SaveData();
private:
	void cleardatatableview();
	void connectslots();

private:
    Ui::MainWindow				*ui;
    Login						*m_ploginform;
    QSqlDatabase				 m_db;
	bool						 m_bdbsisconnect;
	std::map<std::string, QSqlTableModel*>	 m_pquerymodellist;
	//std::map<std::string, QSqlQueryModel*>	 m_pquerymodellist;
};

#endif // MAINWINDOW_H
