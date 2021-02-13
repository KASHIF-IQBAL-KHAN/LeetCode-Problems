/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/
/*

// @author Kashif Iqbal
// @since 07-Jan-2020

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> vi;
        int sum = 0;
        
        for(int itr=0; itr<nums.size(); ++itr){
            sum += nums[itr];
            vi.push_back(sum);
        }

     return vi;   
    }
};