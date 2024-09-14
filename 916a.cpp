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
    int x, hh, mm, cnt = 0;
    cin >> x >> hh >> mm;

    auto hasSeven = [](int h, int m) -> bool {
        return (h / 10 == 7 || h % 10 == 7 || m / 10 == 7 || m % 10 == 7);
    };

    while (!hasSeven(hh, mm)) {
        cnt++;
        mm -= x;
        if (mm < 0) {
            mm += 60;
            hh--;
            if (hh < 0) {
                hh += 24;
            }
        }
    }
    cout << cnt << endl;
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