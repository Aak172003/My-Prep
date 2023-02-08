#include<bits\stdc++.h>
using namespace std;
int main()
{
    // Used to store to value 

    pair<int,int>p = {1,3}
    // How can i access 
    cout<<p.first   // Output 1 
    cout<<p.second; // Output 3
    
    // Used Nested Pair Also 
    pair<int,pair<int,int>>p = {1,{2,3}}
    
    // How can i access 
    cout<<p.first   // Output 1 
    cout<<p.second; // Output {2,3}
    cout<<p.second.first; // Output 2
    cout<<p.second.second; // Output 3
    
    
    // Used Nested Pair Also 
    pair<int,pair<int,pair<int,int>>>p = {1,{2,{3,4}}}
    // How can i access 
    cout<<p.first   // Output 1 
    cout<<p.second; // Output {2,{3,4}}
    cout<<p.second.first; // Output 2
    cout<<p.second.second; // Output {3,4}
    cout<<p.second.second.first; // Output 3
    cout<<p.second.second.second; // Output 4
    
    
    // We can Also Declre Pair Array 
    pair<int,int>arr = {{1,2},{3,4},{5,6}}
    //                     0     1     2     // These All are index
      
    // How can i access
    cout<<arr[1].second;  //Output 4
    cout<<arr[1].first;  //Output 3
    cout<<arr[0].second;  //Output 2
    cout<<arr[0].first;  //Output 1
    

}
    