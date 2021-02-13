/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/
/*
// @author Kashif Iqbal
// @since 13-Jan-2020

class Solution {
public:
    string defangIPaddr(string address) {
        for(int itr=0; itr<address.size(); itr++){
            if(address[itr] == '.'){
                address.replace(itr , 1 , "[.]");
                itr += 2;     
            }
        }
        return address;
    }
};