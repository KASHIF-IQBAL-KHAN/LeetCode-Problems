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
    int getDecimalValue(ListNode* head) {
        int size = 0;
        int decimalValue = 0;
        ListNode *itr = head;
        while(itr != NULL){
            ++size;
            itr = itr->next;
        }
        
        itr = head;
        
        while(itr != NULL){
            decimalValue = decimalValue  + itr->val * pow(2,--size);
            itr = itr->next;
        }
    return decimalValue;
    }
};