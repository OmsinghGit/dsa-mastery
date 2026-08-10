/*
===============================================================================
Problem      : Search Insert Position
Platform     : LeetCode
Pattern      : Binary Search
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 10-08-2026
Author       : Om Singh
===============================================================================
*/


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }

        return s;
    }
};