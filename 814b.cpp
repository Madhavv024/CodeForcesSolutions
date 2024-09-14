/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
using ll = long long;
using lld = long double;
#define mod 10000000007
#define INF 1e18
#define pi 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define mp make_pair

void solve()
{
    int n;
    cin >> n;
    // while (n--)
    {
        int a[1010], b[1010], i, j, t = 0;
        map<int, int> m1, m2, m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m1[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            m2[b[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (m1[i] == 0 && m2[i] == 0)
            {
                t = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(m1[a[i]]==2 && a[i]!=b[i]){
                if(m1[b[i]]==0){
                    a[i] = b[i];
                    m1[a[i]]++;
                }
                else if(t!=0){
                    a[i] = t;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(i==n-1){
                printf("%d\n",a[i]);
            }
            else{
                printf("%d ", a[i]);
            }
        }
        
        
    }
}

int32_t main()
{
    int tc = 1;
    // cin>>tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}