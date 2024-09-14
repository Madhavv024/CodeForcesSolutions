#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    // write your code here
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        int ans = n;
        for (int i = 1; i*i <= n; i++)
        {
            if(n%i==0)
            {
                if(i<=k) ans  = min(ans, n/i);
                if(n/i<=k) ans = min(ans , i);
            }

        }
        cout<<ans<<endl;
        
    }

    return 0;
}