#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_ploginform(nullptr)
{

    ui->setupUi(this);
    m_ploginform = new Login(this);
	m_ploginform->setWindowTitle("Login");
	m_ploginform->setWindowFlag(Qt::FramelessWindowHint);
    connect(this->ui->actionLink,&QAction::triggered,this,&MainWindow::LinkToDataBase);


}
MainWindow::~MainWindow()
{

    if(m_ploginform!=nullptr)
    {
        delete m_ploginform;
		m_ploginform = nullptr;
    }
    delete ui;
}

int MainWindow::LinkToDataBase()
{
	
    QSettings *configIniRead = new QSettings(":/Configurefile/databaseconfigure.ini", QSettings::IniFormat);
    QString Hostip = configIniRead->value("/ServerHost/srever_host").toString();
    QString user = configIniRead->value("/ServerHost/server_admin").toString();
    QString password = configIniRead->value("/ServerHost/server_pw").toString();
    QString databasename = configIniRead->value("/ServerHost/server_database").toString();
    QString databaseport = configIniRead->value("/ServerHost/server_port").toString();
    delete configIniRead;
    (this->m_db) = QSqlDatabase::addDatabase("QMYSQL");
    this->m_db.setHostName(Hostip);
    this->m_db.setPort(databaseport.toInt());
    this->m_db.setUserName(user);
    this->m_db.setPassword(password);
    this->m_db.setDatabaseName(databasename);
    if(this->m_db.open())
    {
        QMessageBox::information(this,"Good","Connect Succes.");
    }
    else
    {

		//QMessageBox::critical(this, "Error", "Connect fail,please check.");
		m_ploginform->show();
		
        
    }
	return  0; 
}
