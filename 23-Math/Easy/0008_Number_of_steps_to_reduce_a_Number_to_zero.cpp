/*
===============================================================================
Problem      : Number of steps to reduce a Number to zero
Platform     : LeetCode
Pattern      : Math
Difficulty   : Easy

Approach     : Use a while loop that runs until num becomes 0.

                    - If num is even, divide it by 2.
                    - If num is odd, subtract 1.
                    - Increment steps after every operation.
                    - When num becomes 0, return steps.

Time Complexity  : 
Space Complexity : 

Interview Explanation : 

Date         : 21-10-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    int numberOfSteps(int num) {

        int steps=0;
        while(num!=0)
        {
            if (num%2==0)
            num/=2;
            else
            num-=1;

            steps++;
        }
        return steps;
    }
};