/*
===============================================================================
Problem      : Longest Subsequence with Non-Zero Bitwise XOR
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Medium

Approach     : 1. Calculate XOR of whole array
               2. if XOR != 0 return n
               3. agr XOR = 0
                    > if all elements are 0 - return 0
                    > else return n-1

Time Complexity  : O(n) — one loop through the array
Space Complexity :

Interview Explanation : 

Date         : 15-08-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xorValue=0;
        bool allZero = true;
        for (int i=0;i<nums.size();i++)
        {
            xorValue ^= nums[i];
            if (nums[i] != 0) allZero = false;
        }
        if (xorValue != 0) return nums.size();
        if (allZero) return 0;

        return nums.size()-1;
    }
};