/*
===============================================================================
Problem      : Maximum Product of Two elements in an array
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 27-07-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = -1, secondLargest = -1;
        for (int i=0; i<nums.size(); i++){
            int current = nums[i];
             if (current > largest)
             {
                secondLargest = largest;
                largest = current;
             }
             else if(current > secondLargest)
             secondLargest = current;
        }
        return (largest - 1) * (secondLargest - 1);
    }
};