/*
Coding Ninja Link - https://www.codingninjas.com/codestudio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=1
*/


/*
Leetcode Link - https://leetcode.com/problems/two-sum/description/

Same Question in Leetcode name as - 2 Sum
But it can be solved using Hash table , Below solution is not accacpted in leetcode
*/

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
   // Write your code here.
   vector<vector<int>>ans;
   for(int i=0;i<arr.size();i++)
   {
      for(int j=i+1;j<arr.size();j++)
      {
         if(arr[i]+arr[j]==s)
         {
            vector<int>temp;
            // According to Question , minimum value phle push hoga , then maximum value 
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            // hume Question me and ek vector ke ander dena hai vector ke form me 

            ans.push_back(temp);
         }
      }
   }
   // sort krdenge sabhi vector ko jo pair me hume Mile hai 
   sort(ans.begin(),ans.end());
   return ans;
}