#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,7,8};
    //v.erase(v.begin()+3);
    v.erase(v.begin()+1,v.begin()+4);
    v.erase(v.begin()+1,v.end()-1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}