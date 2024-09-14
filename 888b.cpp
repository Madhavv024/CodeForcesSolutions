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
    int n;
    cin >> n;
    string commands;
    cin >> commands;

    int countU = 0, countD = 0, countL = 0, countR = 0;

    for (char command : commands) {
        if (command == 'U') {
            countU++;
        } else if (command == 'D') {
            countD++;
        } else if (command == 'L') {
            countL++;
        } else if (command == 'R') {
            countR++;
        }
    }

    int maxCommands = 2 * min(countU, countD) + 2 * min(countL, countR);

    cout << maxCommands << endl;
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