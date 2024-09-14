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
        vector<int> a;
        for(int i = 0;i<n;i++){
            int num;
            cin>>num; a.push_back(num);
        }

        int ind=0;
        for (int i = 1; i < n; i++)
        {
            if(a[i]!=a[i-1] && a[i+1]!=a[i])
            {
                ind = i;
                break;
            }
            else if(a[i]!=a[i-1])
            {
                ind = i-1;
                break;
            }
        }
        cout<<ind+1<<endl;
        
    }
    return 0;
}