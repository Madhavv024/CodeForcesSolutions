/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long long
using namespace std;
using ll=long long;
using lld = long double;
#define mod 10000000007
#define INF 1e18
#define pi 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define mp make_pair

int findMax(vector<int> &arr, int n, int i, unordered_map<int,int>&memo){
    if(i>=n) return 0;
    if(memo.find(i)!=memo.end()) return memo[i];
    int maxi = 0;
    for(int j = i+1;j<n;j++){
        if(arr[i]!=arr[j]){
            maxi = max(maxi, j - i);
        }
    }
    maxi = max(maxi , findMax(arr, n,i+1, memo));
    memo[i] = maxi;
    return maxi;
}

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // unordered_map<int, int> mp;
    // int ans = findMax(arr, n,0,mp);

    int maxDist = 0;
    for(int i = 0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            maxDist = max(maxDist, i);
        }
        if(arr[i]!=arr[n-1]){
            maxDist = max(maxDist , n-1-i);
        }
    }
    cout<<maxDist<<"\n";

}

int32_t main()
{
    int tc=1;
    // cin>>tc;
    while(tc--)
    {
    solve();
    }
    return 0;
}