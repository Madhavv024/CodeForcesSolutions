#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int c = 1;
        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 - 1 << " " << c << endl;
        }
        else
        {
            int num = n - 1;
            cout << num / 2 - 2 << " " << num / 2 + 2 << " " << c << endl;
        }
    }
    return 0;
}