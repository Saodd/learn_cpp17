//
// Created by LanLin on 2023/5/9.
//

#include <vector>

using namespace std;

#ifndef LEARN_CPP17_LEETCODE_HELPER_H
#define LEARN_CPP17_LEETCODE_HELPER_H
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
bool operator==(const ListNode& lhs, const ListNode& rhs);

namespace helper {
ListNode* buildListNode(const vector<int>& nums);
bool cmpList(ListNode* list1, ListNode* list2);
}  // namespace helper

#endif  // LEARN_CPP17_LEETCODE_HELPER_H
