#include <gtest/gtest.h>
#include "leetcode.h"

using namespace std;

TEST(q0001, EXAMPLES) {
    struct Example {
        vector<int> nums;
        int target;
        vector<int> answer;
    };
    Example examples[] = {
            {
                    {2, 7, 11, 15},
                    9,
                    {0, 1}
            },
            {
                    {3, 2, 4},
                    6,
                    {1, 2}
            },
            {
                    {3, 3},
                    6,
                    {0, 1}
            }
    };
    Solution s;
    for (auto ex: examples) {
        auto output = s.twoSum(ex.nums, ex.target);
        EXPECT_EQ(ex.answer, output);
    }
}