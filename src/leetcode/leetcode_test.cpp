#include <gtest/gtest.h>
#include "leetcode.h"

// Demonstrate some basic assertions.
TEST(q0001, exmaples) {
    Solution s;
    auto input = vector<int>{2, 7, 11, 15};
    auto output = s.twoSum(input, 9);
    auto answer = vector<int>{0, 1};
    EXPECT_EQ(answer, output);
}