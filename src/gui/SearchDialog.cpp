#include "SearchDialog.h"
#include "ui_SearchDialog.h"

SearchDialog::SearchDialog(QWidget *parent) :
QDialog(parent), ui(new Ui::SearchDialog) {
    ui->setupUi(this);

    this->name = ui->nameLineEdit;
    this->surname = ui->surnameLineEdit;
    this->address = ui->addressLineEdit;
    this->city = ui->cityLineEdit;
    this->phone = ui->phoneLineEdit;
    this->mobile = ui->mobileLineEdit;
    this->email = ui->emailLineEdit;
    this->searchButton = ui->searchPushButton;
    this->cancelButton = ui->cancelPushButton;

    QObject::connect(this->searchButton, SIGNAL(clicked()), this, SLOT(onSearchButtonClicked()));
    QObject::connect(this->cancelButton, SIGNAL(clicked()), this, SLOT(onCancelButtonClicked()));

}

SearchDialog::~SearchDialog() {
    delete ui;
}

SearchDialogResult SearchDialog::getResult() {
    return this->result;
}

void SearchDialog::onSearchButtonClicked() {
    this->result = SearchDialogResult::ok;
    this->close();

}

void SearchDialog::onCancelButtonClicked() {
    this->result = SearchDialogResult::cancel;
    this->close();
}

std::string SearchDialog::getName() {
    return this->name->text().toStdString();
}

std::string SearchDialog::getSurname() {
    return this->surname->text().toStdString();
}

std::string SearchDialog::getAddress() {
    return this->address->text().toStdString();
}

std::string SearchDialog::getCity() {
    return this->city->text().toStdString();
}

std::string SearchDialog::getPhone() {
    return this->phone->text().toStdString();
}

std::string SearchDialog::getMobile() {
    return this->mobile->text().toStdString();
}

std::string SearchDialog::getEmail() {
    return this->email->text().toStdString();
}
