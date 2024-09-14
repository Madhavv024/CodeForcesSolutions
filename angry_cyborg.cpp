#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

int32_t main()
{
    // write your code here
    FAST_IO;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n + 2, 0);
        vector<pair<int, int>> querries;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            querries.push_back({l,r});
            arr[l]++;
            arr[r + 1]--;
        }
        for (int i = 1; i <= n; i++)
        {
            arr[i] += arr[i - 1];
        }
        for(auto i : querries){
            int l = i.first;
            int r = i.second;
            arr[r + 1] -= r - l + 1;
        }

        for (int i = 1; i <= n; i++)
        {
            arr[i] += arr[i - 1];
        }

        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}