/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/
/*
// @author Kashif Iqbal
// @since 06-Jan-2020

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() == 0){
            return 0;
        }
        
        int storedValueIndex = 0;
        
        for(int itr=0; itr<nums.size()-1; ++itr){
            if(nums[itr] != nums[itr+1]){
                nums[storedValueIndex++] = nums[itr];
            }
        }
        
        nums[storedValueIndex++] = nums[nums.size()-1];
        return storedValueIndex;
    }
};