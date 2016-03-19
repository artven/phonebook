//
// Created by rafal on 08.03.16.
//

#include "SqliteDatabase.h"

#include <stdexcept>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
#include <QSqlRecord>

SQLiteDatabase::SQLiteDatabase(std::string databasePath) : DatabaseInterface() {
    this->database = QSqlDatabase::addDatabase("QSQLITE");
    this->database.setDatabaseName(databasePath.c_str());
    this->open();


    if(!this->isOpened()){
        std::string error {"Nie można otworzyć bazy: "};
        error += databasePath;
        throw std::runtime_error {error};
    }
}

SQLiteDatabase::~SQLiteDatabase() {
    this->close();
}

void SQLiteDatabase::open() {
    this->database.open();
}

void SQLiteDatabase::close() {
    this->database.close();
}

bool SQLiteDatabase::isOpened() {
    return this->database.isOpen();
}

std::list<std::string> SQLiteDatabase::executeQuery(const std::string query) {
    std::list<std::string> result;
    QSqlQuery sqlQuery;

    sqlQuery.exec(query.c_str());
    while(sqlQuery.next()){
        std::string record;
        for(int i=0; i<sqlQuery.record().count(); i++){
            record.append(sqlQuery.value(i).toString().toStdString());
            record.append("|");
        }
        result.push_back(record);
    }

    return result;
}
