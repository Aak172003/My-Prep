class MinStack
{
public:
    // means create vector whose value is stored in pair form
    vector<pair<int, int>> st;
    MinStack()
    {
    }

    void push(int val)
    {
        if (st.empty())
        {
            pair<int, int> p = make_pair(val, val);
            // p.first = val;
            // p.second = val;
            st.push_back(p);
        }
        else
        {
            pair<int, int> p;
            p.first = val;
            p.second = min(val, st[st.size() - 1].second);
            st.push_back(p);
        }
    }

    void pop()
    {
        st.pop_back();
    }

    int top()
    {
        // Last element ko access krna st[st.size()-1]
        // or we can use st.back() function this also used for point last index
        return st[st.size() - 1].first;
    }

    int getMin()
    {
        return st[st.size() - 1].second;
    }
};
