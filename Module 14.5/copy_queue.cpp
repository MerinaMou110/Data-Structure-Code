#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    queue<int> q1;
    while (!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }
    while (!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    return 0;
}