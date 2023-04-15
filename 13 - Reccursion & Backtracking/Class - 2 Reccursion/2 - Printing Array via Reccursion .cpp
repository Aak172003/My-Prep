#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

//                                                        Method - 1
void printArray(int arr[], int n, int i)
{
    if (i >= n)
        return;

    cout << arr[i] << ' ';

    printArray(arr, n, i + 1);
    // will also work as arr in this function is a copied pointer pointing to element of array
}

//                                                         Method - 2
void printArray2(int arr[], int n)
{
    if (n == 0)
        return;

    cout << arr[0] << ' ';
    // arr+1 krne se hum array ke next next address pr reach krte jaenge
    printArray2(arr + 1, n - 1);
}

int main()
{
    // print array
    int arr[] = {1, 2, 5, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    int i = 0;
    printArray(arr, n, i);
    cout << '\n';
    printArray2(arr, n);

    return 0;
}