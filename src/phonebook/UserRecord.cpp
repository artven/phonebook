//
// Created by rafal on 09.03.16.
//

#include <stdexcept>

#include "boost/algorithm/string/trim.hpp"
#include "UserRecord.h"

UserRecord::UserRecord(unsigned id, std::string login, std::string email, UserRole role):
id{id}, login{login}, email{email}, role{role} {
    this->trimFields();
    this->validateFields();
}


UserRecord::UserRecord(std::string input, char sep) {
    auto r = this->parseInputString(input, sep);

    if(r.size() != 5)
        throw std::invalid_argument {"Błędny ciąg wejściowy!"};

    if(!this->argumentIsNumber(r[0]))
        throw std::invalid_argument {"Błędne id"};

    this->id = argumentToInt(r[0]);
    this->login = r[1];
    this->email = r[2];

    boost::trim(r[4]);
    if(r[4] == "administrator")
        this->role = UserRole::Admministrator;
    else if(r[4] == "operator")
        this->role = UserRole::Operator;
    else
        this->role = UserRole::NormalUser;

    this->trimFields();
}

std::string UserRecord::toString(std::string sep) {
    std::string result {};

    result.append(this->login);
    result.append(sep);
    result.append(this->email);
    result.append(sep);

    if(this->isAdministrator())
        result.append("administrator");
    else if(this->isOperator())
        result.append("operator");
    else
        result.append("user");

    return result;
}

unsigned int UserRecord::getId() const {
    return this->id;
}

std::string UserRecord::getLogin() const {
    return this->login;
}

std::string UserRecord::getEmail() const {
    return this->email;
}

void UserRecord::setLogin(std::string login) {
    this->login = login;
    this->validateFields();
}

void UserRecord::setEmail(std::string email) {
    this->email = email;
    this->validateFields();
}

bool UserRecord::isAdministrator() const {
    return this->role == UserRole::Admministrator;
}

bool UserRecord::isOperator() const {
    return this->role == UserRole::Operator ;
}

bool UserRecord::isNormalUser() const {
    return this->role == UserRole::NormalUser;
}

void UserRecord::changeRole(UserRole newRole) {
    this->role = newRole;
}

void UserRecord::validateFields() const {
    if(!this->hasValidEmail(this->email))
        throw std::invalid_argument {"Błędny format adresu email!"};
    if(!this->hasValidLogin(this->login))
        throw std::invalid_argument {"Błędny format loginu!"};
}

void UserRecord::trimFields() {
    boost::trim(this->login);
    boost::trim(this->email);
}

std::string UserRecord::getRole() const {
    if(this->isAdministrator())
        return "administrator";
    else if(this->isOperator())
        return "operator";
    else
        return "user";
}