//
// Created by rafal on 06.03.16.
//

#ifndef MAIN_PROGRAM_DATABASEINTERFACE_H
#define MAIN_PROGRAM_DATABASEINTERFACE_H

#include <string>
#include <list>

class DatabaseInterface {
public:
    virtual ~DatabaseInterface() {};

    virtual void open() = 0;
    virtual void close() = 0;
    virtual bool isOpened() = 0;

    virtual std::list<std::string> executeQuery(const std::string query) = 0;
};


#endif //MAIN_PROGRAM_DATABASEINTERFACE_H
