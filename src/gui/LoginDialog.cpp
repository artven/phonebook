#include <iostream>
#include <QPixmap>

#include "LoginDialog.h"
#include "ui_LoginDialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
QDialog{parent}, ui(new Ui::LoginDialog) {
    ui->setupUi(this);
    this->getDialogElements();
    this->enablePasswordMask();
    this->connectSignals();
    this->addFieldsValidators();
}

void LoginDialog::getDialogElements() {
    this->loginLineEdit = ui->loginLineEdit;
    this->passwordLineEdit = ui->passwordLineEdit;
    this->okPushButton = ui->okPushButton;
    this->cancelPushButton = ui->cancelPushButton;
    this->accountPushButton = ui->accountPushButton;
}

void LoginDialog::enablePasswordMask() {
    this->passwordLineEdit->setEchoMode(QLineEdit::Password);
    this->passwordLineEdit->setInputMethodHints(Qt::ImhHiddenText| Qt::ImhNoPredictiveText|Qt::ImhNoAutoUppercase);
}

void LoginDialog::connectSignals() {
    QObject::connect(this->okPushButton, SIGNAL(clicked()), this, SLOT(onOkPushButtonClicked()));
    QObject::connect(this->cancelPushButton, SIGNAL(clicked()), this, SLOT(onCancelPushButtonClicked()));
    QObject::connect(this->accountPushButton, SIGNAL(clicked()), this, SLOT(onAccountPushButtonClicked()));
}

void LoginDialog::addFieldsValidators() {
    QRegExp regexp(R"#(\w{4,})#");
    QRegExpValidator *validator = new QRegExpValidator(regexp);
    this->loginLineEdit->setValidator(validator);
    this->passwordLineEdit->setValidator(validator);
}

LoginDialog::~LoginDialog() {
    delete ui;
}

std::string LoginDialog::getLogin() {
    return this->loginLineEdit->text().toStdString();
}

std::string LoginDialog::getPassword() {
    return this->passwordLineEdit->text().toStdString();
}

LoginResult LoginDialog::getResult() {
    return this->clickedButton;
}

void LoginDialog::onOkPushButtonClicked() {
    this->clickedButton = LoginResult::ok;
    this->close();
}

void LoginDialog::onCancelPushButtonClicked() {
    this->clickedButton = LoginResult::cancel;
    this->close();
}

void LoginDialog::onAccountPushButtonClicked() {
    this->clickedButton = LoginResult::newAccount;
    this->close();
}

int LoginDialog::exec() {
    this->clear();
    return QDialog::exec();
}

void LoginDialog::clear() {
    this->loginLineEdit->clear();
    this->passwordLineEdit->clear();
}
