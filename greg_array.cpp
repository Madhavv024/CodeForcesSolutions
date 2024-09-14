#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

void solve() {}

int32_t main()
{
    // write your code here

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    vector<pair<int, int>> query;

    vector<int> val;

    for (int i = 1; i <= m; i++)
    {
        int l, r;
        cin >> l >> r;
        query.push_back({l, r});
        int d;
        cin >> d;
        val.push_back(d);
    }
    vector<int> diff(n+1,0);

    for(int i=1 ; i<=n ; ++i)
        diff[i] = arr[i] - arr[i-1];

    while (k--)
    {
        int x, y;
        cin >> x >> y;
        x--, y--;
        for (int i = x; i <= y; i++)
        {
            diff[query[i].first] += val[i];
            if(query[i].second + 1 <= n)
                diff[query[i].second + 1] -= val[i];
        }
    }

    for (int i = 1; i <= n; i++)
        arr[i] = arr[i-1] + diff[i];

    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";

    return 0;
}