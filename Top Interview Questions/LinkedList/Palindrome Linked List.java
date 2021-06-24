/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.

Given the head of a singly linked list, return true if it is a palindrome.

Example 1:
Input: head = [1,2,2,1]
Output: true

Example 2:
Input: head = [1,2]
Output: false

Constraints:
The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9
 
Follow up: Could you do it in O(n) time and O(1) space?
*/

// Kashif Iqbal
// 24-June-2021

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
    public boolean isPalindrome(ListNode head) {

        ListNode fast = head;
        ListNode slowMid = head;

        while (fast.next != null && fast.next.next != null) {
            fast = fast.next.next;
            slowMid = slowMid.next;
        }

        ListNode prev = null;
        ListNode current = slowMid.next;
        ListNode next = null;

        while (current != null) {
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }

        slowMid.next = prev;
        slowMid = slowMid.next;

        while (slowMid != null) {
            if (head.val != slowMid.val) {
                return false;
            }
            head = head.next;
            slowMid = slowMid.next;
        }

        return true;
    }
}