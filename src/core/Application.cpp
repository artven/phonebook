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

void Application::chooseWindowMode(UserRecord *user) {
    if (user->isAdministrator())
            applicationWindow.setWindowMode(WindowMode::administratorWindow);
        else if (user->isOperator())
            applicationWindow.setWindowMode(WindowMode::operatorWindow);
        else
            applicationWindow.setWindowMode(WindowMode::userWindow);
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

void Application::logout() {

}

void Application::showMainWindow() {
    this->applicationWindow.show();
}

Application::~Application() {
    std::cout << "dupa" << std::endl;
    if(this->user != nullptr)
        delete this->user;
}

void Application::createNewAccount() {
    bool operationFinished{false};
    do {
        newAccountDialog.exec();
        switch (newAccountDialog.getResult()) {
            case UserAccountDialogResult::ok: {

                auto login = newAccountDialog.getLogin();
                auto email = newAccountDialog.getEmail();
                auto password = newAccountDialog.getPassword();
                auto role = newAccountDialog.getUserRole();

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
