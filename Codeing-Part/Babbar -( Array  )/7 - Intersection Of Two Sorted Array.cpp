
// Babbar Bhaiya 

/*
Codeing Ninja Link - https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0
*/

#include <bits/stdc++.h> 
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Brute Force Approach TC - o(N^2)

    vector<int>ans;
	for(int i=0;i<n;i++)
	{
		/*
		Do loop chaelenge , 
		first loop me itererate ek ek or checking second array me krenge 

		element me ek ek krke first array ka element daalenge , 
		or check krenge second array me 
		*/
		int element = arr1[i];
		for(int j=0;j<m;j++)
		{
			// If element found to usko hum ek vector me daal denge or 
			// jiissi compare hokr true hua hai usko hum update krdenge , 
			// ki in future me or koi uska use na kr ske 
			// then hum break krdenge , kyuki hamara ek element ek hi element ke sth intersection me jaega 
			if(element==arr2[j])
			{
				ans.push_back(element);
				arr2[j] = -2;
				break;
			}
		}
	}
	return ans;
	
	//   Optimise approach  TC - o(N) - Babbar Bhaiya  using TWO POINTER APPROACH 

	int i=0,j=0;
	vector<int>ans;
	while(i<n && j<m)
	{
		if(arr1[i]==arr2[j])
		{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		// agr equal nhi hote to hum simply , iterate krte jaenge i++ , or j++
		else if(arr1[i]<arr2[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}
	return ans;
}
