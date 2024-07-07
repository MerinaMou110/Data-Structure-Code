#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>q;
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
           if(y==0){
              string s;
              cin>>s;
              q.push(s);
           }
           else if(y==1){
            if(!q.empty()){
            cout<<q.front()<<endl;
            q.pop();
            }
            else{
                cout<<"Invalid"<<endl;
            }
           }
          
    }
    return 0;
}