/*
Merge sort is a sorting algorithm that works by dividing an array into smaller subarrays,
sorting each subarray, and then merging the sorted subarrays back together to form the final sorted array.

Is Merge sort In Place?
No, In merge sort the merging step requires extra space to store the elements.

Is Merge sort Stable?
Yes, merge sort is stable. 

One of the main advantages of merge sort is that it has a time complexity of O(n log n),
which means it can sort large arrays relatively quickly. It is also a stable sort, which means that the order of elements with equal values is preserved during the sort


Merge is faster than other Sorting Algorithm 
Merge sort is a popular choice for sorting large datasets because it is relatively efficient and easy to implement
Tc - for Merge Sort - 
SC - for Merge sort - O(N)


Like : Bubble , Insertion ,Selection
*/


#include<iostream>
using namespace std;

void merge(int *arr, int start, int end) {

    int mid = (start+end)/2;
    
    // create two new size of array
    int len1 = mid - start + 1;
    int len2 = end - mid;
    
    // create dynammic array which take dynammically memory
    int *first = new int[len1];
    int *second = new int[len2];
    
    //copy values left wali into left array
    //copy values
    
    int mainArrayIndex = start;     // indicates starting kaha se krna hai , phle case ke array me starting 0 se hoga
    
    for(int i=0; i<len1; i++) 
    {
        first[i] = arr[mainArrayIndex++];
    }
    
    //copy values Right wali into Right array
    mainArrayIndex = mid+1;   // indicates starting kaha se krna hai , second case ke array me starting mid se hoga
    
    for(int i=0; i<len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;
    
    // starting for merging
    
    while(index1 < len1 && index2 < len2) 
    {
        if(first[index1] < second[index2]) 
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) 
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) 
    {
        arr[mainArrayIndex++] = second[index2++];
    }
    
    
    // Jb hum Dynammocally memory allocate krte hai so usko delete krna important hota hai
    delete []first;
    delete []second;

}

void mergeSort(int *arr, int start, int end) {

    //base case
    if(start >= end) {
        return;
    }
    
    int mid = (start+end)/2;

    //left part sort karna h 
    mergeSort(arr, start, mid);
    
    //right part sort karna h 
    mergeSort(arr, mid+1, end);

    //merge krne ke lie
    merge(arr, start, end);

}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;
     // Mergesirt krne ke lie hum array , first index , or last index denge
    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}