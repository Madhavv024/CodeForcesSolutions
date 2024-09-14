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
        int a1, a2;
        cin >> a1 >> a2;
        int b1, b2;
        cin >> b1 >> b2;
        int f1, f2;
        cin >> f1 >> f2;

        int dist = abs(a1 - b1) + abs(a2 - b2);

        if (a1 == f1 && b1 == f1)
        {
            if (a2 < f2 && f2 < b2 || a2 > f2 && f2 > b2)
                dist += 2;
        }
        else if (a2 == f2 && b2 == f2)
        {
            if (a1 < f1 && f1 < b1 || a1 > f1 && f1 > b1)
                dist += 2;
        }
        cout << dist << endl;
    }
    return 0;
}