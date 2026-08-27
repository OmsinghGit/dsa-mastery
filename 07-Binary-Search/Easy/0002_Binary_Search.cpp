/*
===============================================================================
Problem      : Binary Search
Platform     : LeetCode
Pattern      : Binary Search
Difficulty   : Easy

Approach     : Use Binary Search. Check the middle element and eliminate half of the array each time.

Time Complexity  : O(log n)
Space Complexity : O(1)

Interview Explanation : Since the array is sorted, I compare the target with the middle element and search only the possible half until the target is found.

Date         : 27-08-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0, end=nums.size()-1;
        while(start<=end)
        {
            int mid = start+(end-start)/2;
            if (nums[mid] == target)
            return mid;

            else if(nums[mid] > target) 
             end=mid-1;

            else start= mid+1;
        }
        return -1;

    }
};