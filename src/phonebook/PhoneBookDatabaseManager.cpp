//
// Created by rafal on 19.03.16.
//
#include <boost/format.hpp>

#include "PhoneBookDatabaseManager.h"


std::string PhoneBookDatabaseManager::createInserQuery(const PhoneBookRecord &record) {
    auto formatedQuery = boost::format(this->insertQueryTemplate) % record.getName()
                         % record.getSurname() % record.getAddress() % record.getCity() % record.getPhoneNumber()
                         % record.getMobilePhoneNumber() % record.getEmail();

    return std::string{formatedQuery.str().c_str()};
}


std::string PhoneBookDatabaseManager::createCheckIfExistQuery(const PhoneBookRecord &record) {
    auto formatedQuery = boost::format(this->checkIfExistQueryTemplate) % record.getName()
                         % record.getSurname() % record.getAddress() % record.getCity() % record.getPhoneNumber()
                         % record.getMobilePhoneNumber() % record.getEmail();

    return std::string{formatedQuery.str().c_str()};
}


std::string PhoneBookDatabaseManager::createGetRecordsQuery(std::string name, std::string surname, std::string address,
                                                            std::string city, std::string email, std::string phone,
                                                            std::string mobile, unsigned int id) {
    std::string query = "SELECT * FROM phonebook WHERE ";

    std::vector<std::string> parameters;
    if (id != 0)
        parameters.push_back((boost::format("id=%d") % id).str());

    if (name.length() > 0) {
        if (name == "null")
            parameters.push_back("name IS NULL");
        else
            parameters.push_back((boost::format("name='%s'") % name).str());
    }

    if (surname.length() > 0) {
        if (surname == "null")
            parameters.push_back("surname IS NULL");
        else
            parameters.push_back((boost::format("surname LIKE '%s'") % surname).str());
    }

    if (address.length() > 0) {
        if (address == "null")
            parameters.push_back("address IS NULL");
        else
            parameters.push_back((boost::format("address LIKE '%s'") % address).str());
    }

    if (city.length() > 0) {
        if (city == "null")
            parameters.push_back("city IS NULL");
        else
            parameters.push_back((boost::format("city LIKE '%s'") % city).str());
    }

    if (email.length() > 0) {
        if (email == "null")
            parameters.push_back("email IS NULL");
        else
            parameters.push_back((boost::format("email LIKE '%s'") % email).str());
    }

    if (phone.length() > 0) {
        if (phone == "null")
            parameters.push_back("phone IS NULL");
        else
            parameters.push_back((boost::format("phone LIKE '%s'") % phone).str());
    }

    if (mobile.length() > 0) {
        if (mobile == "null")
            parameters.push_back("mobile IS NULL");
        else
            parameters.push_back((boost::format("mobile LIKE '%s'") % mobile).str());
    }

    for (auto it=parameters.begin(); it!=parameters.end(); it++) {
        query += *it;
        if(it+1 != parameters.end())
            query += " AND ";
    }

    return query;
}


std::string PhoneBookDatabaseManager::createDeleteQuery(const PhoneBookRecord &record) {
    auto formatedQuery = boost::format(this->deleteQueryTemplate) % record.getName()
                         % record.getSurname() % record.getAddress() % record.getCity() % record.getPhoneNumber()
                         % record.getMobilePhoneNumber() % record.getEmail();

    return formatedQuery.str();
}


std::string PhoneBookDatabaseManager::createUpdateQuery(const PhoneBookRecord &record) {
    auto formatedQuery = boost::format(this->updateQueryTemplate) % record.getName()
                         % record.getSurname() % record.getAddress() % record.getCity() % record.getPhoneNumber()
                         % record.getMobilePhoneNumber() % record.getEmail() % record.getId();

    return formatedQuery.str();
}