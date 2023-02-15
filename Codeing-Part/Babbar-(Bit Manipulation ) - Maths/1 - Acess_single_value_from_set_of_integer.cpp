/*
LeetCode Link - https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

*/

class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int product=1;
        int sum=0;
        
        // jb tk n = 0 nahi hota tb tk loop goona run up , or n = 0 hoga because modulo se last digit excess krne ke bdd ,
        // hum n ko n/10 bhi to kr rhe hai ki last digit remove hojae from number
        while(n!=0)
        {
            /*
            Modulo Operator Allow krega ki hum uski last value ek ek krke le ske
            phr us ek value ko hume product me multiply , sum me add krna hai 
            */
            int rem = n%10;
            product = product*rem;
            sum=sum+rem;
            /* 
            After finding Calculate product and sum , 
            jo remainder hai usko remove from original integer value  
            */
            n=n/10;
        }
        int result = product-sum;
        return result;
    }
};