#ifndef REQUESTSFORM_H
#define REQUESTSFORM_H

#include <QWidget>
#include <QStandardItemModel>
#include <QRadioButton>
#include <QToolButton>
#include <QTableView>
#include <vector>
#include <string>

namespace Ui {
    class RequestsForm;
}

class RequestsForm : public QWidget {
    Q_OBJECT

public:
    explicit RequestsForm(QWidget *parent = 0);
    ~RequestsForm();

    void clear();
    void setModel(QStandardItemModel* model);

signals:
    void loadRequestsClicked(std::string requestStatus);
    void setRequestStatusClicked(std::vector<std::string> request, bool status);

private slots:
    void onAllClicked();
    void onAcceptedClicked();
    void onWaitingClicked();
    void onRejectedClicked();
    void onAcceptRequestClicked();
    void onRejectRequestClicked();
    void onTableRowClicked(QModelIndex);

private:
    Ui::RequestsForm *ui;

    QRadioButton* all;
    QRadioButton* accepted;
    QRadioButton* waiting;
    QRadioButton* rejected;
    QToolButton* acceptRequestButton;
    QToolButton* rejectRequestButton;
    QTableView* table;
    QStandardItemModel* model;

    void getFormElements();
    void connectSignals();
    void addHeaders();
    std::vector<std::string> getSelectedRequest();
    void disableButtons();
    void enableButtons();
};

#endif // REQUESTSFORM_H
