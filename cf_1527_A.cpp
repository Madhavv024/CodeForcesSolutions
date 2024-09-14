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
        int n; cin>>n;
        int ans = 0;
        for (int i = 30; i >=0; i--)
        {
            if((1<<i)&n){
                ans = (1<<i)-1;
                break;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}