#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n , k , m;
        cin>>n>>k>>m;
        int arr[n];
        int count=0;
        for (auto &x:arr)
        {
            cin>>x;
        }
        int num = arr[0];
        for (int i =1;i<n;i++)
        {
            if(arr[i]<=num) count++;
        }
        if(count<=k && 2*k<=m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}