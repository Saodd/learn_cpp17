#include "leetcode.h"

#include <gtest/gtest.h>

using namespace std;

TEST(q0001, EXAMPLES) {
    struct Example {
        vector<int> nums;
        int target;
        vector<int> answer;
    };
    Example examples[] = {
        {{2, 7, 11, 15}, 9, {0, 1}},
        {{3, 2, 4}, 6, {1, 2}},
        {{3, 3}, 6, {0, 1}},
    };
    Solution s;
    for (auto& ex : examples) {
        auto output = s.twoSum(ex.nums, ex.target);
        EXPECT_EQ(ex.answer, output);
    }
}

TEST(q0005, EXAMPLES) {
    struct Example {
        string input;
        string answer;
    };
    Example examples[] = {
        {"babad", "bab"},
        {"cbbd", "bb"},
    };
    Solution s;
    for (const auto& ex : examples) {
        auto output = s.longestPalindrome(ex.input);
        EXPECT_EQ(ex.answer, output);
    }
}

TEST(q0019, EXAMPLES) {
    struct Example {
        vector<int> input;
        int n;
        vector<int> answer;
    };
    Example examples[] = {
        {
            {1, 2, 3, 4, 5},
            2,
            {1, 2, 3, 5},
        },
        {
            {1},
            1,
            {},
        },
        {
            {1, 2},
            1,
            {1},
        },
    };
    Solution s;
    for (const auto& ex : examples) {
        auto input = helper::buildListNode(ex.input);
        auto output = s.removeNthFromEnd(input, ex.n);
        auto answer = helper::buildListNode(ex.answer);
        EXPECT_TRUE(helper::cmpList(output, answer));
    }
}
