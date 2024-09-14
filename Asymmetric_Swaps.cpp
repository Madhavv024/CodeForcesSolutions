#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    //write your code here
    int tc; cin>>tc;
    while (tc--)
    {
        int n; cin>>n;
        vector<int> arr;

        for (int i = 0; i < 2*n; i++)
        {
            int num; cin>>num;
            arr.push_back(num);
        }
        sort(arr.begin(), arr.end());

        int min_sum = abs(arr[0] - arr[n-1]);
        for (int i = n; i <= 2*n;++i)
        {
            min_sum = min(min_sum,abs(arr[i-n]-arr[i-1]));
        }
        cout<<min_sum<<endl;
        
    }
    
    return 0;
}