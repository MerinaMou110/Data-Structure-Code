#include <bits/stdc++.h> 
// Implement class for minStack.

class minStack
{
	// Write your code here.
	
	public:
		
		// Constructor
      stack<int>st,min_st;
        
		int min=INT_MAX;
		minStack() 
		{ 
			// Write your code here.

		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int val)
		{
			// Write your code here.
			if(st.empty()){
				int y=val;
			st.push(val);
			min_st.push(val);
			return;
			}
			st.push(val);
			if(val<=min_st.top())
			{
				min=val;
				min_st.push(min);
			}


			
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(st.empty())
			{
				return -1;
			}
			else{
				int x=st.top();
				st.pop();
				if(min_st.top()==x){
					min_st.pop();
				}
				return x;
			}
			
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(st.empty())
			{
				return -1;
			}
			else{
				return st.top();
			}
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(min_st.empty()){
				return -1;
			}
			else{
				return min_st.top();
			}

		}
};