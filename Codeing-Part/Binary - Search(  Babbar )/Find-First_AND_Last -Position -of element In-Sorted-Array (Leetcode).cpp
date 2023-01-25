//                                                 Answer return in Vector Form 

/*
Leetcode Link -  https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
*/

class Solution {
public:
    void lowerBound(vector<int>&nums,int target,vector<int>&ans){
        int left=0,right=nums.size()-1;

        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                ans[0]=mid;
                // search left side to find the first occurrence , Left Wale array me search krenge 
                right=mid-1;
            }

            else if(nums[mid]<target)
            {
                left=mid+1;
            }

            else right=mid-1;
        }
    }
    void higherBound(vector<int>&nums,int target,vector<int>&ans)
    {
        int left=0,right=nums.size()-1;

        while(left<=right)
        {
            int mid=left+(right-left)/2;

            if(nums[mid]==target)
            {
                ans[1]=mid;
                //search right side to find the last occurrence ,  right Wale array me search krenge 
                left=mid+1;
            }
            //  mid ki value agr choti hoti hai to hum , Right me check krenge  
            else if(nums[mid]<target)
            {
                left=mid+1;
            }
            else right=mid-1;
        }
    }
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        // Initially ans 2 size ka array bnaya , usme initially -1 rkh dia 
        vector<int>ans(2,-1);
        lowerBound(nums,target,ans);
        higherBound(nums,target,ans);
        // pair<int,int>p;
        // p.first =  lowerBound(nums,target,ans);
        // p.second =  higherBound(nums,target,ans);
        return ans;
    }
};



//                                                             Using PAIR Method 

#include<vector>
using namespace std;
int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    
    return p;
}