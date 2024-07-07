#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    while (getline(cin, word))
    {
        string word2;
        for (char c : word)
        {
            if (c != ' ')
            {
                word2 += c;
            }
        }
        sort(word2.begin(), word2.end());
        cout << word2 << endl;
    }
    return 0;
}
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main() {
//     string line;
//     while (getline(cin, line)) {
//         string word, output;
//         for (char c : line) {
//             if (c == ' ' || c == '\n') {
//                 output += " ";
//             } else {
//                 word += c;
//             }
//         }
//         sort(word.begin(), word.end());
//         cout << output + word << endl;
//     }

//     return 0;
// }
