/*
===============================================================================
Problem      : Sqrt(x)
Platform     : LeetCode
Pattern      : Arrays
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Date         : 14-07-2026
Author       : Om Singh
===============================================================================
*/
#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        int ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            long long square = 1LL * mid * mid;

            if (square == x)
                return mid;
            else if (square < x) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;
    cout << obj.mySqrt(8) << endl;

    return 0;
}