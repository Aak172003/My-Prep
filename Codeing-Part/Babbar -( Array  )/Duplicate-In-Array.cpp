/*
Coding Ninja Link - https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=1

*/

// This Method is Also for finding Missing Element 

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans= 0;
    

    // Jo array me dia hai unsbka xor kia 
    for(int i=0;i< arr.size();i++)
    {
        ans = ans^arr[i];
        /*
        4 2 1 3 1 - 4^2^1^3^1
        */
    }
    // Jo array me dia hai ,  unsb ko 1 to size tk ke saare eleements se XOR
    for(int i=1;i< arr.size();i++)
    {
        ans = ans^i;
        /*
        4 2 1 3 1 - 4^2^1^3^1
              XOR - 1^2^3^4
        */
    }
    
    return ans ;	
}
