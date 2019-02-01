#include "authorizationform.h"
#include "resource.h"
#include "ui_authorizationform.h"

AuthorizationForm::AuthorizationForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AuthorizationForm)
{
	
    ui->setupUi(this);
	ui->LE_Adminpassword->setEchoMode(QLineEdit::Password);
	QStringList UserClass;
	UserClass.append("Admin");
	UserClass.append("LoopGarud");
	UserClass.append("Others");
	ui->CB_AccountPre->addItems(UserClass);
	if (!connect(this->ui->PB_Cancel, &QPushButton::clicked, this, &AuthorizationForm::FormClose))
	{
		QMessageBox::warning(nullptr, "Internal  Error", "Internal Signal Bind Error");
		return;
		
	}
}
AuthorizationForm::~AuthorizationForm()
{

    delete ui;
}
void AuthorizationForm::FormClose()
{
	this->hide();
	this->close();
}
