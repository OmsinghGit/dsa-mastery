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




class Solution 
{
    public:
    // Helper function to calculate total hours
    // required to eat all banana piles at a given speed.
    long long int calculateHours(vector<int>& piles, int speed)
    {
        long long totalHours=0;
        for (int i=0;i<piles.size(); i++)
        {
            //Ceiling Division
            totalHours += ( 1LL * piles[i] + speed - 1) / speed;
        }
        return totalHours;
    }
    int minEatingSpeed(vector<int>& piles, int h)
    {
        int low=1, high=*max_element(piles.begin(),piles.end()), ans=high;
        while (low<=high)
        {
            int mid=low+(high-low)/2;
            long long totalHours = calculateHours(piles,mid);
            if (totalHours<=h)
            {
                ans=mid,high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};

























