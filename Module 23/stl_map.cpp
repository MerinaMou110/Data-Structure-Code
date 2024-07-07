#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    //   mp.insert({"sakib al hasan",75});
    //   mp.insert({"Tamim iqbal",19});
    //   mp.insert({"Shamim",79});
    
    //normally avabe initialize kore
    mp["Sakib al hasan"]=79;  //o(logN)
    mp["akib"]=100;
    mp["tamim"]=79;
          for(auto it=mp.begin(); it !=mp.end();it++)
      {
        cout<<it->first<<" "<<it->second<<endl; //o(logn)
      }
   //cout<<mp["Shamim"]<<endl;
//   if(mp.count("akib")){
//     cout<<"ase"<<endl;
//   }
//   else{
//     cout<<"nai"<<endl; 
//   }
    return 0;
}