/*
===============================================================================
Problem      : Koko Eating Bananas
Platform     : LeetCode
Pattern      : Binary Search
Difficulty   : Medium

Approach     : Use Binary Search on Answer to find the minimum eating speed. For each possible speed, calculate 
               the total hours required to eat all the banana piles. If Koko can finish within h hours, 
               store the answer and try a smaller speed. Otherwise, search for a larger speed.

Time Complexity  :  O(n × log(maxPile))
Space Complexity :  O(1)

Interview Explanation : The minimum eating speed follows a monotonic pattern. If Koko can finish
                        all bananas at a certain speed, then she can also finish at any higher speed. This allows 
                        us to apply Binary Search on Answer. We use a helper function to calculate the total hours 
                        needed for a given speed and then adjust the search space to find the minimum valid speed.

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

























