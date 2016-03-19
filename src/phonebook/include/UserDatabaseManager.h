//
// Created by rafal on 19.03.16.
//

#ifndef MAIN_PROGRAM_USERQUERYMANAGER_H
#define MAIN_PROGRAM_USERQUERYMANAGER_H

#include "UserRecord.h"

class UserDatabaseManager {
protected:
    std::string createUsersTableQuery{"CREATE TABLE IF NOT EXISTS users("
                                              "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                              "login VARCHAR(20),"
                                              "email VARCHAR(30),"
                                              "password VARCHAR(64),"
                                              "role VARCHAR(20))"};
    std::string insertUserQueryTemplate {"INSERT INTO users(login, email, password, role) "
                                                 "VALUES('%s', '%s', '%s', '%s')"};
    std::string getAllUsersQuery{"SELECT * FROM users"};
    std::string findUserByIdQueryTemplate{"SELECT * FROM users WHERE id=%d"};
    std::string findUserByLoginQueryTemplate{"SELECT * FROM users WHERE login='%s'"};
    std::string findSimilarUserQueryTemplate{"SELECT * FROM users WHERE login='%s' OR email='%s'"};
    std::string getPasswordHashQueryTemplate{"SELECT password FROM users WHERE id=%d AND login='%s' AND email='%s'"};
    std::string findUserQueryTemplate{"SELECT * FROM users WHERE id=%d AND login='%s' AND email='%s'"};
    std::string deleteUserQueryTemplate{"DELETE FROM users WHERE id=%d AND login='%s' AND email='%s'"};
    std::string updateUserQueryTemplate{"UPDATE users SET login='%s', email='%s' WHERE id=%d"};
    std::string changePasswordQueryTemplate{"UPDATE users SET password='%s' WHERE id=%d"};

    std::string createInsertUserQuery(const UserRecord &user, std::string password);
    std::string createFindByIdQuery(unsigned int id);
    std::string createFindByLoginQuery(std::string login);
    std::string createFindSimilarUserQuery(UserRecord user);
    std::string createUserPasswordHashQuery(UserRecord user);
    std::string createFindUserQuery(UserRecord user);
    std::string createDeleteUserQuery(UserRecord user);
    std::string createUpdateUserQuery(UserRecord user);
    std::string createChangePasswordQuery(UserRecord user, std::string newPasswordHash);

    std::string calculateHash(std::string password);
};


#endif //MAIN_PROGRAM_USERQUERYMANAGER_H
