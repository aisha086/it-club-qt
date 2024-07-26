#ifndef MEMBERINTERFACE_H
#define MEMBERINTERFACE_H

#include <QDialog>

namespace Ui {
class MemberInterface;
}

class MemberInterface : public QDialog
{
    Q_OBJECT

public:
    explicit MemberInterface(QWidget *parent = 0);
    ~MemberInterface();

private:
    Ui::MemberInterface *ui;
};

#endif // MEMBERINTERFACE_H
