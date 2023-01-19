// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int ans=0,i=0;;
    while(n!=0)
    {
        int rem = n&1;
        ans =(rem *pow(10,i))+ans;
        
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
}