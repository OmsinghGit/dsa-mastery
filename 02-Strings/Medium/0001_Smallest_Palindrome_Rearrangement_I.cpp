/*
===============================================================================
Problem      : Smallest Palindrome Rearrangement I
Platform     : LeetCode
Pattern      : Strings
Difficulty   : Medium

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 28-07-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26,0);
        for (char ch : s) {
            freq[ch - 'a']++;
        }
        string firstHalf =  "";
        string middle = "";
        for (int i=0; i<26; i++)
        {
            for (int j=0; j<freq[i]/2; j++)
            {
                firstHalf += ('a'+i);
            }
            if (freq[i]%2==1)
                {
                    middle += ('a' + i);
                }
        }
        string lastHalf = firstHalf;
        reverse(lastHalf.begin(), lastHalf.end()); 
        return firstHalf + middle + lastHalf;
    }
};