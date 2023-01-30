class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        /*
        there is one more Problem if don't use new temp vector 
        Read Github 
        */

        vector<int>temp(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            // arr[(i+k)%n] = arr[i] shift in cyclic Way k position 
            temp[(i+k)%nums.size()]= nums[i];
        }
        // copy temp into nums vector
        nums = temp;

    }
};