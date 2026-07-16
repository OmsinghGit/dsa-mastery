/*
===============================================================================
Problem      : Peak Index In Mountain Array
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Medium

Approach     :

Time Complexity  : O(log(n))
Space Complexity :

Date         : 16-07-2026
Author       : Om Singh
===============================================================================
*/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int s=0, e= arr.size()-1;
       while (s<e)
       {
        int mid=s+(e-s)/2;
        if (arr[mid] < arr[mid+1]) s=mid+1;
        else e=mid;
       }
       return s;
    }
};