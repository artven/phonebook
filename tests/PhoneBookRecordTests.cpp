//
// Created by rafal on 04.03.16.
//

#include "gtest/gtest.h"
#include "PhoneBookRecord.h"

TEST(stringConstructorTest, datectsInvalidInput) {
    std::string inputString {"1, Adam Giza, Spokojna 3, Krakow, 12 4569090, 889764231, adam.giza@gmail.com"};
    ASSERT_THROW(PhoneBookRecord{inputString}, std::invalid_argument);
    inputString = "abc, Adam, Giza, Spokojna 3, Krakow, 12 4569090, 889764231, adam.giza@gmail.com";
    ASSERT_THROW(PhoneBookRecord{inputString}, std::invalid_argument);
}

TEST(stringConstructorTest, noThrowOnValidString) {
    std::string inputString {"123, Adam, Giza, Spokojna 3, Krakow, 12 4569090, 889764231, adam.giza@gmail.com"};
    ASSERT_NO_THROW(PhoneBookRecord{inputString});
    PhoneBookRecord r{inputString};
    ASSERT_EQ(r.getId(), 123u);
    ASSERT_EQ(r.getName(), "Adam");
    ASSERT_EQ(r.getSurname(), "Giza");
    ASSERT_EQ(r.getAddress(), "Spokojna 3");
    ASSERT_EQ(r.getCity(), "Krakow");
    ASSERT_EQ(r.getPhoneNumber(), "12 4569090");
    ASSERT_EQ(r.getMobilePhoneNumber(), "889764231");
    ASSERT_EQ(r.getEmail(), "adam.giza@gmail.com");
}

TEST(constructorTest, noThrowOnValidData) {
    ASSERT_NO_THROW(PhoneBookRecord(1, "Adam", "Giża", "Spokojna 3", "Kraków", "12 5692033", "889764231", "adam.giza@gmail.com"));
}

TEST(constructorTest, trimsSpaces) {
    ASSERT_NO_THROW(PhoneBookRecord(1, " Adam ", " Giza ", " Spokojna 3", "  Krakow", " 12 5692033  ", "  889764231  ", " adam.giza@gmail.com"));
}

TEST(constructorTest, throwsOnInvalidName) {
    ASSERT_THROW(PhoneBookRecord(1, "xx", "Giza", "Spokojna 3", "Krakow", "12 5692033", "889764231", "adam.giza@gmail.com"), std::invalid_argument);
    ASSERT_THROW(PhoneBookRecord(1, "wojciech", "Giza", "Spokojna 3", "Krakow", "12 5692033", "889764231", "adam.giza@gmail.com"), std::invalid_argument);
    ASSERT_THROW(PhoneBookRecord(1, "Dd", "Giza", "Spokojna 3", "Krakow", "12 5692033", "889764231", "adam.giza@gmail.com"), std::invalid_argument);
}

TEST(constructorTest, throwsOnInvalidSurname) {
    ASSERT_THROW(PhoneBookRecord(1, "Adam", "giza", "Spokojna 3", "Krakow", "12 5692033", "889764231", "adam.giza@gmail.com"), std::invalid_argument);
    ASSERT_THROW(PhoneBookRecord(1, "Adam", "Dd", "Spokojna 3", "Krakow", "12 5692033", "889764231", "adam.giza@gmail.com"), std::invalid_argument);
    ASSERT_THROW(PhoneBookRecord(1, "Adam", "xa", "Spokojna 3", "Krakow", "12 5692033", "889764231", "adam.giza@gmail.com"), std::invalid_argument);
}

TEST(constructorTest, throwsOnInvalidAddress) {
    ASSERT_THROW(PhoneBookRecord(1, "Adam", "Giza", "Spokojna3", "Krakow", "12 5692033", "889764231", "adam.giza@gmail.com"), std::invalid_argument);
    ASSERT_THROW(PhoneBookRecord(1, "Adam", "Giza", "spokojna 3", "Krakow", "12 5692033", "889764231", "adam.giza@gmail.com"), std::invalid_argument);
}

TEST(constructorTest, throwsOnInvalidCity) {
    ASSERT_THROW(PhoneBookRecord(1, "Adam", "Giza", "Spokojna 3", "krakow", "12 5692033", "889764231", "adam.giza@gmail.com"), std::invalid_argument);
    ASSERT_THROW(PhoneBookRecord(1, "Adam", "Giza", "Spokojna 3", "Dd", "12 5692033", "889764231", "adam.giza@gmail.com"), std::invalid_argument);
    ASSERT_THROW(PhoneBookRecord(1, "Adam", "Giza", "Spokojna 3", "  xa", "12 5692033", "889764231", "adam.giza@gmail.com"), std::invalid_argument);
}

TEST(constructorTest, throwsOnInvalidPhoneNumber) {
    ASSERT_THROW(PhoneBookRecord(1, "Adam", "Giza", "Spokojna 3", "Krakow", "125692033", "889764231", "adam.giza@gmail.com"), std::invalid_argument);
    ASSERT_THROW(PhoneBookRecord(1, "Adam", "Giza", "Spokojna 3", "Krakow", "12 56033", "889764231", "adam.giza@gmail.com"), std::invalid_argument);
    ASSERT_THROW(PhoneBookRecord(1, "Adam", "Giza", "Spokojna 3", "Krakow", "5692033", "889764231", "adam.giza@gmail.com"), std::invalid_argument);
}

TEST(constructorTest, throwsOnInvalidMobilePhoneNumber) {
    ASSERT_THROW(PhoneBookRecord(1, "Adam", "Giza", "Spokojna 3", "Krakow", "12 5692033", "64231", "adam.giza@gmail.com"), std::invalid_argument);
    ASSERT_THROW(PhoneBookRecord(1, "Adam", "Giza", "Spokojna 3", "Krakow", "12 5692033", "64212321142131", "adam.giza@gmail.com"), std::invalid_argument);
    ASSERT_THROW(PhoneBookRecord(1, "Adam", "Giza", "Spokojna 3", "Krakow", "12 5692033", "64asd231", "adam.giza@gmail.com"), std::invalid_argument);
}

TEST(toStringTest, hasCorrectForm){
    PhoneBookRecord record {1, "Adam", "Giza", "Spokojna 3", "Krakow", "12 4569090", "889764231", "adam.giza@gmail.com"};
    ASSERT_EQ(record.toString(), "1, Adam, Giza, Spokojna 3, Krakow, 12 4569090, 889764231, adam.giza@gmail.com");
    PhoneBookRecord record2 {"2, Adam, Giza, Spokojna 3, Krakow, 12 4569090, 889764231, adam.giza@gmail.com"};
    ASSERT_EQ(record2.toString(), "2, Adam, Giza, Spokojna 3, Krakow, 12 4569090, 889764231, adam.giza@gmail.com");
}