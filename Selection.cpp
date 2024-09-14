#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0;i<n;++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j]<arr[mini]){ mini = j;}
        }
        swap(arr[mini] , arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int32_t main()
{
    int tc=1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}