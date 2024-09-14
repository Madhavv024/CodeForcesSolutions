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
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        int a , b, c;
        cin>>a>>b>>c;
        if(a < b && b < c){
            cout<<"STAIR"<<"\n";
        }
        else if(a < b && b> c){
            cout<<"PEAK"<<"\n";
        }
        else cout<<"NONE"<<"\n";
    }
    return 0;
}