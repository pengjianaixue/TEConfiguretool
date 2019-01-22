#ifndef ACCOUNTREGISTER_H
#define ACCOUNTREGISTER_H

#include <QWidget>
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
signals:
    void s_widgethavecolse();
	void s_RegisterUserIntodb(std::vector<std::string>RegisterParam);
private:
	
    Ui::accountregister *ui;
	QSqlDatabase		*m_dbResoure;
	QSqlTableModel		*m_dbtablemodel;
private:
    void Init();
};

#endif // ACCOUNTREGISTER_H
