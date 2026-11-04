/*
===============================================================================
Problem      : Subtract of sum from product of number
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

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