#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

vector<int> primes;

void prime_solver()
{
    int num = 10000004;
    bool p[num];
    for (int i = 2; i * i <= num; i++)
    {
        if (p[i] == 0)
        {
            for (int j = i * i; j <= num; j += i)
            {
                p[j] = 1;
            }
        }
    }
    for (int i = 2; i <= num; i++)
    {
        if (p[i] == 0)
            primes.push_back(i);
    }
}

int32_t main()
{
    int tc;
    cin >> tc;
    prime_solver();
    while (tc--)
    {
        int n;
        cin >> n;
        int size = primes.size();
        for (int i = 0; i < size; i++)
        {
            int p = primes[i];
            if (n % p == 0)
            {
                int a = n / p;
                if (a % p == 0)
                {
                    cout << p << " " << a / p << endl;
                    break;
                }
                else
                {
                    int actual_p = sqrt(a);
                    cout << actual_p << " " << p << endl;
                    break;
                }
            }
        }
    }
    return 0;
}