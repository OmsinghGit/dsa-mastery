/*
===============================================================================
Problem      : Add to Array Form of Integer
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

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






