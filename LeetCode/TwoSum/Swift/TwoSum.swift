//
// Created by Shahriar Nasim Nafi on 30/12/21.
//
// Problem: https://leetcode.com/problems/two-sum/
//

class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        for i in 0..<(nums.count - 1) {
            for j in stride(from: 0, to: (nums.count), by: 1) {
                 if nums[i] + nums[j] == target {
                     if (i != j) {
                         return [i, j]
                    }
                 }
            }
        }
        return []
    }
}