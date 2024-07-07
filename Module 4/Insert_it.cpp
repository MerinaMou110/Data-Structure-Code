// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;

//     vector<int> a(x);
//     for (int i = 0; i < x; i++)
//     {
//         cin >> a[i];
//     }
//     int y;
//     cin >> y;

//     vector<int> b(y);
//     for (int i = 0; i < y; i++)
//     {
//         cin >> b[i];
//     }
//     int index;
//     cin >> index;

//     int z[x + y];
//     for (int i = 0; i < index; i++)
//     {
//         z[i] = a[i];
//     }

//     int j = 0;
//     for (int i = index; i < x + y; i++)
//     {
//         if (j >= y)
//         {
//             z[i] = a[index];
//             index++;
//         }
//         else
//         {
//             z[i] = b[j];
//         }
//         j++;
//     }
//     for (int i = 0; i < x + y; i++)
//     {
//         cout << z[i] << " ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    vector<int> a(x);
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    int y;
    cin >> y;

    vector<int> b(y);
    for (int i = 0; i < y; i++)
    {
        cin >> b[i];
    }
    int index;
    cin >> index;

    a.insert(a.begin()+index,b.begin(),b.end());
    for(int z:a){
         cout<<z<<" ";
    }

    // int z[x + y];
    // for (int i = 0; i < index; i++)
    // {
    //     z[i] = a[i];
    // }

    // int j = 0;
    // for (int i = index; i < x + y; i++)
    // {
    //     if (j >= y)
    //     {
    //         z[i] = a[index];
    //         index++;
    //     }
    //     else
    //     {
    //         z[i] = b[j];
    //     }
    //     j++;
    // }
    // for (int i = 0; i < x + y; i++)
    // {
    //     cout << z[i] << " ";
    // }

    return 0;
}