//
// Created by LanLin on 2023/5/5.
//
#include <string>
#include <vector>

#include "leetcode_helper.h"

using namespace std;

#ifndef LEARN_CPP17_LEETCODE_H
#define LEARN_CPP17_LEETCODE_H

class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target);
    string longestPalindrome(string s);

    ListNode* removeNthFromEnd(ListNode* head, int n);
};

#endif  // LEARN_CPP17_LEETCODE_H
