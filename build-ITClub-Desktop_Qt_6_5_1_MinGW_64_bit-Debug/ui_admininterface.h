/********************************************************************************
** Form generated from reading UI file 'admininterface.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININTERFACE_H
#define UI_ADMININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminInterface
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_admin;
    QLabel *login_icon;
    QPushButton *login_btn;

    void setupUi(QDialog *AdminInterface)
    {
        if (AdminInterface->objectName().isEmpty())
            AdminInterface->setObjectName("AdminInterface");
        AdminInterface->resize(506, 417);
        label = new QLabel(AdminInterface);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 40, 261, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(AdminInterface);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 250, 101, 41));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        lineEdit_admin = new QLineEdit(AdminInterface);
        lineEdit_admin->setObjectName("lineEdit_admin");
        lineEdit_admin->setGeometry(QRect(100, 300, 291, 21));
        lineEdit_admin->setEchoMode(QLineEdit::Password);
        login_icon = new QLabel(AdminInterface);
        login_icon->setObjectName("login_icon");
        login_icon->setGeometry(QRect(170, 90, 151, 141));
        login_btn = new QPushButton(AdminInterface);
        login_btn->setObjectName("login_btn");
        login_btn->setGeometry(QRect(190, 350, 101, 31));
        login_btn->setFont(font1);
#if QT_CONFIG(shortcut)
        label_2->setBuddy(lineEdit_admin);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AdminInterface);

        QMetaObject::connectSlotsByName(AdminInterface);
    } // setupUi

    void retranslateUi(QDialog *AdminInterface)
    {
        AdminInterface->setWindowTitle(QCoreApplication::translate("AdminInterface", "Admin Login", nullptr));
        label->setText(QCoreApplication::translate("AdminInterface", "Log In To Continue as Admin", nullptr));
        label_2->setText(QCoreApplication::translate("AdminInterface", "Enter Password", nullptr));
        login_icon->setText(QString());
        login_btn->setText(QCoreApplication::translate("AdminInterface", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminInterface: public Ui_AdminInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININTERFACE_H
