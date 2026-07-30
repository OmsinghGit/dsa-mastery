/*
===============================================================================
Problem      : Minimum number of pushes to type word I
Platform     : LeetCode
Pattern      : Strings
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 30-07-2026
Author       : Om Singh
===============================================================================
*/
class Solution {
public:
    int minimumPushes(string word) {
        int ans =0 ;
        for (int  i=0; i<word.size(); i++)
        {
            ans += (i/8) + 1;
        }
        return ans;
    }
};