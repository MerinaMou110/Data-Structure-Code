#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    list<int>mylist={20,30,40,10,50,10,10};
    //mylist.remove(10);
    //mylist.sort();
   //sort(mylist.begin(),mylist.end(),greater<int>()); -->vector er sort in descending order
    //mylist.sort(greater<int>());
    
    //mylist.unique();
    mylist.reverse();
    for(int val:mylist){
        cout<<val<<endl;
    }
    return 0;
}