//
// Created by rafal on 08.03.16.
//

#ifndef MAIN_PROGRAM_SQLITEDATABASE_H
#define MAIN_PROGRAM_SQLITEDATABASE_H

#include "DatabaseInterface.h"

#include <QSqlDatabase>


class SQLiteDatabase : public DatabaseInterface {

public:
    SQLiteDatabase(std::string databasePath);
    virtual ~SQLiteDatabase();

    virtual void open() override;
    virtual void close() override;
    virtual bool isOpened() override;

    virtual std::list<std::string> executeQuery(const std::string query) override;

private:
    QSqlDatabase database;
};


#endif //MAIN_PROGRAM_SQLITEDATABASE_H
