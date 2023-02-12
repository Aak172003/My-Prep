/*
Suppose Example 
in sorted Order           {1,2,3,4,5}    arr[i-1]>arr[i]   // For ek ek element 
in Random order           {3,5,7,1,6}    arr[i-1]>arr[i]   // For ek ek element
in Rotaed or Sorted oRDER {3,4,5,1,2}    arr[i-1]>arr[i]   // For ek ek element

For 1st 5>1 so 1 Pair 
For 2nd 7>1,6>3 so 2 Pair 
For 3rd 5>1 so 1 Pair 
*/

class Solution {
public:
bool check(vector<int>& arr) 
{
    int n= arr.size();
    int count=0;
    for (int i = 1; i < n; i++)
    {
        // This is check for Rotated sorted array is present or not 
        if (arr[i-1]>arr[i])
        {
            count++;
        }  
    }
    // Check for last index value , if suppose in sorted Order {1,2,3,4,5}   5>1 then Count++
    if(arr[0]<arr[n-1])
    {
        count++;
    }
   // If All Value are same means there is Example  = {1,1,1}
    return (count<=1);
}
};
