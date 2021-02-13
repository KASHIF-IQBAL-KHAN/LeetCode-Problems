/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/
/*

// Kashif Iqbal
// 20-Jan-2020


class Solution {
public:
    int maxDepth(string s) {
        int max = 0;
        int count = 0;
        
        for(char itr : s){
            if(itr == '('){
                count++;
            }
            
            if(itr == ')'){
                count--;
            }
            
            if(count > max ){
                max = count;
            }
        }
        return max;
    }
};