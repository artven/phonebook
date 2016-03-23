#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <string>

namespace Ui {
class SearchDialog;
}

enum class SearchDialogResult {
    ok,
    cancel
};

class SearchDialog : public QDialog {
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = 0);
    ~SearchDialog();

    SearchDialogResult getResult();
    std::string getName();
    std::string getSurname();
    std::string getAddress();
    std::string getCity();
    std::string getPhone();
    std::string getMobile();
    std::string getEmail();

private slots:
    void onSearchButtonClicked();
    void onCancelButtonClicked();

private:
    Ui::SearchDialog *ui;
    SearchDialogResult result;
    QLineEdit* name;
    QLineEdit* surname;
    QLineEdit* address;
    QLineEdit* city;
    QLineEdit* phone;
    QLineEdit* mobile;
    QLineEdit* email;
    QPushButton* searchButton;
    QPushButton* cancelButton;

};

#endif // SEARCHDIALOG_H
