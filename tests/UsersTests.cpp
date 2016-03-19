//
// Created by rafal on 09.03.16.
//

#include "gtest/gtest.h"
#include "UserRecord.h"

TEST(UserRecordTests, noThrowOnValidData) {
    ASSERT_NO_THROW(UserRecord(1,"adamg","adamgiza@gmail.pl",UserRole::NormalUser));
    ASSERT_NO_THROW(UserRecord(1,"rafal","rafal.prusak@gmail.pl",UserRole::Admministrator));
}

TEST(UserRecordTests, noThrowOnStringArg) {
    std::string input = "1, adamg,adamgiza@gmail.pl, operator";
    ASSERT_NO_THROW(UserRecord(input, ','));
}

TEST(UserRecordTests, constructsValidObjectFromSting) {
    std::string input = "10, adamg,adam.giza@gmail.pl, operator";
    UserRecord u {input};
    ASSERT_EQ(u.getId(), 10);
    ASSERT_EQ(u.getEmail(), "adam.giza@gmail.pl");
    ASSERT_EQ(u.getLogin(), "adamg");
}

TEST(UserRecordTests, canChangeUserRole) {
    UserRecord u1 {1, "guml", "gumula@onet.com", UserRole::Operator};
    ASSERT_EQ(u1.isOperator(), true);
    u1.changeRole(UserRole::NormalUser);
    ASSERT_EQ(u1.isNormalUser(), true);
    ASSERT_EQ(u1.isAdministrator(), false);
}