//
// Created by rafal on 06.03.16.
//

#include <vector>
#include <boost/format.hpp>

#include "PhoneBookAPI.h"


PhoneBookAPI::PhoneBookAPI(DatabaseInterface& db):
database{db} {
    this->createTable();
}


void PhoneBookAPI::createTable() {
    this->database.executeQuery(this->createTableQuery);
}


void PhoneBookAPI::insert(const PhoneBookRecord& record) {
    if(this->isRecordInDatabase(record))
        throw DuplicatedRecordException{};

    auto query = this->createInserQuery(record);
    this->database.executeQuery(query);
}


std::list<PhoneBookRecord> PhoneBookAPI::getAllRecords() {
    std::list<PhoneBookRecord> result;

    auto allRecords = this->database.executeQuery("SELECT * FROM phonebook");
    for(auto record: allRecords)
        result.push_back(PhoneBookRecord{record, '|'});

    return result;
}


bool PhoneBookAPI::isRecordInDatabase(const PhoneBookRecord &record) {
    auto query = this->createCheckIfExistQuery(record);
    auto records = this->database.executeQuery(query);
    return records.size() > 0;
}


std::list<PhoneBookRecord> PhoneBookAPI::getRecords(std::string name, std::string surname, std::string address, std::string city,
                                                    std::string email, std::string phone, std::string mobile, unsigned int id) {
    std::list<PhoneBookRecord> result;

    auto query = this->createGetRecordsQuery(name, surname, address, city, email, phone, mobile, id);
    auto recordsList = this->database.executeQuery(query);
    for(auto record: recordsList)
        result.push_back(PhoneBookRecord{record, '|'});

    return result;
}


void PhoneBookAPI::remove(const PhoneBookRecord &record) {
    if(!this->isRecordInDatabase(record))
        throw RecordNotFoundException{};

    auto query = this->createDeleteQuery(record);
    this->database.executeQuery(query);
}


PhoneBookRecord PhoneBookAPI::getRecordById(unsigned int id) {
    auto resultList = this->getRecords("", "", "", "", "", "", "", id);

    if (resultList.size() == 0)
        throw RecordIdNotFoundException{};

    return *resultList.begin();
}


void PhoneBookAPI::update(const PhoneBookRecord &record) {
    auto query = this->createUpdateQuery(record);
    this->database.executeQuery(query);
}