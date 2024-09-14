#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    //write your code here
    int tc; cin>>tc;
    while (tc--)
    {
        int n; cin>>n;
        int count = n/10;
        if(n%10==9)
            count++;
        cout<<count<<endl;
    }
    
    return 0;
}