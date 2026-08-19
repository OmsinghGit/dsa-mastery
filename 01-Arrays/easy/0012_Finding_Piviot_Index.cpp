/*
===============================================================================
Problem      : Finding Piviot Index
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 19-08-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       for (int i=0; i<nums.size(); i++)
       {
        int left_sum=0, right_sum=0;
        for (int j=0; j<i; j++)
        left_sum += nums[j];

        for (int j=i+1; j<nums.size(); j++)
        right_sum += nums[j];

        if (left_sum == right_sum)
        return i;
       }
       return -1;
    }
};
