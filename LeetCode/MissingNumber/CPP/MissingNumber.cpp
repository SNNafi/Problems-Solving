//
// Created by Shahriar Nasim Nafi on 2/1/22.
//
// Problem: https://leetcode.com/problems/missing-number/
//

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> sets(nums.begin(), nums.end());
        for (int i = 0; i <= nums.size(); i++) {
            if (sets.find(i) == sets.end()) {
                return i;
            }
        }
        return -1;
    }
};