//
// Created by rafal on 09.03.16.
//

#include "Record.h"


bool Record::argumentIsNumber(std::string arg) {
    char* p;
    strtol(arg.c_str(), &p, 10);
    return *p == 0;
}

unsigned int Record::argumentToInt(std::string arg) {
    return strtol(arg.c_str(), NULL, 10);
}

bool Record::hasValidName(std::string name) const {
    return std::regex_search(name.c_str(), this->nameValidationPolicy)
           && (name.length() <=20);
}

bool Record::hasValidSurname(std::string surname) const {
    return std::regex_search(surname.c_str(), this->surnameValidationPolicy)
           && (surname.length() < 20);
}

bool Record::hasValidAddress(std::string address) const {
    return std::regex_search(address.c_str(), this->addressValidationPolicy)
           && address.length() < 30;
}

bool Record::hasValidCity(std::string city) const {
    return std::regex_search(city.c_str(), this->cityValidationPolicy)
           && city.length() < 20;
}

bool Record::hasValidPhoneNumber(std::string number) const {
    return std::regex_search(number.c_str(), this->phoneNumberValidationPolicy);
}

bool Record::hasValidMobilePhoneNumber(std::string number) const {
    return std::regex_search(number.c_str(), this->mobilePhoneNumberValidationPolicy);
}

bool Record::hasValidEmail(std::string email) const {
    return std::regex_search(email.c_str(), this->emailValidationPolicy)
            && email.length() <= 30;
}

bool Record::hasValidLogin(std::string login) const {
    return std::regex_search(login.c_str(), this->loginValidationPolicy)
           && login.length() <= 20;
}

std::vector<std::string> Record::parseInputString(std::string input, char sep) {
    std::vector<std::string> result;
    std::stringstream inputStream {input};
    std::string item;
    while(std::getline(inputStream, item, sep))
        result.push_back(item);

    return result;
}





