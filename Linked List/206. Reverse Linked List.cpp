/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/
/*

// Kashif Iqbal
// 12-Feb-2020

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
    ListNode* reverseList(ListNode* head) {

        ListNode *current = head;
        ListNode *prev = NULL;
        ListNode *temp;
        
        while(current != NULL){
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
    return prev;
    }
};