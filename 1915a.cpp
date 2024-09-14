/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
#define endl "\n"
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
    string arr[3][3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> arr[i][j];
        }
    }
    string ans = "";
    for (int i = 0; i < 3; ++i)
    {
        int a = 1, b = 1, c = 1;
        for (int j = 0; j < 3; ++j)
        {
            if (arr[i][j]=="A")
                a--;
            else if (arr[i][j] == "B")
                b--;
            else
                c--;
        }
        if (a == 0)
        {
            ans = "A";
            break;
        }
        else if (b == 0)
        {
            ans = "B";
            break;
        }
        else
        {
            ans = "C";
            break;
        }
    }
    cout << ans << endl;
}


int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}