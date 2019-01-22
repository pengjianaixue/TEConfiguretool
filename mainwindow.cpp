#include "mainwindow.h"
#include "ui_mainwindow.h"
QSqlDatabase				s_dbreousre;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_ploginform(nullptr),
	m_dbbsisconnect(false),
	m_dbproductinfrotable(nullptr),
//	m_Treemodel(nullptr),
	m_userLogindbmodel(nullptr),
	m_LoginFlag(false)
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
	this->acceptDrops();
	s_dbreousre = QSqlDatabase::addDatabase("QMYSQL");
	if (!s_dbreousre.isValid())
	{

		QMessageBox::critical(this, "Error", "can't find database dirver");
		exit(0);
	}
	ConnectToDataBase();
	m_userLogindbmodel = new QSqlQuery(s_dbreousre);
	initdataModel();
    m_ploginform = new Login(this);
	connectslots();
	m_ploginform->setWindowTitle("Login");
	m_ploginform->setWindowFlag(Qt::FramelessWindowHint);
	m_productclasslistmodel = new QStandardItemModel(this->ui->product_treeView);
	m_dbproductinfrotable = new QSqlTableModel(this, s_dbreousre);
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
		m_ploginform->close();
        delete m_ploginform;
		m_ploginform = nullptr;
    }
	for (size_t i = 0; i < (size_t)m_productItemlist.size(); i++)
	{
		if (m_productItemlist[i]!=nullptr)
		{
			delete m_productItemlist[i];
		}
	}
	s_dbreousre.close();
	m_productclasslistmodel->clear();
	delete m_productclasslistmodel;
	delete m_userLogindbmodel;
    delete ui;
}
int MainWindow::ConnectToDataBase()
{
	
	QSettings *configIniRead = new QSettings(":/Configurefile/databaseconfigure.ini", QSettings::IniFormat);
	QString Hostip = configIniRead->value("/ServerHost/srever_host").toString();
	QString user = configIniRead->value("/ServerHost/server_admin").toString();
	QString password = configIniRead->value("/ServerHost/server_pw").toString();
	QString databasename = configIniRead->value("/ServerHost/server_database").toString();
	QString databaseport = configIniRead->value("/ServerHost/server_port").toString();
	delete configIniRead;
	if (s_dbreousre.isValid() && !s_dbreousre.isOpen())
	{
		s_dbreousre.setHostName(Hostip);
		s_dbreousre.setPort(databaseport.toInt());
		s_dbreousre.setUserName(user);
		s_dbreousre.setPassword(password);
		s_dbreousre.setDatabaseName(databasename);
		if (!s_dbreousre.open())
		{
				QSqlError sqlerror = s_dbreousre.lastError();
				QMessageBox::critical(this, "DataBase Error", sqlerror.text());
		}
	}
	else
	{
			QMessageBox::critical(this, "Error", " Don't find dataBase dirver ,Please check.");
	}
	return 0;
}
bool MainWindow::SaveData()
{
	if (m_dbbsisconnect)
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
		return true;
	}
	return false;
}
bool MainWindow::SearchDataAndDisplay()
{

	for (auto &model : this->m_teconfigname)
	{
		this->m_pquerymodellist.insert({ model, new QSqlTableModel(this,s_dbreousre) });
		this->m_pquerymodellist.at(model)->setTable(QString(model.c_str()));
		this->m_pquerymodellist.at(model)->setEditStrategy(QSqlTableModel::OnManualSubmit);
		this->m_pquerymodellist.at(model)->select();
	}
	this->ui->Agenda_view->setModel(this->m_pquerymodellist.at(m_teconfigname[0]));
	this->ui->Ru_view->setModel(this->m_pquerymodellist.at(m_teconfigname[1]));
	this->ui->Te_view->setModel(this->m_pquerymodellist.at(m_teconfigname[2]));
	this->ui->Ruma_view->setModel(this->m_pquerymodellist.at(m_teconfigname[3]));
	this->ui->RPV_view->setModel(this->m_pquerymodellist.at(m_teconfigname[4]));
	this->ui->ParHr_view->setModel(this->m_pquerymodellist.at(m_teconfigname[5]));
	this->ui->RCA_view->setModel(this->m_pquerymodellist.at(m_teconfigname[6]));
	this->ui->Mirco_view->setModel(this->m_pquerymodellist.at(m_teconfigname[7]));
	this->ui->CAL_TA_view->setModel(this->m_pquerymodellist.at(m_teconfigname[8]));
	this->ui->ManualTc_view->setModel(this->m_pquerymodellist.at(m_teconfigname[9]));
	this->ui->RCA_RS_view->setModel(this->m_pquerymodellist.at(m_teconfigname[10]));
	this->ui->Inter_RS_view->setModel(this->m_pquerymodellist.at(m_teconfigname[11]));
	this->ui->SPD_view->setModel(this->m_pquerymodellist.at(m_teconfigname[12]));
	this->ui->FCC_RS_view->setModel(this->m_pquerymodellist.at(m_teconfigname[13]));
	return true;
}

bool MainWindow::GetProductinfro()
{
	
	
	QStringList productrootnode;
	m_dbproductinfrotable->setTable("product");
	m_dbproductinfrotable->setEditStrategy(QSqlTableModel::OnManualSubmit);
	m_dbproductinfrotable->select();
	QString recorddata("");
	for (size_t i = 0; i < (size_t)m_dbproductinfrotable->rowCount(); ++i)
	{
		bool isfind = false;
		QSqlRecord record = m_dbproductinfrotable->record(i);
		QString recorddata("");
		QStandardItem* item1 = new QStandardItem(record.value("productclass").toString());
		for (size_t i = 0; i < (size_t)m_productItemlist.size(); i++)
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
			m_productclasslistmodel->appendRow(item1);
		}
	}
	/*for (size_t i = 0; i < m_productItemlist.size(); i++)
	{
		recorddata += m_productItemlist[i]->text() + "\n";
	}*/
	//m_Treemodel = new TreeModel(recorddata);
	m_productclasslistmodel->setHorizontalHeaderLabels(QStringList() << QStringLiteral("ProductClass") << QStringLiteral("Infro"));
	this->ui->product_treeView->setModel(m_productclasslistmodel);
	this->ui->product_treeView->show();
	return true;
}

void MainWindow::cleardatatableview()
{
	for (auto &sqlmodel : m_pquerymodellist)
	{
		sqlmodel.second->clear();
		if (sqlmodel.second!=nullptr)
		{
			delete sqlmodel.second;

		}
	}
	m_pquerymodellist.clear();
	for (size_t i = 0; i < (size_t)m_productItemlist.size(); i++)
	{

		if (m_productItemlist[i] != nullptr)
		{
			delete m_productItemlist[i];
		}
	}
	this->m_productItemlist.clear();
	this->m_productclasslistmodel->clear();
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
	bool connectfalg = false;
	connectfalg = connect(this->ui->actionLink, &QAction::triggered, this, &MainWindow::LinkToDataBase);
	connectfalg = connect(this->ui->actionSave, &QAction::triggered, this, &MainWindow::SaveData);
	connectfalg = connect(this->m_ploginform,   &Login::s_sendaccountandpw, this, &MainWindow::Loginjudge);
	connectfalg = connect(this->m_ploginform, &Login::s_Logincancel, this, &MainWindow::LoginCancel);
	return;
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
void MainWindow::EditPermissionSet(UserEditPermission usereditpermission)
{
	QAbstractItemView::EditTrigger triggermode = QAbstractItemView::EditTrigger::NoEditTriggers;
	if (usereditpermission == UserEditPermission::Admin)
	{
		triggermode = QAbstractItemView::EditTrigger::DoubleClicked;
	}
	else if (usereditpermission == UserEditPermission::TeGuard)
	{	
		triggermode = QAbstractItemView::EditTrigger::NoEditTriggers;
	}
	else if (usereditpermission == UserEditPermission::Useonly)
	{
		triggermode = QAbstractItemView::EditTrigger::NoEditTriggers;
	}
	this->ui->Agenda_view->setEditTriggers(triggermode);
	this->ui->RCA_view->setEditTriggers(triggermode);
	this->ui->Ruma_view->setEditTriggers(triggermode);
	this->ui->Te_view->setEditTriggers(triggermode);
	this->ui->RPV_view->setEditTriggers(triggermode);
	this->ui->ParHr_view->setEditTriggers(triggermode);
	this->ui->Mirco_view->setEditTriggers(triggermode);
	this->ui->CAL_TA_view->setEditTriggers(triggermode);
	this->ui->ManualTc_view->setEditTriggers(triggermode);
	this->ui->RCA_RS_view->setEditTriggers(triggermode);
	this->ui->Inter_RS_view->setEditTriggers(triggermode);
	this->ui->SPD_view->setEditTriggers(triggermode);
	this->ui->FCC_RS_view->setEditTriggers(triggermode);
	this->ui->product_treeView->setEditTriggers(triggermode);
}

void MainWindow::Loginjudge(std::string Account ,std::string password)
{	
	
	QString queryword = "SELECT * FROM atsteconfigure.user where userid = '" + QString(Account.c_str()) + "' ; ";
	m_userLogindbmodel->exec(queryword);
	if (m_userLogindbmodel->isActive())
	{	

		while (m_userLogindbmodel->next())
		{
			QString Accountdb = m_userLogindbmodel->value(0).toString();
			QString passwordindb = m_userLogindbmodel->value(1).toString();
			QString userpermission = m_userLogindbmodel->value(2).toString();
			if (Accountdb.toStdString()== Account && passwordindb.toStdString() == password)
			{

				m_LoginFlag = true;
				if (!userpermission.isNull())
				{

                    if (userpermission=="admin")
					{
						EditPermissionSet(UserEditPermission::Admin);
					}
					else if (userpermission == "teguard")
					{
						EditPermissionSet(UserEditPermission::TeGuard);
					}
					else if (userpermission == "useonly")
					{
						EditPermissionSet(UserEditPermission::Useonly);
					}
				}
				m_ploginform->close();
				UserDisPlayData();
			}
			else
			{
				QMessageBox::warning(this, "Login fail", "User Account or password error");
			}
		}
	}
	else
	{	
		QMessageBox::warning(this, "Login fail", m_userLogindbmodel->lastError().text());
		m_ploginform->close();
	}
}

void MainWindow::UserDisPlayData()
{
	if (!m_dbbsisconnect && m_LoginFlag)
	{

		m_dbbsisconnect = true;
		GetProductinfro();
		SearchDataAndDisplay();
		this->ui->actionLink->setIcon(QIcon(":/Action/actionimage/imageresource/unlink.png"));
		this->ui->actionLink->setToolTip("push this button to disconnect database");
	}
	else
	{
		if (s_dbreousre.isOpen())
		{
			this->cleardatatableview();
			this->ui->actionLink->setIcon(QIcon(":/Action/actionimage/imageresource/link.png"));
			this->ui->actionLink->setToolTip("push this button to connect database");
			m_dbbsisconnect = false;
		}
	}
}
void MainWindow::LoginCancel()
{
	
	this->ui->actionLink->setIcon(QIcon(":/Action/actionimage/imageresource/link.png"));
	this->ui->actionLink->setToolTip("push this button to connect database");

}
int MainWindow::LinkToDataBase()
{

	m_dbbsisconnect = false;
	cleardatatableview();
	m_ploginform->setModal(true);
	m_ploginform->showNormal();
	return  0; 
}
