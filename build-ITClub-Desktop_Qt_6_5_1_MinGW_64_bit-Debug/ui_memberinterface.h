/********************************************************************************
** Form generated from reading UI file 'memberinterface.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERINTERFACE_H
#define UI_MEMBERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MemberInterface
{
public:
    QLabel *label;
    QLabel *member_inter;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *MemberInterface)
    {
        if (MemberInterface->objectName().isEmpty())
            MemberInterface->setObjectName("MemberInterface");
        MemberInterface->resize(532, 389);
        label = new QLabel(MemberInterface);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 251, 71));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        member_inter = new QLabel(MemberInterface);
        member_inter->setObjectName("member_inter");
        member_inter->setGeometry(QRect(310, 30, 171, 171));
        pushButton = new QPushButton(MemberInterface);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 250, 131, 71));
        QFont font1;
        font1.setPointSize(10);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(MemberInterface);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 250, 131, 71));
        pushButton_2->setFont(font1);

        retranslateUi(MemberInterface);

        QMetaObject::connectSlotsByName(MemberInterface);
    } // setupUi

    void retranslateUi(QDialog *MemberInterface)
    {
        MemberInterface->setWindowTitle(QCoreApplication::translate("MemberInterface", "Member Interface", nullptr));
        label->setText(QCoreApplication::translate("MemberInterface", "Member Interface", nullptr));
        member_inter->setText(QString());
        pushButton->setText(QCoreApplication::translate("MemberInterface", "Display Events", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MemberInterface", "Display Members", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemberInterface: public Ui_MemberInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERINTERFACE_H
