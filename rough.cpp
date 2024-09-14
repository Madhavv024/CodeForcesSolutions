/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
using ll=long long;
using lld = long double;
#define mod 10000000007
#define INF 1e18
#define pi 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define mp make_pair

bool funt(int n)
{
    string s="";
        int i = 1;
        int arr[] = {0,0,0,0,0,0,0,0,0};
        bool ans = false;
        int r = 3;
        while(r--)
        {
            s = s + to_string(n);
            i++;
            for(int k=0;k<s.size();k++)
            {
                if((s[k]-'0') == 0) return false;
                arr[(s[k]-'0')-1]++;
                
            }
            for(int j = 0;j<9;j++)
            {
                cout<<"---"<<arr[j]<<"\n";
                if(arr[i]==1) ans = ans*true;
                else ans = ans*false;
            }
            n = n*i;
        }
        return ans;

}

int32_t main()
{
    int tc=1;
    while(tc--)
    {
        int n; cin>>n;
        
        cout<<funt(n)<<"\n";
    }
    return 0;
}