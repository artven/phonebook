#include <QMessageBox>

#include "ChangePasswordForm.h"
#include "ui_ChangePasswordForm.h"

ChangePasswordForm::~ChangePasswordForm() {
    delete ui;
}

ChangePasswordForm::ChangePasswordForm(QWidget *parent) :
QWidget(parent), ui(new Ui::ChangePasswordForm) {
    ui->setupUi(this);

    this->getFormElements();
    this->addValidators();
    this->connectSignals();
}

void ChangePasswordForm::getFormElements() {
    this->oldPassword = ui->oldPasswordLineEdit;
    this->newPassword = ui->newPasswordLineEdit;
    this->repeatPassword = ui->repeatPasswordLineEdit;
    this->okButton = ui->okToolButton;
}

void ChangePasswordForm::addValidators() {
    QRegExp textRegex{R"#(\w{4,})#"};
    this->oldPassword->setValidator(new QRegExpValidator{textRegex});
    this->newPassword->setValidator(new QRegExpValidator{textRegex});
    this->repeatPassword->setValidator(new QRegExpValidator{textRegex});
}

void ChangePasswordForm::connectSignals() {
    QObject::connect(this->okButton, SIGNAL(clicked()), this, SLOT(onOkButtonClicked()));
}


void ChangePasswordForm::onOkButtonClicked() {
    auto oldPassword = this->getOldPassword();
    auto newPassword = this->getNewPassword();
    auto repeatPassword = this->getRepeatPassword();

    if (newPassword != repeatPassword) {
        QMessageBox::warning(this, "Błąd!", "Podane hasła nie są identyczne");
        this->clear();
    } else {
        std::map<std::string, std::string> passwords;
        passwords["old"] = oldPassword;
        passwords["repeat"] = repeatPassword;
        passwords["new"] = newPassword;

        emit changePassword(passwords);
    }
}

std::string ChangePasswordForm::getOldPassword() {
    return this->oldPassword->text().toStdString();
}

std::string ChangePasswordForm::getNewPassword() {
    return this->newPassword->text().toStdString();
}

std::string ChangePasswordForm::getRepeatPassword() {
    return this->repeatPassword->text().toStdString();
}

void ChangePasswordForm::clear() {
    this->oldPassword->clear();
    this->newPassword->clear();
    this->repeatPassword->clear();
}
