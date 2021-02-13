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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *itr = node;
        ListNode *tail;
        
        while(itr->next != NULL){
            tail = itr;
            itr = itr->next;
            tail->val = itr->val;
        }
        
        tail->next = NULL;
        delete itr;
    }
};