/*
Leetcode Link - https://leetcode.com/problems/unique-number-of-occurrences/description/  
*/


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mapp;
        
        //  Store the frequecny.
        for(auto it:arr)  // it is just a variable / iterator 
        {
            mapp[it]++;
        }
        
        //   check the count and insert in unordered set.
        unordered_set<int>set;
        
        for(auto it:mapp){
            //  Store the frequency count in set 
            int freq = it.second;
            set.insert(freq);
        }
        
        //   if size of mp is same as set that means all have unique freq.
        return set.size() == mapp.size();
        
    }
};