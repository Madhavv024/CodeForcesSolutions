#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int q; cin>>q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> diff(n + 1, 0);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        diff[l] += 1;
        diff[r + 1] -= 1;
    }

    for (int i = 1; i <= n; i++)
    {
        diff[i] +=diff[i-1];
    }
    diff.pop_back();
    
    sort(arr.begin() , arr.end());
    sort(diff.begin() , diff.end());
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        int val=arr[i]*diff[i];
        sum+=val;
    }
    cout<<sum<<endl;
    
}

int32_t main()
{
    // write your code here
    // int tc;
    // cin >> tc;
    // while (tc--)
    
        solve();
    
    return 0;
}