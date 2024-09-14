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

int quasiNum(int n1)
{
    int num = 0;
    int place = 1;
    while (n1 > 0)
    {
        int digit = n1 % 10;
        if (digit > 0)
        {
            num += place;
        }
        n1 /= 10;
        place *= 10;
    }
    return num;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    while (n > 0)
    {
        arr.pb(quasiNum(n));
        n -= quasiNum(n);
        
    }
    cout << arr.size() << "\n";
    for (int i : arr)
    {
        cout << i << ' ';
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