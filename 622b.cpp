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

void solve()
{
    string s;
    int n, hrs, mnts, totalMinutes, finalHours, finalMinutes;
    cin >> s;
    cin >> n;
    hrs = stoi(s.substr(0, 2));  
    mnts = stoi(s.substr(3, 2));  
    hrs = stoi(s.substr(0, 2));   
    mnts = stoi(s.substr(3, 2));  
    
    totalMinutes = mnts + n;

    finalHours = hrs + (totalMinutes / 60);
    finalMinutes = totalMinutes % 60;  
    finalHours %= 24;

    cout << (finalHours < 10 ? "0" : "") << finalHours << ":"
         << (finalMinutes < 10 ? "0" : "") << finalMinutes << endl;
}

signed main()
{
    FAST_IO;
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}