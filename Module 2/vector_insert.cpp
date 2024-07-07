#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4};
    v.insert(v.begin()+3,20);
    // vector<int>v2={100,101,102,103};
    //  v.insert(v.begin()+2,v2.begin(),v2.end());
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}