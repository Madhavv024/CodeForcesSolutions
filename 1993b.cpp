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

void solve() {
    int n , cnte = 0;
    cin >> n;
    vector<int> even;
    int maxo = -1 , mxe = -1;
    for(int i = 0;i<n;i++){
        int num; cin>>num;
        if(num%2==1) maxo = max(maxo , num);
        else even.push_back(num) , cnte++;
    }
    sort(even.begin(), even.end());
    if(maxo == -1 || cnte==0){
        cout<<0<<"\n";
        return;
    }
    bool t = (maxo < even[0]);
    even[0] += maxo;
    for (int i = 1; i < cnte; i++)
    {
        if(even[i]> even[i-1]){t = 1;}
        even[i] += even[i-1];
    }
    
    cout<<cnte + t<<"\n";
}


signed main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
    {
    solve();
    }
    return 0;
}