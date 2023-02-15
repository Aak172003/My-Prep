/*
Leetcode Link - https://leetcode.com/problems/number-of-1-bits/submissions/
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n!=0)
        {
        /*  
            Checking last bit 
            last bit se & (AND) krna hai  
            */
            
            // jbki n me no of bits dia hai , so uska AND krne me koi problem nhi hogi 

            if(n&1) // Jb dono true honge then count++
            count++;

            n=n>>1;  // Right Shift krte rhege jb tk saari value 0 na hojae 
            // jb n ki value 0 hogyi means saari value count hogyi 
        }
        return count;
    }
};