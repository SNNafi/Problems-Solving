class Solution {
//
// Created by Shahriar Nasim Nafi on 7/1/22.
//
// Problem: https://leetcode.com/problems/palindrome-number/
//
//

public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        return x == reverse(x);
    }

    long long reverse(long long number) {
        long long result = 0;
        while (number > 0) {
            int digit = number % 10;
            result = result * 10 + digit;
            number/=10;
        }
        return result;
    }
};