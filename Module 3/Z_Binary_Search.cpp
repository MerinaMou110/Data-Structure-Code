// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     int a[n];
//     for (int i = 0; i < n; i++)  //-------------------------O(N)
//     {
//         cin >> a[i];
//     }

//     sort(a, a + n);  //-----------------------------------O(NlogN)
//     while (q--) //----------------------------------------O(NlogN)
//     {
//         int x;
//         cin >> x;
//         bool flag = false;
//         int l = 0;
//         int r = n - 1;
//         // binary search
//         while (l <= r)
//         { //-----------------------O(logn)
//             int mid = (l + r) / 2;
//             if (a[mid] == x)
//             {
//                 flag == true;
//                 break;
//             }
//             if (x > a[mid])
//             {
//                 // dane jabe
//                 l = mid + 1;
//             }
//             else
//             {
//                 // bame jabe
//                 r = mid - 1;
//             }
//         }
//         if (flag == true)

//             cout << "found" << endl;

//         else

//             cout << "not found" << endl;
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    while(q--){
        int x;
        cin>>x;
        int l=0,r=n-1;
        bool flag=false;
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid]==x){
                flag=true;
                break;
            }
            if(x>a[mid]){
                l=mid+1;
            }
            else
            r=mid-1;
        }
        if(flag==true) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    return 0;
}