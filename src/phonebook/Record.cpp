//
// Created by rafal on 09.03.16.
//

#include "Record.h"

QRegExp Record::nameValidationPolicy = QRegExp{R"#(^\w{4,}$)#"};
QRegExp Record::surnameValidationPolicy = QRegExp{R"#(^\w{4,}$)#"};
QRegExp Record::addressValidationPolicy = QRegExp{R"##(^[\w ]{4,})##"};
QRegExp Record::cityValidationPolicy = QRegExp{R"##(^\w{4,}$)##"};
QRegExp Record::phoneNumberValidationPolicy = QRegExp{R"##(^[0-9]{2} [0-9]{7}$)##"};
QRegExp Record::mobilePhoneNumberValidationPolicy = QRegExp{R"##(^[1-9]{1}[0-9]{8}$)##"};
QRegExp Record::emailValidationPolicy = QRegExp{R"##(^[\w\.]{3,}@[\w\.]{2,}((\.com)|(\.pl))$)##"};
QRegExp Record::loginValidationPolicy = QRegExp{R"##(^[a-zA-Z][a-zA-Z0-9]{3,}$)##"};

std::string Record::nameStatusTip{"Podaj imię osoby."};
std::string Record::surnameStatusTip{"Nazwisko osoby."};
std::string Record::addressStatusTip{"Podaj adres osoby."};
std::string Record::cityStatusTip{"Podaj nazwę miasta."};
std::string Record::phoneNumberStatusTip{"Podaj numer stacjonarny."};
std::string Record::mobilePhoneStatusTip{"Podaj numer telefonu komórkowego."};
std::string Record::emailStatusTip{"Podaj adres email."};
std::string Record::loginStatusTip{"Podaj login użytkownika."};
std::string Record::passwordStatusTip{"Podaj hasło użytkownika"};
std::string Record::roleStatusTip{"Wybierz poziom uprawnień użytkownika"};

std::string Record::nameToolTip{"Imię musi się składać z minimum 4 znaków."};
std::string Record::surnameToolTip{"Nazwisko musi się składać z minimum 4 znaków."};;
std::string Record::addressToolTip{"Adres musi się składać z minimum 4 znaków."};
std::string Record::cityToolTip{"Miasto musi się składać z minimum 4 znaków."};
std::string Record::phoneNumberToolTip{"Telefon stacjonarny musi składać się kolejno z 2 cyfr, spacji i 7cyfr."};
std::string Record::mobileNumberToolTip{"Telefon komórkowy musi składać z 9 cyfr"};
std::string Record::emaiToolTip{"Email musi zawierać znak '@' oraz domenę pl lub com."};
std::string Record::loginToolTip{"Login musi się składać z minimum czterech: liter, cyfr lub '_'."};
std::string Record::passwordToolTip{"Hasło musi zawierać minimum 4 litery, cyfry lub znaki '_'."};
std::string Record::roleToolTip{" Użytkownik - przeglądanie i dodawanie wpisów. \n Operator - edycja użytkowników i "
                                        "wniosków. \n Administrator - tworzenie nowych kont."};

bool Record::argumentIsNumber(std::string arg) {
    char* p;
    strtol(arg.c_str(), &p, 10);
    return *p == 0;
}

unsigned int Record::argumentToInt(std::string arg) {
    return strtol(arg.c_str(), NULL, 10);
}

bool Record::hasValidName(std::string name) const {
    return Record::nameValidationPolicy.exactMatch(name.c_str()) && (name.length() <=20);
//    return std::regex_search(name.c_str(), this->nameValidationPolicy)
//           && (name.length() <=20);
}

bool Record::hasValidSurname(std::string surname) const {
    return Record::surnameValidationPolicy.exactMatch(surname.c_str()) && (surname.length() < 20);
//    return std::regex_search(surname.c_str(), this->surnameValidationPolicy)
//           && (surname.length() < 20);
}

bool Record::hasValidAddress(std::string address) const {
    return Record::addressValidationPolicy.exactMatch(address.c_str()) && address.length() < 30;
//    return std::regex_search(address.c_str(), this->addressValidationPolicy)
//           && address.length() < 30;
}

bool Record::hasValidCity(std::string city) const {
    return Record::cityValidationPolicy.exactMatch(city.c_str()) && city.length() < 20;
//    return std::regex_search(city.c_str(), this->cityValidationPolicy)
//           && city.length() < 20;
}

bool Record::hasValidPhoneNumber(std::string number) const {
    return Record::phoneNumberValidationPolicy.exactMatch(number.c_str());
    //return std::regex_search(number.c_str(), this->phoneNumberValidationPolicy);
}

bool Record::hasValidMobilePhoneNumber(std::string number) const {
    return Record::mobilePhoneNumberValidationPolicy.exactMatch(number.c_str());
//    return std::regex_search(number.c_str(), this->mobilePhoneNumberValidationPolicy);
}

bool Record::hasValidEmail(std::string email) const {
    return Record::emailValidationPolicy.exactMatch(email.c_str()) && email.length() <= 30;
//    return std::regex_search(email.c_str(), this->emailValidationPolicy)
//            && email.length() <= 30;
}

bool Record::hasValidLogin(std::string login) const {
    return Record:: loginValidationPolicy.exactMatch(login.c_str());
}
//    return std::regex_search(login.c_str(), this->loginValidationPolicy)
//           && login.length() <= 20;


std::vector<std::string> Record::parseInputString(std::string input, char sep) {
    std::vector<std::string> result;
    std::stringstream inputStream {input};
    std::string item;
    while(std::getline(inputStream, item, sep))
        result.push_back(item);

    return result;
}





