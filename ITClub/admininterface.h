#ifndef ADMININTERFACE_H
#define ADMININTERFACE_H

#include <QDialog>
#include <admin_login.h>

namespace Ui {
class AdminInterface;
}

class AdminInterface : public QDialog
{
    Q_OBJECT

public:
    explicit AdminInterface(QWidget *parent = 0);
    ~AdminInterface();

private slots:
    void on_login_btn_clicked();

private:
    Ui::AdminInterface *ui;
    Admin_login *adminInterface;
};

#endif // ADMININTERFACE_H
