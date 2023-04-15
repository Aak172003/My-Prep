#include <iostream>
using namespace std;

void printReverseArray(int arr[], int n, int i)
{
    if (i == n)
        return;

    printReverseArray(arr, n, i + 1);

    cout << arr[i] << ' ';
}

int main()
{

    // print reverse array
    int arr[] = {1, 2, 5, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    int i = 0;
    printReverseArray(arr, n, i);

    return 0;
}