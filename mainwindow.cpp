#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_ploginform(nullptr),
	m_bdbsisconnect(false)
{
    // set ground glass BackGround
    if(QtWin::isCompositionEnabled())
    {
        QtWin::extendFrameIntoClientArea(this,-1,-1,-1,-1);
        setAttribute(Qt::WA_TranslucentBackground,true);
        setAttribute(Qt::WA_NoSystemBackground,false);
        setStyleSheet("MainWindows{Background:transparant;}");
    }
    else
    {
        QtWin::resetExtendedFrame(this);
        setAttribute(Qt::WA_TranslucentBackground,false);
        setStyleSheet(QString("MainWindows{Background:%1;}").arg(QtWin::realColorizationColor().name()));

    }
	
    ui->setupUi(this);
    connectslots();
    m_ploginform = new Login(this);
	m_ploginform->setWindowTitle("Login");
	m_ploginform->setWindowFlag(Qt::FramelessWindowHint);


    (this->m_db) = QSqlDatabase::addDatabase("QMYSQL");
    if (!this->m_db.isValid())
    {
        QMessageBox::critical(this,"Error","can't find database dirver");
        //exit(0);
    }
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
bool MainWindow::SaveData()
{
	for (auto &sqlmodel : m_pquerymodellist)
	{
		sqlmodel.second->database().transaction();
		if (sqlmodel.second->submitAll())
		{
			sqlmodel.second->database().commit();
		}
		else
		{
			sqlmodel.second->database().rollback();
			QMessageBox::warning(this, tr("tableModel"), tr("DataBase error: % 1").arg(sqlmodel.second->lastError().text()));
			sqlmodel.second->revertAll();
		}
	}
	return false;
}

bool MainWindow::SearchDataAndDisplay()
{
	
	for (auto &model : this->m_teconfigname)
	{
		this->m_pquerymodellist.insert({ model, new QSqlTableModel(this,this->m_db) });
		this->m_pquerymodellist.at(model)->setTable(QString(model.c_str()));
		this->m_pquerymodellist.at(model)->setEditStrategy(QSqlTableModel::OnManualSubmit);
		this->m_pquerymodellist.at(model)->select();
	}
	this->ui->Agenda_view->setModel(this->m_pquerymodellist.at(m_teconfigname[0]));
	this->ui->Agenda_view->show();
	this->ui->Ru_view->setModel(this->m_pquerymodellist.at(m_teconfigname[1]));
	this->ui->Ru_view->show();
	this->ui->Te_view->setModel(this->m_pquerymodellist.at(m_teconfigname[2]));
	this->ui->Te_view->show();
	this->ui->Ruma_view->setModel(this->m_pquerymodellist.at(m_teconfigname[3]));
	this->ui->Ruma_view->show();
	this->ui->RPV_view->setModel(this->m_pquerymodellist.at(m_teconfigname[4]));
	this->ui->RPV_view->show();
	this->ui->ParHr_view->setModel(this->m_pquerymodellist.at(m_teconfigname[5]));
	this->ui->ParHr_view->show();
	this->ui->RCA_view->setModel(this->m_pquerymodellist.at(m_teconfigname[6]));
	this->ui->RCA_view->show();
	this->ui->Mirco_view->setModel(this->m_pquerymodellist.at(m_teconfigname[7]));
	this->ui->Mirco_view->show();
	this->ui->CAL_TA_view->setModel(this->m_pquerymodellist.at(m_teconfigname[8]));
	this->ui->CAL_TA_view->show();
	this->ui->ManualTc_view->setModel(this->m_pquerymodellist.at(m_teconfigname[9]));
	this->ui->ManualTc_view->show();
	this->ui->RCA_RS_view->setModel(this->m_pquerymodellist.at(m_teconfigname[10]));
	this->ui->RCA_RS_view->show();
	this->ui->Inter_RS_view->setModel(this->m_pquerymodellist.at(m_teconfigname[11]));
	this->ui->Inter_RS_view->show();
	this->ui->SPD_view->setModel(this->m_pquerymodellist.at(m_teconfigname[12]));
	this->ui->SPD_view->show();
	this->ui->FCC_RS_view->setModel(this->m_pquerymodellist.at(m_teconfigname[13]));
	this->ui->FCC_RS_view->show();
	return true;
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

void MainWindow::connectslots()
{

	connect(this->ui->actionLink, &QAction::triggered, this, &MainWindow::LinkToDataBase);
	connect(this->ui->actionSave, &QAction::triggered, this, &MainWindow::SaveData);
}

void MainWindow::initdataModel()
{
	this->m_teconfigname.push_back("Agenda");
	this->m_teconfigname.push_back("Ru_CommonInput");
	this->m_teconfigname.push_back("Te_CommonInput");
	this->m_teconfigname.push_back("RumaCreateCustom");
	this->m_teconfigname.push_back("RPV_CommonInput");
	this->m_teconfigname.push_back("ParHr_CommonInput");
	this->m_teconfigname.push_back("RCA_CommonInput");
	this->m_teconfigname.push_back("MircoSlp_CommmonInput");
	this->m_teconfigname.push_back("CAL_TA_CommonInput");
	this->m_teconfigname.push_back("ManualTcConfig");
	this->m_teconfigname.push_back("RCA_RS");
	this->m_teconfigname.push_back("Internal_RS");
	this->m_teconfigname.push_back("SPD");
	this->m_teconfigname.push_back("FCC_RS");


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
				this->ui->actionLink->setToolTip("push this button to disconnect database");
				m_bdbsisconnect = true;
				m_ploginform->showNormal();
                SearchDataAndDisplay();
				

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
            m_ploginform->showNormal();
		}

		
	}
	else
	{
		if (this->m_db.isOpen())
		{

			this->m_db.close();
			this->cleardatatableview();
			this->ui->actionLink->setIcon(QIcon(":/Action/actionimage/imageresource/link.png"));
			this->ui->actionLink->setToolTip("push this button to connect database");
			m_bdbsisconnect = false;
		}
	}
	return  0; 
}
