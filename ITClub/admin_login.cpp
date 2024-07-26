#include "admin_login.h"
#include "ui_admin_login.h"
#include <QPixmap>

Admin_login::Admin_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin_login)
{
    ui->setupUi(this);

    QPixmap pix5(":/resource/imgs/admin-icon.png");
     int h = ui->admin_inter_icon->width();
    int w = ui->admin_inter_icon->height();
    ui->admin_inter_icon->setPixmap(pix5.scaled(w,h,Qt::KeepAspectRatio));
}

Admin_login::~Admin_login()
{
    delete ui;
}



void Admin_login::on_member_btn_clicked()
{
    addmembers = new AddMembers;
    addmembers->show();
}

void Admin_login::on_event_btn_clicked()
{
    AddEvents addevent;
    addevent.setModal(true);
    addevent.exec();
}
