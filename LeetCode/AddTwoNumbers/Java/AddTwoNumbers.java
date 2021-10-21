//
// Created by Shahriar Nasim Nafi on 21/10/21.
//
// Problem: https://leetcode.com/problems/add-two-numbers/
import java.math.BigInteger;


class ListNode {
    int val;
    ListNode next;

    ListNode() {
    }

    ListNode(int val) {
        this.val = val;
    }

    ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}


class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        BigInteger number1 = toReversedNumber(l1);
        BigInteger number2 = toReversedNumber(l2);
        BigInteger sum = number1.add(number2);
        if (sum.signum() != 0) {
            return toListNode(sum);
        } else {
            ListNode node = new ListNode();
            node.val = 0;
            return node;
        }
    }

    BigInteger toReversedNumber(ListNode l1) {
        StringBuilder number = new StringBuilder();
        ListNode node = l1;
        if (node != null) {
            while (node != null) {
                number.append(node.val);
                node = node.next;
            }
            BigInteger reversedNumber = new BigInteger(number.reverse().toString());
            return reversedNumber;
        } else {
            return new BigInteger("0");
        }

    }

    ListNode toListNode(BigInteger n) {
        ListNode node = null;
        ListNode pNode;
        String number = n.toString();
        for (int i = 0; i <= number.length() - 1; i++) {
            pNode = new ListNode();
            pNode.val = Integer.parseInt(String.valueOf(number.charAt(i)));
            pNode.next = node;
            node = pNode;
        }
        return node;
    }
}