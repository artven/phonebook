#ifndef NEWRECORDFORM_H
#define NEWRECORDFORM_H

#include <QWidget>
#include <QLineEdit>
#include <QToolButton>
#include <string>
#include <map>

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
    void clear();

signals:
    void newRecord(std::map<std::string, std::string>);

private slots:
    void onOkButtonClicked();
    void onClearButtonClicked();

private:
    Ui::NewRecordForm *ui;

    QLineEdit* name;
    QLineEdit* surname;
    QLineEdit* address;
    QLineEdit* city;
    QLineEdit* phone;
    QLineEdit* mobile;
    QLineEdit* email;
    QToolButton* okButton;
    QToolButton* clearButton;

    void getFormElements();
    void addValidators();
    void connectSignals();

    void addStatusTips();

    void addToolTips();
};

#endif // NEWUSERFORM_H
