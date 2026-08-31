/*
===============================================================================
Problem      : First and Last position in a sorted array
Platform     : LeetCode
Pattern      : Binary Search
Difficulty   : Medium

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 31-08-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int firstIndex = -1, lastIndex = -1;
        int first = 0, last = nums.size() - 1;

        // Find first occurrence
        while (first <= last)
        {
            int mid = first + (last - first) / 2;

            if (nums[mid] == target)
            {
                firstIndex = mid;
                last = mid - 1;
            }
            else if (nums[mid] < target)
            {
                first = mid + 1;
            }
            else
            {
                last = mid - 1;
            }
        }

        // Reset
        first = 0;
        last = nums.size() - 1;

        // Find last occurrence
        while (first <= last)
        {
            int mid = first + (last - first) / 2;

            if (nums[mid] == target)
            {
                lastIndex = mid;
                first = mid + 1;
            }
            else if (nums[mid] < target)
            {
                first = mid + 1;
            }
            else
            {
                last = mid - 1;
            }
        }

        return {firstIndex, lastIndex};
    }
};