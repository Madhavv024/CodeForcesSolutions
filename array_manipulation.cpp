#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

void solve(){}

int32_t main()
{
    //write your code here
    int n , tc; cin>>n >>tc;
    vector<int> arr(n+2);


    while(tc--)
    {
        int a , b , k;
        cin>>a >>b>>k;
        arr[a] +=k; arr[b+1]-=k;
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i] +=arr[i-1];
    }
    
    cout<<*max_element(arr.begin(), arr.end())<<endl;

    return 0;
}