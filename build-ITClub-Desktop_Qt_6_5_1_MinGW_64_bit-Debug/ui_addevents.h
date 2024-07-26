/********************************************************************************
** Form generated from reading UI file 'addevents.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEVENTS_H
#define UI_ADDEVENTS_H

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

class Ui_AddEvents
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AddEvents)
    {
        if (AddEvents->objectName().isEmpty())
            AddEvents->setObjectName("AddEvents");
        AddEvents->resize(290, 363);
        label = new QLabel(AddEvents);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 20, 151, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        layoutWidget = new QWidget(AddEvents);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 70, 231, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(AddEvents);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 320, 75, 23));
        pushButton_2 = new QPushButton(AddEvents);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 320, 75, 23));

        retranslateUi(AddEvents);

        QMetaObject::connectSlotsByName(AddEvents);
    } // setupUi

    void retranslateUi(QDialog *AddEvents)
    {
        AddEvents->setWindowTitle(QCoreApplication::translate("AddEvents", "Add Events", nullptr));
        label->setText(QCoreApplication::translate("AddEvents", "Add Events Details", nullptr));
        label_2->setText(QCoreApplication::translate("AddEvents", "     Title    ", nullptr));
        label_3->setText(QCoreApplication::translate("AddEvents", "     Date   ", nullptr));
        label_4->setText(QCoreApplication::translate("AddEvents", "     Time     ", nullptr));
        pushButton->setText(QCoreApplication::translate("AddEvents", "Save", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddEvents", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddEvents: public Ui_AddEvents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEVENTS_H
