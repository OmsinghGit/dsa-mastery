#include <vector>
/*
===============================================================================
Problem      : Search in Sorted and Rotated Array
Platform     : Codeforces
Pattern      : Arrays
Difficulty   : Easy

Approach     :

Time Complexity  : O(log(n))
Space Complexity :

Date         : 14-07-2026
Author       : Om Singh
===============================================================================
*/

int getPivot(vector<int>& arr, int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0])
            s = mid + 1;
        else
            e = mid;
    }

    return s;
}

int binarySearch(vector<int>& arr, int s, int e, int key)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }

    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, n);

    if (k >= arr[pivot] && k <= arr[n - 1])
        return binarySearch(arr, pivot, n - 1, k);
    else
        return binarySearch(arr, 0, pivot - 1, k);
}
