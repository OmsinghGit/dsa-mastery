/*
===============================================================================
Problem      : Finding Piviot Index
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     :

Time Complexity  : O(n²)
Space Complexity : O(1)

Interview Explanation :  For every index, I calculate the sum of elements on its left and right using two loops. If both sums are equal, I return that index as the pivot index. 

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
