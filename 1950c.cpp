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
int32_t main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int hrs = (s[0] - '0') * 10 + (s[1] - '0');
        if (hrs < 12 && hrs) //and hrs not equal to 0
        {
            cout << s + " AM" << "\n";
        }
        else if (hrs == 0)
        {
            cout << "12" + hrs + s.substr(2) + " AM" << "\n";
        }
        else
        {
            hrs = hrs > 12 ? hrs - 12 : hrs;
            cout << (hrs < 10 ? "0" : "") << hrs << s.substr(2) + " PM" << "\n";
        }
    }
    return 0;
}