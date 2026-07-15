/*
===============================================================================
Problem      : Valid Perfect Square
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     :

Time Complexity  : 0(logn)
Space Complexity :

Date         : 15-07-2026
Author       : Om Singh
===============================================================================
*/
#include <iostream>
using namespace std;

bool isPerfectSquare(int num)
{
    int s = 0;
    int e = num;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        long long square = 1LL * mid * mid;

        if (square == num)
        {
            return true;
        }
        else if (square < num)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return false;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectSquare(num))
    {
        cout << num << " is a Perfect Square." << endl;
    }
    else
    {
        cout << num << " is NOT a Perfect Square." << endl;
    }

    return 0;
}