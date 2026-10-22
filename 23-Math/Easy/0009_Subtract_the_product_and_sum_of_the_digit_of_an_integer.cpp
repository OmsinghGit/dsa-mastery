/*
===============================================================================
Problem      : Subtract the product and sum of the digit of an integer
Platform     : LeetCode
Pattern      : Math
Difficulty   : Easy

Approach     : > Intitalizing the product to 1 and sum to 0;
               1. using while loop till n!=0;
               2. seperating the digits from the given number;
               3. using product - finding the products of digits;
               4. using sum - finding the sum of digits;
               5. updating the value of n;
               6. store the result = product - sum;
               7. return result.

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 22-10-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
      int result, product=1,sum=0;
      while (n!=0)
      {
        int digit = n % 10;
        product *= digit;
        sum += digit;
        n/=10;
      }
      result = product - sum;
      return result;
    }
};