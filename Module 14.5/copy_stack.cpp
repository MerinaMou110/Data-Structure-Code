#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    stack<int>st2;

    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }
    while(!st2.empty())
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }
    
    return 0;
}