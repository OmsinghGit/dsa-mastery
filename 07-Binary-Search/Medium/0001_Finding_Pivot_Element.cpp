/*
===============================================================================
Problem      : Finding Pivot Element
Platform     : Coding Ninjas
Pattern      : Binary Search
Difficulty   : Medium

Approach     :

Time Complexity  :
Space Complexity :

Date         : 18-07-2026
Author       : Om Singh
===============================================================================
*/

#include<iostream>
using namespace std;
int getPivot(int arr[], int n)
{
    int s=0, e=n-1, mid = s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid] >= arr[0])
        s=mid+1;
        else e=mid;

         mid = s+(e-s)/2;
    }
    return s;
}

int main() 
{
    int arr[5] = {3,8,10,17,1};
    cout << "Pivot is: " << getPivot(arr, 5) << endl;
}
