/*
===============================================================================
Problem      : Stone Game III
Platform     : LeetCode
Pattern      : Dynamic Programming
Difficulty   : Hard

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 03-08-2026
Author       : Om Singh
===============================================================================
*/



/*  I solved this question for maintaing leetcode streak, Later I will solve this problem again.
    Note - This is copied solved for maintaing streak*/


class Solution 
{
    public:
    int dp[50001];
    int solve (vector<int>& stoneValue, int i)
    {
        if (i >= stoneValue.size()) return 0;
        if (dp[i] != INT_MIN)
        return dp[i];
        int take = 0;
        int best = INT_MIN;
        for (int k = 0; k<3 && i+k < stoneValue.size(); k++)
        {
            take += stoneValue[i+k];
            best = max(best, take - solve(stoneValue, i+k+1));
        }
        return dp[i] = best;
    }

    string stoneGameIII(vector<int>& stoneValue)
    {
        for (int i=0; i<50001; i++)
            dp[i] = INT_MIN;

            int diff  = solve(stoneValue, 0);

            if(diff > 0) return "Alice";
            else if(diff < 0) return "Bob";
            else return "Tie";
    }

};