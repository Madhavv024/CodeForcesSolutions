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

int countSuneetWins(int a, int b, int c, int d) {
    int ans = 0;

    if(a>=c&&b>d||a>c&&b>=d)ans++;
    if(a>=d&&b>c||a>d&&b>=c)ans++;
    

    return ans*2;
}

void solve(){
    int a1 , a2 , b1 , b2;
    cin>>a1>>a2>>b1>>b2;
    cout<<countSuneetWins(a1,a2,b1,b2)<<"\n";
}

int32_t main()
{
    FAST_IO;
    int tc=1;
    cin>>tc;
    while(tc--)
    {
    solve();
    }
    return 0;
}