/*
===============================================================================
Problem      : Maximum Product of Two elements in an array
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     : Traverse the array only once while keeping track of the largest and the second largest 
               elements. If the current element is greater than the largest, update both variables.
               Otherwise, if it is greater than the second largest, update only the second largest. Finally, return (largest - 1) * (secondLargest - 1).

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