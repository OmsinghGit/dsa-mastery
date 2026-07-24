/*
===============================================================================
Problem      : Koko Eating Bananas
Platform     : LeetCode
Pattern      : Binary Search
Difficulty   : Medium

Approach     : Through binary search, 

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 23-07-2026
Author       : Om Singh
===============================================================================
*/

// | - > basic approach code using helper and Binary Search

// func(arr,speed)
// {
//     totalHours=0;
//     for (int i=0; i<arr.size(); i++)
//     {
//         totalHours+=ciel((double)arr[i]/hours);
//     }
//     return totalHours;
// }
// BinarySearch (arr,h)
// {
//     low=1,high=maxElem(arr), ans;
//     while(low<=high)
//     {
//         mid=low+(high-low)/2;
//         totalHours=func(arr,mid);
//         if (totalHours<=targetHours){
//             ans=mid;
//             high=mid-1;
//         }
//         else low=mid+1;
//     }
//     return ans;
// }