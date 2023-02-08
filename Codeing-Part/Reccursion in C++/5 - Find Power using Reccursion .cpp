

/*
here a and b , two cases for Finding Power
if b is even :  a^b/2 * a^b/2
if b is odd :  a * a^b/2 * a^b/2

*/

//                          Optimes way To Find Power 

#include<iostream>
using namespace std;

int power(int a,int b) 
{

    if(b==0)return 1;
    if(b==1)return a;
    
    int ans = power(a,b/2);
    
    if(b%2==0){
        return ans = ans*ans;
    }
    else
    {
        return ans = a*ans*ans;
    }

}

int main() 
{
int a = 2,b=4;
int result = power(a,b);
cout<<"Result is : "<<result<<endl;

    return 0;
}