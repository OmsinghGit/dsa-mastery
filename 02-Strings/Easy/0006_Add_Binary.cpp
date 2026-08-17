/*
===============================================================================
Problem      : Add Binary
Platform     : LeetCode
Pattern      : Strings
Difficulty   : Easy

Approach     : Start from right to left.
               Add both binary digits with carry.
               Store sum % 2 as the result digit.
               Update carry using sum / 2.
               Reverse the answer at the end.

Time Complexity  : O(n)
Space Complexity : O(n) — result string.

Interview Explanation : Add both binary strings from right to left while handling carry, just like normal binary addition. Build the result and reverse it at the end.

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



Add to Array-Form of Integer