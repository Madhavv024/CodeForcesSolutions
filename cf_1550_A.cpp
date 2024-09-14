#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    // write your code here
    int tc;
    cin >> tc;
    while (tc--)
    {
        int sum;
        cin >> sum;
        int count = 0;
        int num = 1;
        while (sum > 0)
        {
            sum -= num;
            num += 2;
            count++;
        }
        cout << count<<endl;
    }

    return 0;
}