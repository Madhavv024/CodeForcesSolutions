#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(string s, int ind, char a[])
{
    if (ind == s.size())
    {
        return 0;
    }
    bool check = false;
    for (int i = 0; i < sizeof(a) / sizeof(char); i++)
    {
        if (s[ind] == a[i])
        {
            check = true;
        }
    }
    return check + solve(s, ind + 1, a);
}
int main()
{
    string s;
    getline(cin, s);
    char a[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    int ans = solve(s, 0, a);
    cout << ans << endl;
    return 0;
}