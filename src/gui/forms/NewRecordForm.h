#ifndef NEWUSERFORM_H
#define NEWUSERFORM_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <string>
#include "ui_NewRecordForm.h"

namespace Ui {
    class NewRecordForm;
}

class NewRecordForm : public QWidget {
    Q_OBJECT

public:
    explicit NewRecordForm(QWidget *parent = 0);
    ~NewRecordForm();

    std::string getName();
    std::string getSurname();
    std::string getAddress();
    std::string getCity();
    std::string getPhone();
    std::string getMobile();
    std::string getEmail();
    void clearFields();

signals:
    void newRecord(std::map<std::string, std::string>);

private slots:
    void onOkButtonClicked();
    void onClearButtonClicked();

private:
    Ui::NewUserForm *ui;

    QLineEdit* name;
    QLineEdit* surname;
    QLineEdit* address;
    QLineEdit* city;
    QLineEdit* phone;
    QLineEdit* mobile;
    QLineEdit* email;
    QPushButton* ok;
    QPushButton* clear;

    void getFormElements();
    void addValidators();
    void connectSignals();
};

#endif // NEWUSERFORM_H
