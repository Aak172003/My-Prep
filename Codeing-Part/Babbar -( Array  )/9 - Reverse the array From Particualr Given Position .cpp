/*
CodeStudio Link - https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3

*/

#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr, int m)
{ 
    // s=m+1 Because Qme kisi Particualr Position bdd ke saare eleemnts KO Reverse Krna hai 
    int s = m+1;
    
    int e = arr.size()-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    } 
}
