/*
===============================================================================
Problem      : Peak Index in Mountain array
Platform     : LeetCode
Pattern      : Binary Search
Difficulty   : Medium

Approach     :

Time Complexity  : O (log (n))
Space Complexity :

Interview Explanation : 

Date         : 01-09-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int s=0, e=arr.size()-1;
       while (s<e)
       {
        int mid = s+(e-s)/2;
        if (arr[mid] < arr[mid+1]) s=mid+1;
        else e=mid;
       }
       return s;
    }
};

