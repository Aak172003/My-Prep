/*
LeetCode Link - https://leetcode.com/problems/subsets/description/
 */

class Solution {
public:

    void solve(vector<int>& nums ,vector<int>ans,int index, vector<vector<int>> &result)
    {
        // Agr index hamara traverse krte krte array size se bahar so return 
        
        if(index>=nums.size())
        {
            // but return krne se phle saare , jo bhi ans me daale hai unko print krna pdega   
            result.push_back(ans);
            return ;
        }
        // excluding the element
        solve(nums,ans,index+1,result);

        // including the Element 
        int element = nums[index];
        ans.push_back(element);
        
        solve(nums,ans,index+1,result);

    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>result;
        vector<int>ans;
        int index = 0;  // indicates elements of nums array
        solve(nums,ans,index,result);
        return result ;
    }
};
