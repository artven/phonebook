#ifndef USERSFORM_H
#define USERSFORM_H

#include <QWidget>
#include <QToolButton>
#include <QTableView>
#include <QLineEdit>
#include <QStandardItemModel>

namespace Ui {
    class UsersForm;
}

class UsersForm : public QWidget {
    Q_OBJECT

public:
    explicit UsersForm(QWidget *parent = 0);
    ~UsersForm();

    void clear();
    void setModel(QStandardItemModel* model);

signals:
    void showAllUsers();

private slots:
    void onShowAllButtonClicked();
    void onSaveButtonClicked();

private:
    Ui::UsersForm *ui;

    QLineEdit* login;
    QLineEdit* email;
    QLineEdit* id;
    QToolButton* showAllButton;
    QToolButton* saveButton;
    QTableView* table;
    QStandardItemModel* model;

    void getFormElements();
    void addValidators();
    void connectSignals();
    void addHeaders();
};

#endif // USERSFORM_H
