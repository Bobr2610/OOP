#include <gtest/gtest.h>
#include <string>
#include "../code/chek_number.h"

TEST(ChekNumberTest, AllDays) {
    EXPECT_TRUE(isSchizophrenia("Понедельник", 12));
    EXPECT_FALSE(isSchizophrenia("Понедельник", 413));

    EXPECT_TRUE(isSchizophrenia("Вторник", 96));
    EXPECT_FALSE(isSchizophrenia("Вторник", 23));

    EXPECT_TRUE(isSchizophrenia("Среда", 34));
    EXPECT_FALSE(isSchizophrenia("Среда", 4));

    EXPECT_TRUE(isSchizophrenia("Четверг", 0));
    EXPECT_FALSE(isSchizophrenia("Четверг", 6));

    EXPECT_TRUE(isSchizophrenia("Пятница", 2));
    EXPECT_FALSE(isSchizophrenia("Пятница", 3));
    EXPECT_TRUE(isSchizophrenia("Пятница", 400));

    EXPECT_TRUE(isSchizophrenia("Суббота", 56));
    EXPECT_FALSE(isSchizophrenia("Суббота", 1));

    EXPECT_TRUE(isSchizophrenia("Воскресенье", 666));
    EXPECT_TRUE(isSchizophrenia("Воскресенье", 5));
    EXPECT_FALSE(isSchizophrenia("Воскресенье", 13));

    EXPECT_FALSE(isSchizophrenia("NotADay", 0));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}