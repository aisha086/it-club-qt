/********************************************************************************
** Form generated from reading UI file 'admin_login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_LOGIN_H
#define UI_ADMIN_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_login
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *member_btn;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *event_btn;
    QLabel *admin_inter_icon;

    void setupUi(QDialog *Admin_login)
    {
        if (Admin_login->objectName().isEmpty())
            Admin_login->setObjectName("Admin_login");
        Admin_login->resize(574, 440);
        label = new QLabel(Admin_login);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 211, 51));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        gridLayoutWidget = new QWidget(Admin_login);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 180, 541, 241));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        member_btn = new QPushButton(gridLayoutWidget);
        member_btn->setObjectName("member_btn");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(member_btn->sizePolicy().hasHeightForWidth());
        member_btn->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        member_btn->setFont(font1);

        gridLayout_2->addWidget(member_btn, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font1);

        gridLayout_2->addWidget(pushButton_6, 2, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font1);

        gridLayout_2->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font1);

        gridLayout_2->addWidget(pushButton_3, 2, 2, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font1);

        gridLayout_2->addWidget(pushButton_2, 0, 2, 1, 1);

        event_btn = new QPushButton(gridLayoutWidget);
        event_btn->setObjectName("event_btn");
        sizePolicy.setHeightForWidth(event_btn->sizePolicy().hasHeightForWidth());
        event_btn->setSizePolicy(sizePolicy);
        event_btn->setFont(font1);

        gridLayout_2->addWidget(event_btn, 0, 0, 1, 1);

        admin_inter_icon = new QLabel(Admin_login);
        admin_inter_icon->setObjectName("admin_inter_icon");
        admin_inter_icon->setGeometry(QRect(320, 20, 161, 141));

        retranslateUi(Admin_login);

        QMetaObject::connectSlotsByName(Admin_login);
    } // setupUi

    void retranslateUi(QDialog *Admin_login)
    {
        Admin_login->setWindowTitle(QCoreApplication::translate("Admin_login", "Admin Interface", nullptr));
        label->setText(QCoreApplication::translate("Admin_login", "Admin Interface", nullptr));
        member_btn->setText(QCoreApplication::translate("Admin_login", "Add Members", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Admin_login", "Edit Members", nullptr));
        pushButton->setText(QCoreApplication::translate("Admin_login", "Edit Events", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Admin_login", "Display Members", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Admin_login", "Display Events", nullptr));
        event_btn->setText(QCoreApplication::translate("Admin_login", "Add Events", nullptr));
        admin_inter_icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Admin_login: public Ui_Admin_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_LOGIN_H
