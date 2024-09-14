#include <iostream>
#include <bits/stdc++.h>
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
    int tc = 1;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (auto &x : arr)
        {
            cin >> x;
        }
        vector<int> prefix_gcd(n+1);
        vector<int> suffix_gcd(n+2);
        prefix_gcd[1] = arr[0];
        suffix_gcd[n] = arr[n-1];
        for (int i = 2; i <=n; i++)
        {
            prefix_gcd[i] = gcd_cal(max(arr[i-1],prefix_gcd[i-1]),min(arr[i-1],prefix_gcd[i-1]));
        }
        for (int i = n-1; i >= 1; i--)
        {
            suffix_gcd[i] = gcd_cal(max(suffix_gcd[i+1],arr[i-1]) , min(suffix_gcd[i+1],arr[i-1]));
        }
        int ans =0;
        for (int i = 0; i <n ; i++)
        {
            ans = max(gcd_cal(prefix_gcd[i] , suffix_gcd[i+2]), ans);
        }
        cout<<ans<<endl;

    }
    return 0;
}