/*
===============================================================================
Problem      : Richest Health Count
Platform     : LeetCode
Pattern      : Matrix
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 23-07-2026
Author       : Om Singh
===============================================================================
*/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
         int maximumWealth=0;
        for (int i=0 ; i<accounts.size(); i++)
        {
            int sum=0;
            for (int j=0; j<accounts[0].size(); j++)
            {
               sum += accounts[i][j];
    
                if (sum > maximumWealth)
                maximumWealth = sum;

            }
        }
        return maximumWealth;
    }
};