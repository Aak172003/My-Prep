#include <iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s,int target)
{
    // Base Case 
    if(s.empty())
    {
        s.push(target);
        return;
    }
    
    int temp = s.top();
    s.pop();
    
    // Reccursion
    solve(s,target); 

    // Backtrack
    s.push(temp);
}

void insertAtBottom(stack<int> &s)
{
    if(!s.empty())
    {
        // this is used to fetch first element 
        int target = s.top();
        s.pop();
        solve(s,target);
    }
}

int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    insertAtBottom(s);
    
    while(!s.empty())
    {
        cout<<"The data is "<<s.top()<<endl;
        s.pop();
    }

    return 0;
}
