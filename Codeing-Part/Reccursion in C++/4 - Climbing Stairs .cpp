// Same As Fibonnaci Series 

/*
LeetCode link - https://leetcode.com/problems/climbing-stairs/description/
*/
class Solution {
public:
    int climbStairs(int n) 
    {
        if (n <= 2) return n;
        
        int prev1= 2, prev2 = 1, res;
        //  Same as Fibonacci Series 
        for (int i = 3; i <= n; i++) 
        {
            res = prev1 + prev2;
            prev2 = prev1;
            prev1 = res;
        }

        /*
        ans = climbStairs(n-1) + climbStairs(n-1) , means hum just piche or 
        usse just piche wali pr se kudd kr aae hai
        */
        return res;
    }
};