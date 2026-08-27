/*
===============================================================================
Problem      : Build Array from Permutation
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     : Create an ans array and for each index: ans[i] = nums[nums[i]];

Time Complexity  : O(n) — we traverse the array once.
Space Complexity : O(n) — we create a new ans array.

Interview Explanation : For each index, I use nums[i] as an index to access nums[nums[i]] and store that value in the answer array.

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