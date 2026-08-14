/*
===============================================================================
Problem      : First and Last occurence in an Array
Platform     : Practice
Pattern      : Arrays
Difficulty   : Easy

Approach     :  

Time Complexity  : O(n)
Space Complexity : O(1)

Interview Explanation : 

Date         : 14-08-2026
Author       : Om Singh
===============================================================================
*/

#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,3,4,2,5,2,6};
    int first=-1, last=-1,target_elem=4;
    for(int i=0; i<7; i++)
    {
        if (arr[i]==target_elem)
        {
            if (first==-1) 
            first=i;

            last = i;
        }
    }
    cout<<first<<" "<<endl;
    cout<<last<<" "<<endl;
}