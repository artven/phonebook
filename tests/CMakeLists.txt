project(project_tests)

SET(TESTS_SOURCE_FILES
        PhoneBookRecordTests.cpp
        SQLiteDatabaseTests.cpp PhoneBookAPITests.cpp UsersTests.cpp UserManagerTests.cpp BasicTests.cpp)

include_directories(${GTEST_SOURCE_DIR} ${GTEST_SOURCE_DIR}/include)

add_executable(RunTests ${TESTS_SOURCE_FILES})

target_link_libraries(RunTests gtest gtest_main phonebook)