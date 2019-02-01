#include "accountregister.h"
#include "ui_accountregister.h"
extern QSqlDatabase				s_dbreousre;
accountregister::accountregister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::accountregister),
	m_dbResoure(nullptr),
	m_dbtablemodel(nullptr),
	m_AuthorizationForm(nullptr)
{
    ui->setupUi(this);
    Init();
	if (!::s_dbreousre.isValid())
	{	
		QMessageBox::critical(this, "Error", "can't find database dirver");
		exit(0);
	}
	m_AuthorizationForm = new AuthorizationForm;
	
	m_AuthorizationForm->hide();
	m_dbtablemodel = new QSqlTableModel(this, ::s_dbreousre);
	m_dbtablemodel->setTable("user");
	m_dbtablemodel->setEditStrategy(QSqlTableModel::EditStrategy::OnManualSubmit);
    connect(this->ui->PB_Close,&QPushButton::clicked,this,&accountregister::closethiswidget);
	connect(this->ui->PB_Register, &QPushButton::clicked, this, &accountregister::RegisterPbReponseble);
	connect(this->ui->PB_Authori, &QPushButton::clicked, this, &accountregister::AuthorizationUserAccount);

}
accountregister::~accountregister()
{
	delete m_dbtablemodel;
    delete ui;
}
bool accountregister::registerdb(QSqlDatabase &db)
{
	m_dbResoure = &db;
	if (!m_dbResoure->isValid())
	{
		QMessageBox::warning(nullptr, "DataBaseError", "the database with register is not valid");
		return false;
	}
	m_dbtablemodel = new QSqlTableModel(this, *m_dbResoure);
	m_dbtablemodel->setTable("user");
	m_dbtablemodel->setEditStrategy(QSqlTableModel::EditStrategy::OnManualSubmit);
	m_dbtablemodel->select();
	return true;
}
/*

@brief Register pushbutton event function
@param
@return
*/
void accountregister::RegisterPbReponseble()
{
#ifdef _DEBUG
	int i = this->ui->LE_UserAccount->text().size();
	i = this->ui->LE_UserPassword->text().size();
	i = this->ui->LE_Deoartment->text().size();
#endif // DEBUG
	std::vector<std::string> paramvector;
	if (this->ui->LE_UserAccount->text().size() == 0|| 
		this->ui->LE_UserPassword->text().size()==0|| 
		this->ui->LE_Deoartment->text().size()==0 ||
		this->ui->LE_PasswordConfirm->text().size()==0
		)
	{
		QMessageBox::warning(nullptr,"RegisterError","Register Information is can't be empty");
		return;
	}
	else if(this->ui->LE_UserPassword->text()!= this->ui->LE_PasswordConfirm->text())
	{

		QMessageBox::warning(nullptr, "RegisterError", "the Password is not equally with  twice input ");
		return;
	}
	else
	{

		QSqlRecord userinfor = m_dbtablemodel->record();;
		userinfor.setValue("userid", this->ui->LE_UserAccount->text());
		userinfor.setValue("userpassword", this->ui->LE_UserPassword->text());
		userinfor.setValue("userpermissions", this->ui->LE_Deoartment->text());
#ifdef _DEBUG
		int i = m_dbtablemodel->rowCount();
#endif // _DEBUG
		m_dbtablemodel->insertRecord(-1,userinfor);
		//m_dbtablemodel->set;
		/*paramvector.push_back(this->ui->LB_Account->text().toStdString());
		paramvector.push_back(this->ui->LB_Password->text().toStdString());
		paramvector.push_back(this->ui->LB_DePartMent->text().toStdString());
		emit s_RegisterUserIntodb(paramvector);*/
		m_dbtablemodel->database().transaction();
		if (m_dbtablemodel->submitAll())
		{	

			m_dbtablemodel->database().commit();
			QMessageBox::information(nullptr, "Register infor", "Register Succees!");
		}
		else
		{
			m_dbtablemodel->database().rollback();
			QMessageBox::warning(nullptr, tr("tableModel"), tr("DataBase error:%1").arg(m_dbtablemodel->lastError().text()));
			m_dbtablemodel->revertAll();
		}
	}
}
void accountregister::AuthorizationUserAccount()
{
	this->ui->gridLayout->addWidget(m_AuthorizationForm);
	m_AuthorizationForm->show();
	return;
}
void accountregister::closethiswidget()
{
	this->ui->LE_UserAccount->clear();
	this->ui->LE_UserPassword->clear();
	this->ui->LE_Deoartment->clear();
	this->ui->LE_PasswordConfirm->clear();
    this->close();
    emit s_widgethavecolse();
}
void accountregister::Init()
{
	this->ui->LE_UserPassword->setEchoMode(QLineEdit::Password);
	this->ui->LE_PasswordConfirm->setEchoMode(QLineEdit::Password);
	return;

}
