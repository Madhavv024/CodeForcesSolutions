#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
#define mod 1000000007
using namespace std;

int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        int res = 1;
        if (a == 0 and b == 0)
            cout << 1 << endl;
        else if (a == 0)
            cout << 0 << endl;
        else
        {
            while (b)
            {
                if (b % 2 == 0)
                {
                    b = b / 2;
                    a = (a * a) % mod;
                }
                else
                {
                    b -= 1;
                    res = (res * a) % mod;
                }
            }
            cout << res % mod << endl;
        }
    }
    return 0;
}