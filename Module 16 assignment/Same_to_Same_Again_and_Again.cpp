#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    stack<int>st;
    int n,m;
    cin>>m>>n;
    // for(int i=0;i<m;i++){
    //     int x;
    //     cin>>x;
    //     q.push(x);
    // }
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        st.push(y);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    int flag=true;

   if(q.size()!=st.size()){
    flag=false;
   }
   else if(q.size()==st.size()){
    while(!q.empty()){
           if(q.front()!=st.top()){
            flag=false;
            break;
           }
           else{
            q.pop();
            st.pop();
           }
    }
   

   }
   if(flag==true){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
    return 0;
}