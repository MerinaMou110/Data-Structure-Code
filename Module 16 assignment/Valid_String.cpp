#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s)
        {
            if (st.empty())
            {
                st.push(c);
            }
            else if (c == st.top())
            {
                st.push(c);
            }
            else
            {
                st.pop();
            }
        }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
