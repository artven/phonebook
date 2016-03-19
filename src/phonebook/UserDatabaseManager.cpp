//
// Created by rafal on 19.03.16.
//
#include <boost/format.hpp>
#include <QCryptographicHash>

#include "UserDatabaseManager.h"


std::string UserDatabaseManager::createInsertUserQuery(const UserRecord &user, std::string password) {
    auto login = user.getLogin();
    auto email = user.getEmail();
    auto role  = user.getRole();
    auto hash = this->calculateHash(password);

    auto formatedQuery = boost::format(this->insertUserQueryTemplate) % login % email % hash % role;
    return std::string {formatedQuery.str().c_str()};
}


std::string UserDatabaseManager::createFindByIdQuery(unsigned int id) {
    auto formatedQuery = boost::format(this->findUserByIdQueryTemplate) % id;
    return std::string {formatedQuery.str().c_str()};
}


std::string UserDatabaseManager::createFindByLoginQuery(std::string login) {
    auto formatedQuery = boost::format(this->findUserByLoginQueryTemplate) % login;
    return std::string{formatedQuery.str().c_str()};
}


std::string UserDatabaseManager::createFindSimilarUserQuery(UserRecord user) {
    auto formatedQuery = boost::format(this->findSimilarUserQueryTemplate) % user.getLogin() % user.getEmail();
    return std::string{formatedQuery.str().c_str()};
}


std::string UserDatabaseManager::createUserPasswordHashQuery(UserRecord user) {
    auto formatedQuery = boost::format(this->getPasswordHashQueryTemplate) % user.getId()
                         % user.getLogin() % user.getEmail();
    return std::string{formatedQuery.str().c_str()};
}


std::string UserDatabaseManager::createFindUserQuery(UserRecord user) {
    auto formatedQuery = boost::format(this->findUserQueryTemplate) % user.getId()
                         % user.getLogin() % user.getEmail();
    return std::string{formatedQuery.str().c_str()};
}


std::string UserDatabaseManager::createDeleteUserQuery(UserRecord user) {
    auto formatedQuery = boost::format(this->deleteUserQueryTemplate) % user.getId()
                         % user.getLogin() % user.getEmail();
    return std::string{formatedQuery.str().c_str()};
}


std::string UserDatabaseManager::createUpdateUserQuery(UserRecord user) {
    auto formatedQuery = boost::format(this->updateUserQueryTemplate)
                         % user.getLogin() % user.getEmail() % user.getId();
    return std::string{formatedQuery.str().c_str()};
}


std::string UserDatabaseManager::createChangePasswordQuery(UserRecord user, std::string newPasswordHash) {
    auto formatedQuery = boost::format(this->changePasswordQueryTemplate)
                         % newPasswordHash % user.getId();
    return std::string{formatedQuery.str().c_str()};
}

std::string UserDatabaseManager::calculateHash(std::string password) {
    auto algorithm = QCryptographicHash::Algorithm::Sha256;
    auto str = password.c_str();
    return QCryptographicHash::hash(str, algorithm).toHex().toStdString();
}
