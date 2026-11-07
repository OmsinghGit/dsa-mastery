/*
===============================================================================
Problem      : Subtract of sum from product of number
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     : Extract each digit of the number using modulo and division. 
               Keep track of the sum of digits and product of digits while traversing the number. 
               After all digits are processed, return product - sum.

Time Complexity  :  O(d), where d is the number of digits in n
                    The while loop processes one digit at a time.
                    So it runs roughly log10(n) times for an integer n.

Space Complexity : O(1)
                    It uses only a few variables: sum, product, result, digit, and n.


Interview Explanation : 

Date         : 04-11-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1,result=0;
            while (n!=0)
            {
                int digit=n%10;
                n/=10;
                sum+=digit;
                product *= digit;
            } 
        result = product - sum;
        return result;
        
    }
};


///yghbtfhjjkgj