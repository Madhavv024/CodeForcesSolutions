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
        int count =0 , sum=0;
        int a[n];
        for (auto &x :a )
        {
            cin>>x; sum+=x; 
        }
        int exp = sum/n;
        if(sum%n!=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if(a[i]>exp)
                {
                    count++;
                }
            }
            cout<<count<<endl;
            
        }
        
    }
    return 0;
}