#include "PhonebookForm.h"
#include "ui_PhonebookForm.h"

PhonebookForm::~PhonebookForm() {
    delete ui;
}

PhonebookForm::PhonebookForm(QWidget *parent) :
QWidget(parent), ui(new Ui::PhonebookForm) {
    ui->setupUi(this);

    this->getFormElements();
    this->connectSignals();
}

void PhonebookForm::getFormElements() {
    this->allPhonesButton = ui->showAllPhonesToolButton;
    this->searchButton = ui->searchPhonesToolButton;
    this->clearButton = ui->clearPhonesToolButton;
    this->table = ui->phonesTableView;
    this->model = nullptr;
}

void PhonebookForm::connectSignals() {
    QObject::connect(this->allPhonesButton, SIGNAL(clicked()), this, SLOT(onAllPhonesButtonClicked()));
    QObject::connect(this->searchButton, SIGNAL(clicked()), this, SLOT(onSearchButtonClicked()));
    QObject::connect(this->clearButton, SIGNAL(clicked()), this, SLOT(onClearButtonClicked()));
}

void PhonebookForm::onAllPhonesButtonClicked() {

}

void PhonebookForm::onSearchButtonClicked() {

}

void PhonebookForm::onClearButtonClicked() {
    this->clear();
}

void PhonebookForm::clear() {
    if (this->model != nullptr)
        this->model->clear();
}
