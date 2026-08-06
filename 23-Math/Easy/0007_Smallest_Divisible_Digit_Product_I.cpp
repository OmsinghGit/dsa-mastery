/*
===============================================================================
Problem      : Smallest Divisible Digit Product I
Platform     : LeetCode
Pattern      : Math
Difficulty   : Easy

Approach     :  > Start checking from n.
                > Find the product of all digits of the current number.
                > If the product is divisible by t, return the current number.
                > Otherwise, increment the current number and repeat the process until a valid number is found.


Time Complexity  :  O(k × d) > k = number of integers checked until the answer is found.
                             > d = number of digits in each number.
                            For every number, we traverse all its digits once.

Space Complexity :  O(1) > Only a few variables (current, temp, product, digit) are used.

Interview Explanation : use a brute-force approach. Starting from n, I calculate the product of its digits. If the product is divisible by t, I return the current number.
                        Otherwise, I move to the next number and repeat the same process until I find the smallest valid number.

Date         : 06-08-2026
Author       : Om Singh
===============================================================================
*/

class Solution
{
    public: 
    int smallestNumber (int n, int t)
    {
        int current = n;
        while(true)
        {
            int product = 1;
            int temp = current;
            while(temp > 0)
            {
                int digit = temp % 10;
                temp /= 10;
                product *= digit;
            }
            if (product % t == 0) return current;
            current ++;      
        }
    }
}