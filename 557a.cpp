/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include <bits/stdc++.h>
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
    int n; cin>>n;
    int min1 , max1 , min2 , max2 , min3 , max3;
    cin>>min1>>max1>>min2>>max2>>min3>>max3;
    vector<int> ans; 
    int first = min1, secon = min2, third = min3;
    int rem = n - (first + secon + third);
    int max_add_first = max1 - first;
    int add_first = min(max_add_first, rem);
    first += add_first;
    rem -= add_first;
    int max_add_second = max2 - secon;
    int add_second = min(max_add_second, rem);
    secon += add_second;
    rem -= add_second;
    third += rem;
    cout<<first<<" "<<secon<<" "<<third;
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