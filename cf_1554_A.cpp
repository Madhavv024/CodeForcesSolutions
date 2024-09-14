#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    //write your code here
    int tc; cin>>tc;
    while (tc--)
    {
        int n; cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            ans = max( a[i]*a[i-1], ans );
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}