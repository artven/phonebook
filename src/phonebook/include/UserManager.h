//
// Created by rafal on 12.03.16.
//

#ifndef MAIN_PROGRAM_USERMANAGER_H
#define MAIN_PROGRAM_USERMANAGER_H

#include <list>
#include <string>
#include <stdexcept>

#include "UserDatabaseManager.h"
#include "DatabaseInterface.h"


class UserManager: public UserDatabaseManager {
public:
    UserManager(DatabaseInterface& database);
    void add(UserRecord user, std::string password);
    void add(std::list<std::pair<UserRecord, std::string>> records);
    UserRecord findUserById(unsigned int id);
    UserRecord findUserByLogin(std::string);
    std::list<UserRecord> getAllUsers();
    UserRecord login(std::string login, std::string password);
    void deleteUser(UserRecord user);
    void updateUser(UserRecord user);
    void changePassword(UserRecord user, std::string oldPassword, std::string newPassword);
    void addRequest(UserRecord user, std::string password);

private:
    DatabaseInterface& database;

    void createUsersTableInDatabase();
    void createAdministratorAccount();
    
    std::string getUserPasswordHash(UserRecord user);
    bool passwordHasValidLength(std::string password);

    bool isSimilarUserInDatabase(UserRecord user);
    bool isUserInDatabase(UserRecord user);
    bool checkPassword(UserRecord user, std::string password);

};

// Exceptions:

class UserNotFoundException : public std::invalid_argument {
public:
    UserNotFoundException() : invalid_argument("Brak użytkownika w bazie!") { }
};


class UserIdNotFoundException : public std::invalid_argument {
public:
    UserIdNotFoundException(): std::invalid_argument{"Nie znaleziono użytkownika z szukanym id!"} {}
};


class UserLoginNotFoundExcetion : public std::invalid_argument{
public:
    UserLoginNotFoundExcetion(): std::invalid_argument{"Nie znaleziono użytkownika z podanym loginem!"} {}
};


class BadPasswordException: public std::invalid_argument {
public:
    BadPasswordException() : invalid_argument{"Błędne hasło!"} {}
};


class InvalidPasswordLengthException: public std::invalid_argument {
public:
    InvalidPasswordLengthException() : invalid_argument{"Niewłaściwa długość hasła!"} {}
};


class DuplicatedUserException: public std::invalid_argument {
public:
    DuplicatedUserException() : invalid_argument("Użytkownik o podanych danych już istnieje w bazie!") { }
};

#endif //MAIN_PROGRAM_USERMANAGER_H