/*
===============================================================================
Problem      : Find words containing character
Platform     : LeetCode
Pattern      : Strings
Difficulty   : Easy

Approach     : Traverse every word -> check every char -> if matches then add index to ans
                -> use break for unique indexing -> returna answer.

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 08-08-2026
Author       : Om Singh
===============================================================================
*/
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for (int i=0; i<words.size(); i++)
        {
            for (char ch : words[i])
            {
                if (ch == x) 
                {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};