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
        int n , sum = 0; cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum<n) cout<<1<<endl;
        else{
            cout<<sum-n<<endl;
        }        
    }
    
    return 0;
}