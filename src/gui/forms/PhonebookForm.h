#ifndef PHONEBOOKFORM_H
#define PHONEBOOKFORM_H

#include <QWidget>
#include <QToolButton>
#include <QTableView>
#include <QStandardItemModel>
#include <map>
#include <string>

namespace Ui {
    class PhonebookForm;
}

class PhonebookForm : public QWidget {
    Q_OBJECT

public:
    explicit PhonebookForm(QWidget *parent = 0);
    ~PhonebookForm();

    void clear();
    void setModel(QStandardItemModel *model);

signals:
    void showAllPhones();
    void searchPhones(std::map<std::string, std::string>);

private slots:
    void onAllPhonesButtonClicked();
    void onSearchButtonClicked();
    void onClearButtonClicked();

private:
    Ui::PhonebookForm *ui;

    QToolButton* allPhonesButton;
    QToolButton* searchButton;
    QToolButton* clearButton;
    QTableView* table;
    QStandardItemModel* model;

    void getFormElements();
    void connectSignals();
    void addHeaders();
};

#endif // PHONEBOOKFORM_H
