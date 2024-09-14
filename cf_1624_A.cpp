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
        for (int i = 0; i < n; i++)
        {
            int num; cin>>num;
            a.push_back(num);
        }
        int num1 = *max_element(a.begin() , a.end());
        int num2 = *min_element(a.begin() , a.end());
        cout<<num1 - num2<<endl;
    }
    return 0;
}