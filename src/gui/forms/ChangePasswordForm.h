#ifndef CHANGEPASSWORDFORM_H
#define CHANGEPASSWORDFORM_H

#include <QWidget>
#include <QLineEdit>
#include <QToolButton>
#include <string>
#include <map>

namespace Ui {
    class ChangePasswordForm;
}

class ChangePasswordForm : public QWidget {
    Q_OBJECT

public:
    explicit ChangePasswordForm(QWidget *parent = 0);
    ~ChangePasswordForm();

    std::string getOldPassword();
    std::string getNewPassword();
    std::string getRepeatPassword();
    void clear();

signals:
    void changePassword(std::map<std::string, std::string>);

private slots:
    void onOkButtonClicked();

private:
    Ui::ChangePasswordForm *ui;

    QLineEdit* oldPassword;
    QLineEdit* newPassword;
    QLineEdit* repeatPassword;
    QToolButton* okButton;

    void getFormElements();
    void addValidators();
    void connectSignals();
};

#endif // CHANGEPASSWORDFORM_H
