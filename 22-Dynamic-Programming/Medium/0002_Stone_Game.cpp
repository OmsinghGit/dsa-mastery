/*
===============================================================================
Problem      : Stone Game
Platform     : LeetCode
Pattern      : Dynamic Programming
Difficulty   : Medium

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 02-08-2026
Author       : Om Singh
===============================================================================
*/

/*  I solved this question for maintaing leetcode streak, Later I will solve this problem again.
    Note - This is copied solved for maintaing streak*/



class Solution {
public:

    int dp[501][501];
    int solve (vector<int>& piles, int i, int j)
    {
        if (i>j) return 0;
        if (dp[i][j] != -1) return dp[i][j];

        int takeLeft = piles[i] - solve(piles, i+1, j);
        int takeRight = piles[j] - solve(piles, i, j-1);
        return dp[i][j] = max(takeLeft, takeRight);
    }
    bool stoneGame(vector<int>& piles) {
        memset(dp, -1, sizeof(dp));
        return solve(piles, 0, piles.size()-1) > 0;
    }
};
