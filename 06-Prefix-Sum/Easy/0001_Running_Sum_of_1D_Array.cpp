/*
===============================================================================
Problem      : Running Sum of 1D Array
Platform     : LeetCode
Pattern      : Prefix Sum
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

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