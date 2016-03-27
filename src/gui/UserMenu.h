//
// Created by rafal on 26.03.16.
//

#ifndef MAIN_PROGRAM_USERMENU_H
#define MAIN_PROGRAM_USERMENU_H

#include <QStandardItem>

class UserMenu {
public:
    static QStandardItem* createAdministratorMenu();
    static QStandardItem* createOperatorMenu();
    static QStandardItem* createUserMenu();
};


#endif //MAIN_PROGRAM_USERMENU_H
