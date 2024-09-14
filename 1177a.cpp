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
    ll n;
    cin >> n;

    vector<int> v;
    stack<int> st;

    for (ll i = 1; i <= 5000; i++)
    {
        if (i < 10)
        {
            v.pb(i);
        }
        else
        {
            int a = i, d;
            while (a >= 10)
            {
                d = a % 10;
                a = a / 10;
                st.push(d);
            }
            st.push(a);
            while (!st.empty())
            {
                d = st.top();
                st.pop();
                v.pb(d);
            }
        }
    }
    cout << v[n - 1] << endl;
}

signed main()
{
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}