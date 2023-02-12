/*
Leetcode Link - https://leetcode.com/problems/unique-number-of-occurrences/description/  
*/

// Approach 1  - Using Map  , Set 
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mapp;
        
        //  Store the frequecny.
        for(auto it:arr)  // it ,  is just a variable / iterator 
        {
            mapp[it]++;
        }
        
        //   check the count and insert in unordered set.
        unordered_set<int>set;

        // set hamara kahli unique element leta hai , jis jis ka frequency count different hoga 
        // wo wo frequency set me store ho jaegi 
        // phr hum set or map ka size chexh kr lenge 
        
        for(auto it:mapp){
            //  Store the frequency count in set 
            int freq = it.second;
            set.insert(freq);
        }
        
        //   if size of mpp is same as set that means all have unique freq.
        // return set.size() == mapp.size();

        //               OR
        if(set.size() == mapp.size())
        return true;
        else false ;
        
    }
};


// Approach 2  - Using Map , vector , Sort 
/*
count the number of occurrance of every element and ,
then insert all occurence in a vector and then sort ,
if any two element in an vector is equal then ,
it means that this is not a unique occurrences vector

*/


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        // Map se hum frequency count krleneg in has map
        map<int,int>m;

        // address of operator dia hai i ko , becuase wo array me iterate kreee
        for(auto &i:arr)
            m[i]++;
        
        // ek vector bnaenge jisme hum saare elements , or elements honge hamari frequenciess
        // it .second ki btt chalegii 
        vector<int>a;
        for(auto &i:m)
            a.emplace_back(i.second);
        
        // sort krdenge , then hum check krte jaenge ki piche ka elements aage wale jaisi barabar ==  hota hai 
        // so hum keh denge , False , otherwise true krte jaenge 
        sort(a.begin(),a.end());
        for(int i=1;i<a.size();i++)
            if(a[i]==a[i-1])
                return false;
        return true;
    }
};