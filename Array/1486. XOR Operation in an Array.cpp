/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/
/*

// @author Kashif Iqbal
// @since 09-Jan-2020

class Solution {
public:
    int xorOperation(int n, int start) {
        int XOR = 0;
        int nums[n];
        
        for(int itr=0; itr<n; ++itr){
            nums[itr] = start + 2*itr;
            XOR = XOR ^ nums[itr];
        }
        return XOR;
    }
};