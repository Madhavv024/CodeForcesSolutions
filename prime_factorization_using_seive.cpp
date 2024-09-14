#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    //write your code here
    int n;cin>>n;
    vector<int> arr(n+1 , -1);
    for(int i = 2;i<=n;i++)
    {
        for(int j = i;j<=n;j+=i)
        {
            if(arr[j] == -1) arr[j] = i;
        }
    }

    while(n>1)
    {
        cout<<arr[n]<<" ";
        n/=arr[n];
    }
    return 0;
}