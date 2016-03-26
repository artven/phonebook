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
    this->accepted = ui->allRequestsRadioButton;
    this->waiting = ui->waitingRequestsRadioButton;
    this->rejected = ui->rejectedRequestsRadioButton;
    this->acceptRequestButton = ui->accceptRequestToolButton;
    this->rejectRequestButton = ui->rejectRequestToolButton;
    this->table = ui->requestsTableView;
    this->model = nullptr;
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
