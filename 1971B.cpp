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
        string s; cin>>s;
        if(s.length()==1){
            cout<<"NO"<<"\n";
        }
        else{
            int flg =1;
            for(int i = 0;i<s.length()-1;i++){
                if(s[i]!=s[i+1]){
                    flg = 0;
                }
            }
            if(flg){
                cout<<"NO"<<"\n";
            }
            else{
                cout<<"YES"<<"\n";
                cout<<s[s.length()-1]+s.substr(0,s.length()-1)<<"\n";
            }
        }
    }
    return 0;
}