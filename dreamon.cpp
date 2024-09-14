#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#define int long long
using namespace std;

int ans = 0;

void fun(int n, int c)
{
    if (c == 0)
    {
        if (n == 0)
        {
            ans++;
            return;
        }
        return;
    }
    fun(n-1,c-1);
    fun(n+1,c-1);
}

int32_t main()
{

    string s1;
    getline(cin, s1);
    string s2;
    getline(cin, s2);

    int count1 = 0, count2 = 0, count3 = 0;

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '+')
            count1++;
        if (s1[i] == '-')
            count1--;
        if (s2[i] == '+')
            count2++;
        if (s2[i] == '-')
            count2--;
        if (s2[i] == '?')
            count3++;
    }

    fun(abs(count2-count1), count3);

    double fin = ans / pow(2,count3);
    count1 == count2 && count3==0 ? cout << fixed << setprecision(10) << 1 : cout << fixed << setprecision(10)<< fin;

    return 0;
}