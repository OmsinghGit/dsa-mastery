/*
===============================================================================
Problem      : Minimum number of pushes to type word I
Platform     : LeetCode
Pattern      : Greedy / String
Difficulty   : Easy

Approach     :  Since all characters are distinct, assign each new character to the position requiring the minimum number of pushes.
                The first 8 characters take 1 push each, the next 8 take 2 pushes each, and so on.
                Traverse the string and add the cost of each character using:
                    > (i/8)+1;
                Return the total minimum pushes.

Time Complexity  :  O(n) > Traverse the string once and calculate the push count for each character.

Space Complexity :  O(1) > Only a few variables are used. No extra data structure is required.

Interview Explanation :     Since all characters are distinct, I greedily assign them to the positions requiring the fewest pushes.
                            The first 8 characters need 1 push, the next 8 need 2 pushes, and so on. For each character at index i,
                            the required pushes are (i / 8) + 1. Summing these values gives the minimum total pushes.

Date         : 30-07-2026
Author       : Om Singh
===============================================================================
*/
class Solution {
public:
    int minimumPushes(string word) {
        int ans =0 ;
        for (int  i=0; i<word.size(); i++)
        {
            ans += (i/8) + 1;
        }
        return ans;
    }
};