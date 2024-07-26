#include "addevents.h"
#include "ui_addevents.h"

AddEvents::AddEvents(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEvents)
{
    ui->setupUi(this);
    Admin_login conn;
    conn.connOpen();

}

AddEvents::~AddEvents()
{
    delete ui;

}
