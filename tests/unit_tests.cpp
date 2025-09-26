#include <gtest/gtest.h>
#include <string>
#include "../src/chek_number.h"

TEST(ChekNumberTest, Monday) {
    EXPECT_TRUE(isSchizophrenia("Понедельник", 12));
    EXPECT_FALSE(isSchizophrenia("Понедельник", 13));
}

TEST(ChekNumberTest, Tuesday) {
    EXPECT_TRUE(isSchizophrenia("Вторник", 96));
    EXPECT_FALSE(isSchizophrenia("Вторник", 95));
}

TEST(ChekNumberTest, Wednesday) {
    EXPECT_TRUE(isSchizophrenia("Среда", 34));
    EXPECT_FALSE(isSchizophrenia("Среда", 33));
}

TEST(ChekNumberTest, Thursday) {
    EXPECT_TRUE(isSchizophrenia("Четверг", 0));
    EXPECT_FALSE(isSchizophrenia("Четверг", 1));
}

TEST(ChekNumberTest, Friday) {
    EXPECT_TRUE(isSchizophrenia("Пятница", 2));
    EXPECT_FALSE(isSchizophrenia("Пятница", 3));
    EXPECT_TRUE(isSchizophrenia("Пятница", 4));
    EXPECT_FALSE(isSchizophrenia("Пятница", 5));
}

TEST(ChekNumberTest, Saturday) {
    EXPECT_TRUE(isSchizophrenia("Суббота", 56));
    EXPECT_FALSE(isSchizophrenia("Суббота", 55));
}

TEST(ChekNumberTest, Sunday) {
    EXPECT_TRUE(isSchizophrenia("Воскресенье", 666));
    EXPECT_TRUE(isSchizophrenia("Воскресенье", -666));
    EXPECT_FALSE(isSchizophrenia("Воскресенье", 0));
}

TEST(ChekNumberTest, InvalidDay) {
    EXPECT_FALSE(isSchizophrenia("NotADay", 0));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}