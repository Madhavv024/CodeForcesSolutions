#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int l , r;
        cin>>l>>r;
        int x = l;
        if(2*x<=r)
        {
            cout<<x<<" "<<2*x<<endl;
        }
        else{
            cout<<"-1 -1"<<endl; 
        }
    }
    return 0;
}