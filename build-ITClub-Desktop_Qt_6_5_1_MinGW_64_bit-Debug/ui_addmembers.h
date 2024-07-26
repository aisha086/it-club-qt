/********************************************************************************
** Form generated from reading UI file 'addmembers.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMBERS_H
#define UI_ADDMEMBERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddMembers
{
public:
    QLabel *label;
    QPushButton *save_btn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *txt_name;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *txt_email;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *txt_contact;

    void setupUi(QDialog *AddMembers)
    {
        if (AddMembers->objectName().isEmpty())
            AddMembers->setObjectName("AddMembers");
        AddMembers->resize(332, 423);
        label = new QLabel(AddMembers);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 171, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        save_btn = new QPushButton(AddMembers);
        save_btn->setObjectName("save_btn");
        save_btn->setGeometry(QRect(140, 370, 75, 23));
        layoutWidget = new QWidget(AddMembers);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 70, 241, 261));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_6->addWidget(label_7);

        txt_name = new QLineEdit(layoutWidget);
        txt_name->setObjectName("txt_name");

        horizontalLayout_6->addWidget(txt_name);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_7->addWidget(label_8);

        txt_email = new QLineEdit(layoutWidget);
        txt_email->setObjectName("txt_email");

        horizontalLayout_7->addWidget(txt_email);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_8->addWidget(label_9);

        txt_contact = new QLineEdit(layoutWidget);
        txt_contact->setObjectName("txt_contact");

        horizontalLayout_8->addWidget(txt_contact);


        verticalLayout_2->addLayout(horizontalLayout_8);


        retranslateUi(AddMembers);

        QMetaObject::connectSlotsByName(AddMembers);
    } // setupUi

    void retranslateUi(QDialog *AddMembers)
    {
        AddMembers->setWindowTitle(QCoreApplication::translate("AddMembers", "Add Members", nullptr));
        label->setText(QCoreApplication::translate("AddMembers", "Add Members Details", nullptr));
        save_btn->setText(QCoreApplication::translate("AddMembers", "Save", nullptr));
        label_7->setText(QCoreApplication::translate("AddMembers", "      Name  ", nullptr));
        label_8->setText(QCoreApplication::translate("AddMembers", "     Email    ", nullptr));
        label_9->setText(QCoreApplication::translate("AddMembers", "   Phone No.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMembers: public Ui_AddMembers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBERS_H
