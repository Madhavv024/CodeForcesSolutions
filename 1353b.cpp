#include <bits/stdc++.h>
#include <utility>
using namespace std;
 
#define fore(i, init, n) for(int i = init; i < n; i++)
#define FIN ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb(a) push_back(a)
#define INF (1LL<<50)
#define ll long long
#define snd second
#define fst first
#define endl "\n"
#define SZ(a)  a.size()
#define K 17
 
ll n,k,t,a[50],b[50];
int main(){
    FIN
    cin>>t;
    fore(_,0,t){
        cin>>n>>k;
        ll total = 0;
        fore(i,0,n){
            cin>>a[i];total+=a[i];
        }
        fore(i,0,n)cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        ll res = total;
        fore(i,0,k){
            total = total-a[i]+b[n-1-i];
            res = max(res,total);
        }
        cout<<res<<endl;
    }
    return 0;
}