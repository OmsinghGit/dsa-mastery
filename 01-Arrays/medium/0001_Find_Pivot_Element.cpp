/*
===============================================================================
Problem      : Find Pivot Element
Platform     : Practice
Pattern      : Arrays
Difficulty   : Medium

Approach     :

Time Complexity  : 0(logn)
Space Complexity :

Date         : 13-07-2026
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
