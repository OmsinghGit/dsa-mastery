/*
===============================================================================
Problem      : Add Digits
Platform     : LeetCode
Pattern      : Math
Difficulty   : Easy

Approach     : Use an outer while loop to repeat until num becomes a single-digit number.
               Initialize sum = 0 at the beginning of each round.
               Use an inner while loop to extract each digit using num % 10.
               Add each digit to sum and remove the last digit using num /= 10.
               After processing all digits, assign num = sum.
               When num < 10, return num.

Time Complexity  : O(log² n) — Each round processes all digits, and the number of digits decreases after each round.
Space Complexity : O(1) — Only a few integer variables are used; no extra data structures are needed.

Interview Explanation : 

Date         : 23-10-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    int addDigits(int num) {
        while (num>=10)
        {
            int sum=0;
            while (num!=0)
            {
                int digit = num%10;
                sum+=digit;
                num=/10;
            }
            num=sum;
        }
        return num;
    }
};