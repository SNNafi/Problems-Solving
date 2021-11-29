//
// Created by Shahriar Nasim Nafi on 29/11/21.
//
//  Problem: https://leetcode.com/problems/delete-node-in-a-linked-list/
//

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};