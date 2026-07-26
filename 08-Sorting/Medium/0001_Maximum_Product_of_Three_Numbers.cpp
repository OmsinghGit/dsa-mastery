/*
===============================================================================
Problem      : Maximum Product of Three Numbers
Platform     : LeetCode
Pattern      : Sorting
Difficulty   : Medium

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

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

// Optimal Solution 

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int product1 = nums[nums.size()-1] * nums[nums.size()-2] * nums[nums.size()-3];
        int product2 = nums[0] * nums[1] * nums[nums.size()-1];
        return max(product1, product2);
    }
};