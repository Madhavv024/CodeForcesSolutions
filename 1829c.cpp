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
    vector<pair<int, string>> ppList(n);
    for (int i = 0; i < n; ++i) {
        cin >> ppList[i].first >> ppList[i].second;
    }

    int min1 = INT_MAX;  
    int min2 = INT_MAX;  
    int bothMin = INT_MAX; 

    for (const auto& p : ppList) {
        if (p.second[0] == '1') {
            min1 = min(min1, p.first);
        }
        if (p.second[1] == '1') {
            min2 = min(min2, p.first);
        }
        if (p.second[0] == '1' && p.second[1] == '1') {
            bothMin = min(bothMin, p.first);
        }
    }

    int result;
    if (min1 != INT_MAX && min2 != INT_MAX) {
        result = min(min1 + min2, bothMin);
    } else {
        result = bothMin;
    }

    if (result == INT_MAX) {
        cout << -1 << endl; // or any error value
    } else {
        cout << result << endl;
    }
}

int32_t main()
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