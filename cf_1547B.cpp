#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    deque<char> de;
    char ma = 'a';
    for (int i = 0; i < (int)s.length(); i++)
    {
        ma = max(s[i], ma);
        de.push_back(s[i]);
    }
    for (char i = ma; i >= 'a'; i--)
    {
        if (de.size() == 0)
        {
            cout << "NO" << endl;
            return;
        }

        if (de.front() == i)
        {
            de.pop_front();
        }
        else if (de.back() == i)
        {
            de.pop_back();
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (de.size() == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}