/*
===============================================================================
Problem      : Build Array from Permutation
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 27-08-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        for (int i=0; i<nums.size(); i++)
        {
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};