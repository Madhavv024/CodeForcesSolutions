#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

int solve(int ind, int prev_ind, int n, vector<int> &arr)
{
    if(ind==n) return 0;
    int len = 0 + solve(ind + 1, ind, n, arr);
    if (prev_ind == -1 || arr[ind] > arr[prev_ind])
    {
        len = max(len , 1+solve(ind+1 , ind , n,arr));
    }
    return len;
}

int32_t main()
{
    // write your code here
    int n;
    cin >> n;
    vector<int> arr(n + 1, -1);
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        arr[i] = num;
    }
    cout<<solve(0 , -1 , n , arr);
    return 0;
}