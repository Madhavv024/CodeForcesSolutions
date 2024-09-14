#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long long
using namespace std;
int32_t main()
{
    // write your code here
    int n, k;
    cin >> n >> k;
    int arr[n + 1];
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (i <= k)
            sum += arr[i];
    }
    // cout << sum << endl;
    int min_sum = INT_MAX;
    int ind = 0;
    for (int i = k; i <= n; i++)
    {
        // cout << "now sum is--" << sum << endl;
        if (sum < min_sum)
        {
            min_sum = sum;
            ind = i - k;
        }
        sum = sum - arr[i - k +1] + arr[i + 1];
    }

    cout << ind + 1;

    return 0;
}