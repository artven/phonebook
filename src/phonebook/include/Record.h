//
// Created by rafal on 09.03.16.
//

#ifndef MAIN_PROGRAM_RECORD_H
#define MAIN_PROGRAM_RECORD_H

#include <string>
#include <sstream>
#include <QRegExp>

class Record {
public:
    static QRegExp nameValidationPolicy;
    static QRegExp surnameValidationPolicy;
    static QRegExp addressValidationPolicy;
    static QRegExp cityValidationPolicy;
    static QRegExp phoneNumberValidationPolicy;
    static QRegExp mobilePhoneNumberValidationPolicy;
    static QRegExp emailValidationPolicy;
    static QRegExp loginValidationPolicy;

    static std::string nameStatusTip;
    static std::string surnameStatusTip;
    static std::string addressStatusTip;
    static std::string cityStatusTip;
    static std::string phoneNumberStatusTip;
    static std::string mobilePhoneStatusTip;
    static std::string emailStatusTip;
    static std::string loginStatusTip;
    static std::string passwordStatusTip;
    static std::string roleStatusTip;

    static std::string nameToolTip;
    static std::string surnameToolTip;
    static std::string addressToolTip;
    static std::string cityToolTip;
    static std::string phoneNumberToolTip;
    static std::string mobileNumberToolTip;
    static std::string emaiToolTip;
    static std::string loginToolTip;
    static std::string passwordToolTip;
    static std::string roleToolTip;

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
};


#endif //MAIN_PROGRAM_RECORD_H
