cmake_minimum_required(VERSION 3.2)
project(main_program)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

# google tests
set(GTEST_SOURCE_DIR ${PROJECT_SOURCE_DIR}/libs/googletest)

# boost
SET(BOOST_ROOT ${PROJECT_SOURCE_DIR}/libs/boost_1_60_0)
find_package(Boost)
if(Boost_FOUND)
    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")
    include_directories(${Boost_INCLUDE_DIRS})
else()
    message(STATUS "Boost not found!")
endif()

# qt
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${PROJECT_SOURCE_DIR}/libs/Qt ${PROJECT_SOURCE_DIR}/libs/Qt/bin)
find_package(Qt5 REQUIRED COMPONENTS Core Widgets Gui Sql)

# pliki nagłówkowe
include_directories(
        ${PROJECT_SOURCE_DIR}/src/database/include
        ${PROJECT_SOURCE_DIR}/src/phonebook/include
        ${PROJECT_SOURCE_DIR}/src/gui
        ${PROJECT_SOURCE_DIR}/src/core/include
)

add_subdirectory(src)
add_subdirectory(${GTEST_SOURCE_DIR})
add_subdirectory(tests)

add_executable(main main.cpp)

target_link_libraries(main gui)