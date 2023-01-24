
// This will print 0 0 0 0 0 0 0 upto 99 index 

#include <iostream>
using namespace std;

int main()
{
    int num[100] = {0};
    
    cout<<"Array would see like it "<<endl;
    for(int i=0;i<100;i++)
    {
        cout<<num[i]<<endl;
        
    }

    return 0;
}


/*
 but this is not same work for different value 
 int num[100] = {24};    give an error , 

 so to remove this error use fill_n(num,100,24); to fill 24 at all array index */

#include <iostream>
using namespace std;

int main()
{
    int num[100];
    fill_n(num,100,24);
    
    cout<<"Array would see like it "<<endl;
    for(int i=0;i<100;i++)
    {
        cout<<num[i]<<endl;
        
    }

    return 0;
}
