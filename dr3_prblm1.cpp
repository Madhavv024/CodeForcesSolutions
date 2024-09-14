#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define int long long
using namespace std;

int n = 1000000;
vector<int> primes;

void prime_adder()
{
    bool p[n + 1];
    for (int i = 2; i * i <= n; i++)
    {

        if (p[i]==0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                p[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (p[i]==0)
        {
            primes.push_back(i);
        }
    }
}

int32_t main()
{
    // write your code here
    FAST_IO
    prime_adder();
    int tc;
    cin >> tc;
    while (tc--)
    {
        int d;
        cin >> d;
        int ans = 1;
        int j;
        for (int i = 0; i < primes.size(); i++)
        {
            if (primes[i] - ans >= d)
            {
                ans = ans * primes[i];
                j = primes[i];
                break;
            }
        }
        for (int i = 0; i < primes.size(); i++)
        {
            if (primes[i] - j >= d)
            {
                ans = ans * primes[i];
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}