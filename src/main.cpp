#include <iostream>
#include <leetcode.h>

using namespace std;

int main() {
    Solution s;
    auto nums = vector<int>{2, 7, 11, 15};
    auto result = s.twoSum(nums, 9);
    for (auto num: result) {
        cout << num << endl;
    }
}