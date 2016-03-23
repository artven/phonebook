#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>
#include <QLineEdit>

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

private:
    Ui::SearchDialog *ui;
    SearchDialog result;
    QLineEdit* name;
    QLineEdit* surname;
    QLineEdit* surname;
    QLineEdit* city;
    QLineEdit* phone;
    QLineEdit* mobile;
    QLineEdit* email;
    QPushButton* searchButton;
    QPushButton* cancelButton;

};

#endif // SEARCHDIALOG_H
