#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{

    ui->setupUi(this);
	this->setStyleSheet("QDialog{border-image:url(:/Login/imageresource/Login.jpg)}");
    ui->LE_Password->setEchoMode(QLineEdit::Password);
	connect(this->ui->B_Cancel, &QPushButton::clicked, this, &Login::closeloginfram);
	
}
void Login::closeloginfram()
{
	this->close();

}
Login::~Login()
{
    delete ui;
}
