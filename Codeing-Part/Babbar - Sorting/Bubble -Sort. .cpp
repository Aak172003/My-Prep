/*
Coding Ninja Link - https://www.codingninjas.com/codestudio/problems/bubble-sort_980524?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
*/


#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
/* 
Function Calling me jo n means size dia hai wo orginal size dia uski starting from 1 hai 
But if we want to start index at 0 so we go N-1 size array 
*/

// {   
//     // Write your code here.

//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

// Optimisze Code , If Array is sorted , Tb bhi wo during Compersion O(N^2) TC leta hai 
// But if no swapping Occur means Array is already Sorted , This method is used Below Program 
// Due to this Optimal Approach we Maintain O(N) TC in Case Of Already Sorted Array 
{   
    bool swapped  = false;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped =  true ;

            }
        }
        if(swapped == false)
        {
            break;
        }
    }
}
