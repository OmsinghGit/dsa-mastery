/*
===============================================================================
Problem      : Predict the Winner
Platform     : LeetCode
Pattern      : Dynamic Programming
Difficulty   : Medium

Approach     : > Calculate the total sum of all elements.
               > Use recursion to find the maximum score Player 1 can obtain.
               > At each step, Player 1 has two choices:
                  1. Pick the left element.
                  2. Pick the right element.
               > After Player 1 picks a number, Player 2 also plays optimally, so Player 1 considers the minimum score from the next possible states.
               > Choose the maximum score between picking the left or right element.
               > Calculate Player 2's score as:
                    player2 = totalScore - player1Score
               >If player1Score >= player2Score, return true; otherwise, return false.

Time Complexity  : O(2ⁿ) - Every state recursively explores multiple possibilities, leading to exponential time.
Space Complexity : O(n) - Due to the recursion call stack.

Company Question - Amazon - important question
Interview Explanation : 

Date         : 01-08-2026
Author       : Om Singh

===============================================================================
*/

class Solution {
public:
    int solve(int i, int j, vector<int>& nums)
    {
        if(i>j) return 0;
        if (i==j) return nums[i];
        int take_i = nums[i] + min(solve(i+2, j, nums), solve(i+1, j-1, nums));
        int take_j = nums[j] + min(solve(i, j-2, nums), solve(i+1, j-1, nums));
        return max(take_i, take_j);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        int total_score = accumulate(begin(nums), end(nums), 0);
        int player1_score = solve(0, n-1, nums);
        int player2_score = total_score - player1_score;
        return player1_score >= player2_score;
    }
};