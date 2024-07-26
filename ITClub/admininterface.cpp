#include "admininterface.h"
#include "ui_admininterface.h"
#include<QPixmap>
#include <QMessageBox>

AdminInterface::AdminInterface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminInterface)
{
    ui->setupUi(this);

    QPixmap pix3(":/resource/imgs/login-icon.png");
    int h = ui->login_icon->width();
    int w = ui->login_icon->height();
    ui->login_icon->setPixmap(pix3.scaled(w,h,Qt::KeepAspectRatio));
}

AdminInterface::~AdminInterface()
{
    delete ui;
}

void AdminInterface::on_login_btn_clicked()
{
    QString password = ui->lineEdit_admin->text();
    if (password == "admin123")
    {
        QMessageBox::information(this,"Login","Logged In Successfully");
        hide();
        adminInterface= new Admin_login;
        adminInterface->show();
    }
    else
    {
        QMessageBox::warning(this,"Login","Incorrect Password");
    }
}
