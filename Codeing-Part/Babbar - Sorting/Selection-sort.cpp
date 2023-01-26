/*
Coding Ninja link - https://www.codingninjas.com/codestudio/problems/selection-sort_981162?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
*/



#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0;i<n;i++)
    {
        // Take 1st As minimum Value index
        int min_idx =  i;
        for(int j=i+1;j<n;j++)
        {
            // Compare if any value is lesser than our assumption value so update minimum index
            if(arr[min_idx]>arr[j])
            {
                min_idx = j;
            }
        }
        // Swap uing Scratch Method
         int temp = arr[min_idx];
         arr[min_idx]=arr[i];
         arr[i]=temp;

         // Use inbuilt Function 
        // swap(arr[i],arr[store]);
    }
}
