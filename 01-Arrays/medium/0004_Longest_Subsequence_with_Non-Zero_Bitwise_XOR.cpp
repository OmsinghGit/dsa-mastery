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
Space Complexity : O(1) — only xorValue and allZero extra variables.

Interview Explanation : I calculate the XOR of all elements. If it is non-zero, the whole array is valid. If it is
                        zero but there is a non-zero element, I remove one element, giving n-1. If all
                        elements are zero, the answer is 0.

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