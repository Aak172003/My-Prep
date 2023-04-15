#include<iostream>
using namespace std;

int getSum(int *arr, int size) {

    //base case
    if(size == 0) {
        return 0;
    }
    if(size == 1 )
    {   
        // if ek element to usko hum sum me add krdenge baaki remaing part laakr de dega 
        return arr[0];
    }
    // array ko logically hata dia comare krne se so , size - 1 krdia 
    int remainingPart = getSum(arr+1, size-1);
    // eke ek krke array next index ko point krta jaega , or comare krta jaega , size decrease krta jaega 
    int sum = arr[0] + remainingPart;
    return sum;
}

int main() {

    int arr[5] = {2,4,9,9,9};
    int size = 5;

    int sum = getSum(arr, size);

    cout << "Sum is " << sum << endl;

    return 0;
}