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
        string s; cin>>s;
        int len = s.size();
        int arr[26]{};
        for (int i = 0; i <len; i++)
        {
            arr[s[i]-'a']++;
        }
        int n = 0 , m = 0;
        for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
        {
            if(arr[i]==1) n++;
            if(arr[i]>=2) m++;
        }
        
        cout<<m+(n/2)<<endl;

                
    }
    return 0;
}