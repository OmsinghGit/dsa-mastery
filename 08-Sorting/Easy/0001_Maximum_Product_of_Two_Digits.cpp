/*
===============================================================================
Problem      : Maximum Product of Two Digits
Platform     : LeetCode
Pattern      : Sorting
Difficulty   : Easy

Approach     : Extract each digit of the number using the modulo (%) and division (/) 
               operators. Keep track of the largest and second largest digits while traversing
               all the digits. Finally, return the product of these two digits.

Time Complexity  :  O(d),  where d is number of digits in the given number
                    we traverse each digits once
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