#include "ChangePasswordDialog.h"
#include "ui_ChangePasswordDialog.h"

ChangePasswordDialog::ChangePasswordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePasswordDialog)
{
    ui->setupUi(this);
}

ChangePasswordDialog::~ChangePasswordDialog()
{
    delete ui;
}
