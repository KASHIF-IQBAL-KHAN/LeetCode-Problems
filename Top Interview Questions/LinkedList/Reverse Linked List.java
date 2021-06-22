/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.

Given the head of a singly linked list, reverse the list, and return the reversed list.
 
Example 1:

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Example 2:

Input: head = [1,2]
Output: [2,1]
Example 3:

Input: head = []
Output: []
 
Constraints:

The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000
 
Follow up: A linked list can be reversed either iteratively or recursively. Could you implement both?
*/

// Kashif Iqbal
// 22-June-2021

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
    
//     ListNode iterativeReverse(ListNode head){
        
//         ListNode prev = null;
//         ListNode current = head;
//         ListNode next = null;
        
//         while(current != null){
//             next = current.next;
//             current.next = prev;
//             prev = current;
//             current = next;
            
//         }
        
//         return prev;
//     }
    
    public ListNode reverseList(ListNode head) {

        // return iterativeReverse(head);

        if (head == null || head.next == null) {
            return head;
        }

        ListNode reverseListHead = reverseList(head.next);
        head.next.next = head;
        head.next = null;

        return reverseListHead;

    }
    }