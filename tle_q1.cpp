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
        int n, x;
        cin>>n>>x;
        vector<int> num;
        int ind=-1;
        for (int i = 1; i <=n; i++)
        {
            if(i%3!=0) num.push_back(i);
        }
        for (int i = 0; i <=num.size(); i++)
        {
            if(num[i]==x) ind = i+1;
        }
        cout<<ind<<endl;
        
    }
    return 0;
}