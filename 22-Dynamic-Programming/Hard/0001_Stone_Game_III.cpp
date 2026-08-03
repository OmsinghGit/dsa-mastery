/*
===============================================================================
Problem      : Stone Game III
Platform     : LeetCode
Pattern      : Dynamic Programming
Difficulty   : Hard

Approach     :  > Use recursion with memoization (DP) to avoid solving the same state multiple times.
                > At each index, the current player can take 1, 2, or 3 stones.
                > Calculate the score difference for each choice and select the maximum one.
                > Store the result in the DP array.
                > At the end, if the score difference is:
                    Positive -> Alice wins.
                    Negative -> Bob wins.
                    Zero -> Tie.

Time Complexity  :  O(n) - Each index is solved only once. && At every index, we try at most 3 choices.
Space Complexity :  O(n) - DP array stores the result for each index. Recursion stack also takes O(n) space.

Interview Explanation : I use recursion with memoization to compute the maximum score difference from each index. At every step,
                        the current player can take one, two, or three stones. I calculate the score difference for each choice, keep the best one,
                        and store it in the DP array to avoid recomputation. Finally,
                        I use the score difference to determine whether Alice wins, Bob wins, or the game ends in a tie.

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