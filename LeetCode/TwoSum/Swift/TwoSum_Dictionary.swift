//
// Created by Shahriar Nasim Nafi on 30/12/21.
//
// Problem: https://leetcode.com/problems/two-sum/
//

class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        var dict = [Int: Int]()
            for (i , v) in nums.enumerated() {
                let mayBe = target - v;
                if dict[mayBe] != nil {
                    return [dict[mayBe]!, i]
                } else {
                    dict[v] = i
                }
            }
            return []
    }
}
