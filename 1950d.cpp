/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
const int MAX = 100'007;
using namespace std;
using ll = long long;
using lld = long double;
#define mod 10000000007
#define INF 1e18
#define pi 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define mp make_pair

vector<int> binary_decimal;

bool check(int n)
{
    if (n == 1)
        return true;

    bool ans = false;
    for (int i : binary_decimal)
    {
        if (n % i == 0)
        {
            ans |= check(n / i);
        }
    }
    return ans;
}

void solve()
{
    int n; cin>>n; cout << ( check(n) ? "YES\n" :"NO\n"); 
}

int32_t main()
{
    for (int i = 2; i < MAX; i++)
    {
        int curr = i;
        bool bad = false;
        while (curr)
        {
            if (curr % 10 > 1)
            {
                bad = true;
                break;
            }
            curr = curr / 10;
        }
        if (!bad)
            binary_decimal.pb(i);
    }
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}