//
// Created by Shahriar Nasim Nafi on 4/1/22.
//
// Problem: https://leetcode.com/problems/string-to-integer-atoi/
//

class Solution {
public:
    int myAtoi(string s) {
        long long number = 0;
        bool isPostive = false;
        bool isNegative = false;
        bool alreadyNum = false;

        for (int i = 0; i < s.size(); i++) {

            if (alreadyNum) {
                if (!(s[i] >= '0' && s[i] <= '9')) {
                    break;
                }
            }

            if (s[i] == '-') {

                if (alreadyNum || isNegative) {
                    break;
                }

                isNegative = true;
            }

            if (s[i] == '+') {

                if (alreadyNum || isPostive) {
                    break;
                }

                isPostive = true;
            }

            if ((s[i] >= 'A' && s[i] <= 'z' || s[i] == '.')) {
                break;
            }

            if (isNegative || isPostive) {
                if ((s[i] >= 'A' && s[i] <= 'z' || s[i] == '.' || s[i] == ' ')) {
                    break;
                }
            }


            if (s[i] >= '0' && s[i] <= '9') {
                if (number < INT_MIN || number > INT_MAX) {
                    break;
                }
                number = number * 10 + (s[i] - '0');
                alreadyNum = true;
            }


        }

        if (isNegative) {
            number = number * -1;
        }

        if (isPostive && isNegative) {
            number = 0;
        }

        if (number < INT_MIN) {
            number = INT_MIN;
        } else if (number > INT_MAX) {
            number = INT_MAX;
        }


        return number;
    }
};