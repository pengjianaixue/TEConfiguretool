#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_ploginform(nullptr)
//    m_pdb(nullptr)
{
    ui->setupUi(this);
    m_ploginform = new Login(this);
    connect(this->ui->actionLink,&QAction::triggered,this,&MainWindow::LinkToDataBase);


}
MainWindow::~MainWindow()
{
    if(m_ploginform!=nullptr)
    {
        delete m_ploginform;
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
    delete configIniRead;
    (this->m_pdb) = QSqlDatabase::addDatabase("QMYSQL");
    this->m_pdb.setHostName(""+Hostip+"");
    this->m_pdb.setUserName(""+user+"");
    this->m_pdb.setPassword(""+password+"");
    this->m_pdb.setDatabaseName(""+databasename+"");
    if(this->m_pdb.open())
    {
        QMessageBox::information(this,"Good","Connect Succes.");
    }
    else
    {
        QMessageBox::information(this,"Error","Connect fail,please check.");
    }

}
