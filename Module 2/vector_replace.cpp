#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v={1,2,3,2,4,100,3,7,9,2,3,2,12,10,2};
    // replace(v.begin(),v.end(),2,100);
    // for(int x:v){
    //     cout<<x<<" ";
    // }
      
      //find
    vector<int>v={1,2,34,5,6,3,2};
    //vector<int>:: iterator it;
    auto it=find(v.begin(),v.end(),3);
    //cout<<*it;
    if(it==v.end()){
        cout<<"not found";
    }
    else cout<<"found";
    return 0;
}