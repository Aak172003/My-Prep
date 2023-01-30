/*  IMPPPPPPPP

This Approach Take an Extra Space - O(N) 
But If we want solve in Using Without Extra space 

Leetcode Link - https://leetcode.com/problems/merge-sorted-array/description/

// We will keep checking for the greater element of the two arrays(i=m-1,j=n-1) and insert the values.
// nums1 = [1,2,3,0,0,0], m = 3
// nums2 = [2,5,6],       n = 3

// nums1 = [1,2,3,0,0,0]
//              |     |
//              i     k

// nums2 = [2,5,6]
//              |
//              j
// nums2[j]>nums1[i] thus nums1[k]=6
// k and j are decremented.

// nums1 = [1,2,3,0,0,6]
//              |     |
//              i     k

// nums2 = [2,5,6]
//            |
//            j
// nums2[j]>nums1[i] thus nums1[k]=5
// k and j are decremented.

// nums1 = [1,2,3,0,5,6]
//              |   |
//              i   k

// nums2 = [2,5,6]
//          |
//          j
// nums2[j]<nums1[i] thus nums1[k]=3
// nums1 = [1,2,3,3,5,6]
//            |   |
//            i   k

// nums2 = [2,5,6]
//          |
//          j
// k and i are decremented.
// nums2[j]=nums1[i] thus nums1[k]=2
// nums1 = [1,2,2,3,5,6]
//          |   |
//          i   k

// nums2 = [2,5,6]
//          |
//          j
// k and i are decremented.
// nums2[j]>nums1[i] thus nums1[k]=2
// k and j are decremented. J over here  , then pit remaining value in arr1

class Solution {
public:

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&&j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else
            {
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        // jb j ya i me se koi bhi 0 pr pauch jaega to hum dono i , j me se jo 0 tk nhi pauce honge to hum usko value daalte jaega normally 
        while(i>=0)
        {
            nums1[k]=nums1[i];
            k--;
            i--;
        }
            
        while(j>=0)
        {
            nums1[k]=nums2[j];
            k--;
            j--;
        }
    }
};


*/
#include <iostream>
using namespace std;

void mergeSortedArray(int arr1[],int n,int arr2[],int m,int arr3[])  // is tarah se function ko Array dia jata hai 
{
    int i=0,j=0;
    int k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++] = arr1[i++];
            // or we can also write in below way 
            // k++,i++ 
        }
        else
        {
            arr3[k++] =arr2[j++];
            // or we can also write in below way 
            // k++,j++ 
        }
    }
    // Copy First K element from array 1 
    while(i<n)
    {
        arr3[k++] = arr1[i++];
        // or we can also write in below way 
        // k++,i++ 
    }
    while(j<m)
    {
       arr3[k++] =arr2[j++];
       // or we can also write in below way 
       // k++,j++
    }
}

void printArray(int arr3[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr3[i]<<" ";
    }
}

int main()
{
    int arr1[5] = {1,3,5,7,9};
    int arr2[3]= {2,4,6};
    
    int arr3[8] ={0};
    
    mergeSortedArray(arr1,5,arr2,3,arr3);
    printArray(arr3,8);

    return 0;
}
