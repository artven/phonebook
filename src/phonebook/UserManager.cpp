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
    this->createUsersTable();
    this->createAdministratorAccount();
    this->createRequestTable();
}


void UserManager::createUsersTable() {
    this->database.executeQuery(this->createUsersTableQuery);
}


void UserManager::createAdministratorAccount() {
    UserRecord administrator{0, "administrator", "admin@onet.pl", UserRole::Admministrator};
    std::string password{"123456"};
    if (!this->isSimilarUserInDatabase(administrator)) {
        this->add(administrator, password);
    }
}


void UserManager::createRequestTable() {
    this->database.executeQuery(this->createRequestsTableQuery);
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

    if(this->isRequestInDatabase(user))
        throw DuplicatedRequestException{};

    auto query = this->createInsertRequestQuery(user, password);
    this->database.executeQuery(query);
}


static std::vector<std::string> parseRequestString(std::string input, char sep='|') {
    std::vector<std::string> result;
    std::stringstream inputStream {input};
    std::string item;
    while(std::getline(inputStream, item, sep))
        result.push_back(item);

    return result;
}


std::list<std::vector<std::string>> UserManager::getAllRequests(std::string status) {
    std::list<std::vector<std::string>> result;

    auto query = this->createGetAllRequestsQuery(status);
    auto queryResult = this->database.executeQuery(query);
    for(auto record: queryResult) {
        result.push_back(parseRequestString(record));
    }

    return result;
}


bool UserManager::isRequestInDatabase(UserRecord user) {
    auto query = this->createFindRequestQuery(user);
    auto res = this->database.executeQuery(query);
    return (res.size() > 0);
}


void UserManager::acceptRequest(std::vector<std::string> request) {
    auto id = request[0];
    auto name = request[1];
    auto email = request[2];
    auto hash = request[3];
    auto status = request[5];

    if(status != "Nowy")
        throw InvalidRequestStatusException{};

    UserRecord newUser{0, name, email, UserRole::NormalUser};
    if(!this->isRequestInDatabase(newUser))
        throw RequestNotFoundException{};

    auto changeStatusQuery = this->createChangeRequestStatusQuery("Zaakceptowany", id);
    this->database.executeQuery(changeStatusQuery);


    auto insertNewUserQuery = this->createInsertDirectUserQuery(newUser, hash);
    this->database.executeQuery(insertNewUserQuery);
}
