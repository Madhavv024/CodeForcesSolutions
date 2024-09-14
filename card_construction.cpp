#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <numeric>
#include <climits>
typedef long long ll;
using namespace std;

void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        v.push_back(-1);
        v.push_back(2);
        ll i = 2;
        ll cards = 0;
        while(cards<=INT_MAX) 
        {
            ll card = v[i - 1] + i - 1 + (i * 2);
            v.push_back(card);
            i++;
            cards = card;
        }
        ll ans = 0;
        ll low1;

        while (n > 1)
        {
            low1 = lower_bound(v.begin(), v.end(), n) - v.begin();
            if(v[low1] == n){
                ans++;
                break;
            }
            else{
                low1-=1;
                n = n - v[low1];
                ans++;
            }
        }
        // cout<<v[low1]<<endl;
        cout<<ans<<endl;
    }
}

int main()
{
    solve();
    return 0;
}