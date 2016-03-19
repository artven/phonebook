#include "UserAccountDialog.h"
#include "ui_UserAccountDialog.h"

UserAccountDialog::UserAccountDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserAccountDialog)
{
    ui->setupUi(this);
}

UserAccountDialog::~UserAccountDialog()
{
    delete ui;
}
