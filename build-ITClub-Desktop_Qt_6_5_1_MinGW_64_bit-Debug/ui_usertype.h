/********************************************************************************
** Form generated from reading UI file 'usertype.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERTYPE_H
#define UI_USERTYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_usertype
{
public:
    QLabel *label;
    QPushButton *member_btn;
    QPushButton *admin_btn;
    QLabel *member_user;
    QLabel *admin_user;

    void setupUi(QDialog *usertype)
    {
        if (usertype->objectName().isEmpty())
            usertype->setObjectName("usertype");
        usertype->resize(505, 425);
        label = new QLabel(usertype);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 40, 261, 61));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        member_btn = new QPushButton(usertype);
        member_btn->setObjectName("member_btn");
        member_btn->setGeometry(QRect(60, 290, 131, 51));
        admin_btn = new QPushButton(usertype);
        admin_btn->setObjectName("admin_btn");
        admin_btn->setGeometry(QRect(320, 290, 131, 51));
        member_user = new QLabel(usertype);
        member_user->setObjectName("member_user");
        member_user->setGeometry(QRect(60, 120, 131, 151));
        admin_user = new QLabel(usertype);
        admin_user->setObjectName("admin_user");
        admin_user->setGeometry(QRect(320, 130, 131, 151));

        retranslateUi(usertype);

        QMetaObject::connectSlotsByName(usertype);
    } // setupUi

    void retranslateUi(QDialog *usertype)
    {
        usertype->setWindowTitle(QCoreApplication::translate("usertype", "User", nullptr));
        label->setText(QCoreApplication::translate("usertype", "What Type of User Are you?", nullptr));
        member_btn->setText(QCoreApplication::translate("usertype", "Member", nullptr));
        admin_btn->setText(QCoreApplication::translate("usertype", "Admin", nullptr));
        member_user->setText(QString());
        admin_user->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class usertype: public Ui_usertype {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERTYPE_H
