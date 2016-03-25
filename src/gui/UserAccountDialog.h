#ifndef USERACCOUNTDIALOG_H
#define USERACCOUNTDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>
#include <string>
#include <QtWidgets/qlabel.h>

#include "UserRecord.h"

enum class UserAccountDialogResult {
    ok,
    cancel
};


namespace Ui {
class UserAccountDialog;
}

class UserAccountDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UserAccountDialog(QWidget *parent = 0);
    ~UserAccountDialog();

    std::string getLogin();
    std::string getEmail();
    std::string getPassword();
    std::string getRepeatPassword();
    UserRole getUserRole();
    UserAccountDialogResult getResult();

    virtual int exec() override;

    void clear();

private:
    Ui::UserAccountDialog *ui;

    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

    QLineEdit* loginLineEdit;
    QLineEdit* emailLineEdit;
    QLineEdit* passwordLineEdit;
    QLineEdit* repeatPasswordLineEdit;
    QComboBox* roleComboBox;
    QLabel* roleLabel;

    UserAccountDialogResult result;

private slots:
    void onOkButtonClicked();
    void onCancelButtonClicked();

    void addFieldsValidators();

    void enablePasswordMask();
};

#endif // USERACCOUNTDIALOG_H
