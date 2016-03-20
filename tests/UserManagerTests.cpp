//
// Created by rafal on 12.03.16.
//

#include <string>
#include <algorithm>
#include <cstdlib>

#include "gtest/gtest.h"
#include "UserManager.h"
#include "SqliteDatabase.h"


class UserManagerTest : public ::testing::Test {
public:
    void SetUp() {
        system("rm testBase.db");
        this->database = new SQLiteDatabase {"testBase.db"};
        this->database->executeQuery("DROP TABLE users");
        this->manager = new UserManager {*(this->database)};
    }

    void addSomeUsers() {
        UserRecord r1 {0, "rafal", "rafal.prusak@gmail.com", UserRole::Admministrator };
        std::string p1 {"1234567"};
        UserRecord r2 {0, "wojtek", "gumula@studnet.agh.edu.pl", UserRole::NormalUser};
        std::string p2 {"1234567"};
        UserRecord r3 {0, "kkkmil", "makarowski@onet.pl", UserRole::Operator};
        std::string p3 {"qwerasdas"};
        UserRecord r4 {0, "adam", "giza@gmail.pl", UserRole::NormalUser};
        std::string p4 {"qwerasdas"};
        std::list<std::pair<UserRecord, std::string>> usersList{{r1, p1}, {r2, p2},
                                                                {r3, p3}, {r4, p4}};
        this->manager->add(usersList);
    }

    void TearDown() {
        delete this->manager;
        delete this->database;
    };

    SQLiteDatabase* database;
    UserManager* manager;
};


TEST_F(UserManagerTest, administratorAccountExistOnStart) {
    ASSERT_EQ(this->manager->getAllUsers().size(), 1);
    ASSERT_NO_THROW(this->manager->findUserByLogin("administrator"));
    ASSERT_NO_THROW(this->manager->login("administrator", "123456"));
}


TEST_F(UserManagerTest, addsOneRecord) {
    UserRecord r {0, "adamgiza", "adamgiza@gmail.com", UserRole::NormalUser};
    std::string p = "1234";
    this->manager->add(r, p);
    ASSERT_EQ(this->manager->getAllUsers().size(), 2);
}


TEST_F(UserManagerTest, addsFewRecords) {
    UserRecord r1 {0, "rafal", "rafal.prusak@gmail.com", UserRole::Admministrator };
    std::string p1 {"1234567"};
    UserRecord r2 {0, "wojtek", "gumula@studnet.agh.edu.pl", UserRole::NormalUser};
    std::string p2 {"1234567"};
    UserRecord r3 {0, "kkkmil", "makarowski@onet.pl", UserRole::Operator};
    std::string p3 {"qwerasdas"};

    this->manager->add(r1, p1);
    this->manager->add(r2, p2);
    this->manager->add(r3, p3);

    ASSERT_EQ(this->manager->getAllUsers().size(), 4);
}


TEST_F(UserManagerTest, addsFewRecordsByList) {
    this->addSomeUsers();
    ASSERT_EQ(this->manager->getAllUsers().size(), 5);
}


TEST_F(UserManagerTest, throwsExceptionOnDuplicatedUser) {
    UserRecord r {0, "adamgiza", "adamgiza@gmail.com", UserRole::NormalUser};
    std::string p = "1234";
    this->manager->add(r, p);
    ASSERT_EQ(this->manager->getAllUsers().size(), 2);
    ASSERT_THROW(this->manager->add(r, p), DuplicatedUserException);
}


TEST_F(UserManagerTest, findsUserById) {
    this->addSomeUsers();

    auto allUsers = this->manager->getAllUsers();

    auto findRafal = [](UserRecord r) {return r.getLogin() == std::string {"rafal"};};

    auto pos = std::find_if(allUsers.begin(), allUsers.end(), findRafal);
    ASSERT_NE(pos, allUsers.end());

    auto id = (*pos).getId();
    auto rafalRecord = this->manager->findUserById(id);

    ASSERT_EQ(rafalRecord.getLogin(), "rafal");
    ASSERT_EQ(rafalRecord.getEmail(), "rafal.prusak@gmail.com");
    ASSERT_EQ(rafalRecord.isAdministrator(), true);
}


TEST_F(UserManagerTest, throwsExceptionOnInvalidId) {
    this->addSomeUsers();
    ASSERT_THROW(this->manager->findUserById(100), UserIdNotFoundException);
}


TEST_F(UserManagerTest, findsUserByLogin) {
    this->addSomeUsers();
    auto user = this->manager->findUserByLogin("wojtek");
    ASSERT_EQ(user.getLogin(), "wojtek");
    ASSERT_EQ(user.getEmail(), "gumula@studnet.agh.edu.pl");
    ASSERT_EQ(user.isNormalUser(), true);
}

TEST_F(UserManagerTest, throwsExceptionOnIvnalidLogin) {
    this->addSomeUsers();
    ASSERT_THROW(this->manager->findUserByLogin("dupa"), UserLoginNotFoundExcetion);
}


TEST_F(UserManagerTest, canLoginWithExistingAccount) {
    this->addSomeUsers();
    auto user = this->manager->login("rafal", "1234567");

    ASSERT_EQ(user.getLogin(), "rafal");
    ASSERT_EQ(user.getEmail(), "rafal.prusak@gmail.com");
    ASSERT_EQ(user.isAdministrator(), true);
}


TEST_F(UserManagerTest, throwsExceptionOnInvalidLogin) {
    this->addSomeUsers();
    ASSERT_THROW(this->manager->login("dupa", "1234"), UserLoginNotFoundExcetion);
}


TEST_F(UserManagerTest, throwsExceptionOnInvalidPassword) {
    this->addSomeUsers();
    ASSERT_THROW(this->manager->login("adam", "123asdasd4"), BadPasswordException);
}

TEST_F(UserManagerTest, deletesUserFromDatabase) {
    this->addSomeUsers();
    auto kamil = this->manager->findUserByLogin("kkkmil");
    this->manager->deleteUser(kamil);
    ASSERT_THROW(this->manager->findUserByLogin("kkkmil"), UserLoginNotFoundExcetion);
}


TEST_F(UserManagerTest, throwsExceptonOnExistUserDelete) {
    this->addSomeUsers();
    UserRecord r {0, "jadsn", "kowalski@gmail.com", UserRole::NormalUser};
    ASSERT_THROW(this->manager->deleteUser(r), UserNotFoundException);
}


TEST_F(UserManagerTest, updatesUserRecord) {
    this->addSomeUsers();
    auto rafal = this->manager->findUserByLogin("rafal");
    rafal.setEmail("duap@onet.pl");
    rafal.setLogin("rafalprusak");
    this->manager->updateUser(rafal);
    auto rafal_prusak = this->manager->findUserByLogin("rafalprusak");
    ASSERT_EQ(rafal_prusak.getLogin(), "rafalprusak");
    ASSERT_EQ(rafal_prusak.getEmail(), "duap@onet.pl");
}


TEST_F(UserManagerTest, changesPassword) {
    this->addSomeUsers();
    auto rafal = this->manager->findUserByLogin("rafal");
    this->manager->changePassword(rafal, "1234567", "qweasdzxc");
    //ASSERT_NO_THROW(this->manager->login("rafal", "qweasdzxc"));
    this->manager->login("rafal", "qweasdzxc");
}


TEST_F(UserManagerTest, throwsExceptionOnInvalidRecordPasswordChange) {
    this->addSomeUsers();
    auto rafal = this->manager->findUserByLogin("rafal");
    rafal.setLogin("adam");
    ASSERT_THROW(this->manager->changePassword(rafal, "1234567", "qweasdzxc"),
                 UserNotFoundException);
}


TEST_F(UserManagerTest, throwsExceptionOnInvalidNewPasswordLength) {
    this->addSomeUsers();
    auto rafal = this->manager->findUserByLogin("rafal");
    ASSERT_THROW(this->manager->changePassword(rafal, "1234567", "dd"),
                 InvalidPasswordLengthException);
}


TEST_F(UserManagerTest, throwsExceptionOnInvalidOldPassword) {
    this->addSomeUsers();
    auto rafal = this->manager->findUserByLogin("rafal");
    ASSERT_THROW(this->manager->changePassword(rafal, "1sdasd", "qweasdzxc"),
                 BadPasswordException);
}


TEST_F(UserManagerTest, canAddAccountRequest) {
    UserRecord rec{0, "adam", "giza@onet.pl", UserRole::NormalUser};
    std::string password{"safasf"};
    this->manager->addRequest(rec, password);
    ASSERT_EQ(this->manager->getAllRequests().size(), 1);
}


TEST_F(UserManagerTest, canAddFewAccountRequests) {
    UserRecord r1{0, "adam", "giza@onet.pl", UserRole::NormalUser};
    std::string p1{"safasf"};
    UserRecord r2{0, "jankowal", "kowalski@gmail.com", UserRole::NormalUser};
    std::string p2{"123123"};

    this->manager->addRequest(r1, p1);
    this->manager->addRequest(r2, p2);
    ASSERT_EQ(this->manager->getAllRequests().size(), 2);
}


TEST_F(UserManagerTest, throwsExceptionOnDuplicatedRequest) {
    UserRecord rec{0, "adam", "giza@onet.pl", UserRole::NormalUser};
    std::string password{"safasf"};
    this->manager->addRequest(rec, password);
    ASSERT_THROW(this->manager->addRequest(rec, password), DuplicatedRequestException);
}


TEST_F(UserManagerTest, acceptsRequest) {
    UserRecord rec{0, "adam", "giza@onet.pl", UserRole::NormalUser};
    std::string password{"safasf"};
    this->manager->addRequest(rec, password);
    ASSERT_EQ(this->manager->getAllRequests().size(), 1);
    auto req = *(this->manager->getAllRequests().begin());
    this->manager->acceptRequest(req);
    ASSERT_EQ(this->manager->getAllRequests("Nowy").size(), 0);
    ASSERT_EQ(this->manager->getAllRequests("Zaakceptowany").size(), 1);
    ASSERT_EQ(this->manager->getAllUsers().size(), 2);
}


