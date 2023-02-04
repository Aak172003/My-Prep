/*
LeetCode Link - https://leetcode.com/problems/search-a-2d-matrix/
*/


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
     {
         /*                        BRUTE FORCE  

        int m = matrix.size();
        int n = matrix[0].size();
        int count =0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==target)
                count=1;

            }
        }
        if(count==1)
        return true;
        else
        return false;

        */


                
/*        APPROACH 2 BINARY SEARCH

The problem statement states that the values of the last col of the ith row is lesser than the first col of (i+1)th row. 
7 < 10 , 20 < 23
Also, each row is sorted.
This means that, if we linearly arrange the elements of each row, we will have a sorted array. So we can now perform a binary search over it.
How will the matrix behave like an array without actually creating an auxiliary array?
It could be achieved by the following formula :
A n * m matrix converted into an array: matrix[x][y] : a[x * m + y]   -->  m indicates - column
An array can be converted into n * m matrix: a[x] : matrix[x / m][x % m]
Solution Steps
   
*/

/*  
Operate the matrix as an array using the above formula
Perform a binary search for the target element over the matrix
Complexity Analysis

Time Complexity: O(log(m*n)) =O(log(m) + log(n))

Space Complexity: O(1)

n -> row
m -> col

*/

        int row = matrix.size();
        int col = matrix[0].size();
        
		// if matrix have 0 rows or 0 colums
        if(row == 0 || col == 0)
            return false;
        
		// treating matrix as array just taking care of endices
		// [0..n*m]
        int start = 0, end = row*col - 1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            // Now Find mid Position , bY Below Formula

			// a[index] : matrix[index /col][index % col] formulae

            // Here index / m - index/column
            // Here index % m - index%column
            
            int index = matrix[mid/col][mid%col];
            
            if (target == index)
                return true;
			// left half
            else if(target < index)
                end = mid - 1;
            else
			// right half
                start = mid + 1;       
        }
        return false;
    }
};