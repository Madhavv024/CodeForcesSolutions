#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long long
using namespace std;


void solve(int open, int close, string ans, vector<string> v)
{
    if (open == 0 && close == 0)
    {
        v.push_back(ans);
        return;
    }
    else
    {
        
        if (close > open)
        {
            solve(open, close - 1, ans + ")",v);
        }
        if(open>0) solve(open - 1, close, ans + "(",v);
    }
}

int32_t main()
{
    // write your code here
    int n;
    cin >> n;
    int open = n, close = n;
    string ans = "(";
    vector<string> v;
    solve(open - 1, close, ans,v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}