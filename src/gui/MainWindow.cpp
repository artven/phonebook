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
    this->setBrowseDatabasePage();

    //change password
    this->oldPasswordLabel = ui->oldPasswordLineEdit;
    this->newPasswordLabel = ui->newPasswordLineEdit;
    this->repeatPasswordLabel = ui->repeatNewPasswordLineEdit;
    this->okChangePasswordButton = ui->okPasswordChangePushButton;
    QObject::connect(this->okChangePasswordButton, SIGNAL(clicked()), this, SLOT(onChangePasswordClicked()));

    //add record
    this->nameLineEdit = ui->nameLineEdit;
    this->surnameLineEdit = ui->surnameLineEdit;
    this->addressLineEdit = ui->addressLineEdit;
    this->cityLineEdit = ui->cityLineEdit;
    this->phoneLineEdit = ui->phoneLineEdit;
    this->mobileLineEdit = ui->mobileLineEdit;
    this->emailLineEdit = ui->emailLineEdit;
    this->okAddRecordPushButton = ui->okAddRecordPushButton;
    this->clearAddRecordPushButton = ui->clearAddRecordPushButton;
    QObject::connect(this->okAddRecordPushButton, SIGNAL(clicked()), this, SLOT(onAddRecordClicked()));
    QObject::connect(this->clearAddRecordPushButton, SIGNAL(clicked()), this, SLOT(onClearRecordClicked()));
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


void MainWindow::setBrowseDatabasePage() {
    this->mainWidget->setCurrentIndex(0);
}

void MainWindow::setAddRecordPage() {
    this->clearAddRecordPage();
    this->mainWidget->setCurrentIndex(1);
}

void MainWindow::setEditUsersPage() {
    this->mainWidget->setCurrentIndex(2);
}

void MainWindow::setRequestsPage() {
    this->mainWidget->setCurrentIndex(3);
}

void MainWindow::setNewUserPage() {
    this->mainWidget->setCurrentIndex(4);
}

void MainWindow::setEditPersonalData() {
    this->mainWidget->setCurrentIndex(5);
}

void MainWindow::setChangePasswordPage() {
    this->oldPasswordLabel->clear();
    this->newPasswordLabel->clear();
    this->repeatPasswordLabel->clear();
    this->mainWidget->setCurrentIndex(6);
}

void MainWindow::switchUserMenu(QModelIndex idx) {
    if (idx.parent() != QModelIndex()) {
        switch (idx.row()) {
            case 0:
                this->setBrowseDatabasePage();
                break;
            case 1:
                this->setAddRecordPage();
                break;
            case 2:
                this->setEditPersonalData();
                break;
            case 3:
                this->setChangePasswordPage();
                break;
            case 4:
                this->logout();
                break;
            case 5:
                this->close();
                break;
        }
    }
}

void MainWindow::switchOperatorMenu(QModelIndex idx) {
    if (idx.parent() != QModelIndex()) {
        switch (idx.row()) {
            case 0:
                this->setBrowseDatabasePage();
                break;
            case 1:
                this->setAddRecordPage();
                break;
            case 2:
                this->setEditUsersPage();
                break;
            case 3:
                this->setRequestsPage();
                break;
            case 4:
                this->setNewUserPage();
                break;
            case 5:
                this->setChangePasswordPage();
                break;
            case 6:
                this->logout();
                break;
            case 7:
                this->close();
                break;
        }
    }
}

void MainWindow::switchAdministratorMenu(QModelIndex idx) {
    if (idx.parent() != QModelIndex())
        switch (idx.row()) {
            case 0:
                this->setBrowseDatabasePage();
                break;
            case 1:
                this->setAddRecordPage();
                break;
            case 2:
                this->setEditUsersPage();
                break;
            case 3:
                this->setRequestsPage();
                break;
            case 4:
                this->setNewUserPage();
                break;
            case 5:
                this->setEditPersonalData();
                break;
            case 6:
                this->setChangePasswordPage();
                break;
            case 7:
                this->logout();
                break;
            case 8:
                this->close();
                break;
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

void MainWindow::logout() {
    this->close();
    this->start();
}

void MainWindow::onChangePasswordClicked() {
    auto oldPassword = this->oldPasswordLabel->text().toStdString();
    auto newPassword = this->newPasswordLabel->text().toStdString();
    auto repeatPassword = this->repeatPasswordLabel->text().toStdString();
    if (newPassword != repeatPassword) {
        QMessageBox::warning(this, "Błąd!", "Podane nowe hasła nie są identyczne!");
    } else {
        try {
            this->changePassword(newPassword, oldPassword);
            QMessageBox::information(this, "Info", "Hasło zostało zmienione. Zostaniesz wylogowany.");
            this->logout();
        } catch (std::invalid_argument& exception) {
            QMessageBox::warning(this, "Błąd!", exception.what());
        }
    }
}

void MainWindow::onAddRecordClicked() {
    auto name = this->nameLineEdit->text().toStdString();
    auto surname = this->surnameLineEdit->text().toStdString();
    auto address = this->addressLineEdit->text().toStdString();
    auto city = this->cityLineEdit->text().toStdString();
    auto phone = this->phoneLineEdit->text().toStdString();
    auto mobile = this->mobileLineEdit->text().toStdString();
    auto email = this->emailLineEdit->text().toStdString();

    try {
        PhoneBookRecord newRecord{0, name, surname, address, city, phone, mobile, email};
        this->addRecord(newRecord);
        QMessageBox::information(this, "Sukces", "Rekord został dodany do bazy!");
        this->clearAddRecordPage();
    } catch (std::invalid_argument& exception) {
        QMessageBox::warning(this, "Błąd", exception.what());
    }
}

void MainWindow::onClearRecordClicked() {
    this->clearAddRecordPage();
}

void MainWindow::clearAddRecordPage() {
    this->nameLineEdit->clear();
    this->surnameLineEdit->clear();
    this->addressLineEdit->clear();
    this->cityLineEdit->clear();
    this->phoneLineEdit->clear();
    this->mobileLineEdit->clear();
    this->emailLineEdit->clear();
}
