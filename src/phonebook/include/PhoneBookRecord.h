//
// Created by rafal on 04.03.16.
//

#ifndef MAIN_PROGRAM_PHONEBOOKRECORD_H
#define MAIN_PROGRAM_PHONEBOOKRECORD_H

#include <string>
#include <iostream>
#include <vector>

#include "Record.h"

class PhoneBookRecord: public Record {
public:
    PhoneBookRecord(std::string input, char sep = ',');
    PhoneBookRecord(unsigned int id, std::string name, std::string surname, std::string address, std::string city,
                    std::string phoneNumber, std::string mobilePhoneNumber, std::string email);
    std::string toString(std::string sep=", ") const;

    unsigned int getId() const;
    std::string getName() const;
    std::string getSurname() const;
    std::string getAddress() const;
    std::string getCity() const;
    std::string getPhoneNumber() const;
    std::string getMobilePhoneNumber() const;
    std::string getEmail() const;

    void setName(std::string name);
    void setSurname(std::string surname);
    void setAddress(std::string address);
    void setCity(std::string city);
    void setPhoneNumber(std::string number);
    void setMobilePhoneNumber(std::string number);
    void setEmail(std::string email);

private:
    void constructRecordFromParsedInput(std::vector<std::string>);
    void trimFields();
    void validateFields() const;

    unsigned int id;
    std::string name;
    std::string surname;
    std::string address;
    std::string city;
    std::string phoneNumber;
    std::string mobilePhoneNumber;
    std::string email;
};

std::ostream& operator<<(std::ofstream& output, const PhoneBookRecord& obj);

#endif //MAIN_PROGRAM_PHONEBOOKRECORD_H
