/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/
/*

// Kashif Iqbal
// 11-Feb-2020

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL){
            return NULL;
        }
        else if(l1 == NULL){
            return l2;
        }
        else if(l2 == NULL){
            return l1;
        }
        
        ListNode *head = new ListNode;
        ListNode *tail = new ListNode;
        
        if(l1->val <= l2->val){
            head = l1;
            tail = l1;
            l1 = l1 -> next;
        }
        else{
            head = l2;
            tail = l2;
            l2 = l2 -> next;
        }
        
        while(l1 != NULL && l2 != NULL){
            if(l1->val <= l2->val){
                tail->next = l1;
                tail = tail -> next;
                l1 = l1 -> next;
            }
            else if(l1->val > l2->val){
                tail->next = l2;
                tail = tail->next;
                l2 = l2 -> next;
            }
        }
        
        if(l1 == NULL){
            tail -> next = l2;
        }
        else if(l2 == NULL){
            tail ->next = l1;
        }
        return head;
    }
};