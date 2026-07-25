/*
===============================================================================
Problem      : Maximum Product of Two Digits
Platform     : LeetCode
Pattern      : Sorting
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 25-07-2026
Author       : Om Singh
===============================================================================
*/
class Solution
{
    public:
    int maxProduct(int n)
    {
        int largest = -1, secondLargest = -1;
        while (n>0)
        {
            int digit = n%10;
            n/=10;
            if (digit > largest)
            {
                secondLargest=largest;
                largest=digit;
            }
            else if (digit > secondLargest && digit <= largest )
            secondLargest = digit;
        }
        return largest * secondLargest;
    }
};