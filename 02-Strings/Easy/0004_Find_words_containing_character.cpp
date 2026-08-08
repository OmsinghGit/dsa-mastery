/*
===============================================================================
Problem      : Find words containing character
Platform     : LeetCode
Pattern      : Strings
Difficulty   : Easy

Approach     : Traverse every word -> check every char -> if matches then add index to ans
                -> use break for unique indexing -> returna answer.

Time Complexity  : O(N x L) N = no.of words, L = avg lenght of each word
Space Complexity : O(K) - K = number of words containing x (for the answer array).
                    Extra working space is O(1).

Interview Explanation : I traverse each word and check its characters for x. If x is found, I store that word's
                        index and move to the next word. I use break to avoid adding the same index
                        multiple times.

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