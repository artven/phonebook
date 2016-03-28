#include <QMessageBox>

#include "ui_NewUserForm.h"
#include "NewUserForm.h"
#include "Record.h"

NewUserForm::~NewUserForm() {
    delete ui;
}

NewUserForm::NewUserForm(QWidget *parent) :
QWidget(parent), ui(new Ui::NewUserForm) {
    ui->setupUi(this);

    this->getFormElements();
    this->addValidators();
    this->connectSignals();
    this->addComboBoxValues();
    this->addStatusTips();
    this->addToolTips();
}

void NewUserForm::getFormElements() {
    this->login = ui->loginLineEdit;
    this->email = ui->emailLineEdit;
    this->password = ui->passwordLineEdit;
    this->repeatPassword = ui->repeatPasswordLineEdit;
    this->role = ui->roleComboBox;
    this->okButton = ui->addToolButton;
    this->clearButton = ui->clearToolButton;
}

void NewUserForm::addValidators() {
    QRegExp textRegex{R"#(\w{4,})#"};
    this->login->setValidator(new QRegExpValidator{textRegex});
    this->password->setValidator(new QRegExpValidator{textRegex});
    this->repeatPassword->setValidator(new QRegExpValidator{textRegex});

    QRegExp emailRegex{R"#(^[a-zA-Z][a-zA-Z0-9\._]{1,}@[a-zA-Z0-9\.]{2,}((\.com)|(\.pl))$)#"};
    this->email->setValidator(new QRegExpValidator{emailRegex});
}

void NewUserForm::connectSignals() {
    QObject::connect(this->okButton, SIGNAL(clicked()), this, SLOT(onOkButtonClicked()));
    QObject::connect(this->clearButton, SIGNAL(clicked()), this, SLOT(onClearButtonClicked()));
}

void NewUserForm::onOkButtonClicked() {
    auto login = this->getLogin();
    auto email = this->getEmail();
    auto password = this->getPassword();
    auto repeatPassword = this->getRepeatPassword();
    auto role = this->getRole();

    std::map<std::string, std::string> userRecordValues;

    if(password != repeatPassword) {
        QMessageBox::warning(this, "Błąd!", "Podana hasła nie są identyczne!");
    } else {
        userRecordValues["login"] = login;
        userRecordValues["email"] = email;
        userRecordValues["password"] = password;
        userRecordValues["repeatPassword"] = repeatPassword;
        userRecordValues["role"] = role;

        emit newUser(userRecordValues);
    }
}

void NewUserForm::onClearButtonClicked() {
    this->clear();
}

void NewUserForm::clear() {
    this->login->clear();
    this->email->clear();
    this->password->clear();
    this->repeatPassword->clear();
    this->role->setCurrentIndex(0);
}

void NewUserForm::addComboBoxValues() {
    QIcon userIcon{QPixmap{":/mainwindow/images/User-96.png"}};
    QIcon operatorIcon{QPixmap{":/mainwindow/images/Collaborator-96.png"}};
    QIcon administratorIcon{QPixmap{":/mainwindow/images/Administrator-96.png"}};

    this->role->addItem(userIcon, "Użytkownik");
    this->role->addItem(operatorIcon, "Operator");
    this->role->addItem(administratorIcon, "Administrator");
}

void NewUserForm::addStatusTips() {
    this->login->setStatusTip(Record::loginStatusTip.c_str());
    this->email->setStatusTip(Record::emailStatusTip.c_str());
    this->password->setStatusTip(Record::passwordStatusTip.c_str());
    this->repeatPassword->setStatusTip(Record::passwordStatusTip.c_str());
    this->role->setStatusTip(Record::roleStatusTip.c_str());
    this->okButton->setStatusTip("Dodaj nowego użytkownika do bazy.");
    this->clearButton->setStatusTip("Wyczyść formularz");
}

std::string NewUserForm::getLogin() {
    return this->login->text().toStdString();
}

std::string NewUserForm::getEmail() {
    return this->email->text().toStdString();
}

std::string NewUserForm::getPassword() {
    return this->password->text().toStdString();
}

std::string NewUserForm::getRepeatPassword() {
    return this->repeatPassword->text().toStdString();
}

std::string NewUserForm::getRole() {
    return this->role->currentText().toStdString();
}

void NewUserForm::addToolTips() {
    this->login->setToolTip(Record::loginToolTip.c_str());
    this->email->setToolTip(Record::emaiToolTip.c_str());
    this->password->setToolTip(Record::passwordToolTip.c_str());;
    this->repeatPassword->setToolTip(Record::passwordToolTip.c_str());;;
    this->role->setToolTip(Record::roleToolTip.c_str());
}