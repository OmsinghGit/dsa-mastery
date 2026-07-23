/*
===============================================================================
Problem      : Richest Health Count
Platform     : LeetCode
Pattern      : Matrix
Difficulty   : Easy

Approach     :  Traverse each row of the matrix and calculate the sum of all elements in that row. Compare the row
                sum with the current maximum wealth and update it if the current sum
                is greater. After traversing all rows, return the maximum wealth.

Time Complexity  : O(mn)
Space Complexity : O(1)

Interview Explanation : Each row represents one customer, and each column represents the money in one bank
                        account. I calculate the total wealth of every customer by adding all the values in that row. 
                        Then I compare it with the maximum wealth found so far. After checking all customers, I return 
                        the maximum wealth.

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