//
// Created by Shahriar Nasim Nafi on 21/10/21.
//
// Problem: https://leetcode.com/problems/sqrtx/


class Solution {
    public int mySqrt(int x) {

        // ideal -> 1.0e15 but it will increase time BUT as we  just return int, this is not needed.
        double maximamError = 0.000001;
        double number = (double) x;
        double sqrt = number;
        while(Math.abs(number / sqrt - sqrt) > maximamError) {
            sqrt = (number / sqrt + sqrt) / 2.0;
        }
        return (int) sqrt;

    }
}