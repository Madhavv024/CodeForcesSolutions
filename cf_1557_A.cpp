#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long double
using namespace std;
int32_t main()
{
    // write your code here
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n];
        int max_num = INT_MIN;
        long long total = 0;
        for (int i = 0;i<n;++i)
        {
            cin>>a[i];
            total+=a[i];
            max_num = max(a[i],max_num);
        }
        double count = n-1;
        double fin_sum =max_num + (total - max_num) /count;
        cout << fixed <<setprecision(10) << fin_sum << endl;
    }

    return 0;
}