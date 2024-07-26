#-------------------------------------------------
#
# Project created by QtCreator 2023-06-24T00:30:34
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ITClub
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    usertype.cpp \
    admin_login.cpp \
    memberinterface.cpp \
    admininterface.cpp \
    addevents.cpp \
    addmembers.cpp

HEADERS  += mainwindow.h \
    usertype.h \
    admin_login.h \
    memberinterface.h \
    admininterface.h \
    addevents.h \
    addmembers.h

FORMS    += mainwindow.ui \
    usertype.ui \
    admin_login.ui \
    memberinterface.ui \
    admininterface.ui \
    addevents.ui \
    addmembers.ui

RESOURCES += \
    resource.qrc
