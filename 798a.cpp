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
    string s; cin>>s;
    int cnt = 0;
    bool chk = true;
    int n = s.size();
    for (int i = 0; i < n / 2 ; i++)
    {
        if(s[i]!=s[n-1-i]) cnt++;
        if(cnt>1) {
            chk = false;
            break;
        }
    }
    if ( cnt == 1 || (cnt==0 && (n&1))){
        cout<< "YES";
        
    }else cout<<"NO";

    
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