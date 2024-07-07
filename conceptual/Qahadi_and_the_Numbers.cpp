#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        map<int, int> mp;
        for (int j = 0; j < n; j++)
        {
            mp[a[j]]++;
        }

        int q_move = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > 1)
            {
                it->second = it->second - 1;
                q_move = q_move + it->second;
            }
        }
        cout << q_move;
        cout << endl;
    }
    return 0;
}
