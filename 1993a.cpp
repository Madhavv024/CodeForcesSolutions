/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
using ll=long long;
using lld = long double;
#define mod 10000000007
#define INF 1e18
#define pi 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define mp make_pair

void solve(){
    int n; cin>>n;
    char c[4 * n];
    int cntA = 0, cntB = 0, cntC = 0, cntD = 0;

    for (int i = 0; i < 4 * n; i++) {
        cin >> c[i];
    }

    for (int i = 0; i < 4 * n; i++) {
        if (c[i] == 'A' && cntA < n) cntA++;
        else if (c[i] == 'B' && cntB < n) cntB++;
        else if (c[i] == 'C' && cntC < n) cntC++;
        else if (c[i] == 'D' && cntD < n) cntD++;
    }
    int ans = cntA + cntB + cntC + cntD;
    cout << ans << "\n";
}

int32_t main()
{
    FAST_IO;
    int tc=1;
    cin>>tc;
    while(tc--)
    {
    solve();
    }
    return 0;
}