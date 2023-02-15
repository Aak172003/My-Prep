/*
LeetCode Link - https://leetcode.com/problems/power-of-two/
*/


class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        //  1 Approach 

        // for(int i=0;i<=30;i++)
        // {
        //     int ans= pow(2,i);
        //     if(ans==n)return true;
        // }
        // return false;



        //  2 Approach
     
        int ans=1;
        for(int i=0;i<=30;i++)
        {

            if(ans==n)return true;
            // Her we reuse the code 
            if(ans<INT_MAX/2)  // Here checking The edge case 
            {
                // Here we Resue the code 
                ans=ans*2;
            }
        }
        return false ;

        //  3 Approach

        // if(n<=0)
        // return false;
        // return (n&(n-1))==0;

    }
};