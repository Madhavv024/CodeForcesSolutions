#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

int solve(int a, int b, vector<int> &prefix_sum)
{
    return prefix_sum[b] ^ prefix_sum[a-1];
}

int32_t main()
{
    // write your code here
    int n, tc;
    cin >> n >> tc;
    vector<int> arr(n+1);
    arr[0] = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        ans = max(ans, arr[i]);

    }
    
    vector<int> prefix_Sum(n+1);
    prefix_Sum[1] = arr[1];
    for (int i = 2; i <= n; i++)
    {
        prefix_Sum[i] = prefix_Sum[i-1] ^ arr[i];
    }
    
    while(tc--){
        int a , b;
        cin>>a >> b;
        cout<<solve(a , b, prefix_Sum)<<endl;
    }

    return 0;
}