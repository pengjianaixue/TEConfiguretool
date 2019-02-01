#ifndef ACCOUNTREGISTER_H
#define ACCOUNTREGISTER_H

#include <QWidget>
#include "authorizationform.h"
#include "resource.h"

namespace Ui {
class accountregister;
}

class accountregister : public QWidget
{
    Q_OBJECT

public:
    explicit accountregister(QWidget *parent = nullptr);
    ~accountregister();
	bool registerdb(QSqlDatabase &db);
private slots:
    void closethiswidget();
	void RegisterPbReponseble();
	void AuthorizationUserAccount();
signals:
    void s_widgethavecolse();
	void s_RegisterUserIntodb(std::vector<std::string>RegisterParam);

private:
	
    Ui::accountregister *ui;
	QSqlDatabase		*m_dbResoure;
	QSqlTableModel		*m_dbtablemodel;
	AuthorizationForm	*m_AuthorizationForm;
private:
    void Init();
};

#endif // ACCOUNTREGISTER_H
