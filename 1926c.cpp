/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
using ll = long long;
using lld = long double;
#define mod 10000000007
#define INF 1e18
#define pi 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define mp make_pair

const int N = 2e5 + 1;

int s(int a)
{
    int res = 0;
    while (a)
    {
        res += a % 10;
        a /= 10;
    }
    return res;
}


int32_t main()
{
    int tc = 1;
    cin >> tc;
    vector<int> arr(N);
    for (int i = 1; i < N; i++)
    {
        arr[i] = arr[i - 1] + s(i);
    }
    while (tc--)
    {
        int n;
        cin >> n;
        cout << arr[n] << "\n";
    }
    return 0;
}