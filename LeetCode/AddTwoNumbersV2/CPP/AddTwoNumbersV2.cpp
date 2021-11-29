//
// Created by Shahriar Nasim Nafi on 29/11/21.
//
// Problem: https://leetcode.com/problems/add-two-numbers-ii/
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
    ListNode *reverseLinkedList(ListNode *node) {
        ListNode *head = nullptr;
        while (node) {
            ListNode *currentNode = new ListNode(node->val);
            currentNode->next = head;
            head = currentNode;
            node = node->next;
        }
        return head;
    }

    ListNode *add(ListNode *l1, ListNode *l2, int carry) {
        if (l1 == nullptr && l2 == nullptr && carry == 0) return nullptr;
        int now = carry;
        if (l1) now += l1->val;
        if (l2) now += l2->val;

        int currentValue = now % 10;
        int nextCarry = now / 10;

        ListNode *currentNode = new ListNode(currentValue);
        currentNode->next = add(l1 ? l1->next : l1, l2 ? l2->next : l2, nextCarry);
        return currentNode;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        return reverseLinkedList(add(reverseLinkedList(l1), reverseLinkedList(l2), 0));
    }
};