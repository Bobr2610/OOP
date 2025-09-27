#include <gtest/gtest.h>
#include <string>
#include "../code/chek_number.h"

TEST(ChekNumberTest, EliminateUnsetBits) {
    EXPECT_EQ(eliminate_unset_bits("1101010101010101"), 511);
    EXPECT_EQ(eliminate_unset_bits("111"), 7);
    EXPECT_EQ(eliminate_unset_bits("1000000"), 1);
    EXPECT_EQ(eliminate_unset_bits("000"), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}