#include<iostream>
using namespace std;


// ******************************************************************************

void printReverseCounting(int n){
    // base condition
    if(n==0)
        return;
    
    // processing
    cout << n << ' ';

    // recurrence relation
    printReverseCounting(n-1);
}

// ******************************************************************************

void printCounting(int n){
    // base condition
    if(n==0)
        return;
    
    // recurrence relation
    printCounting(n-1);

    // processing
    cout << n << ' ';
}

// ******************************************************************************


int main(){

    // factorial of given number
        int n;
        cin>>n;
        int ans = fact(n);
        cout << ans << '\n';


    // print reverse counting
        int n;
        cin>>n;
        printReverseCounting(n);
    

    // print counting from 1 to n
        int n;
        cin>>n;
        printCounting(n);


    return 0;
}