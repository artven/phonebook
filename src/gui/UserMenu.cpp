//
// Created by rafal on 26.03.16.
//

#include "UserMenu.h"



QStandardItem* UserMenu::createAdministratorMenu() {
    QIcon userIcon{QPixmap{":/mainwindow/images/User-96.png"}};
    QIcon operatorIcon{QPixmap{":/mainwindow/images/Collaborator-96.png"}};
    QIcon administratorIcon{QPixmap{":/mainwindow/images/Administrator-96.png"}};
    QIcon browseRecordsIcon{QPixmap{":/mainwindow/images/Search Property-96.png"}};
    QIcon addRecordIcon{QPixmap{":/mainwindow/images/Add List-96.png"}};
    QIcon changePasswordIcon{QPixmap{":/mainwindow/images/Password 1-96.png"}};
    QIcon logutIcon{QPixmap{":/mainwindow/images/Exit-96.png"}};
    QIcon exitIcon{QPixmap{":/mainwindow/images/Close Window-96.png"}};
    QIcon browseUsersIcon{QPixmap{":/mainwindow/images/Find User-96.png"}};
    QIcon newUserRequestIcon{QPixmap{":/mainwindow/images/Attach-96.png"}};
    QIcon newPowerUserIcon{QPixmap{":/mainwindow/images/Add User Group-96.png"}};

    auto menuRootItem = new QStandardItem(administratorIcon, "Administrator");

    std::vector<QStandardItem*> menuItems;
    menuItems.push_back(new QStandardItem{browseRecordsIcon, "Przeglądaj bazę"});
    menuItems.push_back(new QStandardItem{addRecordIcon, "Dodaj wpis"});
    menuItems.push_back(new QStandardItem{newUserRequestIcon, "Wnioski o nowe konta"});
    menuItems.push_back(new QStandardItem{browseUsersIcon, "Edytuj użytkowników"});
    menuItems.push_back(new QStandardItem{newPowerUserIcon, "Nowy użytkownik"});
    menuItems.push_back(new QStandardItem{changePasswordIcon, "Zmień hasło"});
    menuItems.push_back(new QStandardItem{logutIcon, "Wyloguj się"});
    menuItems.push_back(new QStandardItem{exitIcon, "Wyjdź"});

    menuRootItem->setEditable(false);
    for(auto item: menuItems) {
        item->setEditable(false);
        menuRootItem->appendRow(item);
    }

    return menuRootItem;
}

QStandardItem* UserMenu::createOperatorMenu() {
    QIcon userIcon{QPixmap{":/mainwindow/images/User-96.png"}};
    QIcon operatorIcon{QPixmap{":/mainwindow/images/Collaborator-96.png"}};
    QIcon administratorIcon{QPixmap{":/mainwindow/images/Administrator-96.png"}};
    QIcon browseRecordsIcon{QPixmap{":/mainwindow/images/Search Property-96.png"}};
    QIcon addRecordIcon{QPixmap{":/mainwindow/images/Add List-96.png"}};
    QIcon changePasswordIcon{QPixmap{":/mainwindow/images/Password 1-96.png"}};
    QIcon logutIcon{QPixmap{":/mainwindow/images/Exit-96.png"}};
    QIcon exitIcon{QPixmap{":/mainwindow/images/Close Window-96.png"}};
    QIcon browseUsersIcon{QPixmap{":/mainwindow/images/Find User-96.png"}};
    QIcon newUserRequestIcon{QPixmap{":/mainwindow/images/Attach-96.png"}};
    QIcon newPowerUserIcon{QPixmap{":/mainwindow/images/Add User Group-96.png"}};

    auto menuRootItem = new QStandardItem(operatorIcon, "Operator");

    std::vector<QStandardItem*> menuItems;
    menuItems.push_back(new QStandardItem{browseRecordsIcon, "Przeglądaj bazę"});
    menuItems.push_back(new QStandardItem{addRecordIcon, "Dodaj wpis"});
    menuItems.push_back(new QStandardItem{browseUsersIcon, "Edytuj użytkowników"});
    menuItems.push_back(new QStandardItem{newUserRequestIcon, "Wnioski o nowe konta"});
    menuItems.push_back(new QStandardItem{changePasswordIcon, "Zmień hasło"});
    menuItems.push_back(new QStandardItem{logutIcon, "Wyloguj się"});
    menuItems.push_back(new QStandardItem{exitIcon, "Wyjdź"});

    menuRootItem->setEditable(false);
    for(auto item: menuItems) {
        item->setEditable(false);
        menuRootItem->appendRow(item);
    }

    return menuRootItem;
}

QStandardItem* UserMenu::createUserMenu() {
    QIcon userIcon{QPixmap{":/mainwindow/images/User-96.png"}};
    QIcon operatorIcon{QPixmap{":/mainwindow/images/Collaborator-96.png"}};
    QIcon administratorIcon{QPixmap{":/mainwindow/images/Administrator-96.png"}};
    QIcon browseRecordsIcon{QPixmap{":/mainwindow/images/Search Property-96.png"}};
    QIcon addRecordIcon{QPixmap{":/mainwindow/images/Add List-96.png"}};
    QIcon changePasswordIcon{QPixmap{":/mainwindow/images/Password 1-96.png"}};
    QIcon logutIcon{QPixmap{":/mainwindow/images/Exit-96.png"}};
    QIcon exitIcon{QPixmap{":/mainwindow/images/Close Window-96.png"}};
    QIcon browseUsersIcon{QPixmap{":/mainwindow/images/Find User-96.png"}};
    QIcon newUserRequestIcon{QPixmap{":/mainwindow/images/Attach-96.png"}};
    QIcon newPowerUserIcon{QPixmap{":/mainwindow/images/Add User Group-96.png"}};

    auto rootItem = new QStandardItem{userIcon, "Użytkownik"};

    std::vector<QStandardItem*> userMenuItems;
    userMenuItems.push_back(new QStandardItem{browseRecordsIcon, "Przeglądaj bazę"});
    userMenuItems.push_back(new QStandardItem{addRecordIcon, "Dodaj wpis"});
    userMenuItems.push_back(new QStandardItem{changePasswordIcon, "Zmień hasło"});
    userMenuItems.push_back(new QStandardItem{logutIcon, "Wyloguj się"});
    userMenuItems.push_back(new QStandardItem{exitIcon, "Wyjdź"});

    rootItem->setEditable(false);
    for(auto item: userMenuItems) {
        item->setEditable(false);
        rootItem->appendRow(item);
    }

    return rootItem;
}
