#include "ui_PhonebookForm.h"
#include "PhonebookForm.h"
#include "SearchDialog.h"

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
    emit showAllPhones();
}

void PhonebookForm::onSearchButtonClicked() {
    SearchDialog dlg;
    dlg.exec();
    if (dlg.getResult() == SearchDialogResult::ok) {
        std::map<std::string, std::string> parameters;
        parameters["name"] = dlg.getName();
        parameters["surname"] = dlg.getSurname();
        parameters["address"] = dlg.getAddress();
        parameters["city"] = dlg.getCity();
        parameters["phone"] = dlg.getPhone();
        parameters["mobile"] = dlg.getMobile();
        parameters["email"] = dlg.getEmail();
        emit searchPhones(parameters);
    }
}

void PhonebookForm::onClearButtonClicked() {
    this->clear();
}

void PhonebookForm::clear() {
    if (this->model != nullptr)
        this->model->clear();
}

void PhonebookForm::setModel(QStandardItemModel *model) {
    this->clear();
    this->model = model;
    this->table->setModel(model);
    this->addHeaders();
}

void PhonebookForm::addHeaders() {
    if (this->model) {
        this->model->setHeaderData(0, Qt::Horizontal, "Id");
        this->model->setHeaderData(1, Qt::Horizontal, "Imie");
        this->model->setHeaderData(2, Qt::Horizontal, "Nazwisko");
        this->model->setHeaderData(3, Qt::Horizontal, "Adres");
        this->model->setHeaderData(4, Qt::Horizontal, "Miasto");
        this->model->setHeaderData(5, Qt::Horizontal, "Telefon");
        this->model->setHeaderData(6, Qt::Horizontal, "Komórka");
        this->model->setHeaderData(7, Qt::Horizontal, "Email");
    }
}
