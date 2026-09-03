/*
===============================================================================
Problem      : Find Peak Elements
Platform     : LeetCode
Pattern      : Binary Search
Difficulty   : Medium

Approach     : Use Binary Search on the slope of the array. Compare nums[mid] with nums[mid + 1]:

                > If nums[mid] < nums[mid + 1], the peak is on the right.
                > Otherwise, the peak is on the left or at mid.
                > When left == right, that index is a peak.

Time Complexity  : O(log n)
Space Complexity : O(1)

Interview Explanation : I use Binary Search by comparing the middle element with the next element. If the array is increasing, 
                        I move right; otherwise, I move left while keeping mid as a possible peak. When both pointers meet, that index is the peak.

Date         : 02-09-2026
Author       : Om Singh
===============================================================================
*/


int left = 0;
int right = nums.size() - 1;

while (left < right)
{
    int mid = left + (right - left) / 2;

    if (nums[mid] < nums[mid + 1])
    {
        // increasing → peak RIGHT me
        left = mid + 1;
    }
    else
    {
        // decreasing → peak LEFT ya MID me
        right = mid;
    }
}

return left;