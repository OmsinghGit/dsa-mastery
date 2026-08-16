/*
===============================================================================
Problem      : Add Binary
Platform     : LeetCode
Pattern      : Strings
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 16-08-2026
Author       : Om Singh
===============================================================================
*/


class Solution {
public:
    string addBinary(string a, string b) {
    
        int i = a.size()-1, j = b.size()-1, carry = 0;
        string ans = "";
        while ( i>=0 || j>=0 || carry)
        {
            int sum=carry;
            if (i >= 0) sum += a[i--] - '0';
if (j >= 0) sum += b[j--] - '0';
            ans += (sum%2) + '0';
            carry = sum/2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};