//
// Created by rafal on 04.03.16.
//

#include <cstdlib>

#include "PhoneBookRecord.h"
#include "boost/algorithm/string/trim.hpp"


PhoneBookRecord::PhoneBookRecord(std::string input, char sep) {
    auto parsedInput = this->parseInputString(input, sep);

    if(parsedInput.size() != 8)
        throw std::invalid_argument {"Błędny ciąg wejściowy - wykryta zła liczba parametrów"};

    this->constructRecordFromParsedInput(parsedInput);
    this->trimFields();
    validateFields();
}

void PhoneBookRecord::constructRecordFromParsedInput(std::vector<std::string> vector) {
    if(!this->argumentIsNumber(vector[0]))
        throw std::invalid_argument {"Błędne id"};

    this->id = this->argumentToInt(vector[0]);
    this->name = vector[1];
    this->surname = vector[2];
    this->address = vector[3];
    this->city = vector[4];
    this->phoneNumber = vector[5];
    this->mobilePhoneNumber = vector[6];
    this->email =vector[7];
}


PhoneBookRecord::PhoneBookRecord(unsigned int id, std::string name, std::string surname, std::string address,
                                 std::string city, std::string phoneNumber, std::string mobilePhoneNumber, std::string email):
id{id}, name{name}, surname{surname}, address{address}, city{city}, phoneNumber{phoneNumber}, mobilePhoneNumber{mobilePhoneNumber},
email{email}
{
    this->trimFields();
    this->validateFields();
}

void PhoneBookRecord::trimFields() {
    boost::trim(this->name);
    boost::trim(this->surname);
    boost::trim(this->address);
    boost::trim(this->city);
    boost::trim(this->phoneNumber);
    boost::trim(this->mobilePhoneNumber);
    boost::trim(this->email);
}

void PhoneBookRecord::validateFields() const {
    if(!this->hasValidName(this->name))
        throw std::invalid_argument {"Błędny format imienia!"};
    else if(!this->hasValidSurname(this->surname))
        throw std::invalid_argument {"Błędny format nazwiska!"};
    else if(!this->hasValidAddress(this->address))
        throw std::invalid_argument {"Błędny format adresu!"};
    else if(!this->hasValidCity(this->city))
        throw std::invalid_argument {"Błędny format nazwy miasta!"};
    else if(!this->hasValidPhoneNumber(this->phoneNumber)
            && !this->phoneNumber.empty())
        throw std::invalid_argument {"Błędny numer domowy!"};
    else if(!this->hasValidMobilePhoneNumber(this->mobilePhoneNumber)
            && !this->mobilePhoneNumber.empty())
        throw std::invalid_argument {"Błędny numer komurowy!"};
    else if(this->phoneNumber.empty() && this->mobilePhoneNumber.empty())
        throw std::invalid_argument {"Rekord musi posiadac co najmniej "
                                             "jeden poprawy numer."};
    //else if(!this->hasValidEmail(this->email))
    //    throw std::invalid_argument {"Błędny format adresu email!"};
}


std::string PhoneBookRecord::toString(std::string sep) const {
    std::string result;

    result.append(std::to_string(this->id));
    result.append(sep);
    result.append(this->name);
    result.append(sep);
    result.append(this->surname);
    result.append(sep);
    result.append(this->address);
    result.append(sep);
    result.append(this->city);
    result.append(sep);
    result.append(this->phoneNumber);
    result.append(sep);
    result.append(this->mobilePhoneNumber);
    result.append(sep);
    result.append(this->email);

    return result;
}

std::ostream& operator<<(std::ostream& output, const PhoneBookRecord& obj) {
    output << obj.toString();
    return output;
}

unsigned int PhoneBookRecord::getId() const {
    return this->id;
}

std::string PhoneBookRecord::getName() const {
    return this->name;
}

std::string PhoneBookRecord::getSurname() const {
    return this->surname;
}

std::string PhoneBookRecord::getAddress() const {
    return this->address;
}

std::string PhoneBookRecord::getCity() const {
    return this->city;
}

std::string PhoneBookRecord::getPhoneNumber() const {
    return this->phoneNumber;
}

std::string PhoneBookRecord::getMobilePhoneNumber() const {
    return this->mobilePhoneNumber;
}

std::string PhoneBookRecord::getEmail() const {
    return this->email;
}

void PhoneBookRecord::setName(std::string name) {
    this->name = name;
    this->validateFields();
}

void PhoneBookRecord::setSurname(std::string surname) {
    this->surname = surname;
    this->validateFields();
}

void PhoneBookRecord::setAddress(std::string address) {
    this->address = address;
    this->validateFields();
}

void PhoneBookRecord::setCity(std::string city) {
    this->city = city;
    this->validateFields();
}

void PhoneBookRecord::setPhoneNumber(std::string number) {
    this->phoneNumber = number;
    this->validateFields();
}

void PhoneBookRecord::setMobilePhoneNumber(std::string number) {
    this->mobilePhoneNumber = number;
    this->validateFields();
}

void PhoneBookRecord::setEmail(std::string email) {
    this->email = email;
    this->validateFields();
}