#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

int prefix[200004];
int cnt[200004];
int32_t main()
{
    // write your code here
    int n, k, q;
    cin >> n >> k >> q;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        prefix[l]++;
        prefix[r + 1]--;
    }

    for (int i = 1; i < 200005; i++)
    {
        prefix[i] += prefix[i - 1];
        if (prefix[i] >= k)
            cnt[i]++;
        cnt[i] += cnt[i - 1];
    }

    while(q--){
        int a , b;
        cin>>a>>b;
        cout<<cnt[b] - cnt[a-1]<<endl;
    }

    return 0;
}