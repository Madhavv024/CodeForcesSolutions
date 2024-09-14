#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    //write your code here
    int tc; cin>>tc;
    while(tc--)
    {
        int n , k;
        cin>>n;
        while(n%2==0)
        {
            n = n/2;
        }
        if(n>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}