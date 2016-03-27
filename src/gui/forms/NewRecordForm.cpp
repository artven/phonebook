#include "NewRecordForm.h"
#include "ui_NewRecordForm.h"

NewRecordForm::NewRecordForm(QWidget *parent) :
QWidget(parent), ui(new Ui::NewRecordForm) {
    ui->setupUi(this);
    this->getFormElements();
    this->addValidators();
    this->connectSignals();
}

void NewRecordForm::getFormElements() {
    this->name = ui->nameLineEdit;
    this->surname = ui->surnameLineEdit;
    this->address = ui->addressLineEdit;
    this->city = ui->cityLineEdit;
    this->phone = ui->phoneLineEdit;
    this->mobile = ui->mobileLineEdit;
    this->email = ui->emailLineEdit;
    this->okButton = ui->addRecordPushButton;
    this->clearButton = ui->clearFieldsPushButton;
}

NewRecordForm::~NewRecordForm() {
    delete ui;
}

void NewRecordForm::addValidators() {
    //TODO zmienić regexy w record na statyczne i je tutaj wykorzystać
    QRegExp textRegex{R"#(\w{4,})#"};
    this->name->setValidator(new QRegExpValidator{textRegex});
    this->surname->setValidator(new QRegExpValidator{textRegex});
    this->city->setValidator(new QRegExpValidator{textRegex});

    QRegExp phoneRegex{R"#(^[0-9]{2} [0-9]{7}$)#"};
    this->phone->setValidator(new QRegExpValidator{phoneRegex});

    QRegExp mobileRegex{R"#(^[1-9]{1}[0-9]{8}$)#"};
    this->mobile->setValidator(new QRegExpValidator{mobileRegex});

    QRegExp emailRegex{R"#(^[a-zA-Z][a-zA-Z0-9\._]{1,}@[a-zA-Z0-9\.]{2,}((\.com)|(\.pl))$)#"};
    this->email->setValidator(new QRegExpValidator{emailRegex});
};

void NewRecordForm::onOkButtonClicked() {
    std::map<std::string, std::string> recordValues;

    recordValues["name"] = this->getName();
    recordValues["surname"] = this->getSurname();
    recordValues["address"] = this->getAddress();
    recordValues["city"] = this->getCity();
    recordValues["phone"] = this->getPhone();
    recordValues["mobile"] = this->getMobile();
    recordValues["email"] = this->getEmail();

    emit newRecord(recordValues);
}

void NewRecordForm::onClearButtonClicked() {
    this->clear();
}

void NewRecordForm::clear() {
    this->name->clear();
    this->surname->clear();
    this->address->clear();
    this->city->clear();
    this->phone->clear();
    this->mobile->clear();
    this->email->clear();
}

void NewRecordForm::connectSignals() {
    QObject::connect(this->okButton, SIGNAL(clicked()), this, SLOT(onOkButtonClicked()));
    QObject::connect(this->clearButton, SIGNAL(clicked()), this, SLOT(onClearButtonClicked()));
}

std::string NewRecordForm::getName() {
    return this->name->text().toStdString();
}

std::string NewRecordForm::getSurname() {
    return this->surname->text().toStdString();
}

std::string NewRecordForm::getAddress() {
    return this->address->text().toStdString();
}

std::string NewRecordForm::getCity() {
    return this->city->text().toStdString();
}

std::string NewRecordForm::getPhone() {
    return this->phone->text().toStdString();
}

std::string NewRecordForm::getMobile() {
    return this->mobile->text().toStdString();
}

std::string NewRecordForm::getEmail() {
    return this->email->text().toStdString();
}