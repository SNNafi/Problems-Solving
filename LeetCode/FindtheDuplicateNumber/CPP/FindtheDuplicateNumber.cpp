//
// Created by Shahriar Nasim Nafi on 3/1/22.
//
// Problem: https://leetcode.com/problems/find-the-duplicate-number/
//

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> found = {};
        for(int i = 0; i < nums.size(); i++) {
            if (found.find(nums[i]) != found.end()) {
                return nums[i];
            }
            found.insert(nums[i]);
        }

        return -1;
    }
};