/*
===============================================================================
Problem      : Plus One
Platform     : LeetCode
Pattern      : Math
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

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