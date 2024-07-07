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
        int a[n], j;
        for (j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int flag = 1;

        for (j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[j] > a[k])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
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