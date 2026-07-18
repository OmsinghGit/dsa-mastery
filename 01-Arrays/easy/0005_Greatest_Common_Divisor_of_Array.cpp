/*
===============================================================================
Problem      : Greatest Common Divisor of Array
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Date         : 18-07-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    int findGCD(vector<int>& nums) {

        int minNum = nums[0];
        int maxNum = nums[0];

        for(int num : nums)
        {
            minNum = min(minNum, num);
            maxNum = max(maxNum, num);
        }

        for(int i = minNum; i >= 1; i--)
        {
            if(minNum % i == 0 && maxNum % i == 0)
                return i;
        }

        return 1;
    }
};