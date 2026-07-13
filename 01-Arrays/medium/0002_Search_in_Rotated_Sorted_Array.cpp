/*
===============================================================================
Problem      : Search in Rotated Sorted Array
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Medium

Approach     :

Time Complexity  :
Space Complexity :

Date         : 13-07-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:

    int findPivot(vector<int>& nums) {

        int s = 0;
        int e = nums.size() - 1;

        if (nums[s] <= nums[e])
            return e;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            if (mid < nums.size() - 1 && nums[mid] > nums[mid + 1])
                return mid;

            if (nums[mid] >= nums[0])
                s = mid + 1;
            else
                e = mid - 1;
        }

        return -1;
    }

    int binarySearch(vector<int>& nums, int s, int e, int target) {

        while (s <= e) {

            int mid = s + (e - s) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {

        int pivot = findPivot(nums);

        if (pivot == -1)
            return binarySearch(nums, 0, nums.size() - 1, target);

        if (target >= nums[0] && target <= nums[pivot])
            return binarySearch(nums, 0, pivot, target);

        return binarySearch(nums, pivot + 1, nums.size() - 1, target);
    }
};