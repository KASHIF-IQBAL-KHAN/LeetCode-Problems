/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
 
Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
*/

// Kashif Iqbal
// 20-June-2021

class Solution {
    public boolean containsDuplicate(int[] nums) {
        Arrays.sort(nums);

        for (int itr = 0; itr < nums.length - 1; ++itr) {
            if (nums[itr] == nums[itr + 1]) {
                return true;
            }
        }
        return false;
    }
}
