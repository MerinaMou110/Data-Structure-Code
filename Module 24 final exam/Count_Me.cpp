// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore();
//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         getline(cin, s);
//         string word;
//         stringstream ss(s);
//         map<string, int> mp;
//         int mp_c = 0;
//         string word2;
//         while (ss >> word)
//         {
//             mp[word]++;
//             if (mp[word] > mp_c)
//             {
//                 mp_c = mp[word];
//                 word2 = word;
//             }
//         }
       

//         cout << word2 << " " << mp_c << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        map<string, int> mp;

        string s, word, cmp;
        getline(cin, s);
        stringstream ss(s);

        int max = INT_MIN;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > max)
            {
                cmp = word;
                max = mp[word];
            }
        }

        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            if (i->first == cmp)
                cout << i->first << " " << i->second << endl;
        }
    }
    return 0;
}