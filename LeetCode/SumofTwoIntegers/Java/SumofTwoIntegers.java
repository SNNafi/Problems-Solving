//
// Created by Shahriar Nasim Nafi on 21/10/21.
//
// Problem: https://leetcode.com/problems/sum-of-two-integers/

import java.math.BigInteger;

class Solution {

    // Evil hack :D
    public int getSum(int a, int b) {
        BigInteger _a = new BigInteger(Integer.toString(a));
        BigInteger _b = new BigInteger(Integer.toString(b));
        return Integer.parseInt(_a.add(_b).toString());
    }
}