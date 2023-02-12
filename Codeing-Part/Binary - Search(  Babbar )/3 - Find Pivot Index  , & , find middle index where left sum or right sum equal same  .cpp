/*
Leetcode Link - https://leetcode.com/problems/find-pivot-index/
*/


class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        // Brute Force Approach 
        /*
        TC- O(N^2)
        SC - o(1)
        */

        for(int i=0;i<nums.size();i++)
        {
            int leftsum=0,rightsum=0;

            for(int j=0;j<i;j++)
            {
                leftsum = leftsum+nums[j];
 
            }
            for(int k=nums.size()-1;k>i;k--)
            {
                rightsum = rightsum+ nums[k];

            }
            if(leftsum==rightsum)return i;

        }
        return -1;


        // Prefix sum 
        /*
        TC- O(N)
        SC - o(1)
        */
        
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum = sum+nums[i];
        }
        
        int lsum = 0;
        int rsum = sum;

        for(int i=0;i<nums.size();i++)
        {
            rsum = rsum-nums[i];
            if(lsum==rsum)return i;
            lsum = lsum+nums[i];
        }
        return -1;
    }
};