/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/

/*
// Kashif Iqbal
// 20-Jan-2020

class Solution {
public:
    bool halvesAreAlike(string str) {
         unordered_set<char> set = {'a', 'e', 'i', 'o', 'u','A','I','E','O','U'};
        
        int itr=0 , j=str.size()/2 , count=0;
        
        while(j<str.size()){
            
            if(set.find(str[itr]) != set.end()){
                count++;
            }
            if(set.find(str[j]) != set.end()){
                count--;
            }
            itr++;
            j++;
        }
        return count == 0;
    }
};