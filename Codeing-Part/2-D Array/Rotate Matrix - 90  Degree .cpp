/*
LeetCode Link - https://leetcode.com/problems/rotate-image/description/

Video Link - https://youtu.be/Y72QeX0Efxw
*/


class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {

        //                            Brute Force Approach  -  TC-O(N^2) , SC - O(N*M)
        // consider one more matrix and put the values in new considered matrix

        /*                           
                ( iNPLACE Swapping )  Optimise Approach TC-O(N^2)+O(N^2) , SC - O(1)
                                                             
        1 -  Transpose the matrix - O(N^2)
        2 - Reverse the Every Row of Transposed Matrix - O(N^2)
         */
        int n = matrix.size();
        for(int i=0; i<n; ++i) {
            for(int j=i; j<n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0; i<n; ++i) 
        {
		// 2 Pointer approach :  just like we do in 1D array we take left and right pointers
		// and swap the values and then make those pointers intersect at some point.
        /*
         int left = 0, right = n-1;
            while(left < right) 
            {
                swap(matrix[i][left], matrix[i][right]);
                ++left;
                --right;
            }
        */

        reverse(matrix[i].begin(),matrix[i].end());
           
        }
        
    }
};