class Solution {
public:
    int bitwiseComplement(int n) {

        int m=n;

        // initialise mask with 00000000000000000000
        int mask=0;
        if(m==0)return 1 ;

        // until we not get m==0 we done lope again and again 
        while(m!=0)
        {

            mask = (mask<<1) | 1;
            // hum check kr rhe hai jb tk m == 0 nhi hota tb tk mask me left shift hoga or last value me (OR) hoga 
            m=m>>1;
        }
        // phr mask me jitni value utne se and baaki sb mask me 0 , and 0 se & give result = 0
        
        int ans = (~n) & mask;
        return ans;
        
    }
};