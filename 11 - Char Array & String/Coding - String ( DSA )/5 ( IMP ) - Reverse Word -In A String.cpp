/*
LeetCode Link - https://leetcode.com/problems/reverse-words-in-a-string/submissions/888854442/


1 - pop_front() - pop_front() function is used to pop or remove elements from a list from the front.
	The value is removed from the list from the beginning, and the container size is decreased by 1

2 - pop_back() - pop_back() function is used to pop or remove elements from a list from the back.
	The value is removed from the list from the end, and the container size is decreased by 1
*/

class Solution
{
public:
	string reverseWords(string s)
	{
		

		/*
		
		Appoach 1 - Brute Force

		Time Complexity: O(N), Traversing the entire string
		Space Complexity: O(N), Stack and ans variable

		*/

		int n = s.size();
		stack<string> st;
		string temp = "";

		for (int i = 0; i < n; i++)
		{
			// until not find spaces add the character into temp
			// This is how we access seperate string from a big sentence , then push into stack
			if (s[i] != ' ')
				temp += s[i];

			// temp.size()>0 ths condition is help when we takle with multiple spaces ,
			// leading spaces or , Trailing Spaces ,, in case of multiple spaces ,
			// we add into temp but its size not greater than 0 ,
			// so hum uko stack me daalenge jinka size > 0 hoo

			else if (temp.size() > 0)
			{
				st.push(temp);

				temp.clear();
			}
		}

		// Let's suppose this example -> "the sky is blue"
		// blue ke bdd space nhi mila, islea wo temp me hi rh gya , so hume usko last me temp se nikal kr
		// stack me daalna pdega

		// But in this example -> "  hello world  "
		// world ke bdd space hai that why wo automatically chal jaega
		if (temp.size() > 0)
			st.push(temp);

		s.clear();

		while (!st.empty())
		{
			// Add into string , jo phle clear kia hai
			s += st.top();
			// then remove
			st.pop();
			// Add space
			s += ' ';
		}
		// last me koi null character na bche islea usko remove
		// At last we have a null character , so we need to remove last null Character from string
		s.pop_back();
		return s;



		/*

		Approach 2 - Using Two Pointer Approach 

		Time Complexity: O(N), N~length of string
        Space Complexity: O(1), Constant Space
		*/

		int size = s.length();
		string result = "";

		int startingindex = 0;
		int endingindex = 0;

		while (startingindex < size)
		{
			// if phle hi space aajae to idnore , increment startingindex++
			while (startingindex < size && s[startingindex] == ' ')
				startingindex++;

			// if hamara starting index cross kr jae size ko , to break
			if (startingindex >= size)
				break;

			// starting index ko jaise hi koi character milta hai to wo endingindex ko initialise krdeti hai
			// startingindex + 1 se
			int endingindex = startingindex + 1;

			// phr ending index size se phle tk rhe , or during ending index ka iteration space na ho , to
			// ending characte br br increment krte rhna hai
			while (endingindex < size && s[endingindex] != ' ')
				endingindex++;

			// phr hume wo string chaiye
			// wo hume s.substr(startingindex , endingindex - startingindex); se milega

			string sub = s.substr(startingindex, endingindex - startingindex);

			// if result ka length ==0  hai to sub result me daalne ka
			if (result.length() == 0)
				result = sub;
			if result
				ka length != 0 hai to result else result = sub + " " + result;

			//  jitna word ho chuka , so startingindex point to endingindex + 1
			startingindex = endingindex + 1;
		}
		return result;
	}
};
