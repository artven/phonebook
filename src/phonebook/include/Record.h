//
// Created by rafal on 09.03.16.
//

#ifndef MAIN_PROGRAM_RECORD_H
#define MAIN_PROGRAM_RECORD_H

#include <string>
#include <regex>

class Record {
protected:

    std::vector<std::string> parseInputString(std::string input, char sep);

    bool argumentIsNumber(std::string arg);
    unsigned int argumentToInt(std::string arg);

    bool hasValidName(std::string name) const;
    bool hasValidSurname(std::string surname) const;
    bool hasValidAddress(std::string address) const;
    bool hasValidCity(std::string city) const;
    bool hasValidPhoneNumber(std::string number) const;
    bool hasValidMobilePhoneNumber(std::string number) const;
    bool hasValidEmail(std::string email) const;
    bool hasValidLogin(std::string login) const;

    virtual void validateFields() const = 0;
    virtual void trimFields()  = 0;

    std::regex nameValidationPolicy {{R"##(^[A-Z][a-z]{2,}$)##"}};
    std::regex surnameValidationPolicy {{R"##(^[A-Z][a-z]{2,}$)##"}};
    std::regex addressValidationPolicy {{R"##(^[A-Z][a-z]{2,} [0-9]+$)##"}};
    std::regex cityValidationPolicy {{R"##(^[A-Z][a-z]{2,}$)##"}};
    std::regex phoneNumberValidationPolicy {{R"##(^[0-9]{2} [0-9]{7}$)##"}};
    std::regex mobilePhoneNumberValidationPolicy {{R"##(^[1-9]{1}[0-9]{8}$)##"}};
    std::regex emailValidationPolicy {{R"##(^[a-zA-Z][a-zA-Z0-9\._]{1,}@[a-zA-Z0-9\.]{2,}((\.com)|(\.pl))$)##"}};
    std::regex loginValidationPolicy {{R"##(^[a-zA-Z][a-zA-Z0-9]{3,}$)##"}};
};


#endif //MAIN_PROGRAM_RECORD_H
