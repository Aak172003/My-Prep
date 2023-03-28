// Both Representation 

/*
memeset(arr,value,sizeof(arr)); 

//                    And 

fill_n(arr,size,value);
*/


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

// Memset is same as fill_n(arr, size , value)

#include<bits/stdc++.h>
using namespace std;

int main(){

    // memset function to initialize an array with 0 or -1 (not work on other value)s
        int arr[10];
        memset(arr, -1, sizeof(arr));
        for(int i=0; i<10; i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';

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

