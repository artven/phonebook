#ifndef NEWUSERFORM_H
#define NEWUSERFORM_H

#include <QWidget>
#include <QLineEdit>
#include <QComboBox>
#include <QToolButton>
#include <map>

namespace Ui {
    class NewUserForm;
}

class NewUserForm : public QWidget {
    Q_OBJECT

public:
    explicit NewUserForm(QWidget *parent = 0);
    ~NewUserForm();

    std::string getLogin();
    std::string getEmail();
    std::string getPassword();
    std::string getRepeatPassword();
    std::string getRole();
    void clear();

signals:
    void newUser(std::map<std::string, std::string>);

private slots:
    void onOkButtonClicked();
    void onClearButtonClicked();

private:
    Ui::NewUserForm *ui;

    QLineEdit* login;
    QLineEdit* email;
    QLineEdit* password;
    QLineEdit* repeatPassword;
    QComboBox* role;
    QToolButton* okButton;
    QToolButton* clearButton;

    void getFormElements();
    void addValidators();
    void connectSignals();
    void addComboBoxValues();

    void addStatusTips();

    void addToolTips();
};

#endif // NEWUSERFORM_H
