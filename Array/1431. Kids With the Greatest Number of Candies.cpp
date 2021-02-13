/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/
/*

// @author Kashif Iqbal
// @since 09-Jan-2020

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin() , candies.end());
        vector<bool> vect;
        
        for(int itr=0; itr<candies.size(); ++itr){
            if(candies[itr] + extraCandies >= max){
                vect.push_back(true);
            }
            else{
                vect.push_back(false);
            }
        }
        return vect;
    }
};