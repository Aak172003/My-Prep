/*
CodeStudio Link - https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=0
*/


#include <bits/stdc++.h> 
string replaceSpaces(string &str)
{
	// Using Extra String 

    string temp;
    for(int i = 0; i< str.length(); i++){

        if(str[i] == ' ')
		{
            // temp.push_back('@');
            // temp.push_back('4');
            // temp.push_back('0');
            temp += "@40";
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;


	// Using Without Extra Variable 

	/*
	Consider two strings str1 and str2. Syntax would be:

    str1.replace(pos,len,str2);  
    Parameters
    str : str is a string object, whose value to be copied in another string object.
    pos : pos defines the position, whose character to be replaced.
    len : Number of characters to be replaced by another string object.
	
	*/

	for(int i=0;i<str.length();i++)
	{
		if(str[i]==' ')
		{
			str.replace(i,1,"@40");  // 1 len because space ki length == 1 
		}
	}
	return str;
}