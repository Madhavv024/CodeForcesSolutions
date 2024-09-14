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
    int n, critical_cells_count = 0;
    cin >> n;
    char c[2][n];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> c[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (i == 0)
            {
                if (c[i][j] == '.' && c[i][j - 1] == '.' && c[i][j + 1] == '.' && c[i + 1][j] == '.' && c[i + 1][j + 1] == 'x' && c[i + 1][j - 1] == 'x')
                    critical_cells_count++;
            }
            else
            {
                if (c[i][j] == '.' && c[i][j - 1] == '.' && c[i][j + 1] == '.' && c[i - 1][j] == '.' && c[i - 1][j + 1] == 'x' && c[i - 1][j - 1] == 'x')
                    critical_cells_count++;
            }
        }
    }
    cout << critical_cells_count << "\n";
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