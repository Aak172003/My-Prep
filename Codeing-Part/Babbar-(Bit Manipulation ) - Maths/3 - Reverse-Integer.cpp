/*
LeetCode Link - https://leetcode.com/problems/reverse-integer/
*/


class Solution {
public:
    int reverse(int x) {

        int ans=0;
        while(x!=0)
        {
            int digit = x%10;

            //  Here we check the integer Range ,
            // if ans exceed integer range so we return 0;

            // Suppose maan lo koi value ans = 2^31-10 pr hai  , so usme hum 10 se multiply krenge to it exceed the int limit
            
            /*
            INT_MAX/10 is form me islea lia kyuki,
            ans me * 10 horha hai , int_max se bda na ho islea / 10 lia hai ,
            jisse ans me * 10 means int_max me bhi 10 se multiply hoga , 
            so waha pr int_max bchega baaki 10/10 cut gya 
            */

           // INT_MAX/10 ek bde no ko chota kr rha hai , INT_MAX*10 ye ek bde no ko or bdaa kr rha hai 
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