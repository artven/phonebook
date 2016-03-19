#-------------------------------------------------
#
# Project created by QtCreator 2016-03-14T10:02:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gui
TEMPLATE = app
CONFIG += c++11

SOURCES += main.cpp\
    ChangePasswordDialog.cpp \
    LoginDialog.cpp \
    MainWindow.cpp \
    UserAccountDialog.cpp

HEADERS  += \
    ChangePasswordDialog.h \
    LoginDialog.h \
    UserAccountDialog.h \
    MainWindow.h

FORMS    += \
    ChangePasswordDialog.ui \
    LoginDialog.ui \
    MainWindow.ui \
    UserAccountDialog.ui

RESOURCES += \
    resources.qrc
