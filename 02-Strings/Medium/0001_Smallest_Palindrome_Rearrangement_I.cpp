/*
===============================================================================
Problem      : Smallest Palindrome Rearrangement I
Platform     : LeetCode
Pattern      : Strings
Difficulty   : Medium

Approach     :  Create a frequency array of size 26 to count the occurrence of each character.
                Traverse the input string and update the frequency of each character.
                Traverse the frequency array from 'a' to 'z'.
                Add frequency / 2 copies of each character to firstHalf.
                    If a character has an odd frequency, store it as the middle character.
                    Create lastHalf by reversing firstHalf.
                Return the concatenation:
                   firstHalf + middle + lastHalf.

Time Complexity  :  O(n)
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