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
}

void UsersForm::onShowAllButtonClicked() {

}

void UsersForm::onSaveButtonClicked() {

}
