#ifndef ADDEVENTS_H
#define ADDEVENTS_H

#include <QDialog>
#include <admin_login.h>

namespace Ui {
class AddEvents;
}

class AddEvents : public QDialog
{
    Q_OBJECT

public:
    explicit AddEvents(QWidget *parent = 0);
    ~AddEvents();

private:
    Ui::AddEvents *ui;
};

#endif // ADDEVENTS_H
