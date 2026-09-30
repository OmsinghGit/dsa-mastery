/*
===============================================================================
Problem      : Final Price with special discount
Platform     : LeetCode
Pattern      : Stack
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 30-09-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        for ( int i = 0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (prices[j] <= prices[i]){
                prices[i] -= prices[j];
                break;
                }
            }
        }
        return prices;
    }
};