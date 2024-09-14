#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    // write your code here
    int maxn = 1000000;
    vector<int> isprime(maxn , 1);
    isprime[0] = isprime[1] = 0;
    for (int i = 2; i * i <= maxn; i++)
    {
        if (isprime[i])
        {
            for (int j = i*i; j <=maxn; j+=i)
            {
                isprime[j] = 0;
            }
        }
    }
    
    int tc;
    cin >> tc;
    while (tc--)
    {
        int num;
        cin >> num;
        int chec = sqrt(num);
        isprime[chec] == 1 && (chec * chec==num) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    return 0;
}