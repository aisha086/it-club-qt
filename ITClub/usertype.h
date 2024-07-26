#ifndef USERTYPE_H
#define USERTYPE_H

#include <QDialog>
#include"admininterface.h"
#include"memberinterface.h"

namespace Ui {
class usertype;
}

class usertype : public QDialog
{
    Q_OBJECT

public:
    explicit usertype(QWidget *parent = 0);
    ~usertype();

private slots:
    void on_member_btn_clicked();

    void on_admin_btn_clicked();

private:
    Ui::usertype *ui;
     AdminInterface *adminlogin;
     MemberInterface *memberinterface;
};

#endif // USERTYPE_H
