//
// Created by Shahriar Nasim Nafi on 18/10/21.
//

#include <iostream>

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> fnums;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    if (i != j) {
                        fnums.push_back(i);
                        fnums.push_back(j);
                        return fnums;
                    }
                }
            }
        }
        return fnums;
    }
};