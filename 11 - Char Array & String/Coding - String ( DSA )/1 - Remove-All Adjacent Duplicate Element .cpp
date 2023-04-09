/*
Leetcode Link -  https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/
*/

// Edge Case ---->>>

    // ans ki length bdi ho , or check krenge ki ans[ans.length-1] pr jo value hai kya wo string traversal ke time pr equal to nhi hai ,
    // Agr equal hua to pop krdenge otherwise push krdenge 
    if((ans.length()>0) && (ans[ans.length()-1] == s[i]) )



// TC-O(n)    SC-O(n)

class Solution {
public:
    string removeDuplicates(string s) {
        
        string ans = "";
        for(int i = 0 ; i < s.size() ; i++)
        {
            // if ans naam ki string me hum elemnt piche se daalte jaenge 
            // or hum ans.back() se back ki value string elements ke barabar hota hai to , hum ans me se usko pop krlenge 
            // otherwise , agr match nhi krta to hum piche se value daal denge ans me 
            
            if(ans.back()!=s[i])
            {
                ans.push_back(s[i]);               
            }
            // If mil gya to usko bahar nikalne ki jaroorat hai 
            else
               ans.pop_back();
        }
        return ans;
    }
};


        




        

