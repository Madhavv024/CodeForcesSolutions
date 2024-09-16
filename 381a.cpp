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
    while(tc--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int s = 0 , d = 0 , l = 0 , r = n-1 , turn = 1;
        while(l<=r){
            if(turn){
                if(arr[l]>arr[r]){
                    s+= arr[l];
                    l++;
                }else{
                    s+=arr[r]; 
                    r--;
                }
                turn = 0;
            }else{
                if(arr[l]>arr[r]){
                    d+= arr[l];
                    l++;
                }else{
                    d+=arr[r]; 
                    r--;
                }
                turn = 1;
            }
        }
        cout<<s<<" "<<d<<"\n";
    }
    return 0;
}