#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

int solve(int l , int r, int prefixsum[]){
    if(l==0) return prefixsum[r];
    return prefixsum[r] - prefixsum[l-1];
}

int32_t main()
{
    //write your code here
    int n; int tc;
    cin>>n>>tc;
    int arr[n];
    for(auto &x : arr){
        cin>>x;
    }
    int prefixsum[n];
    prefixsum[0] = arr[0];
    for (int i = 1; i <n; i++)
    {
        prefixsum[i] = prefixsum[i-1] + arr[i];
    }
    while(tc--){
        int l , r ; cin>>l>>r;
        l--;
        r--;
        cout<<solve( l, r,prefixsum)<<endl;
    }

    return 0;
}