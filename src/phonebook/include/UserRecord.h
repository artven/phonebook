//
// Created by rafal on 09.03.16.
//

#ifndef MAIN_PROGRAM_USERRECORD_H
#define MAIN_PROGRAM_USERRECORD_H

#endif //MAIN_PROGRAM_USERRECORD_H

#include <string>

#include "Record.h"


enum class UserRole {
    NormalUser,
    Operator,
    Admministrator
};


class UserRecord: public Record {
public:
    UserRecord(unsigned id, std::string login, std::string email, UserRole role);
    UserRecord(std::string input, char sep=',');
    std::string toString(std::string sep=", ");

    unsigned int getId() const;
    std::string getLogin() const;
    std::string getEmail() const;
    std::string getRole() const;

    void setLogin(std::string login);
    void setEmail(std::string email);

    bool isAdministrator() const;
    bool isOperator() const;
    bool isNormalUser() const;
    void changeRole(UserRole newRole);

private:
    unsigned int id;
    std::string login;
    std::string email;
    UserRole role;

    void validateFields() const;
    void trimFields();
};
