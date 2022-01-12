//
// Created by Shahriar Nasim Nafi on 3/1/22.
//
// Problem: https://leetcode.com/problems/linked-list-cycle/
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
    bool hasCycle(ListNode *head) {
        unordered_set < ListNode * > nodes = {};
        ListNode *current = head;
        while (current) {
            if (nodes.find(current) != nodes.end()) {
                return true;
            }
            nodes.insert(current);
            current = current->next;
        }
        return false;
    }

};