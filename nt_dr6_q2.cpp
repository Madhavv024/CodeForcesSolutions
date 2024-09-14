#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

vector<int> primes;
int arr[1001]{};
void primes_sol()
{

    for (int i = 2; i <= 1000; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= 1000; j += i)
            {
                arr[j] = 1;
            }
        }
    }
    for (int i = 2; i <= 1000; i++)
    {
        if (arr[i] == 0)
            primes.push_back(i);
    }
}

int32_t main()
{
    // int tc = 1;
    // while (tc--)
    primes_sol();

    int n, k;
    cin >> n >> k;
    unordered_map<int, int> nold;
    int size = primes.size();
    for (int i = 0; i < size - 1; i++)
    {
        nold[primes[i] + primes[i + 1] + 1]++;
    }
    int check = 0;
    for (int i = 0; i <= n; i++)
    {
        if ((arr[i] == 0) and nold[i])
        {
            k--;
        }
        if (k <= 0)
        {
            check = 1;
            break;
        }
    }
    check == 1 ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}