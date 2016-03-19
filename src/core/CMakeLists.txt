set(core_SOURCES
        Application.cpp
)

set(core_HEADERS
        include/Application.h
)

add_library(core STATIC ${core_SOURCES} ${core_HEADERS})
target_link_libraries(core phonebook gui Qt5::Core)