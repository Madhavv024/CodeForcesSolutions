/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long long
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
    int tc;
    cin >> tc;
    while (tc--)
    {
int n; cin>>n;
        string s; cin>>s;
        string s2; cin>>s2;
        string co; cin>>co;
        string encryptedString = "";
    for (size_t i = 0; i < n; ++i) {
        int diff = (((s2[0]-'a') - (s[0]-'a')))%26;
        char encryptedChar = ((co[i] - 'a') + diff) % 26 + 'a';
        encryptedString += encryptedChar;
    }
    cout<<encryptedString;
    }
    return 0;
}