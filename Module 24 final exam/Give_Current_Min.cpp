#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int t;
    cin >> t;
    // vector<int>v;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int y;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int z;
            cin >> z;
            pq.push(z);
            cout << pq.top() << endl;
        }
        else if (c == 1)
        {
            if(!pq.empty()){
            cout << pq.top() << endl;
            }
            else{
                cout<<"Empty"<<endl;
            }
        }
        else if (c == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else{
                 cout << "Empty" << endl;
            }
        }
    }

    return 0;
}