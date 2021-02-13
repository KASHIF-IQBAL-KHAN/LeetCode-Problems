/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/
/*
// @author Kashif Iqbal
// @since 06-Jan-2020


class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool modified = false;
        int min = INT_MIN;

        for(int itr=0; itr<nums.size()-1; ++itr){
            
            if(nums[itr] > nums[itr+1]){
            
                if(modified == true){
                    return false;
                }
                
                if(nums[itr+1] < min){
                    nums[itr+1] = nums[itr];    
                }

                modified = true;
            }
 
            else{
                min = nums[itr];
            }
        }
        
        return true;
    }
};



