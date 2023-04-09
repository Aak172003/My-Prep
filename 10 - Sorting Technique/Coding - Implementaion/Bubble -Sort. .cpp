Examples of stable sorting algorithm :
Bubble sort, Insertion sort, Merge sort, Counting sort, Tim sort

Examples of unstable sorting algorithm :
Selection sort, Heap sort, Shell sort, Quicksort.


/*
Coding Ninja Link - https://www.codingninjas.com/codestudio/problems/bubble-sort_980524?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
*/

/*
Approach 1 - >>
   // first loop iterate form , no of passes 
    for(int round=0;round<n-1;round++)
    {
        // second loop iterate for comparisons , or swapping , ye br br last elemts tk jaega 

        for(int j=0;j<n-1;j++)  <<<<<<<<<<<<<<<<<<<<<<<<<<<<----------------------------------


Approach 2 ->>
    for(int round=0;round<n-1;round++)
    {
        // if sorted hoga to , phle hi pss me pta lg jaega , agr no swapping means , elemets alredy in sorted order 
        // i krne se , hr ek ek loop me sort hoga last element , to hum dubara loop usse ek phle tk hi chalenge ,
        // jaha tk sort hogy hai 

        for(int j=0;j<n-round;j++) <<<<<<<<<<<<<<<<<<<<<<<<<<<<----------------------------------
        {


*/



#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
/* 
Function Calling me jo n means size dia hai wo orginal size dia uski starting from 1 hai 
But if we want to start index at 0 so we go N-1 size array 
*/
{   
    // Write your code here.
       
    // first loop iterate form , no of passes 
    for(int round=0;round<n-1;round++)
    {
        // second loop iterate for comparisons , or swapping , ye br br last elemts tk jaega 
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

// Optimisze Code , If Array is sorted , Tb bhi wo during Compersion O(N^2) TC leta hai 
// But if no swapping Occur means Array is already Sorted , This method is used Below Program 
// Due to this Optimal Approach we Maintain O(N) TC in Case Of Already Sorted Array 

{   
    bool swapped  = false;

    for(int round=0;round<n-1;round++)
    {
        // if sorted hoga to , phle hi pss me pta lg jaega , agr no swapping means , elemets alredy in sorted order 
        // i krne se , hr ek ek loop me sort hoga last element , to hum dubara loop usse ek phle tk hi chalenge ,
        // jaha tk sort hogy hai 
        for(int j=0;j<n-round;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped =  true ;

            }
        }
        // if no swapping occur means , array is alreaady sorted, in ascending order
        if(swapped == false)
        {
            break;
        }
    }
}
