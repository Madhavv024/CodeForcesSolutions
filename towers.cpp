#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;



int32_t main()
{
    //write your code here
    int n; cin>>n;
    int a[n];
    for(auto &x:a) cin>>x;
    
    multiset<int> ms;
    ms.insert(a[0]);

    for (int i = 1; i < n; i++)
    {
        auto it = ms.upper_bound(a[i]);
        if(it == ms.end()) ms.insert(a[i]);
        else{
            ms.erase(it);
            ms.insert(a[i]);
        }
    }
    
    cout<<ms.size();
    
    return 0;
}