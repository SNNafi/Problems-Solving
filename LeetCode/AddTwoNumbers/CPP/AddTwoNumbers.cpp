//
// Created by Shahriar Nasim Nafi on 19/10/21.
//
// Problem: https://leetcode.com/problems/add-two-numbers/
// 1565 / 1568 test cases passed.
// Reason: Integer tooo big ! Check Java solution

#include <iostream>
#include <sstream>
//#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        unsigned long long int number1 = toReversedNumber(l1);
        unsigned long long int number2 = toReversedNumber(l2);
        unsigned long long int sum = number1 + number2;
        if (sum != 0) {
            return toListNode(sum);
        } else {
            ListNode *node = new ListNode();
            node->val = 0;
            return node;
        }

    }


    unsigned long long int toReversedNumber(ListNode *l1) {
        string number;
        std::stringstream ss;
        ListNode *node = l1;
        if (node) {
            while (node) {
                ss << node->val;
                node = node->next;
            }
            ss >> number;
            std::reverse(number.begin(), number.end());
            std::stringstream r(number);
            unsigned long long int reversedNumber;
            r >> reversedNumber;
            return reversedNumber;
        } else {
            return 0;
        }

    }

    unsigned long long int reverse(string number) {
        unsigned long long int reversed = 0;

        std::stringstream ss;

        for (int i = number.size() - 1; i >= 0; i--) {
            ss << number[i];
        }
        ss >> reversed;
        return reversed;
    }

    ListNode *toListNode(unsigned long long int n) {
        ListNode *node = nullptr;
        ListNode *pNode;
        std::stringstream ss;
        ss << n;
        string number;
        ss >> number;
        int size = number.size() - 1;
        for (int i = 0; i <= size; i++) {
            pNode = new ListNode();
            std::stringstream ss;
            ss << number[i];
            ss >> pNode->val;
            pNode->next = node;
            node = pNode;
        }
        return node;
    }
};

int main() {


    //Solution solution = Solution();
   // ListNode *node = solution.addTwoNumbers(node1, node4);


}
