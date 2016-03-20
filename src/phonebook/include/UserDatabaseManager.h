//
// Created by rafal on 19.03.16.
//

#ifndef MAIN_PROGRAM_USERQUERYMANAGER_H
#define MAIN_PROGRAM_USERQUERYMANAGER_H

#include "UserRecord.h"

class UserDatabaseManager {
protected:
    const std::string createUsersTableQuery{"CREATE TABLE IF NOT EXISTS users("
                                            "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                            "login VARCHAR(20), email VARCHAR(30),"
                                            "password VARCHAR(64),role VARCHAR(20))"};
    const std::string insertUserQueryTemplate {"INSERT INTO users(login, email, password, role) "
                                               "VALUES('%s', '%s', '%s', '%s')"};
    const std::string getAllUsersQuery{"SELECT * FROM users"};
    const std::string findUserByIdQueryTemplate{"SELECT * FROM users WHERE id=%d"};
    const std::string findUserByLoginQueryTemplate{"SELECT * FROM users WHERE login='%s'"};
    const std::string findSimilarUserQueryTemplate{"SELECT * FROM users WHERE login='%s' OR email='%s'"};
    const std::string getPasswordHashQueryTemplate{"SELECT password FROM users WHERE id=%d AND login='%s' AND email='%s'"};
    const std::string findUserQueryTemplate{"SELECT * FROM users WHERE id=%d AND login='%s' AND email='%s'"};
    const std::string deleteUserQueryTemplate{"DELETE FROM users WHERE id=%d AND login='%s' AND email='%s'"};
    const std::string updateUserQueryTemplate{"UPDATE users SET login='%s', email='%s' WHERE id=%d"};
    const std::string changePasswordQueryTemplate{"UPDATE users SET password='%s' WHERE id=%d"};
    const std::string createRequestsTableQuery{"CREATE TABLE IF NOT EXISTS requests("
                                               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                                               "login VARCHAR(20), email VARCHAR(30),"
                                               "password VARCHAR(64), role VARCHAR(20), "
                                               "status VARCHAR(15), last_date VARCHAR(20))"};
    const std::string insertRequestsTableQuery{"INSERT INTO requests"
                                               "(login, email, password, role, status, last_date)"
                                               "VALUES('%s', '%s', '%s', '%s', 'Nowy', "
                                               "date('now')||' '||time('now'))"};
    const std::string getAllRequestsQuery{"SELECT * FROM requests WHERE status='%s'"};
    const std::string findRequestQuery{"SELECT * FROM requests WHERE "
                                       "login='%s' AND email='%s'"};
    const std::string changeRequestStatusQuery{"UPDATE requests SET status='%s' "
                                                ",last_date=date('now')||' '||time('now') "
                                                "WHERE id=%s"};

    std::string createInsertUserQuery(const UserRecord &user, std::string password);
    std::string createFindByIdQuery(unsigned int id);
    std::string createFindByLoginQuery(std::string login);
    std::string createFindSimilarUserQuery(UserRecord user);
    std::string createUserPasswordHashQuery(UserRecord user);
    std::string createFindUserQuery(UserRecord user);
    std::string createDeleteUserQuery(UserRecord user);
    std::string createUpdateUserQuery(UserRecord user);
    std::string createChangePasswordQuery(UserRecord user, std::string newPasswordHash);
    std::string createInsertRequestQuery(const UserRecord &user, std::string password);
    std::string createGetAllRequestsQuery(const std::string status);
    std::string createFindRequestQuery(const UserRecord &user);
    std::string createChangeRequestStatusQuery(std::string status, std::string id);
    std::string createInsertDirectUserQuery(const UserRecord &user, std::string hash);
    std::string calculateHash(std::string password);
};


#endif //MAIN_PROGRAM_USERQUERYMANAGER_H
