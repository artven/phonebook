#include <QStandardItem>
#include <vector>
#include <iostream>

#include "MainWindow.h"
#include "ui_MainWindow.h"



MainWindow::MainWindow(QWidget *parent):
QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->menuView = ui->menuTreeView;
    this->mainWidget = ui->stackedWidget;
    this->menuModel = new QStandardItemModel(1, 1, this);
    this->menuModel->setHeaderData(0, Qt::Horizontal, "Menu");
    this->menuView->setModel(this->menuModel);

    QObject::connect(this->menuView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(onTreeViewItemDoubleCliced(QModelIndex)));
}


void MainWindow::addUserMenu() {
    this->menuModel->clear();
    QStandardItem* userMenuRootItem = new QStandardItem{this->userIcon, "Użytkownik"};

    std::vector<QStandardItem*> userMenuItems;
    userMenuItems.push_back(new QStandardItem{this->browseRecordsIcon, "Przeglądaj bazę"});
    userMenuItems.push_back(new QStandardItem{this->addRecordIcon, "Dodaj wpis"});
    userMenuItems.push_back(new QStandardItem{this->editSelfDataIcon, "Edytuj swoje dane"});
    userMenuItems.push_back(new QStandardItem{this->changePasswordIcon, "Zmień hasło"});
    userMenuItems.push_back(new QStandardItem{this->logutIcon, "Wyloguj się"});
    userMenuItems.push_back(new QStandardItem{this->exitIcon, "Wyjdź"});

    userMenuRootItem->setEditable(false);
    for(auto item: userMenuItems) {
        item->setEditable(false);
        userMenuRootItem->appendRow(item);
    }

    this->menuModel->setItem(0, 0, userMenuRootItem);
    this->menuView->expandAll();
}


void MainWindow::addOperetorMenu() {
    this->menuModel->clear();
    QStandardItem* operatorRootItem = new QStandardItem(this->operatorIcon, "Operator");

    std::vector<QStandardItem*> menuItems;
    menuItems.push_back(new QStandardItem{this->browseRecordsIcon, "Przeglądaj bazę"});
    menuItems.push_back(new QStandardItem{this->addRecordIcon, "Dodaj wpis"});
    menuItems.push_back(new QStandardItem{this->browseUsersIcon, "Edytuj użytkowników"});
    menuItems.push_back(new QStandardItem{this->newUserRequestIcon, "Wnioski o nowe konta"});
    menuItems.push_back(new QStandardItem{this->editSelfDataIcon, "Edytuj swoje dane"});
    menuItems.push_back(new QStandardItem{this->changePasswordIcon, "Zmień hasło"});
    menuItems.push_back(new QStandardItem{this->logutIcon, "Wyloguj się"});
    menuItems.push_back(new QStandardItem{this->exitIcon, "Wyjdź"});

    operatorRootItem->setEditable(false);
    for(auto item: menuItems) {
        item->setEditable(false);
        operatorRootItem->appendRow(item);
    }

    this->menuModel->setItem(0, 0, operatorRootItem);
    this->menuView->expandAll();
}


void MainWindow::addAdministratorMenu() {
    this->menuModel->clear();
    QStandardItem* administratorRootItem = new QStandardItem(this->administratorIcon, "Administrator");

    std::vector<QStandardItem*> menuItems;
    menuItems.push_back(new QStandardItem{this->browseRecordsIcon, "Przeglądaj bazę"});
    menuItems.push_back(new QStandardItem{this->addRecordIcon, "Dodaj wpis"});
    menuItems.push_back(new QStandardItem{this->browseUsersIcon, "Edytuj użytkowników"});
    menuItems.push_back(new QStandardItem{this->newUserRequestIcon, "Wnioski o nowe konta"});
    menuItems.push_back(new QStandardItem{this->newPowerUserIcon, "Nowy operator/administrator"});
    menuItems.push_back(new QStandardItem{this->editSelfDataIcon, "Edytuj swoje dane"});
    menuItems.push_back(new QStandardItem{this->changePasswordIcon, "Zmień hasło"});
    menuItems.push_back(new QStandardItem{this->logutIcon, "Wyloguj się"});
    menuItems.push_back(new QStandardItem{this->exitIcon, "Wyjdź"});

    administratorRootItem->setEditable(false);
    for(auto item: menuItems) {
        item->setEditable(false);
        administratorRootItem->appendRow(item);
    }

    this->menuModel->setItem(0, 0, administratorRootItem);
    this->menuView->expandAll();
}


MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::onTreeViewItemDoubleCliced(QModelIndex idx) {
    std::cout << "dupa " << idx.row() << std::endl;
    if (idx.parent() != QModelIndex()) {
        int pageIndex = idx.row();
        if (pageIndex <= 6)
            this->mainWidget->setCurrentIndex(pageIndex);
        else if (pageIndex == 7)
            this->close();
        else if (pageIndex == 8)
            this->close();
        }
}


void MainWindow::setWindowMode(WindowMode mode) {
    this->mode = mode;
    switch (WindowMode::administratorWindow) {
        case WindowMode::userWindow:
            this->addUserMenu();
            break;
        case WindowMode::operatorWindow:
            this->addOperetorMenu();
            break;
        case WindowMode::administratorWindow:
            this->addAdministratorMenu();
            break;
    }
}
