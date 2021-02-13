/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/

/*
// Kashif Iqbal
// 20-Jan-2020

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
    string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
   
        unordered_set <string> stringSet; 
        string res;   
        
        for(string str : words){
            res = "";
            for(int itr=0; itr<str.size(); itr++){
                res.append(morse[str[itr] - 'a']);
            }
            stringSet.insert(res);
        }
        
        return stringSet.size();
    }        
};