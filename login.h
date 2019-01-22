#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "resource.h"
#include "accountregister.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT
	
public:
    explicit Login(QWidget *parent = 0);
    ~Login();
protected:
	void keyPressEvent(QKeyEvent *);

private:
    Ui::Login *ui;
    accountregister *m_registerwidget;
    QGroupBox		*m_accountregisterBox;
	QGridLayout		*m_accountregisterLayout;
	//QSqlDatabase	*m_dbResoure;
private slots:
    void CloseLoginFram();
    void UserLogin();
    void UserRegister();
    void closeRegeisterWidget();
signals:
	void s_sendaccountandpw(std::string Account, std::string password);
	void s_Logincancel();
private:
	void Init();
};

#endif // LOGIN_H
