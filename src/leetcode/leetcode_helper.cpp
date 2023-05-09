//
// Created by LanLin on 2023/5/9.
//

#include "leetcode_helper.h"

#include <iostream>
#include <vector>

using namespace std;

namespace helper {
ListNode* buildListNode(const vector<int>& nums) {
    ListNode dumb;
    ListNode* head = &dumb;
    for (auto num : nums) {
        head->next = new ListNode(num);
        head = head->next;
    }
    return dumb.next;
}

// bool isCircularList(ListNode* list) {}

bool cmpList(ListNode* list1, ListNode* list2) {
    ListNode dumb1 = ListNode(0, list1);
    ListNode dumb2 = ListNode(0, list2);
    auto a = &dumb1, b = &dumb2, fast = a;
    while (a != nullptr) {
        if (b == nullptr) return false;
        if (a->val != b->val) return false;

        a = a->next;
        b = b->next;
        if (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            if (fast == a) {
                return true;
            }
        } else {
            fast = nullptr;
        }
    }
    return b == nullptr;
}

}  // namespace helper
