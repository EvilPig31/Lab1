#include <gtest/gtest.h>
#include "../include/finder.h"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(FindNumber(2,7)==6);
}

TEST(test_02, basic_test_set)
{
    ASSERT_TRUE(FindNumber(10,50)==50);
}

TEST(test_03, basic_test_set)
{
    ASSERT_TRUE(FindNumber(-100,-20)==0);
}

TEST(test_04, basic_test_set)
{
    ASSERT_TRUE(FindNumber(3,1)==0);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}