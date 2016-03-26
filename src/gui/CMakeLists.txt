set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

SET(gui_HEADERS
        LoginDialog.h
        MainWindow.h
        UserAccountDialog.h
        Application.h
        SearchDialog.h
        forms/PhonebookForm.h
        forms/UsersForm.h
        forms/NewRecordForm.h
        forms/NewUserForm.h
        forms/RequestsForm.h
        forms/ChangePasswordForm.h
)

SET(gui_SOURCES
        LoginDialog.cpp
        MainWindow.cpp
        UserAccountDialog.cpp
        Application.cpp
        SearchDialog.cpp
        forms/PhonebookForm.cpp
        forms/UsersForm.cpp
        forms/NewRecordForm.cpp
        forms/NewUserForm.cpp
        forms/RequestsForm.cpp
        forms/ChangePasswordForm.cpp
)

QT5_WRAP_CPP(gui_SOURCES ${gui_HEADERS})

QT5_WRAP_UI(UI
        LoginDialog.ui
        MainWindow.ui
        UserAccountDialog.ui
        SearchDialog.ui
        forms/PhonebookForm.ui
        forms/UsersForm.ui
        forms/NewRecordForm.ui
        forms/NewUserForm.ui
        forms/RequestsForm.ui
        forms/ChangePasswordForm.ui
)

QT5_ADD_RESOURCES(gui_RESOURCES resources.qrc)

add_library(gui STATIC ${gui_HEADERS} ${gui_SOURCES} ${gui_RESOURCES})
target_link_libraries(gui phonebook Qt5::Core Qt5::Widgets Qt5::Gui ${gui_RESOURCES})