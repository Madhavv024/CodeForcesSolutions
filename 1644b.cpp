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
    ll n, i, j;
    cin >> n;

    if (n == 3)
    {
        cout << "3 2 1\n1 3 2\n3 1 2";
    }
    else
    {

        for (i = n; i > 0; i--)
        {
            for (j = i; j > 0; j--)
                cout << j << " ";
            for (j = n; j > i; j--)
                cout << j << " ";

            cout << "\n";
        }
    }

    cout << "\n";
}

signed main()
{
    FAST_IO;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}