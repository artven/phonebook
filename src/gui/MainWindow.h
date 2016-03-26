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
    void onMenuDoubleClicked(QModelIndex);
    void onMenuCollapsed();
    void onMenuExpanded();

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

    // menu icons
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
};

#endif // MAINWINDOW_H