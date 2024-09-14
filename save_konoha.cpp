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
        priority_queue<ll> v;
        ll pain; cin>>pain;
        for(int i=0;i<n;i++){
            int sol; cin>>sol;
            v.push(sol);
        }
        ll ans = 0;
        ll low1;
        bool check = true;
        while(pain>0)
        {
            int power = v.top();
            if(power == pain){
                ans++;
                break;
            }
            else{
                pain = pain - power;
                power = power/2;
                v.pop();
                v.push(power);
                ans++;
            }
            if(v.top()==0){
                check = false;
                break;
            }
        }
        // cout<<v[low1]<<endl;
        check ? cout<<ans<<endl : cout<<"Evacuate"<<endl;
        
    }
}

int main()
{
    solve();
    return 0;
}