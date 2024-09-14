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
int32_t main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n;
        string s;
        cin>>n>>s;
        int flg = 0;
        int count = 0;
        for(int i = 0;i<n;i++){
            if(i>0 && i<n-1){
                if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
                    flg = 1;
                    break;
                }
            }
            if(s[i]=='.')
                count++;
        }
        if(flg) cout<<2<<"\n";
        else cout<<count<<"\n";
    }
    return 0;
}