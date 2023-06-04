/*
LeetCode Link - https://leetcode.com/problems/longest-valid-parentheses/description/
*/

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        stack<int> st;

        int maxlen = 0;
                // Initially Put -1 , helps to find where from error occur 
        st.push(-1);

        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == '(')
            {
                st.push(i);
            }
            /*
            if occur closing ')' Bracket 
            then pop jo bhi st me top pr hai , Occur two condition
            1 - if st is empty then push current character index 
            2 - if st is not empty , then find len and find maxlen
            */

            else
            {
                st.pop();
                if (st.empty())
                {
                    st.push(i);
                }
                else
                {
                    int len = i - st.top();
                    maxlen = max(len, maxlen);
                }
            }
        }
        return maxlen;
    }
};