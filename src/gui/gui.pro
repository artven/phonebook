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
    UserAccountDialog.cpp \
    SearchDialogcpp.cpp \
    forms/NewRecordForm.cpp \
    forms/NewUserForm.cpp \
    forms/ChangePasswordForm.cpp \
    forms/RequestsForm.cpp \
    PhonebookForm.cpp \
    forms/PhonebookForm.cpp \
    forms/UsersForm.cpp

HEADERS  += \
    ChangePasswordDialog.h \
    LoginDialog.h \
    UserAccountDialog.h \
    MainWindow.h \
    SearchDialog.h \
    forms/NewRecordForm.h \
    forms/NewUserForm.h \
    forms/ChangePasswordForm.h \
    forms/RequestsForm.h \
    PhonebookForm.h \
    forms/PhonebookForm.h \
    forms/UsersForm.h

FORMS    += \
    ChangePasswordDialog.ui \
    LoginDialog.ui \
    MainWindow.ui \
    UserAccountDialog.ui \
    SearchDialog.ui \
    forms/NewRecordForm.ui \
    forms/NewUserForm.ui \
    forms/ChangePasswordForm.ui \
    forms/RequestsForm.ui \
    PhonebookForm.ui \
    forms/PhonebookForm.ui \
    forms/UsersForm.ui

RESOURCES += \
    resources.qrc
