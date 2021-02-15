/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/
/*

// Kashif Iqbal
// 15-Feb-2020

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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        if(list1 == NULL){
            return NULL;
        }
        
        ListNode* itr1 = list1;
        ListNode* itr2 = list1;
        ListNode* endNodeInList2 = list2;
        int counter = 0;
         
        while(counter < a-1){
            itr1 = itr1->next;
            counter++;
        }
        
        counter = 0;
        
        while(counter <= b){
            itr2 = itr2->next;
            counter++;
        }
        
        while(endNodeInList2->next != NULL){
            endNodeInList2 = endNodeInList2->next;
        }
        
        itr1->next = list2;
        endNodeInList2->next = itr2;
        return list1;
    }
};