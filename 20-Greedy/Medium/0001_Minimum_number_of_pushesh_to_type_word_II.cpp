/*
===============================================================================
Problem      : Minimum number of pushesh to type word II
Platform     : LeetCode
Pattern      : Greedy
Difficulty   : Medium

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 31-07-2026
Author       : Om Singh
===============================================================================
*/


class Solution {
public:
    int minimumPushes(string word) {
        long long ans = 0;
        vector<int> freq(26,0);
        for (char ch: word)
        {
            freq[ch-'a']++;
        }
        sort(freq.begin(), freq.end(), greater<int>());
        for (int i=0; i<freq.size(); i++)
        {
            ans += freq[i] * ((i / 8) + 1);
        }
        return ans;
    }
};