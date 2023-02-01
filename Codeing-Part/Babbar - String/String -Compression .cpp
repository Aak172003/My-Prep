/*
Leetcode Link - https://leetcode.com/problems/string-compression/
*/



class Solution {
public:
    int compress(vector<char>& chars) 
    {
	int count=1;
    // Initialse an ans empty string , to store string 
    string ans;
	
    for(int i=0;i<chars.size();i++)
    {
        while(i<chars.size()-1 && chars[i+1] == chars[i])
        {
            count++;
            i++;
        }
        ans += chars[i];
        if(count == 1)
            continue;
        /*
        to_string is a function template in the Standard Library that converts a numerical value 
        (such as an int, float, double, etc.) into its equivalent string representation.
        */
        ans += to_string(count);
        count = 1;
    }
    
    // char se sb ans me jaane ke bdd chars ko clear krdenge 
     chars.clear();
    
     for(int i=0;i<ans.size();i++)
          chars.push_back(ans[i]);
 
    return chars.size();
}
};