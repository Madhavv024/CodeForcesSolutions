#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        int arr[n];
        int count=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int num = arr[0];
        for (int i = 1; i < n; i++)
        {
            if(arr[i]>num) count++;
        }
        cout<<count<<endl;
        
        
        
    }
    return 0;
}