#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40,30,60,70};

//     list<int>newlist;
//    // newlist=mylist;  or
//     newlist.assign(mylist.begin(),mylist.end());
// mylist.push_back(100);
// mylist.push_front(40);
// mylist.pop_back();
// mylist.pop_front();
//insert(mylist.begin()+2,100); used in vector insert

//mylist.insert(next(mylist.begin(),2),100); 

//mylist.erase(next(mylist.begin(),2));
 //mylist.insert(next(mylist.begin(),3),{100,200,300}); 

//  list<int>newlist={100,200,300};
//  vector<int>v={89,30,23};
 //mylist.insert(next(mylist.begin(),3),v.begin(),v.end()); //--------O(N+K)

//mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));
  
//   replace(mylist.begin(),mylist.end(),30,100);
//     for(int val:mylist)
//     {
//         cout<<val<<endl;
//     }

auto it=find(mylist.begin(),mylist.end(),40);
//cout<<*it<<endl;
if(it==mylist.end())
{
    cout<<"Not found";
}
else{
    cout<<"Found";
}

    return 0;
}