//
// Created by Shahriar Nasim Nafi on 21/11/21.
//
// Problem: https://leetcode.com/problems/reverse-linked-list/

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        ListNode *reversed = nullptr;
        while (head != nullptr) {
            ListNode *node = new ListNode();
            node->val = head->val;
            if (reversed != nullptr) {
                node->next = reversed;
                reversed = node;
            } else {
                reversed = node;
            }
            head = head->next;
        }
        return reversed;
    }
};

int main() {
    Solution solution = Solution();
    ListNode *node3 = new ListNode(9);
    ListNode *node2 = new ListNode(8, node3);
    ListNode *node1 = new ListNode(7, node2);
    solution.reverseList(node1);
}