#include <iostream>

#include "RequestsForm.h"
#include "ui_RequestsForm.h"

RequestsForm::~RequestsForm() {
    delete ui;
}

RequestsForm::RequestsForm(QWidget *parent) :
QWidget(parent), ui(new Ui::RequestsForm) {
    ui->setupUi(this);

    this->getFormElements();
    this->connectSignals();
}

void RequestsForm::getFormElements() {
    this->all = ui->allRequestsRadioButton;
    this->accepted = ui->acceptedRequestsRadioButton;
    this->waiting = ui->waitingRequestsRadioButton;
    this->rejected = ui->rejectedRequestsRadioButton;
    this->acceptRequestButton = ui->accceptRequestToolButton;
    this->rejectRequestButton = ui->rejectRequestToolButton;
    this->table = ui->requestsTableView;
    this->model = nullptr;

    this->acceptRequestButton->setEnabled(false);
    this->rejectRequestButton->setEnabled(false);
}

void RequestsForm::connectSignals() {
    QObject::connect(this->all, SIGNAL(clicked()), this, SLOT(onAllClicked()));
    QObject::connect(this->accepted, SIGNAL(clicked()), this, SLOT(onAcceptedClicked()));
    QObject::connect(this->rejected, SIGNAL(clicked()), this, SLOT(onRejectedClicked()));
    QObject::connect(this->waiting, SIGNAL(clicked()), this, SLOT(onWaitingClicked()));
    QObject::connect(this->acceptRequestButton, SIGNAL(clicked()), this, SLOT(onAcceptRequestClicked()));
    QObject::connect(this->rejectRequestButton, SIGNAL(clicked()), this, SLOT(onRejectRequestClicked()));
}

void RequestsForm::onAllClicked() {
    emit loadRequestsClicked("all");
}

void RequestsForm::onAcceptedClicked() {
    emit loadRequestsClicked("accpeted");
}

void RequestsForm::onWaitingClicked() {
    emit loadRequestsClicked("waiting");
}

void RequestsForm::onRejectedClicked() {
    emit loadRequestsClicked("rejected");
}

void RequestsForm::onAcceptRequestClicked() {

}

void RequestsForm::onRejectRequestClicked() {

}

void RequestsForm::clear() {
    if (this->model != nullptr)
        this->model->clear();
}

void RequestsForm::setModel(QStandardItemModel *model) {
    if (model != nullptr) {
        this->model = model;
        this->table->setModel(model);
        this->addHeaders();
    }
}

void RequestsForm::addHeaders() {
    this->model->setHeaderData(0,Qt::Horizontal, "Id");
    this->model->setHeaderData(1,Qt::Horizontal, "Login");
    this->model->setHeaderData(2,Qt::Horizontal, "Email");
    this->model->setHeaderData(3,Qt::Horizontal, "Skrót hasła");
    this->model->setHeaderData(4,Qt::Horizontal, "Uprawnienia");
    this->model->setHeaderData(5,Qt::Horizontal, "Status");
    this->model->setHeaderData(6,Qt::Horizontal, "Data");
}
