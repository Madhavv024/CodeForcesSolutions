/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
using ll = long long;
using lld = long double;
#define mod 10000000007
#define INF 1e18
#define pi 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define mp make_pair

void solve()
{
    int n;
    string s, t = "";
    cin>>n>>s;

    int ind = 0;
    while(ind < n){
        if((ind <= n - 3) && s[ind] == 'o' && s[ind + 1] == 'g' && s[ind + 2] == 'o'){
            ind += 3;
            t += "***";
            while(ind <= n - 2 && s[ind] == 'g' && s[ind + 1] == 'o'){ind += 2;}
        }
        else{t += s[ind++];}
    }
    cout<<t<<"\n";
}

int32_t main()
{
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}