#include <iostream>

#include "UsersForm.h"
#include "ui_UsersForm.h"

UsersForm::~UsersForm() {
    delete ui;
}

UsersForm::UsersForm(QWidget *parent) :
QWidget(parent), ui(new Ui::UsersForm) {
    ui->setupUi(this);

    this->getFormElements();
    this->addValidators();
    this->connectSignals();
}

void UsersForm::getFormElements() {
    this->login = ui->userLoginLineEdit;
    this->email = ui->userEmailLineEdit;
    this->id = ui->userIdLineEdit;
    this->showAllButton = ui->showAllUsersToolButton;
    this->saveButton = ui->saveUserToolButton;
    this->table = ui->usersTableView;
    this->model = nullptr;
}

void UsersForm::addValidators() {
    QRegExp textRegex{R"#(\w{4,})#"};
    this->login->setValidator(new QRegExpValidator{textRegex});

    QRegExp emailRegex{R"#(^[a-zA-Z][a-zA-Z0-9\._]{1,}@[a-zA-Z0-9\.]{2,}((\.com)|(\.pl))$)#"};
    this->email->setValidator(new QRegExpValidator{emailRegex});
}

void UsersForm::connectSignals() {
    QObject::connect(this->showAllButton, SIGNAL(clicked()), this, SLOT(onShowAllButtonClicked()));
    QObject::connect(this->saveButton, SIGNAL(clicked()), this, SLOT(onSaveButtonClicked()));
    QObject::connect(this->table, SIGNAL(clicked(QModelIndex)), this, SLOT(onTableRowClicked(QModelIndex)));
}

void UsersForm::onShowAllButtonClicked() {
    emit showAllUsers();
}

void UsersForm::onSaveButtonClicked() {
    auto id = this->id->text().toInt();
    auto login = this->login->text().toStdString();
    auto email = this->email->text().toStdString();

    emit updateUser(id, login, email);
}

void UsersForm::clear() {
    if (this->model != nullptr)
        this->model->clear();
    this->login->clear();
    this->email->clear();
    this->id->clear();
    this->saveButton->setEnabled(false);
}

void UsersForm::setModel(QStandardItemModel *model) {
    this->model = model;
    this->table->setModel(model);
    this->addHeaders();
}

void UsersForm::addHeaders() {
    if (this->model != nullptr) {
        this->model->setHeaderData(0, Qt::Horizontal, "Id");
        this->model->setHeaderData(1, Qt::Horizontal, "Login");
        this->model->setHeaderData(2, Qt::Horizontal, "Email");
        this->model->setHeaderData(3, Qt::Horizontal, "Uprawnienia");
    }
}

void UsersForm::onTableRowClicked(QModelIndex idx) {
    auto row = idx.row();

    auto idIndex = this->model->index(idx.row(), 0);
    auto id = this->model->data(idIndex).toString();
    auto loginIndex = this->model->index(idx.row(), 1);
    auto login = this->model->data(loginIndex).toString();
    auto emailIndex = this->model->index(idx.row(), 2);
    auto email = this->model->data(emailIndex).toString();
    auto roleIndex = this->model->index(idx.row(), 3);
    auto role = this->model->data(roleIndex).toString();

    this->id->setText(id);
    this->login->setText(login);
    this->email->setText(email);

    this->saveButton->setEnabled(true);
}

