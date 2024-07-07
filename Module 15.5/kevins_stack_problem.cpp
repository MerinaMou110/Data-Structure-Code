#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	// Write your code here.
	stack<char>st;
	
          for (char c : s) {
            st.push(c);
          }
     string ns="";
	 while(!st.empty())
	 {
		 ns+=st.top();
		 st.pop();
	 }
	 return ns;
}
