/*
LeetCode Link - https://leetcode.com/problems/reverse-words-in-a-string/submissions/888854442/


1 - pop_front() - pop_front() function is used to pop or remove elements from a list from the front. The value is removed from the list from the beginning, and the container size is decreased by 1

2 - pop_back() - pop_back() function is used to pop or remove elements from a list from the back. The value is removed from the list from the end, and the container size is decreased by 1
*/


class Solution {
	public:
		string reverseWords(string s) 
        {
			int n=s.size();
			stack<string>st;
			string temp="";

			for(int i=0;i<n;i++)
            {
                // until not find spaces add the character into temp
                // This is how we access seperate string from a big sentence , then push into stack 
				if(s[i]!=' ') temp+=s[i];
                
                // temp.size()>0 ths condition is help when we takle with multiple spaces , leading spaces or , Trailing Spaces ,, in case of multiple spaces , we add into temp but its size not greater than 0 
				else if(temp.size()>0)
                {
					st.push(temp);
            
					temp.clear();
				}
			}


			if(temp.size()>0)st.push(temp);

			s.clear();

			while(!st.empty())
            {
                // Add into string , jo phle clear kia hai 
				s+=st.top();
                // then remove 
				st.pop();
                // Add space 
				s+=' ';
			}
            
			s.pop_back();  // used to remove last spaces if occur in string
			return s;
		}
	};
