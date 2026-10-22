/*
===============================================================================
Problem      : Subtract the product and sum of the digit of an integer
Platform     : LeetCode
Pattern      : Math
Difficulty   : Easy

Approach     :

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