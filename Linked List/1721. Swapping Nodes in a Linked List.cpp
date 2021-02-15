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
    ListNode* swapNodes(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        int size = 1;
        int counter = 0;
        ListNode* swapNode1 = head;
        ListNode* swapNode2 = head;
        
        while(swapNode1->next != NULL){
            size++;
            swapNode1 = swapNode1->next;
        }
        
        swapNode1 = head;
        
        while(counter < k-1){
            swapNode1 = swapNode1->next;
            counter++;
        }
        
        counter = 0;
        
        while(counter < size-k){
            swapNode2 = swapNode2->next;
            counter++;
        }
        
        swap(swapNode1->val , swapNode2->val);
        
        return head;
        
    }
};