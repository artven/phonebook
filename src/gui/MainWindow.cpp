#include <QStandardItem>
#include <vector>
#include <iostream>
#include <QMessageBox>

#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "SearchDialog.h"

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

    auto pal = this->menuView->palette();
    pal.setColor(QPalette::Base, QColor(53,53,53));
    this->menuView->setPalette(pal);

    this->loginNewUserLineEdit = ui->loginNewUserLineEdit;
    this->emailNewUserLineEdit = ui->emailNewUserLineEdit;
    this->passwordNewUserLineEdit = ui->passwordNewUserLineEdit;
    this->repeatPasswordNewUserLineEdit = ui->repeatPasswordLineEdit;
    this->roleNewUserComboBox = ui->roleNewUserComboBox;
    this->okNewUserPushButton = ui->addNewUserPushButton;
    this->clearNewUserPushButton = ui->clearNewUserPushButton;

    this->roleNewUserComboBox->addItem("Użytkownik");
    this->roleNewUserComboBox->addItem("Operator");
    this->roleNewUserComboBox->addItem("Administrator");

    QObject::connect(this->clearNewUserPushButton, SIGNAL(clicked()), this, SLOT(onClearNewUserClicked()));
    QObject::connect(this->okNewUserPushButton, SIGNAL(clicked()), this, SLOT(onAddNewUserClicked()));

    this->showAllPhonesToolButton = ui->showAllPhonesToolButton;
    this->searchPhonesValuesToolButton = ui->searchPhonesValuesToolButton;
    this->clearPhonesValuesToolButton = ui->clearPhonesValuesToolButton;
    this->phonesTableView = ui->phonesTableView;

    QObject::connect(this->showAllPhonesToolButton, SIGNAL(clicked()), this, SLOT(onShowAllPhoneClicked()));
    QObject::connect(this->clearPhonesValuesToolButton, SIGNAL(clicked()), this, SLOT(onClearPhonecClicked()));
    QObject::connect(this->searchPhonesValuesToolButton, SIGNAL(clicked()), this, SLOT(onSearchPhoneClicked()));

    this->showAllUsersToolButton = ui->showAllUsersToolButton;
    this->saveUserPushButton = ui->saveUserToolButton;
    this->usersTableView = ui->usersTableView;
    this->userLoginLineEdit = ui->userLoginLineEdit;
    this->userEmailLineEdit = ui->userEmailLineEdit;
    this->userIdLineEdit = ui->userIdLineEdit ;

    QObject::connect(this->showAllUsersToolButton, SIGNAL(clicked()), this, SLOT(onShowAllUsersToolButton()));
    QObject::connect(this->usersTableView, SIGNAL(clicked(QModelIndex)), this, SLOT(onUserTableclicked(QModelIndex)));
    QObject::connect(this->saveUserPushButton, SIGNAL(clicked()), this, SLOT(onSaveUserClicked()));

    this->addValidators();
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
    this->clearSearchPhonesPage();
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
    this->clearAddNewUserPage();
    this->mainWidget->setCurrentIndex(4);
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
                this->setChangePasswordPage();
                break;
            case 3:
                this->logout();
                break;
            case 4:
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

void MainWindow::onAddNewUserClicked() {
    auto login = this->loginNewUserLineEdit->text().toStdString();
    auto email = this->emailNewUserLineEdit->text().toStdString();
    auto password = this->passwordNewUserLineEdit->text().toStdString();
    auto repeatPassword = this->repeatPasswordNewUserLineEdit->text().toStdString();
    auto comboBoxText = this->roleNewUserComboBox->currentText().toStdString();

    std::cout << comboBoxText << std::endl;
    UserRole r;
    if (comboBoxText == "Użytkownik")
        r = UserRole::NormalUser;
    else if (comboBoxText == "Operator")
        r = UserRole::Operator;
    else if (comboBoxText == "Administrator")
        r = UserRole::Admministrator;

    if(password != repeatPassword) {
        QMessageBox::warning(this, "Błąd!", "Podane hasła nie są identyczne");
    } else {
        try {
            UserRecord newUser{0, login, email, r};
            this->addUser(newUser, password);
            QMessageBox::information(this, "Sukces!", "Nowy użytkownik został dodany do bazy");
            this->clearAddNewUserPage();
        } catch (std::invalid_argument& exception) {
            QMessageBox::warning(this, "Błąd", exception.what());
        }
    }

}

void MainWindow::onClearNewUserClicked() {
    this->clearAddNewUserPage();
}

void MainWindow::clearAddNewUserPage() {
    this->loginNewUserLineEdit->clear();
    this->emailNewUserLineEdit->clear();
    this->passwordNewUserLineEdit->clear();
    this->repeatPasswordNewUserLineEdit->clear();
    this->roleNewUserComboBox->setCurrentIndex(0);
}

void MainWindow::onShowAllPhoneClicked() {
    auto newPhonesModel = this->getAllPhones();
    if (newPhonesModel) {
        this->clearSearchPhonesPage();
        this->phonesModel = newPhonesModel;
        this->phonesTableView->setModel(newPhonesModel);
        this->addPhonesTableHeaders();
    } else {
        QMessageBox::warning(this, "Błąd!", "Brak rekordów w bazie!");
    }
}

void MainWindow::onSearchPhoneClicked() {
    SearchDialog dlg;
    dlg.exec();
    if (dlg.getResult() == SearchDialogResult::ok) {
        auto name = dlg.getName();
        auto surname = dlg.getSurname();
        auto address = dlg.getAddress();
        auto city = dlg.getCity();
        auto phone = dlg.getPhone();
        auto mobile = dlg.getMobile();
        auto email = dlg.getEmail();
        auto model = this->searchPhones(name, surname, address, city, email, phone, mobile);
        if (model) {
            this->clearSearchPhonesPage();
            this->phonesModel = model;
            this->phonesTableView->setModel(model);
        } else
            QMessageBox::warning(this, "Błąd!", "Nie znaleziono żadnego rekordu!");
    }
}

void MainWindow::onClearPhonecClicked() {
    this->clearSearchPhonesPage();
}

void MainWindow::clearSearchPhonesPage() {
    if (this->phonesModel)
        this->phonesModel->clear();
}

void MainWindow::addPhonesTableHeaders() {
    if (this->phonesModel) {
        this->phonesModel->setHeaderData(0, Qt::Horizontal, "Id");
        this->phonesModel->setHeaderData(1, Qt::Horizontal, "Imie");
        this->phonesModel->setHeaderData(2, Qt::Horizontal, "Nazwisko");
        this->phonesModel->setHeaderData(3, Qt::Horizontal, "Adres");
        this->phonesModel->setHeaderData(4, Qt::Horizontal, "Miasto");
        this->phonesModel->setHeaderData(5, Qt::Horizontal, "Telefon");
        this->phonesModel->setHeaderData(6, Qt::Horizontal, "Komórka");
        this->phonesModel->setHeaderData(7, Qt::Horizontal, "Email");
    }
}

void MainWindow::onShowAllUsersToolButton() {
    auto newModel = this->getAllUsers();
    if (newModel != nullptr) {
        this->clearUsersPage();
        this->usersModel = newModel;
        this->usersTableView->setModel(newModel);
        this->addUserTableHeaders();
    }

}

void MainWindow::clearUsersPage() {
    if (this->usersModel != nullptr)
        this->usersModel->clear();
    this->userLoginLineEdit->clear();
    this->userEmailLineEdit->clear();
    this->userIdLineEdit->clear();
}

void MainWindow::addUserTableHeaders() {
    if (this->usersModel != nullptr) {
        this->usersModel->setHeaderData(0, Qt::Horizontal, "Id");
        this->usersModel->setHeaderData(1, Qt::Horizontal, "Login");
        this->usersModel->setHeaderData(2, Qt::Horizontal, "Email");
        this->usersModel->setHeaderData(3, Qt::Horizontal, "Uprawnienia");
    }
}

void MainWindow::onUserTableclicked(QModelIndex idx) {
    auto row = idx.row();

    auto idIndex = this->usersModel->index(idx.row(), 0);
    auto id = this->usersModel->data(idIndex).toString();
    auto loginIndex = this->usersModel->index(idx.row(), 1);
    auto login = this->usersModel->data(loginIndex).toString();
    auto emailIndex = this->usersModel->index(idx.row(), 2);
    auto email = this->usersModel->data(emailIndex).toString();
    auto roleIndex = this->usersModel->index(idx.row(), 3);
    auto role = this->usersModel->data(roleIndex).toString();

    this->userIdLineEdit->setText(id);
    this->userLoginLineEdit->setText(login);
    this->userEmailLineEdit->setText(email);

}

void MainWindow::onSaveUserClicked() {
    auto id = this->userIdLineEdit->text().toInt();
    auto login = this->userLoginLineEdit->text().toStdString();
    auto email = this->userEmailLineEdit->text().toStdString();

    try {
        UserRecord user{id, login, email, UserRole::NormalUser};
        this->updateUser(user);
        QMessageBox::information(this, "Ok", "Rekord zmieniono poprawnie!");
        this->clearUsersPage();
    } catch (std::invalid_argument& exception) {
        QMessageBox::warning(this, "Błąd!", exception.what());
    }
}

void MainWindow::addValidators() {
    this->changePasswordPageValidators();
}

void MainWindow::changePasswordPageValidators() {
    QRegExp regexp(R"#(\w{4,})#");
    QRegExpValidator* validator = new QRegExpValidator(regexp);
    this->oldPasswordLabel->setValidator(validator);
    this->newPasswordLabel->setValidator(validator);
    this->repeatPasswordLabel->setValidator(validator);
}