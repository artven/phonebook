//
// Created by rafal on 06.03.16.
//

#ifndef MAIN_PROGRAM_PHONEBOOKAPI_H
#define MAIN_PROGRAM_PHONEBOOKAPI_H

#include <string>
#include <list>
#include <stdexcept>

#include "DatabaseInterface.h"
#include "PhoneBookRecord.h"
#include "PhoneBookDatabaseManager.h"


class PhoneBookAPI: public PhoneBookDatabaseManager {
public:
    PhoneBookAPI(DatabaseInterface& database);
    void insert(const PhoneBookRecord& record);
    std::list<PhoneBookRecord> getAllRecords();
    std::list<PhoneBookRecord> getRecords(std::string name="", std::string surname="", std::string address="", std::string city="",
                                              std::string email="", std::string phone="", std::string mobile="", unsigned int id=0);
    void remove(const PhoneBookRecord &record);
    void update(const PhoneBookRecord& record);
    PhoneBookRecord getRecordById(unsigned int id);

private:
    DatabaseInterface& database;

    void createTable();
    bool isRecordInDatabase(const PhoneBookRecord& record);
};


class DuplicatedRecordException: public std::invalid_argument {
public:
    DuplicatedRecordException() : invalid_argument("Podany rekord już instnieje!") {}
};


class RecordNotFoundException: public std::invalid_argument {
public:
    RecordNotFoundException() : invalid_argument("Brak rekordu w bazie!") { }
};


class RecordIdNotFoundException: std::invalid_argument {
public:
    RecordIdNotFoundException() : invalid_argument("Brak rekordu o podanym id") { }
};

#endif //MAIN_PROGRAM_PHONEBOOKAPI_H