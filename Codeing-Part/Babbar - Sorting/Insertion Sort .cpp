
    // Using For Loop 

#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr)
{
    for(int i=1;i<n;i++)
    {
        int temp = arr[i];
        int j = i-1;

        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];

            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
}

// Babbar Bhaiya Homework 

#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
   // Write your code here.
   
   int i = 1; 
   while (i<n)
   {
       int result = arr[i];
       int j = i-1;
       while (j>=0)
       {
           if (arr[j]> result)
           {
               arr[j+1] = arr[j];
           }
           else 
           {
               break;
           }
           
           j--;
       }
       arr[j+1] = result;
       i++;
   }
}