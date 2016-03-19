#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeView>
#include <QStandardItemModel>
#include <QPixmap>
#include <QIcon>
#include <QStackedWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void onTreeViewItemDoubleCliced(QModelIndex idx);


private:
    Ui::MainWindow *ui;
    QTreeView* menuView;
    QStandardItemModel* menuModel;
    QStackedWidget* mainWidget;

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


};

#endif // MAINWINDOW_H
