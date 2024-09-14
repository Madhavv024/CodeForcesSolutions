/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
using ll=long long;
using lld = long double;
#define mod 10000000007
#define INF 1e18
#define pi 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define mp make_pair

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    unordered_map<int, int> mp;
    for(int i : arr){
        if(mp.find(i)!=mp.end()){
            mp[i]++;
        }
        else mp[i] = 1;
    }
    //iterate over values if any found even, check = false;
    bool chec = false;
    for (const auto& pair : mp) {
        if (pair.second & 1) {
            chec = true;
        }
    }
    if(chec){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int32_t main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
    {
    solve();
    }
    return 0;
}