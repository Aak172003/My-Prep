
// Time Complexity: O(n)
// Space Complexity: O(n)

/*

(a+b)   -  No redundant Parenthesis  
(a+c*b)+(c))   - Yes redundant Parenthesis  is present 

*/

#include <bits/stdc++.h>
bool findRedundantBrackets(string &s)
{
    // Iterative Approach
    stack<char> stack;

    bool flag = false;
    for (char it : s)
    {
        if (it == '(' || it == '+' || it == '-' || it == '*' || it == '/')
        {
            stack.push(it);
        }

        else
        {
            if (it == ')')
            {
                char exp = stack.top();
                if (exp == '+' || exp == '-' || exp == '*' || exp == '/')
                {
                    while (stack.top() != '(')
                    {
                        stack.pop();
                    }
                    stack.pop();
                }
                else
                // Here present Redundant Parenthesis 
                    return true;
            }
        }
    }
    // here false me no Redundant Parenthesis 
    return false;
}

