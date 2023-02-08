/*
Leetcode Link -  https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/
*/


class Solution {
public:
    string removeDuplicates(string s) {
        
        string ans = "";
        for(int i = 0 ; i < s.size() ; i++)
        {
            // if ans ke back me string traverse ke time pr jo mila hai wo nhi hai to hume ans me push krne ki jaroorat hai
            if(ans.back()!=s[i])
                ans.push_back(s[i]);
            // If mil gya to usko bahar nikalne ki jaroorat hai 
            else
               ans.pop_back();
        }
        return ans;
    }
};


        

