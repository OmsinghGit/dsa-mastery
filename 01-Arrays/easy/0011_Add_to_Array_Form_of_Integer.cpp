/*
===============================================================================
Problem      : Add to Array Form of Integer
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     : Start from the last digit.
               Add k to the current digit.
               Store sum % 10 as the digit and keep sum / 10 as the remaining carry.
               After the array ends, add any remaining k to the front.

Time Complexity  : O(n + k_digits) → effectively O(n), where n is the number of digits and k_digits is the number of digits in k.
Space Complexity : O(1) extra space — excluding the output array.

Interview Explanation : 

Date         : 17-08-2026
Author       : Om Singh
===============================================================================
*/

// class Solution {
// public:
//     vector<int> addToArrayForm(vector<int>& num, int k) {
//        int carry = 0;
//        for (int i=num.size()-1 ; i>=0 ; i--)
//        {
//         int sum=num[i] + (k%10) + carry;
//         num[i] = sum%10;
//         carry = sum/10;
//         k/=10;
//         if (k==0 && carry ==0) break;
//        }
//        while (k>0)
//        {
//         int sum = (k%10) + carry ;
//         num.insert(num.begin(), sum%10);
//         carry = sum/10;
//         k/=10;
//        }
//        if (carry) num.insert(num.begin(), carry);

//        return num;
//     }
// };





// Easier and Optimal too. 

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        for (int i = num.size() - 1; i >= 0 && k > 0; i--)
        {
            int sum = num[i] + k;

            num[i] = sum % 10;
            k = sum / 10;
        }

        while (k > 0)
        {
            num.insert(num.begin(), k % 10);
            k /= 10;
        }

        return num;
    }
};






