
#include <iostream>
#include<array>
using namespace std;

int main()
{
    // This is Basic Way to creat Array
    int basic[3] = {1,2,3};
    
    /* This is a way to create Array via using C++ STL Function . 
    First to create this STL Array we need to declare Array Header File*/
    array<int,5> a={1,2,3,4,5};
    
    int size = a.size();
    
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    
    // this is used to return random Value by using at inbuilt function
    cout<<"Element at 2nd Index : "<<a.at(4)<<endl;
    
    // .front() is used to return 1st value at first index 
    cout<<"First Value : "<<a.front()<<endl;
     // .back() is used to return 1st value at last index 
    cout<<"First Value : "<<a.back()<<endl;
    
    

    return 0;
}
