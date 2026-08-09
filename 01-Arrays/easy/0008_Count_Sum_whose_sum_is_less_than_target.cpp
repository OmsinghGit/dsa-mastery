/*
===============================================================================
Problem      : Count Sum whose sum is less than target
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

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
