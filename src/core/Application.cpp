//
// Created by rafal on 15.03.16.
//

#include <QStyleFactory>
#include <QPalette>
#include <QMessageBox>

#include "Application.h"
#include "LoginDialog.h"


Application::Application(int &argc, char **argv):
QApplication(argc, argv), database{this->databaseName}, phones{database}, users{database} {
    this->setFusionStyle();
    this->setDarkPallete();
}


void Application::setFusionStyle() {
    QStyleFactory styleFactory;
    this->setStyle(styleFactory.create("Fusion"));
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
    LoginDialog dialog(nullptr);
    dialog.exec();

    auto clickedButton = dialog.getResult();
    switch(clickedButton) {
        case LoginResult::ok:
            QMessageBox::warning(nullptr, "Logowanie", "Wybrałeś OK.");
            abort();
            break;

        case LoginResult::cancel:
            QMessageBox::warning(nullptr, "Logowanie", "Wybrałeś anuluj.");
            break;

        case LoginResult::newAccount:
            QMessageBox::warning(nullptr, "Logowanie", "Wybrałeś nowe konto.");
            break;

        case LoginResult::undefined:
            QMessageBox::critical(nullptr, "Logowanie", "Coś się zjebało!");
            break;
    }
}


void Application::logout() {

}

void Application::showMainWindow() {
    this->applicationWindow.show();
}
