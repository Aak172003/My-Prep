/*
For Upper To Lower - ch-'A'+'a'
For Lower to Upper - ch-'a'+'A'
*/
class Solution
{
public:
 char tolowerCase(char ch)
    {
        if (ch>='A' && ch <='Z')
                ch = ch - 'A' + 'a';
        return ch;
    } 
 bool isValid(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z'))
            return true;
            
        return false;
    }
   
    bool isPalindrome(string s) {
        
        int n = 0;
        //faaltu characters pehle hi hatado
        // (s[index]>='0' && s[index]<='9') || (s[index]>='a'&& s[index]<='z') || (s[index]>='A' && s[index]<='Z')){
        // In me se kuch bhi aata hai to string avalid hai 
        for (int i = 0; i <s.length(); i++)
        {
            if (isValid(s[i]))
                {
                    s[n++] = s[i];
                }
        }
        //sabhi alpabets ko lower case me kardo
        for (int i = 0; i < n; i++)
        {
            s[i] = tolowerCase(s[i]);
        }

        //basic palindrome check karne wala function lagado
        int start = 0;
        int end = n - 1;

        while (start <= end)
        {
            if (s[start] != s[end])
             return false;
            else
            {
                start++;
                end--;
            }
        }
    return true;
    }  
};    
	
