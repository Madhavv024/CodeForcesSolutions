#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

int gcd_cal(int n , int m)
{
    if(m==0) return n;
    return gcd_cal(m , n%m);
}
int32_t main()
{
    int tc=1; 
    vector<int> nums;
    int n , l;
    cin>>n>>l;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < l; i++)
    {
        if(gcd_cal(max(arr[i],i),min(arr[i],i))==1) nums.push_back(i);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}