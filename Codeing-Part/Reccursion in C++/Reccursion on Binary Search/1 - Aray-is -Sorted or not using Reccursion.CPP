#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {

    //base case
    if(size == 0 || size == 1 ){
        return true;
    }
    // First and second element ko check krenge agr wo sort hai to baaki aage wale pr checking krenge ,
    // via Reccursion call
    // if kahi bhi phli value greator tha aage wali then it is not sorted Array 
    if(arr[0] > arr[1])
        return false;
    else 
    {
        // array ko logically hata dia comare krne se so , size - 1 krdia 
        bool remainingPart = isSorted(arr + 1, size - 1 );
        // eke ek krke array next index ko point krta jaega , or comare krta jaega , size decrease krta jaega 
        return remainingPart;
    }
}
int main() {

    int arr[5] = {2,4,9,9,9};
    int size = 5;

    bool ans = isSorted(arr, size);
    if(ans){
        cout << "Array is sorted " << endl;
    }
    else {
        cout << "Array is not sorted " << endl;
    }

    return 0;
}