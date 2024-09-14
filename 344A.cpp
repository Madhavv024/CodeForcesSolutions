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
    int n , count = 1;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]!=arr[i+1]) count++;
    }
    cout<<count;
    return 0;
}