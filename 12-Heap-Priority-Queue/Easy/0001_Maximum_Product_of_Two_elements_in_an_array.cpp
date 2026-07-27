/*
===============================================================================
Problem      : Maximum Product of Two elements in an array
Platform     : LeetCode
Pattern      : Heap / Priority Queue
Difficulty   : Easy

Approach     : Use a Max Heap (Priority Queue) to store all the elements. The two largest elements will be at the top of the heap.
               Remove the largest element, get the second largest element, and calculate the required product.

Time Complexity  :  O(n log n)
                        Inserting all n elements into the heap takes O(n log n).
                        Retrieving the top two elements takes O(log n).

Space Complexity :  O(n)
                    The priority queue stores all the elements of the array.

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