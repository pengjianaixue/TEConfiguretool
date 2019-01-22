#include "login.h"
#include "ui_login.h"
Login::Login(QWidget *parent) :
    QDialog(parent),
    m_registerwidget(nullptr),
    ui(new Ui::Login),
    m_accountregisterBox(nullptr),
	m_accountregisterLayout(nullptr)
	
{


    ui->setupUi(this);
    this->setModal(true);
	Init();

}
void Login::CloseLoginFram()
{
	emit s_Logincancel();
	this->close();
}
Login::~Login()
{
	delete m_registerwidget;
	delete m_accountregisterBox;
    delete ui;
}
void Login::keyPressEvent(QKeyEvent *Keyevent)
{
	if (Keyevent->key() == Qt::Key_Enter || Keyevent->key() == Qt::Key_Return)
	{
        UserLogin();
	}
}
void Login::UserLogin()
{

	if (this->ui->LE_user->text().size()==0 || this->ui->LE_Password->text().size() == 0)
	{
		QMessageBox::warning(nullptr, "waring", "please input account and password");
	}
	else
	{
		emit s_sendaccountandpw(this->ui->LE_user->text().toStdString(), this->ui->LE_Password->text().toStdString());	
	}
}

void Login::UserRegister()
{

    m_accountregisterBox->setLayout(m_accountregisterLayout);
    m_accountregisterLayout->addWidget(m_registerwidget,0,0);
	m_accountregisterLayout->setRowStretch(0, 3);
    this->ui->VL_component->addWidget(m_accountregisterBox,6,Qt::AlignLeft);
	m_accountregisterBox->show();
    m_registerwidget->show();
	this->ui->B_Register->hide();

}
void Login::closeRegeisterWidget()
{


    this->ui->VL_component->removeWidget(m_accountregisterBox);
	m_accountregisterBox->hide();
	this->ui->B_Register->show();

}

void Login::Init()
{

	m_registerwidget = new accountregister(this);
	m_registerwidget->hide();
	m_accountregisterBox = new QGroupBox(this);
	m_accountregisterLayout = new QGridLayout(m_accountregisterBox);
	m_accountregisterBox->setTitle("User Regesiter");
	this->setStyleSheet("QDialog{border-image:url(:/Login/imageresource/Login.jpg)}");
	ui->LE_Password->setEchoMode(QLineEdit::Password);
	connect(this->ui->B_Cancel, &QPushButton::clicked, this, &Login::CloseLoginFram);
	connect(this->ui->B_Login, &QPushButton::clicked, this, &Login::UserLogin);
	connect(this->ui->B_Register, &QPushButton::clicked, this, &Login::UserRegister);
	connect(this->m_registerwidget, &accountregister::s_widgethavecolse, this, &Login::closeRegeisterWidget);

}
