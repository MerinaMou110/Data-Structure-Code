#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stack<char> st;
        stack<char> st2;
        for (int j = 0; j < x; j++)
        {
            char c;
            cin >> c;

            if (st.empty())
            {
                st.push(c);
            }
            else if (c == st.top())
            {
                st.pop();
            }
            else if (c == 'R' && st.top() == 'B' || c == 'B' && st.top() == 'R')
            {
                st.pop();

                st.push('P');
            }
            else if (c == 'R' && st.top() == 'G' || c == 'G' && st.top() == 'R')
            {
                st.pop();

                st.push('Y');
            }

            else if (c == 'B' && st.top() == 'G' || c == 'G' && st.top() == 'B')
            {
                st.pop();

                st.push('C');
            }
            else
            {
                st.push(c);
            }
        }

        while (!st.empty())
        {
            if (st2.empty())
            {
                st2.push(st.top());
                st.pop();
            }
            else if (st.top() == st2.top())
            {
                st2.pop();
                st.pop();
            }
            else
            {
                st2.push(st.top());
                st.pop();
            }
        }
        while (!st2.empty())
        {
            cout << st2.top();
            st2.pop();
        }
        cout << endl;
    }
    return 0;
}