/*
GfG Link -https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1 
*/


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int>mapp;
        int maxi = -1;
        char c;
        // First of All here we count frequencies means no of occurance in array  via For each loop
        for(auto it:str)
        {
            mapp[it]++;  // mpp[it] means hash table me it ki jo value hai usko increment if it occur multiple time 
        }
        
        /*  This is Another Way to increase the frequency count of any value
           for(int i=0 ; i<str.size() ; i++){
            mapp[str[i]]++;
        }
        */
       
        // Use to store the rsult 

        for(auto it:mapp)  // it it an iterator 
        {
            if(it.second>maxi)
            {
                maxi  = it.second;
                c= it.first;
            }

            
        }
        return c;
    }

};