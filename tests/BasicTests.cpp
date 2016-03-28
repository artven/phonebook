//
// Created by rafal on 28.03.16.
//

#include "gtest/gtest.h"

#include <QRegExp>

TEST(QRegexText, test1) {

    QRegExp regex{R"#([\D]{4,})#"};

    bool r = regex.exactMatch("du1żaaa");
    ASSERT_EQ(r, true);
}