#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_ploginform(nullptr),
	m_bdbsisconnect(false)
{

    ui->setupUi(this);
    m_ploginform = new Login(this);
	m_ploginform->setWindowTitle("Login");
	m_ploginform->setWindowFlag(Qt::FramelessWindowHint);
    connect(this->ui->actionLink,&QAction::triggered,this,&MainWindow::LinkToDataBase);
    (this->m_db) = QSqlDatabase::addDatabase("QMYSQL");
	m_ploginform->showFullScreen();
}
MainWindow::~MainWindow()
{
	for (auto &sqlmodel:m_pquerymodellist)
	{
		delete sqlmodel.second;
	}
    if(m_ploginform!=nullptr)
    {
        delete m_ploginform;
		m_ploginform = nullptr;
    }
    this->m_db.close();
    delete ui;
}

void MainWindow::cleardatatableview()
{
	for (auto &sqlmodel : m_pquerymodellist)
	{
		 sqlmodel.second->clear();
	}
	this->ui->Agenda_view->clearSpans();
	this->ui->RCA_view->clearSpans();
	this->ui->Ruma_view->clearSpans();
	this->ui->Te_view->clearSpans();
	this->ui->RPV_view->clearSpans();
	this->ui->ParHr_view->clearSpans();
	this->ui->Mirco_view->clearSpans();
	this->ui->CAL_TA_view->clearSpans();
	this->ui->ManualTc_view->clearSpans();
	this->ui->RCA_RS_view->clearSpans();
	this->ui->Inter_RS_view->clearSpans();
	this->ui->SPD_view->clearSpans();
	this->ui->FCC_RS_view->clearSpans();

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
	if (!m_bdbsisconnect)
	{

		if (this->m_db.isValid() && !this->m_db.isOpen())
		{
			this->m_db.setHostName(Hostip);
			this->m_db.setPort(databaseport.toInt());
			this->m_db.setUserName(user);
			this->m_db.setPassword(password);
			this->m_db.setDatabaseName(databasename);
			if (this->m_db.open())
			{
				QMessageBox::information(this, "Good", "Connect Succes.");
				this->ui->actionLink->setIcon(QIcon(":/Action/actionimage/imageresource/unlink.png"));
				m_bdbsisconnect = true;
			}
			else
			{
				QSqlError sqlerror = this->m_db.lastError();
				QMessageBox::critical(this, "Error", sqlerror.text());
				m_ploginform->showNormal();
			}
		}
		else
		{
			QMessageBox::critical(this, "Error", "Connect fail,please check.");
		}
		
		this->m_pquerymodellist.insert({ "Agenda", new QSqlQueryModel});
		this->m_pquerymodellist.at("Agenda")->setQuery("select * from sakila.actor");
		this->m_pquerymodellist.at("Agenda")->setHeaderData(0, Qt::Horizontal, "actor_id");
		this->m_pquerymodellist.at("Agenda")->setHeaderData(1, Qt::Horizontal, "first_name");
		this->m_pquerymodellist.at("Agenda")->setHeaderData(2, Qt::Horizontal, "last_name");
		this->m_pquerymodellist.at("Agenda")->setHeaderData(3, Qt::Horizontal, "last_update");
		this->ui->Agenda_view->setModel(this->m_pquerymodellist.at("Agenda"));
		this->ui->Agenda_view->show();
	}
	else
	{
		if (this->m_db.isOpen())
		{
			this->m_db.close();
			this->cleardatatableview();
			this->ui->actionLink->setIcon(QIcon(":/Action/actionimage/imageresource/link.png"));
			m_bdbsisconnect = false;
		}
	}
	return  0; 
}
