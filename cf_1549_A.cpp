#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

bool prime(int n){
    if(n==1) return 0;
    int chck = 1;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0) chck = 0;
    }
    return chck;
}

int32_t main()
{
    //write your code here
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        cout<<((n-1)/2)<<" "<<n-1<<endl;
    }
    return 0;
}