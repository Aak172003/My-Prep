class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        
        // jb tk n = 0 nahi hota tb tk loop goona run up
        
        while(n!=0)
        {
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