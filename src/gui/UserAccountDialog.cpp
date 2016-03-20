#include <QMessageBox>

#include "UserAccountDialog.h"
#include "ui_UserAccountDialog.h"

UserAccountDialog::UserAccountDialog(QWidget *parent) :
QDialog(parent), ui(new Ui::UserAccountDialog) {
    ui->setupUi(this);

    this->okPushButton = ui->okPushButton;
    this->cancelPushButton = ui->cancelPushButton;

    this->loginLineEdit = ui->loginLineEdit;
    this->emailLineEdit = ui->emailLineEdit;
    this->passwordLineEdit = ui->passwordLineEdit;
    this->repeatPasswordLineEdit = ui->repeatPasswordLineEdit;
    this->roleComboBox = ui->roleComboBox;

    this->roleComboBox->addItem("użytkownik");
    this->roleComboBox->addItem("operator");
    this->roleComboBox->addItem("administrator");
    this->roleComboBox->setEnabled(false);

    QObject::connect(this->okPushButton, SIGNAL(clicked()), this, SLOT(onOkButtonClicked()));
    QObject::connect(this->cancelPushButton, SIGNAL(clicked()), this, SLOT(onCancelButtonClicked()));

    this->addFieldsValidators();
    this->enablePasswordMask();
}

UserAccountDialog::~UserAccountDialog() {
    delete ui;
}

std::string UserAccountDialog::getLogin() {
    return this->loginLineEdit->text().toStdString();
}

std::string UserAccountDialog::getEmail() {
    return this->emailLineEdit->text().toStdString();
}

std::string UserAccountDialog::getPassword() {
    return this->passwordLineEdit->text().toStdString();
}

std::string UserAccountDialog::getRepeatPassword() {
    return this->repeatPasswordLineEdit->text().toStdString();
}

UserRole UserAccountDialog::getUserRole() {
    auto selectedItem = this->roleComboBox->currentIndex();
    auto item = this->roleComboBox->itemData(selectedItem);

    if (item == "użytkownik")
        return UserRole::NormalUser;
    else if (item == "operator")
        return UserRole::Operator;
    else
        return UserRole::Admministrator;
}

void UserAccountDialog::onOkButtonClicked() {
    auto password = this->getPassword();
    auto repeatPassword = this->getRepeatPassword();
    if (password != repeatPassword) {
        QMessageBox::warning(this, "Błąd hasła", "Podane hasła nie są identyczne!");
    } else {
        this->result = UserAccountDialogResult::ok;
        this->close();
    }
}

void UserAccountDialog::onCancelButtonClicked() {
    this->result = UserAccountDialogResult::cancel;
    this->close();
}

UserAccountDialogResult UserAccountDialog::getResult() {
    return this->result;
}

void UserAccountDialog::addFieldsValidators() {
    QRegExp loginRegex(R"#(\w{4,})#");
    QRegExpValidator *loginValidator = new QRegExpValidator(loginRegex);
    this->loginLineEdit->setValidator(loginValidator);
    this->passwordLineEdit->setValidator(loginValidator);

    QRegExp emailRegex(R"#([\w@\.]{4,})#");
    QRegExpValidator *emailValidator = new QRegExpValidator(emailRegex);
    this->emailLineEdit->setValidator(emailValidator);
}

void UserAccountDialog::enablePasswordMask() {
    this->passwordLineEdit->setEchoMode(QLineEdit::Password);
    this->passwordLineEdit->setInputMethodHints(Qt::ImhHiddenText| Qt::ImhNoPredictiveText|Qt::ImhNoAutoUppercase);
    this->repeatPasswordLineEdit->setEchoMode(QLineEdit::Password);
    this->repeatPasswordLineEdit->setInputMethodHints(Qt::ImhHiddenText| Qt::ImhNoPredictiveText|Qt::ImhNoAutoUppercase);

}