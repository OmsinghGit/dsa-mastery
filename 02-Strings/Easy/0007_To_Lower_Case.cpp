/*
===============================================================================
Problem      : To Lower Case
Platform     : LeetCode
Pattern      : Strings
Difficulty   : Easy

Approach     : Traverse the string character by character.
                    For every character:
                    - Check whether it is an uppercase letter ('A' to 'Z').
                    - If it is uppercase, add 32 to its ASCII value to convert it into lowercase.
                    - Add the converted character to the result string.
                    - If it is already lowercase, add it as it is.
                Finally, return the result string.

Time Complexity  : O(n) - We traverse the string once, where n is the length of the string.
Space Complexity : O(n) - We create a result string to store the converted string.

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
