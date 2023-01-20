class Solution {
public:
    int reverse(int x) {

        int ans=0;
        while(x!=0)
        {
            int digit = x%10;

            //  Here we check the integer Range ,
            // if ans exceed integer range so we return 0;
            if((ans>INT_MAX/10) || (ans<INT_MIN/10))
            {
                return 0;
            }
            ans = (ans*10)+digit;
            x=x/10;
        }
        return ans;
    }
    };