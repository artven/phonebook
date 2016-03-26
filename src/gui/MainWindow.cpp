#include <QStandardItem>
#include <vector>
#include <iostream>
#include <QMessageBox>
#include <unistd.h>

#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "SearchDialog.h"


MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::logout() {
    this->close();
    this->start();
}

void MainWindow::showMainWindow() {
    this->show();
}

MainWindow::MainWindow(QApplication& app,QWidget *parent):
QMainWindow{parent}, Application{app}, ui{new Ui::MainWindow} {
    ui->setupUi(this);

    this->getWindowElements();
    this->initializeMenu();
    this->initalizeMainWidget();
    this->connectSignals();
}

void MainWindow::getWindowElements() {
    this->menu = ui->menuTreeView;
    this->mainWidget = ui->stackedWidget;
}

void MainWindow::initializeMenu() {
    this->menuModel = new QStandardItemModel(1, 1, this);
    this->menuModel->setHeaderData(0, Qt::Horizontal, "Menu");
    this->menu->setModel(this->menuModel);

    auto pal = this->menu->palette();
    pal.setColor(QPalette::Base, QColor(53,53,53));
    this->menu->setPalette(pal);
}

void MainWindow::initalizeMainWidget() {
    this->mainWidget->addWidget(&this->phonebookPage);
    this->mainWidget->addWidget(&this->newRecordPage);
    this->mainWidget->addWidget(&this->requestsPage);
    this->mainWidget->addWidget(&this->usersPage);
    this->mainWidget->addWidget(&this->newUserPage);
    this->mainWidget->addWidget(&this->passwordPage);
}

void MainWindow::connectSignals() {
    QObject::connect(this->menu, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(onMenuDoubleClicked(QModelIndex)));
    QObject::connect(this->menu, SIGNAL(collapsed(QModelIndex)), this, SLOT(onMenuCollapsed()));
    QObject::connect(this->menu, SIGNAL(expanded(QModelIndex)), this, SLOT(onMenuExpanded()));
}

void MainWindow::chooseWindowMode(UserRecord *user) {
    if (user->isAdministrator())
        this->addAdministratorMenu();
    else if (user->isOperator())
        this->addOperatorMenu();
    else
        this->addUserMenu();
    this->loadWidget(0);
}

void MainWindow::addAdministratorMenu() {
    this->menuModel->clear();
    QStandardItem* administratorRootItem = new QStandardItem(this->administratorIcon, "Administrator");

    std::vector<QStandardItem*> menuItems;
    menuItems.push_back(new QStandardItem{this->browseRecordsIcon, "Przeglądaj bazę"});
    menuItems.push_back(new QStandardItem{this->addRecordIcon, "Dodaj wpis"});
    menuItems.push_back(new QStandardItem{this->newUserRequestIcon, "Wnioski o nowe konta"});
    menuItems.push_back(new QStandardItem{this->browseUsersIcon, "Edytuj użytkowników"});
    menuItems.push_back(new QStandardItem{this->newPowerUserIcon, "Nowy użytkownik"});
    menuItems.push_back(new QStandardItem{this->changePasswordIcon, "Zmień hasło"});
    menuItems.push_back(new QStandardItem{this->logutIcon, "Wyloguj się"});
    menuItems.push_back(new QStandardItem{this->exitIcon, "Wyjdź"});

    this->menuPages.clear();
    this->menuPages.push_back(&this->phonebookPage);
    this->menuPages.push_back(&this->newRecordPage);
    this->menuPages.push_back(&this->requestsPage);
    this->menuPages.push_back(&this->usersPage);
    this->menuPages.push_back(&this->newUserPage);
    this->menuPages.push_back(&this->passwordPage);

    administratorRootItem->setEditable(false);
    for(auto item: menuItems) {
        item->setEditable(false);
        administratorRootItem->appendRow(item);
    }

    this->menuModel->setItem(0, 0, administratorRootItem);
    this->menu->expandAll();
}

void MainWindow::addOperatorMenu() {
    this->menuModel->clear();
    QStandardItem* operatorRootItem = new QStandardItem(this->operatorIcon, "Operator");

    std::vector<QStandardItem*> menuItems;
    menuItems.push_back(new QStandardItem{this->browseRecordsIcon, "Przeglądaj bazę"});
    menuItems.push_back(new QStandardItem{this->addRecordIcon, "Dodaj wpis"});
    menuItems.push_back(new QStandardItem{this->browseUsersIcon, "Edytuj użytkowników"});
    menuItems.push_back(new QStandardItem{this->newUserRequestIcon, "Wnioski o nowe konta"});
    menuItems.push_back(new QStandardItem{this->changePasswordIcon, "Zmień hasło"});
    menuItems.push_back(new QStandardItem{this->logutIcon, "Wyloguj się"});
    menuItems.push_back(new QStandardItem{this->exitIcon, "Wyjdź"});

    this->menuPages.clear();
    this->menuPages.push_back(&this->phonebookPage);
    this->menuPages.push_back(&this->newRecordPage);
    this->menuPages.push_back(&this->usersPage);
    this->menuPages.push_back(&this->requestsPage);
    this->menuPages.push_back(&this->passwordPage);

    operatorRootItem->setEditable(false);
    for(auto item: menuItems) {
        item->setEditable(false);
        operatorRootItem->appendRow(item);
    }

    this->menuModel->setItem(0, 0, operatorRootItem);
}

void MainWindow::addUserMenu() {
    this->menuModel->clear();
    QStandardItem* userMenuRootItem = new QStandardItem{this->userIcon, "Użytkownik"};

    std::vector<QStandardItem*> userMenuItems;
    userMenuItems.push_back(new QStandardItem{this->browseRecordsIcon, "Przeglądaj bazę"});
    userMenuItems.push_back(new QStandardItem{this->addRecordIcon, "Dodaj wpis"});
    userMenuItems.push_back(new QStandardItem{this->changePasswordIcon, "Zmień hasło"});
    userMenuItems.push_back(new QStandardItem{this->logutIcon, "Wyloguj się"});
    userMenuItems.push_back(new QStandardItem{this->exitIcon, "Wyjdź"});

    this->menuPages.clear();
    this->menuPages.push_back(&this->phonebookPage);
    this->menuPages.push_back(&this->newRecordPage);
    this->menuPages.push_back(&this->passwordPage);

    userMenuRootItem->setEditable(false);
    for(auto item: userMenuItems) {
        item->setEditable(false);
        userMenuRootItem->appendRow(item);
    }

    this->menuModel->setItem(0, 0, userMenuRootItem);
    this->menu->expandAll();
}

void MainWindow::onMenuDoubleClicked(QModelIndex idx) {
    if (idx.parent() != QModelIndex()) {
        if(idx.row() < this->menuPages.size()) {
            this->loadWidget(idx.row());
        } else if (idx.row() == this->menuPages.size()) {
            this->logout();
        } else {
            this->close();
        }
    }
}

void MainWindow::loadWidget(int widgetIndex) {
    auto widget = this->menuPages[widgetIndex];
    this->mainWidget->setCurrentWidget(widget);
    this->adaptWindowToWidget(widget);
}

void MainWindow::adaptWindowToWidget(QWidget *widget) {
    auto menuWidth = 350;
    auto widgetWidht = widget->size().width();
    auto widgetHeight = widget->size().height();

    auto width = menuWidth + widgetWidht + 20;
    auto height = widgetHeight + 40;

    this->setWindowSize(width, height);
}

void MainWindow::setWindowSize(int width, int height) {
    this->setMinimumSize(width, height);
    this->setMaximumSize(width, height);
    this->setFixedSize(width, height);
}

void MainWindow::onMenuCollapsed() {
    auto size = this->mainWidget->currentWidget()->size();
    this->mainWidget->setGeometry(10, 20, size.width(), size.height());
    this->setWindowSize(size.width()+20, size.height()+40);
    this->menu->setFixedHeight(20);
}

void MainWindow::onMenuExpanded() {
    this->menu->setFixedHeight(200);
    auto size = this->mainWidget->currentWidget()->size();
    this->mainWidget->setGeometry(350, 20, size.width(), size.height());
    this->setWindowSize(size.width()+20+350, size.height()+40);
}


