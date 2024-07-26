#include "memberinterface.h"
#include "ui_memberinterface.h"
#include <QPixmap>
MemberInterface::MemberInterface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemberInterface)
{
    ui->setupUi(this);
    QPixmap pix6(":/resource/imgs/member-icon.png");
     int h = ui->member_inter->width();
    int w = ui->member_inter->height();
    ui->member_inter->setPixmap(pix6.scaled(w,h,Qt::KeepAspectRatio));
}


MemberInterface::~MemberInterface()
{
    delete ui;
}
