#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

void solve()
{
    int count = 0;
    int n;
    cin >> n;
    vector<int> v(n), a(n + 1, 0);
    for (int &x : v)
    {
        cin >> x;
    }

    sort(v.begin(), v.end());
    int check = 0;
    int req = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= 1 && v[i] <= n && a[v[i]] == 0)
        {
            a[v[i]]++;
        }
        else
        {
            while(a[req]==1) req++;
            if(req < (v[i]+1)/2){
                a[req]=1;
                count++;
            }
            else{
                check = 1;
                break;
            }
        }
    }
    check ? cout << -1 << endl : cout << count << endl;
}

int32_t main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}