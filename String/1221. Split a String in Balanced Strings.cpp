/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/
/*

// @author Kashif Iqbal
// @since 19-Jan-2020

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int ans = 0;
        for(char itr : s){
            if(itr == 'L'){
                count++;
            }
            
            if(itr == 'R'){
                count--;
            }
            
            if(count == 0){
                ans++;
            }
        }
        return ans;
    }
};