class Solution {
public:
    bool isPalindrome(string s) {
        
    }
};
class Solution {
public:
    bool palindrome(string s){
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string s) 
    {
        string s1="";
        for(int i=0; i<s.size(); i++)
        {
            
            if(s[i]>='A' and s[i]<='Z')
            {
                s1=s1+('a' + (s[i]-'A'));
            }
            if(s[i]>='a' and s[i]<='z'){
                s1=s1+s[i];
            }
            if(s[i]>='0' and s[i]<='9'){
                s1=s1+s[i];
            }
        }
        return palindrome(s1);
    }
};