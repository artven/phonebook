#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QApplication>
#include <QComboBox>
#include <string>


namespace Ui {
class LoginDialog;
}


enum class LoginResult {
    undefined,
    ok,
    cancel,
    newAccount
};


class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent=nullptr);
    ~LoginDialog();

    LoginResult getResult();
    std::string getLogin();
    std::string getPassword();


    virtual int exec() override;

private:
    QApplication* parentApplication;
    Ui::LoginDialog *ui;
    QLineEdit* loginLineEdit;
    QLineEdit* passwordLineEdit;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;
    QPushButton* accountPushButton;
    LoginResult clickedButton{LoginResult::undefined};

    void getDialogElements();
    void enablePasswordMask();
    void connectSignals();
    void addFieldsValidators();

public slots:

    void onOkPushButtonClicked();
    void onCancelPushButtonClicked();
    void onAccountPushButtonClicked();

    void clear();
};

#endif // LOGINDIALOG_H
