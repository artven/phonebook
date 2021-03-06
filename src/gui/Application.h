//
// Created by rafal on 15.03.16.
//

#ifndef MAIN_PROGRAM_APPLICATION_H
#define MAIN_PROGRAM_APPLICATION_H

#include <QApplication>
#include <QStandardItemModel>
#include <string>

#include "PhoneBookAPI.h"
#include "UserManager.h"
#include "LoginDialog.h"
#include "UserAccountDialog.h"
#include "SqliteDatabase.h"

class Application {
public:
    Application(QApplication& app);
    virtual ~Application();
    void start();
    virtual void showMainWindow()=0;
    virtual void logout()=0;

protected:
    QStandardItemModel* getAllRequests();
    QStandardItemModel* getNewRequests();
    QStandardItemModel* getAcceptedRequests();
    QStandardItemModel* getRejectedRequests();
    void acceptRequest(std::vector<std::string> request);
    void rejectRequest(std::vector<std::string> request);
    void changePassword(std::string newPassword, std::string oldPassword);
    void addRecord(PhoneBookRecord& record);
    void addUser(UserRecord& user, std::string password);
    QStandardItemModel* getAllPhones();
    QStandardItemModel* searchPhones(std::string name="", std::string surname="", std::string address="", std::string city="",
                                     std::string email="", std::string phone="", std::string mobile="", unsigned int id=0);
    QStandardItemModel* getAllUsers();
    QStandardItemModel* getUsersByLogin(std::string login);
    void updateUser(UserRecord& user);

private:
    const std::string databaseName{"database.db"};
    SQLiteDatabase database;
    PhoneBookAPI phones;
    UserManager users;
    LoginDialog loginDialog;
    UserAccountDialog newAccountDialog;
    UserRecord* user{nullptr};
    QApplication& parentApplication;

    void setFusionStyle();
    void setDarkPallete();
    void login();
    void createNewAccount();
    virtual void chooseWindowMode(UserRecord *user)=0;
    QStandardItemModel* convertRequestToModel(std::list<std::vector<std::string>> &requests);
    QStandardItemModel* getModelFromList(std::list<PhoneBookRecord> list);
};


#endif //MAIN_PROGRAM_APPLICATION_H
