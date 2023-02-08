#include<bits\stdc++.h>
using namespace std;
int main()
{
    //How Initialise
    vector<int>v;
    
    // How can i insert value at vector
    /*
    NOTE - v.push_back(1) or v.emplace_back(1) 
           Both are same , is used to insert value at vector 
           But v.emplace_back(1) is work more Faster than v.push_back(1)
    */
    // .push_back method()
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // .emplace_back() Method
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    
    // Declare Vector in form of pair 
    vector<pair<int,int>>v;
    
    // How Insert value at vector in form of pair 
    
    v.push_back({1,2});  // using push_back Method 
    v.emplace_back(1,2); // using emplace_back Method 
    
    // declare vector at fixed size with some fixed value 
    
    vector<int<b(5,100)   // Output - {100,100,100,100,100}
    vector<int<b(5)  // Output - {0,0,0,0,0}
    
    // Copy b vector on another vector
    vector<int<b(5,100)   // Output - {100,100,100,100,100}
    vector<int> a(b);  // Output - {100,100,100,100,100}
    
    // Iterator
    vector<int>::iterator it = v.begin();   // .begin() Function Return the first index Address to it
    vector<int>::iterator it = v.end();   // .end() Function Return the last index Address to it

    // How print value from iterator
    cout<<*(it)<<" ";  // it at act as address , to access the value from address use pinter 
    
    // Printing The vector via iterator 
    
    for(auto it = v.begin();it !=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    
    //           OR  -  Using FOR EACH LOOP 
     
    for(auto it :v)
    {
        cout<<it<<" ";
    }
    
    
    
    
    
    
    
    
    
    
    
}
    