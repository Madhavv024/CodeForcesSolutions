#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

int solve(int x, int n){
    int mod = n%4;
    int ans = 0;
    if(mod == 1) ans = - n;
    else if(mod == 2) ans = 1;
    else if(mod==3) ans = n+1;
    else ans = 0;

    if(x%2!=0) return x-ans;
    else return x+ans;
}

int32_t main()
{
    //write your code here
    int t; cin>>t;
    while(t--){
        int x, n; cin>>x>>n;
        cout<<solve(x,n)<<endl;
    }
    return 0;
}