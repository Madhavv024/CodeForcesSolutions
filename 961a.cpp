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

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> col(n+1,0);
    int completerows = 0;
    int points = 0;
    for (int i = 0; i < m; i++)
    {
        int num; cin>>num;
        col[num]++;
        if(col[num]==1){
            completerows++;
        }
        if(completerows==n){
            points++;
            for (int j = 1; j <= n; j++)
            {
                col[j]--;
                if(col[j]==0)completerows--;
            }
            
        }
    }
    cout<<points;
    
}

int32_t main()
{
    int tc=1;
    // cin>>tc;
    while(tc--)
    {
    solve();
    }
    return 0;
}