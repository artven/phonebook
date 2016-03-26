#ifndef PHONEBOOKFORM_H
#define PHONEBOOKFORM_H

#include <QWidget>
#include <QToolButton>
#include <QTableView>
#include <QStandardItemModel>

namespace Ui {
    class PhonebookForm;
}

class PhonebookForm : public QWidget {
    Q_OBJECT

public:
    explicit PhonebookForm(QWidget *parent = 0);
    ~PhonebookForm();

    void clear();

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
};

#endif // PHONEBOOKFORM_H
