//
// Created by Shahriar Nasim Nafi on 6/1/22.
//
// Problem: https://leetcode.com/problems/reverse-integer/
//
// A hack with !StringBuilder!
//

class Solution {
    public int reverse(int x) {
        boolean leading = false;
        if (!is32Bit(x)) return 0;
        String X = String.valueOf(x);
        if (X.charAt(0) == '-') {
            leading = true;
           X = X.replace("-","");
        }
        String number = new StringBuilder(String.valueOf(X)).reverse().toString();
        Long result = Long.parseLong(number);
        if (leading) {
            result = result * -1;
        }
        if (!is32Bit(result)) return 0;
        return result.intValue();

    }
    public boolean is32Bit(int num) {
         return (num <= 2147483647) && (num >= -2147483648);
    }
    public boolean is32Bit(Long num) {
         return (num <= 2147483647) && (num >= -2147483648);
    }

}