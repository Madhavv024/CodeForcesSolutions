#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    int tc=1; 
    while(tc--)
    {
        int n , m;
        cin>>n>>m;
        int pre[5]{};
        for (int i = 1; i <= m; i++)
        {
            pre[i%5]++;
        }
        int ans = 0;
        for (int i = 1; i <=n; i++)
        {
            ans += pre[(5-i%5)%5];
        }
        cout<<ans;
        
    }
    return 0;
}