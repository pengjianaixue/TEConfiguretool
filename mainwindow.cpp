#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_ploginform(nullptr),
	m_dbbsisconnect(false),
	m_dbproductinfrotable(nullptr)
{

    // set ground glass BackGround
    /*if(QtWin::isCompositionEnabled())
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

    }*/
    ui->setupUi(this);
	this->acceptDrops();
    connectslots();
	initdataModel();
    m_ploginform = new Login();
	m_ploginform->setWindowTitle("Login");
	m_ploginform->setWindowFlag(Qt::FramelessWindowHint);
	m_productclasslistmodel = new QStandardItemModel(this->ui->product_treeView);
    (this->m_db) = QSqlDatabase::addDatabase("QMYSQL");
    if (!this->m_db.isValid())
    {

        QMessageBox::critical(this,"Error","can't find database dirver");
        //exit(0);
    }
	m_dbproductinfrotable = new QSqlTableModel(this, this->m_db);
	//LinkToDataBase();
	m_ploginform->showFullScreen();
	//GetProductinfro();
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
	for (size_t i = 0; i < m_productItemlist.size(); i++)
	{
		delete m_productItemlist[i];
	}
    this->m_db.close();
	m_productclasslistmodel->clear();
	delete m_productclasslistmodel;
    delete ui;
}
int MainWindow::ConnectToDataBase()
{

	return 0;
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
			QMessageBox::warning(this, tr("tableModel"), tr("DataBase error:%1").arg(sqlmodel.second->lastError().text()));
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

bool MainWindow::GetProductinfro()
{
	QStringList productrootnode;
	m_dbproductinfrotable->setTable("product");
	m_dbproductinfrotable->setEditStrategy(QSqlTableModel::OnManualSubmit);
	m_dbproductinfrotable->select();
	
	//int i = m_dbproductinfrotable->rowCount();
	for (size_t i = 0; i < m_dbproductinfrotable->rowCount(); ++i)
	{
		bool isfind = false;
		m_productItemlist.clear();
		QSqlRecord record = m_dbproductinfrotable->record(i);
		QStandardItem* item1 = new QStandardItem(record.value("productclass").toString());
		for (size_t i = 0; i < m_productItemlist.size(); i++)
		{
			if (m_productItemlist[i]->text() == item1->text())
			{
				isfind = true;
				break;
			}
		}
		if (!isfind)
		{
			m_productItemlist.append(item1);
			m_productclasslistmodel->appendRow(m_productItemlist);
		}
		
	}
	this->ui->product_treeView->setModel(m_productclasslistmodel);
	this->ui->product_treeView->show();
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
	this->m_teconfigname.push_back(QString("Agenda").toLower().toStdString());
	this->m_teconfigname.push_back(QString("Ru_CommonInput").toLower().toStdString());
	this->m_teconfigname.push_back(QString("Te_CommonInput").toLower().toStdString());
	this->m_teconfigname.push_back(QString("RumaCreateCustom").toLower().toStdString());
	this->m_teconfigname.push_back(QString("RPV_CommonInput").toLower().toStdString());
	this->m_teconfigname.push_back(QString("ParHr_CommonInput").toLower().toStdString());
	this->m_teconfigname.push_back(QString("RCA_CommonInput").toLower().toStdString());
	this->m_teconfigname.push_back(QString("MircoSlp_CommmonInput").toLower().toStdString());
	this->m_teconfigname.push_back(QString("CAL_TA_CommonInput").toLower().toStdString());
	this->m_teconfigname.push_back(QString("ManualTcConfig").toLower().toStdString());
	this->m_teconfigname.push_back(QString("RCA_RS").toLower().toStdString());
	this->m_teconfigname.push_back(QString("Internal_RS").toLower().toStdString());
	this->m_teconfigname.push_back(QString("SPD").toLower().toStdString());
	this->m_teconfigname.push_back(QString("FCC_RS").toLower().toStdString());


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
	if (!m_dbbsisconnect)
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
				m_dbbsisconnect = true;
				m_ploginform->setModal(true);
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
			m_dbbsisconnect = false;
		}
	}
	return  0; 
}
