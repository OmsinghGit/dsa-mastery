/*
===============================================================================
Problem      : Smallest Divisible Digit Product I
Platform     : LeetCode
Pattern      : Math
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 06-08-2026
Author       : Om Singh
===============================================================================
*/

class Solution
{
    public: 
    int smallestNumber (int n, int t)
    {
        int current = n;
        while(true)
        {
            int product = 1;
            int temp = current;
            while(temp > 0)
            {
                int digit = temp % 10;
                temp /= 10;
                product *= digit;
            }
            if (product % t == 0) return current;
            current ++;      
        }
    }
}