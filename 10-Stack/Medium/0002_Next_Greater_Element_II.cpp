/*
===============================================================================
Problem      : Next Greater Element II
Platform     : LeetCode
Pattern      : Stack
Difficulty   : Medium

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 30-09-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1); // for default ans = -1;
        stack<int> s; 
        for (int i=0; i<2*n; i++)
        {
            while (!s.empty() && nums[i % n] > nums[s.top()])
            {
                result[s.top()] = nums[i%n];
                s.pop();
            }
            if (i<n)
            {
                s.push(i);
            }
        }
        return result;
    }
};