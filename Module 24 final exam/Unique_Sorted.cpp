#include <bits/stdc++.h>
using namespace std;
int main()
{

    int y;
    cin >> y;

    for (int i = 0; i < y; i++)
    {
        set<int> s;
        int x;
        cin >> x;
        while (x--)
        {
            int n;
            cin >> n;
            s.insert(n);
        }
        vector<int> v;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            v.push_back(*it);
        }
        reverse(v.begin(), v.end());
        for (int i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}