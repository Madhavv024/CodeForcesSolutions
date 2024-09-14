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
    ll n,red=0,green=0,blue=0;
    string s;
    cin>>n>>s;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='R')
            red++;
        else if(s[i]=='G')
            green++;
        else
            blue++;
    }
    if(red==n || green==n || blue==n)
        cout<<s[0]<<endl;
    else if(red>0 && green>0 && blue>0)
        cout<<"BGR\n";
    else if(red==0)
    {
        if(green==1 && blue==1)
            cout<<"R\n";
        if(green>1 && blue>1)
            cout<<"BGR\n";
        else if(green==1 && blue>1)
            cout<<"GR\n";
        else if(green>1 && blue==1)
            cout<<"BR\n";
    }
    else if(green==0)
    {
        if(red==1 & blue==1)
            cout<<"G\n";
        if(red>1 && blue>1)
            cout<<"BGR\n";
        else if(red==1 && blue>1)
            cout<<"GR\n";
        else if(red>1 && blue==1)
            cout<<"BG\n";
    }
    else if(blue==0)
    {
        if(green==1 && red==1)
            cout<<"B\n";
        if(green>1 && red>1)
            cout<<"BGR\n";
        else if(green==1 && red>1)
            cout<<"BG\n";
        else if(green>1 && red==1)
            cout<<"BR\n";
    }

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