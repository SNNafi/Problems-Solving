//
// Created by Shahriar Nasim Nafi on 6/1/22.
//
// Problem: https://leetcode.com/problems/reverse-integer/
//
//

class Solution {
public:
    int reverse(int x) {

        if (!(x > INT_MIN && x < INT_MAX)) {
            return 0;
        }


        bool isNegative = false;
        if (x < 0) {
            isNegative = true;
            x = x * -1;
        }

        long long result = 0;
        long digit;
        while (x > 0) {
            digit = (long) x % 10;
            result = result * 10 + digit;
            x /= 10;
        }

        if (isNegative) result = result * -1;
        if (result >= INT_MIN && result <= INT_MAX) {
            return (int) result;
        }
        return 0;
    }
};

