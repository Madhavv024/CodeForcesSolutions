/*
    वक्रतुण्ड महाकाय सूर्यकोटि समप्रभ।
    निर्विघ्नं कुरु मे देव सर्वकार्येषु सर्वदा॥
*/
#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    int n , k;cin>>n;
    int arr[n+1];
    for(int i = 1;i<=n;i++)
    {
        cin>>k;
        arr[k] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}