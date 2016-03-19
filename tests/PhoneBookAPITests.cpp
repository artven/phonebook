//
// Created by rafal on 09.03.16.
//

#include <gtest/gtest.h>
#include <string>

#include "PhoneBookAPI.h"
#include "SqliteDatabase.h"


class PhoneBookAPITest : public ::testing::Test {
private:
    std::string databasename{"PhoneBookAPItest.db"};

public:
    void SetUp() {
        system((std::string{"rm "} += this->databasename).c_str());
        this->database = new SQLiteDatabase{this->databasename};
        this->phoneBook = new PhoneBookAPI{*this->database};
    }

    void TearDown() {
        delete this->phoneBook;
        delete this->database;

    };

    void insertExamples(){
        this->phoneBook->insert(r);
        this->phoneBook->insert(r2);
        this->phoneBook->insert(r3);
        this->phoneBook->insert(r4);
        this->phoneBook->insert(r5);
    }

    SQLiteDatabase* database;
    PhoneBookAPI* phoneBook;
    PhoneBookRecord r{1, "Adam", "Giza", "Spokojna 3", "Krakow", "12 8887412", "856321444", "adam.giza@gmail.com"};
    PhoneBookRecord r2{1, "Jan", "Kowalski", "Cicha 33", "Krakow", "12 5874125", "996525452", "kwiatek@gmail.com"};
    PhoneBookRecord r3{1, "Mariusz", "Zelek", "Dluga 2", "Krakow", "12 5896347", "889764231", "zelek@gmail.com"};
    PhoneBookRecord r4{1, "Piotr", "Gumula", "Spokojna 213", "Krakow", "12 9863322", "758666321", "piotr@gmail.com"};
    PhoneBookRecord r5{1, "Kamil", "Kowalski", "Balicka 32", "Krakow", "12 4587788", "656999874", "kkk@gmail.com"};

};

TEST_F(PhoneBookAPITest, canInsertOneRecord) {
    this->phoneBook->insert(r);
    ASSERT_EQ(this->phoneBook->getAllRecords().size(), 1);
}

TEST_F(PhoneBookAPITest, throwsExceptionOnDuplicatedRecord) {
    this->phoneBook->insert(r);
    ASSERT_THROW(this->phoneBook->insert(r), DuplicatedRecordException);
}

TEST_F(PhoneBookAPITest, canInsertMoreRecords) {
    this->insertExamples();
    ASSERT_EQ(this->phoneBook->getAllRecords().size(), 5);
}

TEST_F(PhoneBookAPITest, getSomeRecords1) {
    this->insertExamples();
    auto records = this->phoneBook->getRecords("Adam", "Giza");
    ASSERT_EQ(records.size(), 1);
}

TEST_F(PhoneBookAPITest, getSomeRecords2) {
    this->insertExamples();
    auto records = this->phoneBook->getRecords("", "", "", "Krakow");
    ASSERT_EQ(records.size(), 5);
}

TEST_F(PhoneBookAPITest, getSomeRecords3) {
    this->insertExamples();
    auto records = this->phoneBook->getRecords("", "Kowalski", "", "Krakow");
    ASSERT_EQ(records.size(), 2);
}

TEST_F(PhoneBookAPITest, getSomeRecords4) {
    this->insertExamples();
    auto records = this->phoneBook->getRecords("", "", "", "", "adam.giza@gmail.com", "12 4587788");
    ASSERT_EQ(records.size(), 0);
}

TEST_F(PhoneBookAPITest, canDeleteRecord) {
    this->insertExamples();
    ASSERT_EQ(this->phoneBook->getAllRecords().size(), 5);
    this->phoneBook->remove(r);
    ASSERT_EQ(this->phoneBook->getAllRecords().size(), 4);
}

TEST_F(PhoneBookAPITest, canGetRecordById) {
    this->insertExamples();
    auto rr = this->phoneBook->getRecordById(1);
    ASSERT_EQ(rr.getName(), "Adam");
    ASSERT_EQ(rr.getSurname(), "Giza");
}

TEST_F(PhoneBookAPITest, throwsExceptionOnInvalidId) {
    this->insertExamples();
    ASSERT_THROW(this->phoneBook->getRecordById(100), RecordIdNotFoundException);
}

TEST_F(PhoneBookAPITest, updatesRecord) {
    this->insertExamples();
    auto r = this->phoneBook->getRecordById(1);
    r.setName("Marek");
    r.setSurname("Hajduk");
    this->phoneBook->update(r);
    r = this->phoneBook->getRecordById(1);
    ASSERT_EQ(r.getName(), "Marek");
    ASSERT_EQ(r.getSurname(), "Hajduk");
}

