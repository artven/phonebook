#include <QStandardItem>
#include <vector>
#include <iostream>
#include <QMessageBox>

#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QApplication& app,QWidget *parent):
QMainWindow{parent}, Application{app}, ui{new Ui::MainWindow} {
    ui->setupUi(this);
    this->menuView = ui->menuTreeView;
    this->mainWidget = ui->stackedWidget;
    this->menuModel = new QStandardItemModel(1, 1, this);
    this->menuModel->setHeaderData(0, Qt::Horizontal, "Menu");
    this->menuView->setModel(this->menuModel);

    QObject::connect(this->menuView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(onTreeViewItemDoubleCliced(QModelIndex)));

    //requests page
    this->allRequestsRadioButton = ui->allRequestsRadioButton;
    this->acceptedRequestsRadioButton = ui->acceptedRadioButton;
    this->newRequestsRadioButton = ui->newRequestsRadioButton;
    this->rejectedRequestsRadioButton = ui->rejectedRequestsRadioButton;
    this->showRequestsToolButton = ui->showRequestsToolButton;
    this->acceptRequestToolButton = ui->accceptRequestToolButton;
    this->rejectRequestToolButton = ui->rejectRequestToolButton;
    this->requestsTableView = ui->requestsTableView;
    this->acceptRequestToolButton->setEnabled(false);
    this->rejectRequestToolButton->setEnabled(false);
    QObject::connect(this->showRequestsToolButton, SIGNAL(clicked()), this, SLOT(onShowRequestsToolButtonClicked()));
    QObject::connect(this->requestsTableView, SIGNAL(clicked(QModelIndex)), this, SLOT(onRequestsTableViewRowClicked(QModelIndex)));
    QObject::connect(this->acceptRequestToolButton, SIGNAL(clicked()), this, SLOT(onAcceptRequestToolButtonClicked()));
    QObject::connect(this->rejectRequestToolButton, SIGNAL(clicked()), this, SLOT(onRejectRequestToolButtonClicked()));
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
    menuItems.push_back(new QStandardItem{this->newPowerUserIcon, "Nowy użytkownik"});
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
    switch (this->mode) {
        case WindowMode::userWindow:
            this->switchUserMenu(idx);
            break;
        case WindowMode::operatorWindow:
            this->switchOperatorMenu(idx);
            break;
        case WindowMode::administratorWindow:
            this->switchAdministratorMenu(idx);
            break;
    }
}

void MainWindow::switchUserMenu(QModelIndex idx) {
    if (idx.parent() != QModelIndex()) {
        switch (idx.row()) {
            case 0:
                this->mainWidget->setCurrentIndex(0);
                break;
            case 1:
                this->mainWidget->setCurrentIndex(1);
                break;
            case 2:
                this->mainWidget->setCurrentIndex(5);
                break;
            case 3:
                this->mainWidget->setCurrentIndex(6);
                break;
            case 4:
                this->close();
                break;
            case 5:
                this->close();
                break;
        }
    }
}

void MainWindow::switchOperatorMenu(QModelIndex idx) {
    if (idx.parent() != QModelIndex()) {
        int pageIndex = idx.row();
        if (pageIndex <= 3)
            this->mainWidget->setCurrentIndex(pageIndex);
        else if (pageIndex == 4)
            this->mainWidget->setCurrentIndex(4);
        else if (pageIndex == 5)
            this->mainWidget->setCurrentIndex(6);
        else if (pageIndex == 6)
            this->close();
        else if (pageIndex == 7)
            this->close();
    }
}

void MainWindow::switchAdministratorMenu(QModelIndex idx) {
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
    switch (this->mode) {
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

void MainWindow::onShowRequestsToolButtonClicked() {
    if (this->allRequestsRadioButton->isChecked())
        this->showAllRequests();
    if (this->newRequestsRadioButton->isChecked())
        this->showNewRequests();
    if (this->acceptedRequestsRadioButton->isChecked())
        this->showAcceptedRequests();
    if (this->rejectedRequestsRadioButton->isChecked())
        this->showRejectedRequests();

    if(this->reguestsTableModel)
        this->addRequestsTableHeaders();
}

void MainWindow::showAllRequests() {
    if (this->reguestsTableModel)
        this->reguestsTableModel->clear();
    auto newModel = this->getAllRequests();
    if (newModel) {
        this->reguestsTableModel = newModel;
        this->requestsTableView->setModel(newModel);
    }
}

void MainWindow::showNewRequests() {
    if (this->reguestsTableModel)
        this->reguestsTableModel->clear();
    auto newModel = this->getNewRequests();
    if (newModel) {
        this->reguestsTableModel = newModel;
        this->requestsTableView->setModel(newModel);
    }
}

void MainWindow::showAcceptedRequests() {
    if (this->reguestsTableModel)
        this->reguestsTableModel->clear();
    auto newModel = this->getAcceptedRequests();
    if (newModel) {
        this->reguestsTableModel = newModel;
        this->requestsTableView->setModel(newModel);
    }
}

void MainWindow::showRejectedRequests() {
    if (this->reguestsTableModel)
        this->reguestsTableModel->clear();
    auto newModel = this->getRejectedRequests();
    if(newModel) {
        this->reguestsTableModel = newModel;
        this->requestsTableView->setModel(newModel);
    }
}

void MainWindow::showMainWindow() {
    this->show();
}

void MainWindow::chooseWindowMode(UserRecord *user) {
    if (user->isAdministrator())
        this->setWindowMode(WindowMode::administratorWindow);
    else if (user->isOperator())
        this->setWindowMode(WindowMode::operatorWindow);
    else
        this->setWindowMode(WindowMode::userWindow);
}

void MainWindow::addRequestsTableHeaders() {
    this->reguestsTableModel->setHeaderData(0,Qt::Horizontal, "Id");
    this->reguestsTableModel->setHeaderData(1,Qt::Horizontal, "Login");
    this->reguestsTableModel->setHeaderData(2,Qt::Horizontal, "Email");
    this->reguestsTableModel->setHeaderData(3,Qt::Horizontal, "Skrót hasła");
    this->reguestsTableModel->setHeaderData(4,Qt::Horizontal, "Uprawnienia");
    this->reguestsTableModel->setHeaderData(5,Qt::Horizontal, "Status");
    this->reguestsTableModel->setHeaderData(6,Qt::Horizontal, "Data");
}

void MainWindow::onRequestsTableViewRowClicked(QModelIndex idx) {
    idx = this->reguestsTableModel->index(idx.row(), 5);
    auto status = this->reguestsTableModel->data(idx).toString().toStdString();
    if (status == "Nowy") {
        this->acceptRequestToolButton->setEnabled(true);
        this->rejectRequestToolButton->setEnabled(true);
    } else {
        this->acceptRequestToolButton->setEnabled(false);
        this->rejectRequestToolButton->setEnabled(false);
    }
}

void MainWindow::onAcceptRequestToolButtonClicked() {
    std::vector<std::string> request;
    auto idx = this->requestsTableView->currentIndex();
    for(int i=0; i<7; i++) {
        auto cellIndex = this->reguestsTableModel->index(idx.row(), i);
        auto cellValue = this->reguestsTableModel->data(cellIndex).toString().toStdString();
        request.push_back(cellValue);
    }

    try {
        this->acceptRequest(request);
    } catch (std::invalid_argument& exception) {
        QMessageBox::warning(this, "Błąd!", exception.what());
    }
    this->showNewRequests();
}

void MainWindow::onRejectRequestToolButtonClicked() {
    std::vector<std::string> request;
    auto idx = this->requestsTableView->currentIndex();
    for(int i=0; i<7; i++) {
        auto cellIndex = this->reguestsTableModel->index(idx.row(), i);
        auto cellValue = this->reguestsTableModel->data(cellIndex).toString().toStdString();
        request.push_back(cellValue);
    }

    try {
        this->rejectRequest(request);
    } catch (std::invalid_argument& exception) {
        QMessageBox::warning(this, "Błąd!", exception.what());
    }
    this->showNewRequests();
}