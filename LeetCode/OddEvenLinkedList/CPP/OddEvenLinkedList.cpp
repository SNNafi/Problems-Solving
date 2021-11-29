//
// Created by Shahriar Nasim Nafi on 29/11/21.
//
// Problem: https://leetcode.com/problems/odd-even-linked-list
//

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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr) return head;

        ListNode* node = head;
        ListNode* evenHead = nullptr;
        ListNode* oddHead = nullptr;
        ListNode* even = nullptr;
        ListNode* odd = nullptr;

        bool isEven = false;

        while(node) {
            ListNode* currentNode = new ListNode(node->val);
            if (isEven) {

                if (evenHead) {
                    even->next = currentNode;
                    even = even->next;
                } else {
                    evenHead = currentNode;
                    even = currentNode;
                }

            } else {

                if (oddHead) {
                    odd->next = currentNode;
                    odd = odd->next;
                } else {
                    oddHead = currentNode;
                    odd = currentNode;
                }
            }

            isEven = !isEven;
            node = node->next;
        }
        odd->next = evenHead;
        return oddHead;

    }
};