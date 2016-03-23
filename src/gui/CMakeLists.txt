set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)


SET(gui_HEADERS
        ChangePasswordDialog.h
        ui_ChangePasswordDialog.h
        LoginDialog.h
        ui_LoginDialog.h
        MainWindow.h
        ui_MainWindow.h
        UserAccountDialog.h
        ui_UserAccountDialog.h
        Application.h
        SearchDialog.h
)

SET(gui_SOURCES
        ChangePasswordDialog.cpp
        LoginDialog.cpp
        MainWindow.cpp
        UserAccountDialog.cpp
        Application.cpp
        SearchDialog.cpp
)

QT5_WRAP_CPP(gui_SOURCES ${gui_HEADERS})

QT5_WRAP_UI(UI
        ChangePasswordDialog.ui
        LoginDialog.ui
        MainWindow.ui
        UserAccountDialog.ui
        SearchDialog.ui
)

QT5_ADD_RESOURCES(gui_RESOURCES resources.qrc)

add_library(gui STATIC ${gui_HEADERS} ${gui_SOURCES} ${gui_RESOURCES})
target_link_libraries(gui phonebook Qt5::Core Qt5::Widgets Qt5::Gui ${gui_RESOURCES})