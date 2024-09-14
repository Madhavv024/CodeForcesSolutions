/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long long
using namespace std;
using ll = long long;
using lld = long double;
#define mod 10000000007
#define INF 1e18
#define pi 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define mp make_pair

struct hash_pair
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2> &p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> XprefixSum(n + 1, 0), Yprefix(n + 1, 0);
    unordered_map<pair<int, int>, int, hash_pair> prefix_count;
    prefix_count[{0, 0}] = 1;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        XprefixSum[i] = XprefixSum[i - 1];
        Yprefix[i] = Yprefix[i - 1];
        if (s[i - 1] == 'U')
        {
            Yprefix[i]--;
        }
        else if (s[i - 1] == 'D')
        {
            Yprefix[i]++;
        }
        else if (s[i - 1] == 'L')
        {
            XprefixSum[i]--;
        }
        else if (s[i - 1] == 'R')
        {
            XprefixSum[i]++;
        }
        auto key = mp(XprefixSum[i], Yprefix[i]);
        cnt += prefix_count[key];
        prefix_count[key]++;
    }
    cout << cnt << "\n";
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