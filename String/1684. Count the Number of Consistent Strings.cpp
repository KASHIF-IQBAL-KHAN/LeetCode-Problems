/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/

/*
// Kashif Iqbal
// 15-Jan-2020

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
          // support variable
        int res = words.size();
        bool alpha[26] = {};
        // populating alpha    
        
        for(char c : allowed){
            alpha[c - 'a'] = true;
        }
        // parsing all the words to see if each character is in alpha
        for(string word : words){
            // in case we find an unallowed character, we decrease res and break    
            for(char c : word){
                if(!alpha[c - 'a']){
                    res--;
                    break;
                }
            }
        }
    return res;
    }
};