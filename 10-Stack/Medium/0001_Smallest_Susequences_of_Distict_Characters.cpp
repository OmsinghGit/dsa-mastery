/*
===============================================================================
Problem      : Smallest Susequences of Distict Characters
Platform     : LeetCode
Pattern      : Stack
Difficulty   : Medium

Approach     :

Time Complexity  :
Space Complexity :

Date         : 19-07-2026
Author       : Om Singh
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