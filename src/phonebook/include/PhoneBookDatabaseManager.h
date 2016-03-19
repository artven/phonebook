//
// Created by rafal on 19.03.16.
//

#ifndef MAIN_PROGRAM_PHONEBOOKDATABASEMANAGER_H
#define MAIN_PROGRAM_PHONEBOOKDATABASEMANAGER_H

#include <string>

#include "PhoneBookRecord.h"


class PhoneBookDatabaseManager {
protected:
    const std::string createTableQuery{"CREATE TABLE IF NOT EXISTS phonebook("
                                       "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                       "name VARCHAR(20), surname VARCHAR(30),"
                                       "address VARCHAR(30), city VARCHAR(20),"
                                       "phone VARCHAR(10),mobile VARCHAR(9),"
                                       "email VARCHAR(20))"};

    const std::string insertQueryTemplate{"INSERT INTO phonebook"
                                          "(name, surname, address, city,phone, mobile, email)"
                                          "VALUES('%s', '%s', '%s', '%s', '%s', '%s', '%s')"};

    const std::string checkIfExistQueryTemplate{"SELECT * FROM phonebook WHERE "
                                                "name='%s' AND surname='%s' AND "
                                                "address='%s' AND city='%s' AND "
                                                "phone='%s' AND mobile='%s' AND "
                                                "email='%s'"};

    const std::string deleteQueryTemplate{"DELETE FROM phonebook WHERE "
                                          "name='%s' AND surname='%s' AND "
                                          "address='%s' AND city='%s' AND "
                                          "phone='%s' AND mobile='%s' AND "
                                          "email='%s'"};

    const std::string updateQueryTemplate{"UPDATE phonebook SET "
                                          "name='%s', surname='%s', address='%s', city='%s', "
                                          "phone='%s', mobile='%s', email='%s' "
                                          "WHERE id=%d"};

    std::string createInserQuery(const PhoneBookRecord& record);
    std::string createCheckIfExistQuery(const PhoneBookRecord& record);
    std::string createGetRecordsQuery(std::string name, std::string surname, std::string address, std::string city,
                                      std::string email, std::string phone, std::string mobile, unsigned int id);
    std::string createDeleteQuery(const PhoneBookRecord& record);
    std::string createUpdateQuery(const PhoneBookRecord& record);

};


#endif //MAIN_PROGRAM_PHONEBOOKDATABASEMANAGER_H