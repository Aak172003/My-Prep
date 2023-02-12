/*
Leetcode Link -  https://leetcode.com/problems/search-in-rotated-sorted-array/description/
Youtube  -  https://youtu.be/r3pMQ8-Ad5s
*/


class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        //                                     Brute Force Approach 
        /*
          Use Linear Search Method , Which Takes 
          TC - O( N )
          SC - O(1)

          In this approach , hum simply traverse krenge throught array and find our target element 
        */

//                                     Optimise  Approach
   /*
          Use Binary Search Method , Which Takes 
          TC - O( LogN )
          SC - O(1)
        */ 

        int low = 0,high = nums.size()-1;

        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(nums[mid] == target)return mid;

            // Left side is sorted
            // If low element is < or = mid , Means it is a sorted Array 
            if(nums[low]<=nums[mid])
            {
                // jb mid bda hai low se tb ander jaega ,
                // yaha possibility hai ki wo target value undono ke beech me mil skti hai
                 
                if(target<=nums[mid] && target>=nums[low])
                {
                    // agr ha to hum high ko mid se niche le aaenge 
                    high = mid-1;
                }
                else
                {
                    // agr na to hum low ko aage le jaenge 
                    low = mid+1;
                }
            }
            // Right  side is sorted
            else{
                if(target<=nums[high] && target>=nums[mid])
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
        }
        return -1;
        
    }
};