// https://leetcode.com/problems/peak-index-in-a-mountain-array/solutions/3057752/brute-force-efficient-approach-how-to-think-of-efficient-approach-explained-why-binary-search/

// IMAGE ALSO 
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int n=arr.size();
        int left=0,right=n-1;

        int mid=(right-left)/2+left;

        while(left<right)
        {
            //  For Peak Condition
            if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid])
            return mid;

            else if(arr[mid]<arr[mid+1])
            left=mid+1;

            else 
            right=mid;

            mid=(right-left)/2+left;
        }
        return mid;  
    }
};