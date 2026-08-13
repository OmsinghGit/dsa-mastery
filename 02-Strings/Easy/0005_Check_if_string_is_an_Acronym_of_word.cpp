/*
===============================================================================
Problem      : Check if string is an Acronym of word
Platform     : LeetCode
Pattern      : Strings
Difficulty   : Easy

Approach     : - Using two pointer method/approach
                1. Traverse each "words" {each string} for word.
                2. choose first character of each word word[i][0],
                3. compare that string s with corresponding index,
                4. if mismatch - return false, if matched return true.

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 12-08-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int i=0;
        if (words.size() != s.size())
        return false;
        while(i<words.size())
        {
            if(words[i][0] != s[i]) 
            return false;
            i++;
        }
        return true;
    }
};