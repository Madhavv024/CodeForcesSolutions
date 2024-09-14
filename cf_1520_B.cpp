#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    //write your code here
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        int ans  =0;
        for (int i = 1; i <= 9; i++)
        {
            for (int j = i; j <= n;)
            {
                /* code */
                ans++;
                j = j*10+i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}