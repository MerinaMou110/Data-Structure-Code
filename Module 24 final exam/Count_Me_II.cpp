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
       for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int y, z;

        map<int, int> mp;
        int max = INT_MIN;
        int max_value = a[0];
        for (int j = 0; j < n; j++)
        {
            mp[a[j]]++;
            if (mp[a[j]] > max || max == mp[a[j]] && a[j] > max_value)
            {

                max_value = a[j];
                max = mp[a[j]];
            }
        }
        cout << max_value << " " << max << endl;
    }
    return 0;
}
