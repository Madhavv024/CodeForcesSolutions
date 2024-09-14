#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
#define mod 998244353
using namespace std;
int32_t main()
{
    // write your code here
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> queries;
    vector<int> prefix(n + 1, 0), ans(n + 1);
    int i = 0;
    while (i<k)
    {
        int l, r;
        cin >> l >> r;
        queries.push_back({l, r});
        i++;
    }
    ans[1]=1;
    for (int i = 1; i <= n; i++)
    {
        if (i > 2)
        {
            ans[i] += ans[i - 1];
            ans[i] %= mod;
        }
        ans[i] += prefix[i];
        ans[i] %= mod;

        for (int j = 0; j < k; j++)
        {
            int left = i + queries[j].first, right = i + queries[j].second + 1;
            if (left <= n)
            {
                prefix[left] += ans[i];
                prefix[left] %= mod;
            }
            if (right <= n)
            {
                prefix[right] -= ans[i];
                prefix[right] += mod;
                prefix[right] %= mod;
            }
        }
    }

    cout << ans[n];
    return 0;
}