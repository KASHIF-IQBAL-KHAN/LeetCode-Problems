/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/

/*
// @author Kashif Iqbal
// @since 13-Jan-2020

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string str1 , str2;
        vector<string> :: iterator itr;
        
        for(itr=word1.begin(); itr!=word1.end(); itr++){
            str1 += *itr;
        }
        
        for(itr=word2.begin(); itr!=word2.end(); itr++){
            str2 += *itr;
        }
    
        if(str1 == str2 ){
            return true;
        } 
        return false;
    }
};

//************************With Only One String *******************************

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        vector<string> vi;
        for(auto itr : word1){
            vi.push_back(itr);
        }
        for(auto itr : word2){
            vi.push_back(itr);
        }
        
        string str;
        for(auto itr : vi){
            str += itr;
        }

        int len = str.size();
        
        if(len%2 != 0){
            return false;
        }
        
        for(int itr=0; itr<len/2; itr++){
            if(str[itr] != str[(len/2) + itr]){
                return false;
            }
        }
        return true;
    }
};