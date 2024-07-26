#ifndef ADMIN_LOGIN_H
#define ADMIN_LOGIN_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QFileInfo>
#include <addmembers.h>
#include <addevents.h>

namespace Ui {
class Admin_login;
}

class Admin_login : public QDialog
{
    Q_OBJECT
public:
    QSqlDatabase clubdb;
    void connClose()
    {
        clubdb.close();
        clubdb.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen()
    {
        clubdb=QSqlDatabase::addDatabase("QSQLITE");
        clubdb.setDatabaseName(":/resource/databases/ITClub_Databases.db");

        if(!clubdb.open())
        {
            qDebug()<<("Failed to open the database");
            return false;
        }
        else
        {
            qDebug()<<("connected...");
            return true;
        }
    }

public:

    explicit Admin_login(QWidget *parent = 0);
    ~Admin_login();

private slots:
    void on_member_btn_clicked();

    void on_event_btn_clicked();

private:
    Ui::Admin_login *ui;
    AddMembers *addmembers;
//    AddEvents *addevent;
};

#endif // ADMIN_LOGIN_H
