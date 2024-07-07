#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin >> y;
    int node ;
   
    int val;
    for (int i = 1; i <= y; i++)
    {

        if (i == 1)
        {

            
            node = 1;
          
            val = 1;
        }
        else if (i == 2)
        {
         
            node = node * 2;
            val = 1;
        }
        else
        {
            node = node * 2;
            val = val * 2;
        }
    }
    cout << val * node << endl;

    // cout << sum;
    return 0;
}