#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
#define mod 1000000007
using namespace std;


int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n; cin>>n;
        int a=0, b=0, c=0;
        for (int i = 2; i <=n ; i++)
        {
            if(n%i==0)
            {
                a = i;
                n = n/a;
            }
            if(n%i==0 && i!=a)
            {
                b = i;
                n = n/b;
            }
            if(n%i==0 && (i!=a && i!=b))
            {
                c = i;
                break;
            }

        }
        
    }
    return 0;
}