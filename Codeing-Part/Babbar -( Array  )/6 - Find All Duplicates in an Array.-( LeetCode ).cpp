class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        unordered_map<int,int>mapp;
        // First of All here we count frequencies means no of occurance in array 
        for(auto it:nums)
        {
            mapp[it]++;  // mpp[it] means hash table me it ki jo value hai usko increment if it occur multiple time 
        }
        // Use to store the rsult 
        vector<int>ans;
        for(auto it:mapp)  // it it an iterator 
        {
            if(it.second==2)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};