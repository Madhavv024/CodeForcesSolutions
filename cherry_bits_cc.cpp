#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long long
using namespace std;
int32_t main()
{
    // write your code here
    int n, m;
    cin >> n >> m;
    vector<vector<char>> mat(n , vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            mat[i][j] = c;
        }
    }

    int q;
    cin >> q;

    vector<vector<int>> prefix_sum(n + 2, vector<int>(m + 2, 0));

    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        prefix_sum[a][b]++;
        prefix_sum[c + 1][b]--;
        prefix_sum[c + 1][d + 1]++;
        prefix_sum[a][d + 1]--;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            prefix_sum[i][j] += prefix_sum[i - 1][j] + prefix_sum[i][j - 1] - prefix_sum[i - 1][j - 1];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (prefix_sum[i][j] % 2 != 0)
            {
                mat[i-1][j-1] == '0' ? mat[i-1][j-1] = '1' : mat[i-1][j-1] = '0';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }

    return 0;
}