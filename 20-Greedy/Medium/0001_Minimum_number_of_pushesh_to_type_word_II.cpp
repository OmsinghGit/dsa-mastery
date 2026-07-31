/*
===============================================================================
Problem      : Minimum number of pushesh to type word II
Platform     : LeetCode
Pattern      : Greedy
Difficulty   : Medium

Approach     : Count the frequency of each character using a frequency array of size 26.
               Sort the frequency array in descending order so that the most frequent characters come first.
               Assign the lowest push cost to the highest frequencies:
                    > First 8 characters → 1 push
                    > Next 8 characters → 2 pushes
                    > Next 8 characters → 3 pushes
                    > Remaining characters → 4 pushes
                For each frequency, multiply it by its assigned push cost and add it to the final answer.
                Return the total minimum pushes.

Time Complexity  : Counting frequencies: O(n), Sorting 26 frequencies: O(26 log 26) = O(1) (constant because the alphabet size is fixed)
                    Traversing the frequency array: O(26) = O(1)
                    Overall Time Complexity: O(n)

Space Complexity : Frequency array of size 26. Overall Space Complexity: O(1)

Interview Explanation : I count the frequency of each character and sort the frequencies in descending order.
                        

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