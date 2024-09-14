#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    int tc=1; 
    while(tc--)
    {
        int n , m; cin>>n>>m;
        int arr[n] , brr[m];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>brr[i];
        }
        int i=0 , j = 0;
        int count =0;
        while(i<n && j<m)
        {
            int k = j;
            if(arr[i]==brr[j]) 
            {
                while(arr[i]==brr[j])
                {
                    count++;
                    j++;
                }
                j=k , i++;
            }
            if(arr[i]>brr[j])j++;
            if(brr[j]>arr[i])i++;
        }
        cout<<count<<endl;
    }
    return 0;
}