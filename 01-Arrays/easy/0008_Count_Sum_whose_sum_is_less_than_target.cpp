/*
===============================================================================
Problem      : Count Sum whose sum is less than target
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     : Use two loops to check every pair (i, j) where i < j.
               If nums[i] + nums[j] < target, increment the count.
               Return the count.

Time Complexity  : O(n²) — checking all pairs.
Space Complexity : O(1) — only a counter is used.

Interview Explanation : I check every possible pair using two loops. If the pair's sum is less than the target, I increment the count.

Date         : 09-08-2026
Author       : Om Singh
===============================================================================
*/


class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
         int count = 0;
         
        for (int i = 0; i< nums.size(); i++)
        {
            for (int j=i+1; j<nums.size(); j++)
            {
                if ( nums[i] + nums[j] < target ) 
                count++;
            }
        }
    return count;
    }
};
