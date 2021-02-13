/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/
/*

// @author Kashif Iqbal
// @since 07-Jan-2020


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = INT_MIN;
        for(int itr=0; itr<accounts.size(); ++itr){
            int sum = 0;
            for(int j=0; j<accounts[itr].size(); ++j){
                sum = sum + accounts[itr][j];
            }
            if(sum > max){
                max = sum;
            }
        }
        return max;
    }
};