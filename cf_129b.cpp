#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    //write your code here
    FAST_IO;
    int t;cin>>t;
    while (t--)
    {
        int n ; cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        int ind = 0;
        int q; cin>>q;
        while(q--){
            int num; cin>>num;
            ind+=num;
        }
        ind = ind % n;
        cout<<a[ind]<<endl;
    }

    return 0;
}