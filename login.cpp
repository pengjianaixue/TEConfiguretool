#include "login.h"
#include "ui_login.h"
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setModal(true);
	this->setStyleSheet("QDialog{border-image:url(:/Login/imageresource/Login.jpg)}");
    ui->LE_Password->setEchoMode(QLineEdit::Password);
	connect(this->ui->B_Cancel, &QPushButton::clicked, this, &Login::closeloginfram);
	connect(this->ui->B_Login,&QPushButton::clicked,this,&Login::userLogin);
}
void Login::closeloginfram()
{
	emit s_Logincancel();
	this->close();
}
Login::~Login()
{
    delete ui;
}
void Login::keyPressEvent(QKeyEvent *Keyevent)
{

	if (Keyevent->key() == Qt::Key_Enter || Keyevent->key() == Qt::Key_Return)
	{
		userLogin();
	}
}
void Login::userLogin()
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
