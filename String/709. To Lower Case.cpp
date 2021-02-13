/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/

/*
// Kashif Iqbal
// 15-Jan-2020

class Solution {
public:
    string toLowerCase(string str) {
        for(int itr=0; itr<str.size(); itr++){
            if(int(str[itr])>=65 && int(str[itr])<=90){
                str[itr] = str[itr] + 32;
            }
        }
        return str;
    }
};