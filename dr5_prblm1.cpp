#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

int gcd_cal(int n , int m)
{
    if(m==0) return n;
    return gcd_cal(m , n%m);
}

int32_t main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; int q;
        cin>>n>>q;
        vector<int> prefix_gcd(n+1,0);
        vector<int> suffix_gcd(n+2,0);

        int arr[n];
        for (auto &x:arr)
        {
            cin>>x;
        }
        vector<pair<int , int>> queries;
        for (int i = 0; i < q; i++)
        {
            int l ,  r; cin>>l>>r;
            queries.push_back({l,r});
        }
        prefix_gcd[1] = arr[0];
        suffix_gcd[n] = arr[n-1];
        for (int i = 2; i <=n; i++)
        {
            prefix_gcd[i] = gcd_cal(max(arr[i-1],prefix_gcd[i-1]),min(arr[i-1],prefix_gcd[i-1]));
        }
        for (int i = n-1; i >= 0; i--)
        {
            suffix_gcd[i] = gcd_cal(max(suffix_gcd[i+1],arr[i-1]) , min(suffix_gcd[i+1],arr[i-1]));
        }
        
        for (int i = 0; i < q; i++)
        {
            int l = queries[i].first;
            int r = queries[i].second;
            int x = prefix_gcd[l-1];
            int y = suffix_gcd[r+1];
            cout<<gcd_cal(max(x , y) , min(x, y))<<endl;
        }
        
        
        
        
    }
    return 0;
}