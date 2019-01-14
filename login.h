#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "resource.h"

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
private slots:
	void closeloginfram();
	void userLogin();
signals:
	void s_sendaccountandpw(std::string Account, std::string password);
	void s_Logincancel();



};

#endif // LOGIN_H
