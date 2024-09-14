#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    // write your code here
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    vector<int> brr;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        brr.push_back(num);
    }
    vector<int> prefix_sum(n, 0);
    for (int i = 0; i < m; i++)
    {
        prefix_sum[i] += brr[i];
        if (n - m + 1 + i < n)
        {
            prefix_sum[n - m + 1 + i] -= brr[i];
        }
    }
    
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] += prefix_sum[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << (prefix_sum[i] + arr[i]) % c << " ";
    }
    return 0;
}