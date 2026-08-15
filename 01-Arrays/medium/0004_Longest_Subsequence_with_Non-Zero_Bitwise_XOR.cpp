/*
===============================================================================
Problem      : Longest Subsequence with Non-Zero Bitwise XOR
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Medium

Approach     :

Time Complexity  :
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