/*
===============================================================================
Problem      : Smallest Susequences of Distict Characters
Platform     : LeetCode
Pattern      : Stack
Difficulty   : Medium

Approach     : 
1. Store the last occurrence (last index) of every character.
2. Traverse the string from left to right.
3. If the current character is already present in the stack, skip it.
4. Otherwise, while:
    a. the stack is not empty,
    b. the current character is smaller than the top of the stack,
    c. and the top character appears again later,
 -> pop the top character from the stack.
5. Push the current character into the stack and mark it as visited.
6. Finally, pop all characters from the stack, reverse the string, and return the result.

Time Complexity  : 0(n) - traverse, pup onced and pop onced, totol work proportional to the length of string
Space Complexity : 0(n) - use stack, visited array of size(26), since stack contain at most n charecter

Date         : 19-07-2026
Author       : Om Singh

Interview Explanation : We use a Greedy + Stack approach. We keep the lexicographically smallest possible subsequence by removing larger characters from the stack only if they appear again later, ensuring every character appears exactly once.
===============================================================================
*/
class Solution {
public:
    string smallestSubsequence(string s) {

        vector<int> last(26);

        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        stack<char> st;
        vector<bool> visited(26, false);

        for (int i = 0; i < s.size(); i++) {

            char ch = s[i];

            if (visited[ch - 'a'])
                continue;

            while (!st.empty() &&
                   st.top() > ch &&
                   last[st.top() - 'a'] > i) {

                visited[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(ch);
            visited[ch - 'a'] = true;
        }

        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};