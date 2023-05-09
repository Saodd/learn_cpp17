//
// Created by LanLin on 2023/5/9.
//

#include "leetcode_helper.h"

#include <gtest/gtest.h>

using namespace std;
using namespace helper;

TEST(buildListNode, BASIC) {
    vector<int> nums = {1, 2, 3};
    vector<int> nums2 = {1, 2, 3, 4};
    vector<int> nums3 = {};
    EXPECT_TRUE(cmpList(buildListNode(nums), buildListNode(nums)));
    EXPECT_FALSE(cmpList(buildListNode(nums), buildListNode(nums2)));
    EXPECT_FALSE(cmpList(buildListNode(nums), buildListNode(nums3)));
}

TEST(cmpList, CircularList) {
    auto node3 = ListNode(3);
    auto node2 = ListNode(2, &node3);
    auto node1 = ListNode(1, &node2);
    node3.next = &node2;

    EXPECT_FALSE(cmpList(&node1, nullptr));
    EXPECT_FALSE(cmpList(nullptr, &node1));
    EXPECT_FALSE(cmpList(&node1, &node2));
    EXPECT_TRUE(cmpList(&node1, &node1));
    EXPECT_TRUE(cmpList(&node2, &node2));
}
TEST(cmpList, CircularList2) {
    auto node5 = ListNode(5);
    auto node4 = ListNode(4, &node5);
    auto node3 = ListNode(3, &node4);
    auto node2 = ListNode(2, &node3);
    auto node1 = ListNode(1, &node2);
    node5.next = &node3;

    EXPECT_FALSE(cmpList(&node1, nullptr));
    EXPECT_FALSE(cmpList(nullptr, &node1));
    EXPECT_FALSE(cmpList(&node1, &node2));
    EXPECT_TRUE(cmpList(&node1, &node1));
    EXPECT_TRUE(cmpList(&node2, &node2));
}
