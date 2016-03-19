//
// Created by rafal on 12.03.16.
//

#include <stdexcept>
#include <utility>
#include <boost/format.hpp>
#include <boost/algorithm/string/trim.hpp>

#include "UserManager.h"


UserManager::UserManager(DatabaseInterface& database):
database{database} {
    this->createUsersTableInDatabase();
    this->createAdministratorAccount();
}


void UserManager::createAdministratorAccount() {
    UserRecord administrator{0, "administrator", "admin@onet.pl", UserRole::Admministrator};
    std::string password{"123456"};
    if (!this->isSimilarUserInDatabase(administrator)) {
        this->add(administrator, password);
    }
}


void UserManager::createUsersTableInDatabase() {
    this->database.executeQuery(this->createUsersTableQuery);
}


void UserManager::add(UserRecord user, std::string password) {
    boost::trim(password);

    if(!this->passwordHasValidLength(password))
        throw InvalidPasswordLengthException{};

    if(this->isSimilarUserInDatabase(user))
        throw DuplicatedUserException{};

    auto inserQuery = this->createInsertUserQuery(user, password);
    this->database.executeQuery(inserQuery);
}


void UserManager::add(std::list<std::pair<UserRecord, std::string>> records) {
    for(auto record: records)
        this->add(std::get<0>(record), std::get<1>(record));
}


std::list<UserRecord> UserManager::getAllUsers() {
    std::list<UserRecord> result;
    auto allRecords = this->database.executeQuery(this->getAllUsersQuery);
    for(auto record: allRecords){
        result.push_back(UserRecord {record, '|'});
    }
    return result;
}


bool UserManager::passwordHasValidLength(std::string password) {
    return (password.length()) >= 4 && (password.length() <= 20);
}


UserRecord UserManager::findUserById(unsigned int id) {
    auto query = this->createFindByIdQuery(id);
    auto queryResult = this->database.executeQuery(query);

    if(queryResult.size() < 1)
        throw UserIdNotFoundException {};

    auto str = *queryResult.begin();
    return UserRecord {str, '|'};
}


UserRecord UserManager::findUserByLogin(std::string login) {
    boost::trim(login);
    auto query = this->createFindByLoginQuery(login);
    auto queryResult = this->database.executeQuery(query);

    if(queryResult.size() == 0)
        throw UserLoginNotFoundExcetion{};

    return UserRecord{*queryResult.begin(), '|'};
}



UserRecord UserManager::login(std::string login, std::string password) {
    UserRecord user = this->findUserByLogin(login);

    if(!(this->checkPassword(user, password)))
        throw BadPasswordException{};

    return user;
}

bool UserManager::checkPassword(UserRecord user, std::string password) {
    std::string hash = this->calculateHash(password);
    std::string userHash = this->getUserPasswordHash(user);
    return userHash == hash;
}


bool UserManager::isSimilarUserInDatabase(UserRecord user) {
    auto query = this->createFindSimilarUserQuery(user);
    auto queryResult = this->database.executeQuery(query);
    return queryResult.size() != 0;
}


void UserManager::deleteUser(UserRecord user) {
    if(!this->isUserInDatabase(user))
        throw UserNotFoundException {};

    auto query = this->createDeleteUserQuery(user);
    this->database.executeQuery(query);
}


bool UserManager::isUserInDatabase(UserRecord user) {
    auto query = this->createFindUserQuery(user);
    auto queryResult = this->database.executeQuery(query);
    return queryResult.size() > 0;
}


void UserManager::updateUser(UserRecord user) {
    auto query = this->createUpdateUserQuery(user);
    this->database.executeQuery(query);
}


void UserManager::changePassword(UserRecord user, std::string oldPassword, std::string newPassword) {
    if(!this->isUserInDatabase(user))
        throw UserNotFoundException{};

    if(!(this->passwordHasValidLength(oldPassword) && this->passwordHasValidLength(newPassword)))
        throw InvalidPasswordLengthException{};

    if(!this->checkPassword(user, oldPassword))
        throw BadPasswordException{};

    auto newPasswordHash = this->calculateHash(newPassword);
    auto query = this->createChangePasswordQuery(user, newPasswordHash);
    this->database.executeQuery(query);
}


std::string UserManager::getUserPasswordHash(UserRecord user) {
    auto query = this->createUserPasswordHashQuery(user);
    auto queryResut = this->database.executeQuery(query);
    // należy usunąć ostatni znak '|'
    std::string hash{ (*queryResut.begin()).begin(), (*queryResut.begin()).end() -1};
    return hash;
}


void UserManager::addRequest(UserRecord user, std::string password) {
    if (!this->passwordHasValidLength(password))
        throw InvalidPasswordLengthException{};

}
