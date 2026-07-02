/*
===============================================================================
Problem      : Two Sum
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     :
1. Traverse every pair using nested loops.
2. Check if their sum equals the target.
3. Return the indices immediately after finding the pair.

Time Complexity  : O(n²)
Space Complexity : O(1)

Date         : 02-07-2026
Author       : Om Singh
===============================================================================
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;

    for (int i = 0; i< n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << i << " " << j;
                return;
            }
        }
    }


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
