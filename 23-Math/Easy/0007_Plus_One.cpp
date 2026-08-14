/*
===============================================================================
Problem      : Plus One
Platform     : LeetCode
Pattern      : Math
Difficulty   : Easy

Approach     : Start from the last digit.
               If it is less than 9, add 1 and return.
               If it is 9, make it 0 and carry moves left.
               If all digits are 9, add 1 at the beginning.

Time Complexity  : O(n) — in the worst case, we traverse all digits.
Space Complexity : O(1) extra space — ignoring the output array modification.

Interview Explanation : Process the digits from right to left to handle the carry. If a digit is less than 9, I increment it and return.
                        For 9, I make it 0 and continue left. If all digits are 9, I add 1 at the beginning.

Date         : 14-08-2026
Author       : Om Singh
===============================================================================
*/


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i=digits.size()-1 ; i>=0; i--)
        {
            if(digits[i] < 9) 
            {
                digits[i]++;
                return digits;
            }
            else digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};