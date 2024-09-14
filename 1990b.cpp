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
    int n , x , y;
    cin>>n>>x>>y;
    x-- ; y--;
    vector<int> arr(n);
    int curr = -1;
    for(int i = y-1;i>=0;i--){
        arr[i] = curr;
        curr = -curr;
    }   
    curr = -1;
    for(int i = x+1;i<n;i++){
        arr[i] = curr;
        curr = -curr;
    }
    for(int i = y;i<=x;i++) arr[i] = 1;
    for(int i:arr){
        cout<<i<<' ';
    }
    cout<<"\n";
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