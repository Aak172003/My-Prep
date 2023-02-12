class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
    // Both Pointing To ist index value 
    int left = 0;  
	int right = 0;  
	while(left<=right && right < nums.size()) 
    {
		if(nums[right] == 0) 
        {
			right++;
		}
		else 
        {
            swap(nums[left],nums[right]);

			//  int temp = nums[left];
			//  nums[left] = nums[right];
			//  nums[right] = temp;
			left++;
			right++;
		}
	 } 
    }
};