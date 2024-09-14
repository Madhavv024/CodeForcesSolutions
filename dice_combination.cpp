#include <iostream>
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int combinations(int n, vector<int> &v)
{
    if (v[n] != -1)
    {
        return v[n];
    }
    else
    {
        if (n == 0)
        {
            return v[n] = 1;
        }
        int ans = 0;
        for (int i = 1; i <= 6; i++)
        {
            if (n - i >= 0)
            {
                ans = (ans + (combinations(n - i, v)) % mod) % mod;
            }
        }
        return v[n] = ans;
    }
}
int32_t main()
{

    int n;
    cin >> n;
    vector<int> v(n + 5);
    fill(v.begin(), v.end(), -1);
    cout << combinations(n, v);
    return 0;
}