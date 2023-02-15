/*
Coding Ninja Link - 
https://www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0

*/

int findUnique(int *arr, int size)
{
    //Write your code here
    int ans=0;
    for(int i=0;i<size;i++)
    {
        // Yaha Hume ans ko dubara se xor 1 to  N value se islea nhi krna pda kyuki
        // Question me alreday hume sb ka duplicate dia hai islea humne simply 
        // bs sb ka XOR krdenge to hume final jiska duplicate present nhi hai wo mil jaega 
        ans=ans^arr[i];
    }
    return ans;
}