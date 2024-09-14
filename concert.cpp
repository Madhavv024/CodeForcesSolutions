#include <iostream>
#include <bits/stdc++.h>
// #define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

int32_t main()
{
    // write your code here
    int n, m;
    cin >> n >> m;
    multiset<int> v1;
    while (n--)
    {
        int in;
        cin >> in;
        v1.insert(in);
    }
    int a[m];
    for (auto &x : a)
        cin >> x;
    int i = 0;
    while (m--)
    {
        auto it = v1.upper_bound(a[i]);
        // cout<<a[i]<<" will buy this ticket at index "<<(it-v1.begin())<<endl;
        if ((it) != v1.begin())
        {
            it--;
            cout << *it << endl;
            v1.erase(v1.find(*it));
        }
        else
        {
            cout << -1 << endl;
        }
        i++;
    }

    return 0;
}