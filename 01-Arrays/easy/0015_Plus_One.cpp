/*
===============================================================================
Problem      : Plus One
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 04-11-2026
Author       : Om Singh
===============================================================================
*/

//Plus One  

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
            for (int i=digits.size()-1; i>=0; i--)
            {
                if (digits[i]!=9)
                {
                    digits[i]++;
                    return digits;
                }
                else
                {
                    digits[i]=0;
                }
            }
            digits.insert(digits.begin(), 1);
            return digits;
        
    }
};