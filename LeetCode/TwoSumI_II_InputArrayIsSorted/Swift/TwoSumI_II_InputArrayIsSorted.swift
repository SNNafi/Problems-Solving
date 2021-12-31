//
// Created by Shahriar Nasim Nafi on 30/12/21.
//
// Problem: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
//

class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        let _nums = nums.sorted()
        var left = 0
        var right = _nums.count - 1
        while left < right {
            if _nums[left] + _nums[right] == target {
                return [nums.firstIndex(of: _nums[left])!, nums.lastIndex(of: _nums[right])!]
            } else if _nums[left] + _nums[right] < target {
                left+=1
            } else if _nums[left] + _nums[right] > target {
                right-=1
            }
        }
        return []
    }
}
