//
// Created by rafal on 15.03.16.
//

#ifndef MAIN_PROGRAM_APPLICATION_H
#define MAIN_PROGRAM_APPLICATION_H

#include <QApplication>
#include <string>

#include "SqliteDatabase.h"
#include "PhoneBookAPI.h"
#include "UserManager.h"
#include "MainWindow.h"
#include "LoginDialog.h"
#include "UserAccountDialog.h"

class Application {
public:
    Application(QApplication& app);
    virtual ~Application();
    void start();
    void login();
    void logout();
    void showMainWindow();

private:
    const std::string databaseName{"database.db"};
    SQLiteDatabase database;
    PhoneBookAPI phones;
    UserManager users;
    MainWindow applicationWindow;
    LoginDialog loginDialog;
    UserAccountDialog newAccountDialog;
    UserRecord* user{nullptr};
    QApplication& parentApplication;

    void setFusionStyle();
    void setDarkPallete();
    void createNewAccount();

    void chooseWindowMode(UserRecord *user);
};


#endif //MAIN_PROGRAM_APPLICATION_H
