#ifndef USERACCOUNTDIALOG_H
#define USERACCOUNTDIALOG_H

#include <QDialog>

namespace Ui {
class UserAccountDialog;
}

class UserAccountDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UserAccountDialog(QWidget *parent = 0);
    ~UserAccountDialog();

private:
    Ui::UserAccountDialog *ui;
};

#endif // USERACCOUNTDIALOG_H
