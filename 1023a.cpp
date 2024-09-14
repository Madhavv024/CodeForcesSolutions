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

void solve() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    // Check if the lengths are compatible
    size_t pos = s.find('*');
    if (pos == string::npos) {
        // No wildcard, simple comparison
        if (s == t) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        // Wildcard present
        string prefix = s.substr(0, pos);
        string suffix = s.substr(pos + 1);

        // Check if t is long enough to accommodate both parts
        if (m < prefix.size() + suffix.size()) {
            cout << "NO\n";
            return;
        }

        // Check if t starts with prefix and ends with suffix
        if (t.substr(0, prefix.size()) == prefix && t.substr(m - suffix.size()) == suffix) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int32_t main() {
    FAST_IO;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
