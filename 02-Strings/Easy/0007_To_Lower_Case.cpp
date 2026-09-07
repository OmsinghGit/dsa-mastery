/*
===============================================================================
Problem      : To Lower Case
Platform     : LeetCode
Pattern      : Strings
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 07-09-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    string toLowerCase(string s) {
        string result ="";
        for (int i=0; i<s.length(); i++)
        {
            char ch=s[i];
            if (ch>='A' && ch<='Z')
            ch += 32;
            result += ch;
        }
        return result;
    }
};
