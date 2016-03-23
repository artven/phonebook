//
// Created by rafal on 15.03.16.
//

#include <QStyleFactory>
#include <QPalette>
#include <QMessageBox>
#include <iostream>

#include "Application.h"

Application::Application(QApplication& app):
database{this->databaseName}, phones{database}, users{database}, parentApplication{app} {
    this->setFusionStyle();
    this->setDarkPallete();
}

void Application::setFusionStyle() {
    QStyleFactory styleFactory;
    this->parentApplication.setStyle(styleFactory.create("Fusion"));
}

void Application::setDarkPallete() {
    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(53,53,53));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(25,25,25));
    darkPalette.setColor(QPalette::AlternateBase, QColor(53,53,53));
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(53,53,53));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);
    qApp->setPalette(darkPalette);
    qApp->setStyleSheet("QToolTip { color: #ffffff; background-color: #2a82da; border: 1px solid white; }");
}

void Application::login() {
    if(this->user) {
        delete this->user;
        this->user = nullptr;
    }

    bool operationFinished{false};
    do {
        loginDialog.exec();
        switch (loginDialog.getResult()) {
            case LoginResult::ok:
                try {
                    auto user = this->users.login(loginDialog.getLogin(), loginDialog.getPassword());
                    this->user = new UserRecord{user};
                    operationFinished = true;
                } catch (std::invalid_argument& exception) {
                    QMessageBox::warning(&loginDialog, "Błąd logowania", exception.what());
                    break;
                }
            case LoginResult::cancel:
                operationFinished = true;
                break;
            case LoginResult::newAccount:
                this->createNewAccount();
                break;
            case LoginResult::undefined:
                QMessageBox::critical(nullptr, "Logowanie", "Coś się zjebało!");
                break;
        }
    } while (!operationFinished);

}

Application::~Application() {
    if(this->user != nullptr)
        delete this->user;
}

void Application::createNewAccount() {
    bool operationFinished{false};
    this->newAccountDialog.clear();
    do {
        this->newAccountDialog.exec();
        switch (newAccountDialog.getResult()) {
            case UserAccountDialogResult::ok: {

                auto login = this->newAccountDialog.getLogin();
                auto email = this->newAccountDialog.getEmail();
                auto password = this->newAccountDialog.getPassword();
                auto role = this->newAccountDialog.getUserRole();

                try {
                    UserRecord record{0, login, email, role};
                    this->users.addRequest(record, password);
                } catch (std::invalid_argument& exception) {
                    QMessageBox::warning(nullptr, "Błąd", exception.what());
                    break;
                }

                operationFinished = true;
                break;
            }
            case UserAccountDialogResult::cancel: {
                operationFinished = true;
                break;
            }
        }
    } while (!operationFinished);
}

void Application::start() {
    this->login();

    if (this->user != nullptr) {
        this->chooseWindowMode(this->user);
        this->showMainWindow();
    } else {
        // TODO lepsza opcja?
        this->parentApplication.~QApplication();
    }
}

QStandardItemModel* Application::getAllRequests() {
    auto requests = this->users.getAllRequests();
    return convertRequestToModel(requests);
}

QStandardItemModel* Application::getNewRequests() {
    auto requests = this->users.getAllRequests("Nowy");
    return convertRequestToModel(requests);
}

QStandardItemModel* Application::getAcceptedRequests() {
    auto requests = this->users.getAllRequests("Zaakceptowany");
    return convertRequestToModel(requests);
}

QStandardItemModel *Application::getRejectedRequests() {
    auto requests = this->users.getAllRequests("Odrzucony");
    return convertRequestToModel(requests);
}

QStandardItemModel *Application::convertRequestToModel(std::list<std::vector<std::string>> &requests) {
    auto rows = requests.size();

    if(rows == 0)
        return nullptr;

    auto cols = (*requests.begin()).size();
    if(cols == 0)
        return nullptr;

    QStandardItemModel* model = new QStandardItemModel{rows, cols};

    auto req = requests.begin();
    for(int row=0; row<rows; row++) {
        for(int col=0; col<cols; col++) {
            auto elem = (*req)[col];
            QStandardItem* item = new QStandardItem{elem.c_str()};
            item->setEditable(false);
            model->setItem(row, col, item);
        }
        req++;
    }

    return model;
}

void Application::rejectRequest(std::vector<std::string> request) {
    this->users.rejectRequest(request);
}

void Application::acceptRequest(std::vector<std::string> request) {
    this->users.acceptRequest(request);
}

void Application::changePassword(std::string newPassword, std::string oldPassword) {
    this->users.changePassword(*(this->user), oldPassword, newPassword);
}

void Application::addRecord(PhoneBookRecord &record) {
    this->phones.insert(record);
}

void Application::addUser(UserRecord &user, std::string password) {
    this->users.add(user, password);
}

QStandardItemModel* Application::getAllPhones() {
    auto recordsList = this->phones.getAllRecords();
    auto model = this->getModelFromList(recordsList);
    return model;
}

QStandardItemModel *Application::searchPhones(std::string name, std::string surname, std::string address,
                                              std::string city, std::string email, std::string phone,
                                              std::string mobile, unsigned int id) {
    auto recordList = this->phones.getRecords(name, surname, address, city, email, phone, mobile);
    auto model = this->getModelFromList(recordList);
    return model;
}

QStandardItemModel *Application::getModelFromList(std::list<PhoneBookRecord> recordsList) {
    if (recordsList.size()) {
        auto rowsCount = recordsList.size();
        QStandardItemModel* newModel = new QStandardItemModel{rowsCount, 8};

        auto recordPtr = recordsList.begin();
        for (int row =0; row < rowsCount; row++) {
            auto record = *recordPtr;
            std::vector<std::string> recordValues;
            recordValues.push_back(std::to_string(record.getId()));
            recordValues.push_back(record.getName());
            recordValues.push_back(record.getSurname());
            recordValues.push_back(record.getAddress());
            recordValues.push_back(record.getCity());
            recordValues.push_back(record.getPhoneNumber());
            recordValues.push_back(record.getMobilePhoneNumber());
            recordValues.push_back(record.getEmail());

            for(int col=0; col<8; col++) {
                QStandardItem* item = new QStandardItem{recordValues[col].c_str()};
                newModel->setItem(row, col, item);
            }

            recordPtr++;
        }

        return newModel;
    } else
        return nullptr;
}