set(database_HEADERS
        include/DatabaseInterface.h
        include/SqliteDatabase.h
)

set(database_SOURCES
        SqliteDatabase.cpp
        )

add_library(db STATIC ${database_HEADERS} ${database_SOURCES})
target_link_libraries(db Qt5::Sql)