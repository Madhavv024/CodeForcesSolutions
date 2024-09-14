#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    int tc = 1;
    while (tc--)
    {
        int n;
        cin >> n;
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        // corners--00,nn,0n,n0;
        int x[4] = {0,n,0,n} , y[4]={0,0,n,n};
        int ans = INT_MAX;
        for (int i = 0; i < 4; i++)
        {
            int d1 = max(abs(x[i]-x1) , abs(y[i]-y1));

            for (int j = 0; j < 4; j++)
            {
                int d2 = max(abs(x[j]-x2) , abs(y[j]-y2));
                if(i==j) continue;
                ans = min(ans, d1+d2);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}