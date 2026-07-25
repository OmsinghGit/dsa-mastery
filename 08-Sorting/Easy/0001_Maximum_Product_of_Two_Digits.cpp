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
Space Complexity : O(1) We only use a few extra variables (largest, secondLargest, and digit),
                   so no extra space is required

Interview Explanation : I traverse all the digits of the given number one by one using % and /. During the traversal, I maintain the 
                        largest and second largest digits. After processing all the digits, I return the product of these two digits. 
                        This approach avoids storing all the digits and solves the problem in a single pass.

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