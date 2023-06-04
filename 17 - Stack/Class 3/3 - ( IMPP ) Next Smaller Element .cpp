/*
GFG Link - https://practice.geeksforgeeks.org/problems/fab3dbbdce746976ba35c7b9b24afde40eae5a04/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution
{
public:
    vector<int> help_classmate(vector<int> arr, int n)
    {
        stack<int> s;
        s.push(-1);

        for (int i = arr.size() - 1; i >= 0; i--)
        {
            // if array ka element bda hota hai st.top ke element ke
            if (arr[i] > s.top())
            {
                // if array ka element bda hota hai st.top ke element ke to hum
                // b me array ka value le lenge or arr[i] me st.top daal denge
                int b = arr[i];
                arr[i] = s.top();
                s.push(b);
            }
            else
            {
                // jb tk st.top ka element bda hota hai arr[i] ke tb tk pop
                // or if this is failed , then arr[i] ki value b me daal denge or
                // arr[i] me st.top daal denge or st me push krdenge a

                while (arr[i] <= s.top() && s.top() != -1)
                {
                    s.pop();
                }
                int a = arr[i];
                arr[i] = s.top();
                s.push(a);
            }
        }
        return arr;
    }
};