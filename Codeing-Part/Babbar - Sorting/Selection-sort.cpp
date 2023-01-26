#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0;i<n;i++)
    {
        int min_idx =  i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min_idx]>arr[j])
            {
                min_idx = j;
            }
        }
         int temp = arr[min_idx];
         arr[min_idx]=arr[i];
         arr[i]=temp;

         // Use inbuilt Function 
        // swap(arr[i],arr[store]);
    }
}