#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    //write your code here
    int tc; cin>>tc;
    while(tc--)
    {
        int a[26]{};
        int n; cin>>n;
        string s; 
        cin>>s;
        int check = 1;
        a[s[0]-'A']++;
        for (int i = 1; i < n; i++)
        {
            a[s[i]-'A']++;
            if(a[s[i]-'A'] > 1 && s[i]!=s[i-1]) 
            {
                check = 0;
                break;
            }

        }
        check ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}