/*
===============================================================================
Problem      : Number of steps to reduce a Number to zero
Platform     : LeetCode
Pattern      : Math
Difficulty   : Easy

Approach     :

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