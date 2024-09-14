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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    vector<int> st(k);
    for (int i = 0; i < k; i++)
    {
        cin >> st[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    int leadInd = 0;
    for (int i = 0; i < st.size(); i++)
    {
        int count = st[i];
        int eleInd = (leadInd + count) % arr.size();
        cout<<arr[eleInd]<<' ';
        arr.erase(arr.begin() + eleInd);
        leadInd = eleInd % arr.size();
    }
}

int32_t main()
{
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}