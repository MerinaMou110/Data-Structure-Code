#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> st2;
    int n, m;
    int flag = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    if (st.size() == st2.size())
    {
        while (!st.empty())
        {
            if (st.top() != st2.front())
            {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
            st.pop();
            st2.pop();
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
    }
    else
        cout << "NO" << endl;
    return 0;
}