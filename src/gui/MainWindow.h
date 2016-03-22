#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QTreeView>
#include <QStandardItemModel>
#include <QPixmap>
#include <QIcon>
#include <QStackedWidget>
#include <QRadioButton>
#include <QToolButton>
#include <QTableView>
#include <QLineEdit>

#include "Application.h"

enum class WindowMode {
    userWindow,
    operatorWindow,
    administratorWindow
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow, public Application
{
    Q_OBJECT

public:
    explicit MainWindow(QApplication& app, QWidget *parent = 0);
    void setWindowMode(WindowMode mode);
    virtual void showMainWindow();
    virtual void chooseWindowMode(UserRecord *user);
    virtual void logout();
    ~MainWindow();

private slots:
    void onTreeViewItemDoubleCliced(QModelIndex idx);
    void onShowRequestsToolButtonClicked();
    void onRequestsTableViewRowClicked(QModelIndex idx);
    void onAcceptRequestToolButtonClicked();
    void onRejectRequestToolButtonClicked();
    void onChangePasswordClicked();
    void onAddRecordClicked();
    void onClearRecordClicked();

private:

    Ui::MainWindow *ui;
    QTreeView* menuView;
    QStandardItemModel* menuModel;
    QStackedWidget* mainWidget;
    WindowMode mode{WindowMode::userWindow};

    QIcon userIcon{QPixmap{":/mainwindow/images/User-96.png"}};
    QIcon operatorIcon{QPixmap{":/mainwindow/images/Collaborator-96.png"}};
    QIcon administratorIcon{QPixmap{":/mainwindow/images/Administrator-96.png"}};
    QIcon browseRecordsIcon{QPixmap{":/mainwindow/images/Search Property-96.png"}};
    QIcon addRecordIcon{QPixmap{":/mainwindow/images/Add List-96.png"}};
    QIcon changePasswordIcon{QPixmap{":/mainwindow/images/Password 1-96.png"}};
    QIcon editSelfDataIcon{QPixmap{":/mainwindow/images/Edit File-96.png"}};
    QIcon logutIcon{QPixmap{":/mainwindow/images/Exit-96.png"}};
    QIcon exitIcon{QPixmap{":/mainwindow/images/Close Window-96.png"}};
    QIcon browseUsersIcon{QPixmap{":/mainwindow/images/Find User-96.png"}};
    QIcon newUserRequestIcon{QPixmap{":/mainwindow/images/Attach-96.png"}};
    QIcon newPowerUserIcon{QPixmap{":/mainwindow/images/Add User Group-96.png"}};

    void addUserMenu();
    void addOperetorMenu();
    void addAdministratorMenu();

    void setBrowseDatabasePage();
    void setAddRecordPage();
    void setEditUsersPage();
    void setRequestsPage();
    void setNewUserPage();
    void setEditPersonalData();
    void setChangePasswordPage();

    void switchUserMenu(QModelIndex idx);
    void switchOperatorMenu(QModelIndex idx);
    void switchAdministratorMenu(QModelIndex idx);

    //requests page
    QStandardItemModel*reguestsTableModel{nullptr};
    QRadioButton* allRequestsRadioButton;
    QRadioButton* acceptedRequestsRadioButton;
    QRadioButton* newRequestsRadioButton;
    QRadioButton* rejectedRequestsRadioButton;
    QToolButton* showRequestsToolButton;
    QToolButton* acceptRequestToolButton;
    QToolButton* rejectRequestToolButton;
    QTableView* requestsTableView;

    void addRequestsTableHeaders();
    void showAllRequests();
    void showNewRequests();
    void showAcceptedRequests();
    void showRejectedRequests();

    //chagne password page
    QLineEdit* oldPasswordLabel;
    QLineEdit* newPasswordLabel;
    QLineEdit* repeatPasswordLabel;
    QPushButton* okChangePasswordButton;

    //add record page
    QLineEdit* nameLineEdit;
    QLineEdit* surnameLineEdit;
    QLineEdit* addressLineEdit;
    QLineEdit* cityLineEdit;
    QLineEdit* phoneLineEdit;
    QLineEdit* mobileLineEdit;
    QLineEdit* emailLineEdit;
    QPushButton* okAddRecordPushButton;
    QPushButton* clearAddRecordPushButton;

    void clearAddRecordPage();
};

#endif // MAINWINDOW_H
