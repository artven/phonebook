SET(phonebook_HEADERS
        include/PhoneBookAPI.h
        include/PhoneBookRecord.h
        include/Record.h
        include/UserManager.h
        include/UserRecord.h
        include/UserDatabaseManager.h
        include/PhoneBookDatabaseManager.h
)

SET(phonebook_SOURCES
        PhoneBookAPI.cpp
        PhoneBookRecord.cpp
        Record.cpp
        UserManager.cpp
        UserRecord.cpp
        UserDatabaseManager.cpp
        PhoneBookDatabaseManager.cpp
)

add_library(phonebook STATIC ${phonebook_HEADERS} ${phonebook_SOURCES})
target_link_libraries(phonebook db Qt5::Core)