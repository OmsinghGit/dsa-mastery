/*
===============================================================================
Problem      : Running Sum of 1D Array
Platform     : LeetCode
Pattern      : Prefix Sum
Difficulty   : Easy

Approach     : Traverse the array from index 1. Add the previous element (running sum) to the current element and update it.

Time Complexity  : O(n)
Space Complexity : O(1)

Interview Explanation : We use the input array itself to store the running sum. Starting from index 1, each element 
                        becomes the sum of itself and the previous running sum. This avoids using an extra array and gives an efficient in-place solution.

Date         : 21-07-2026
Author       : Om Singh
===============================================================================
*/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        for(int i = 1; i < nums.size(); i++)
        {
            nums[i] += nums[i-1];
        }

        return nums;
    }
};