/*
===============================================================================
Problem      : Add Digits
Platform     : LeetCode
Pattern      : Math
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

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