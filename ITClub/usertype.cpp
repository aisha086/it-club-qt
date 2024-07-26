#include "usertype.h"
#include "ui_usertype.h"
#include <QPixmap>

usertype::usertype(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usertype)
{
    ui->setupUi(this);


    QPixmap pix1(":/resource/imgs/member-icon.png");
    int h = ui->member_user->width();
    int w = ui->member_user->height();
    ui->member_user->setPixmap(pix1.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap pix2(":/resource/imgs/admin-icon.png");
     h = ui->admin_user->width();
     w = ui->admin_user->height();
    ui->admin_user->setPixmap(pix2.scaled(w,h,Qt::KeepAspectRatio));

}

usertype::~usertype()
{
    delete ui;
}

void usertype::on_member_btn_clicked()
{
    hide();
    memberinterface = new MemberInterface(this);
    memberinterface->show();
}

void usertype::on_admin_btn_clicked()
{
    hide();
    adminlogin = new AdminInterface(this);
    adminlogin->show();
}
