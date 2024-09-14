#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long long
using namespace std;

int solve(int a, int b, int A, int B, vector<vector<int>> &prefix_sum)
{
    return prefix_sum[A][B]-prefix_sum[a-1][B]-prefix_sum[A][b-1] + prefix_sum[a-1][b-1];
}

int32_t main()
{
    FAST_IO;
    // write your code here
    int n;
    int tc;
    cin >> n >> tc;
    vector<vector<int>> arr(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch;
            cin >> ch;
            if (ch == '*')
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
        }
    }

    vector<vector<int>> prefix_Sum(n + 1, vector<int>(n + 1));
    prefix_Sum[1][1] = arr[1][1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            prefix_Sum[i][j] = prefix_Sum[i - 1][j] + prefix_Sum[i][j - 1] + arr[i][j] - prefix_Sum[i - 1][j - 1];
        }
    }

    while (tc--)
    {
        int a, b, A, B;
        cin >> a >> b >> A>> B;
        
        cout << solve(a, b, A, B, prefix_Sum) << endl;
    }

    return 0;
}