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


class Application: public QApplication {
public:
    Application(int &argc, char **argv);
    void login();
    void logout();
    void showMainWindow();

private:
    const std::string databaseName{"database.db"};
    SQLiteDatabase database;
    PhoneBookAPI phones;
    UserManager users;
    MainWindow applicationWindow;

    UserRecord* user{nullptr};

    void setFusionStyle();
    void setDarkPallete();
};


#endif //MAIN_PROGRAM_APPLICATION_H
