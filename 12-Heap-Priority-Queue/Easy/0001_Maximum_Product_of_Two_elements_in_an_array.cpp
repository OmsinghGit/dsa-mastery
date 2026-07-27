/*
===============================================================================
Problem      : Maximum Product of Two elements in an array
Platform     : LeetCode
Pattern      : Heap / Priority Queue
Difficulty   : Easy

Approach     :

Time Complexity  :
Space Complexity :

Interview Explanation : 

Date         : 27-07-2026
Author       : Om Singh
===============================================================================
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {

        priority_queue<int> pq;

        for(int num : nums)
        {
            pq.push(num);
        }

        int first = pq.top();
        pq.pop();

        int second = pq.top();

        return (first - 1) * (second - 1);
    }
};