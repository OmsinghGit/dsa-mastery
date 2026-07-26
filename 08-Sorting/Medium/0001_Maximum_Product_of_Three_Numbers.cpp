/*
===============================================================================
Problem      : Maximum Product of Three Numbers
Platform     : LeetCode
Pattern      : Sorting
Difficulty   : Medium

Approach     : Sort the array in ascending order. Then calculate two possible products:
                    The product of the three largest numbers.
                    The product of the two smallest numbers and the largest number.
                Return the maximum of these two products.

Time Complexity  :  O(n log n) - Sorting the array takes O(n log n) time. Calculating the two products takes O(1) time.
Space Complexity :  O(1) - No extra data structure is used. The calculations are performed using a few variables only.

Interview Explanation : Sort the array, calculate the only two possible maximum products, and return the larger one.

Date         : 26-07-2026
Author       : Om Singh
===============================================================================
*/


// This solution is good but not optimal so TLE shows.

// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         int ans = INT_MIN;
//         for (int i=0; i<nums.size(); i++)
//         {
//             for (int j=i+1; j<nums.size(); j++)
//             {
//                 for (int k=j+1; k<nums.size(); k++)
//                 {
//                     int product = nums[i] * nums[j] * nums[k];
//                     ans = max(ans, product);
//                 }
//             }
//         }
//         return ans;
//     }
// };  

// Optimal Solution is here

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int product1 = nums[nums.size()-1] * nums[nums.size()-2] * nums[nums.size()-3];
        int product2 = nums[0] * nums[1] * nums[nums.size()-1];
        return max(product1, product2);
    }
};