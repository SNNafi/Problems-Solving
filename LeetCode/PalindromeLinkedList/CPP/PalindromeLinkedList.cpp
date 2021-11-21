//
// Created by Shahriar Nasim Nafi on 21/11/21.
//
// Problem: https://leetcode.com/problems/palindrome-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode *reversed;
        while(head){
            ListNode *node = new ListNode();
            node->val = head->val;
            if(reversed) {
                node->next = reversed;
                reversed = node;
            } else {
                reversed = node;
            }
            head= head->next;
        }
        return reversed;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *node = head;
        ListNode *reversed = reverse(node);
        while(head && reversed) {
            if (head->val != reversed->val){
                return false;
            }
            head = head->next;
            reversed = reversed->next;
        }
        return true;
    }
};
