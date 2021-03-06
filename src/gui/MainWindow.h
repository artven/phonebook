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
#include <vector>

#include "Application.h"
#include "PhonebookForm.h"
#include "UsersForm.h"
#include "NewRecordForm.h"
#include "NewUserForm.h"
#include "RequestsForm.h"
#include "ChangePasswordForm.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow, public Application {
    Q_OBJECT

public:
    explicit MainWindow(QApplication& app, QWidget *parent = 0);

    virtual void showMainWindow();
    virtual void chooseWindowMode(UserRecord *user);
    virtual void logout();
    ~MainWindow();

private slots:
    // menu
    void onMenuClicked(QModelIndex);
    void onMenuCollapsed();
    void onMenuExpanded();

    //phonnebook page slots
    void onShowAllPhonesClicked();
    void onSearchPhonesClicked(std::map<std::string, std::string>);

    //new record page slots
    void onNewRecordClicked(std::map<std::string, std::string>);

    //users page slots
    void onShowAllUsersClicked();
    void onUpdateUsersClicked(int, std::string, std::string);

    //new user page slots
    void onNewUserClicked(std::map<std::string, std::string>);

    //request page slots
    void onLoadRequestsClicked(std::string);
    void onSetRequestStatusClicked(std::vector<std::string>, bool);

    //change password page slots
    void onChangePasswordClicked(std::map<std::string, std::string>);

private:
    Ui::MainWindow *ui;

    QTreeView* menu;
    QStandardItemModel* menuModel;
    std::vector<QWidget*> menuPages;
    QStackedWidget* mainWidget;

    // main widget pages
    PhonebookForm phonebookPage;
    NewRecordForm newRecordPage;
    UsersForm usersPage;
    NewUserForm newUserPage;
    RequestsForm requestsPage;
    ChangePasswordForm passwordPage;

    void getWindowElements();
    void initializeMenu();
    void initalizeMainWidget();
    void addAdministratorMenu();
    void addOperatorMenu();
    void addUserMenu();
    void connectSignals();
    void loadWidget(int widgetIndex);
    void adaptWindowToWidget(QWidget *widget);
    void setWindowSize(int width, int height);
    void loadAdministratorWidgets();
    void loadOperatorWidgets();
    void loadUserWidgets();
};

#endif // MAINWINDOW_H