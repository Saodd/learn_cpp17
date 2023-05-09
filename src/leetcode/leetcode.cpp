#include "leetcode.h"

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

/**
 * 1. 两数之和
 *
   给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个
 整数，并返回它们的数组下标。

   你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

   你可以按任意顺序返回答案。

   来源：力扣（LeetCode）
   链接：https://leetcode.cn/problems/two-sum
   著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
    */
vector<int> Solution::twoSum(vector<int> &nums, int target) {
    auto size = nums.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < size; ++i) {
        auto num = nums[i];
        auto t = target - num;
        auto j = mp.find(t);
        if (j != mp.end()) {
            return {j->second, i};
        }
        mp[num] = i;
    }
    return {};
}

/**
 * 5. 最长回文子串

给你一个字符串 s，找到 s 中最长的回文子串。

如果字符串的反序与原始字符串相同，则该字符串称为回文字符串。

提示：
    1 <= s.length <= 1000
    s 仅由数字和英文字母组成
 */
string Solution::longestPalindrome(string s) {
    /**
执行用时：1188 ms, 在所有 C++ 提交中击败了5.05%的用户
内存消耗：6.7 MB, 在所有 C++ 提交中击败了84.67%的用户
     */
    auto left = 0;
    auto right = 0;
    const auto len = s.length();

    for (int i = 0; i < len; ++i) {
        for (int j = i + 1; j < len; ++j) {
            auto l = i;
            auto r = j;
            //            cout << s.substr(i, j - i + 1) << endl;
            while (true) {
                //                cout << s[l] << " " << s[r] << endl;
                if (s[l] != s[r]) {
                    break;
                }
                ++l;
                --r;
                if (l >= r) {
                    if (j - i > right - left) {
                        //                        cout << "输出 " << s.substr(i, j - i + 1) << endl;
                        left = i;
                        right = j;
                    }
                    break;
                }
            }
        }
    }

    return s.substr(left, right - left + 1);
}
