/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <bitset>
#include <cstdlib>
#include <iomanip>
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
#define TEST int T; cin >> T; while (T--)
#define MOD(n) n%1000000007
#define VII vector<pair<int, int>>
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VB vector<bool>
#define FF first
#define SS second
#define LONGINT << fixed << setprecision(0)
#define FOR(i, n) for(long long i=0; i<n; i++)
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna cin.tie(NULL); cout.tie(NULL);
#define VIN(X, N) for(int i=0; i<N; i++){int V; cin >> V; X.push_back(V);};
#define VOUT(x,X) for(auto x:X) cout << x << " ";
#define SORT(V) sort(V.begin(), V.end())
#define REVERSE(V) reverse(V.begin(), V.end())
#define ADD(V) accumulate(V.begin(), V.end(), 0)
#define PI 3.1415926535897932384626433832795
#define endl "\n"
#define OLD freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

/**
* Limits in C++ for reference
* _____________________________________________________________________________________
* |Sr| Macro Name | Description                     | Value
* |No|____________|_________________________________|__________________________________
* |1.| ULLONG_MAX | Maximum value unsigned long long| 18,446,744,073,709,551,615 (10^20)
* |2.| LLONG_MAX  | Maximum value long long         | 9,223,372,036,854,775,807 (10^19)
* |3.| LLONG_MIN  | Minimum value long long         |-9,223,372,036,854,775,808 -1*(10^19)
* |4.| INT_MAX    | Maximum value int               | 2,147,483,647 (10^10)
* |5.| INT_MIN    | Minimum value int               |-2,147,483,648 (10^10)
*/
int isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}
long long lcm(int a, int b) {return (a / __gcd(a, b)) * b;}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
int maxfreqof(vector<int>& nums) { int count=0, ans=0; for(int n:nums) { if(count==0) ans = n; (n==ans) ? (count++) : (count--); } return ans; }
int MEX(set<int> V){ set<int>::iterator j; int i=0; for (j=V.begin(); j!=V.end(); j++, i++) if(*j!=i) return i; return *(V.end())+1; }
int maxfreq(vector<int> V) { int C=1, MAX=0; SORT(V); int pivot = V[0]; for(int i=1; i<V.size(); i++) { if(V[i]!=pivot) { pivot = V[i]; C=0; } C++; MAX = max(MAX, C); } return MAX; }

void solve() {
    int n , m , q;
    cin>>n>>m>>q;
    vector<int> ff;
    for (int i = 1; i <= sqrt(m); i++)
    {
        if(m % i == 0){
            ff.pb(i);
            ff.pb(m/i);
        }
    }
    
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;

    int fctrs = ff.size();
    vector<int> brkPnts(fctrs, 0);

    vector<vector<int>> vals(fctrs, vector<int>(n));

    FOR(j,fctrs){
        FOR(i, n){
            vals[j][i] = (arr[i] % ff[j]);//saving the value array for every factor with its modulo
            if(i>0 && vals[j][i-1] > vals[j][i]) brkPnts[j]++; //for every factor we are calculating number of breakpoints 
        }
    }
    // process queries

    while(q--){
        int t; cin>>t;
        if(t==1){
            int i , x; cin>>i>>x; 
            i--;
            //for each factor
            FOR(j,fctrs){
                //for old values remove the old break points
                if(i>0 && vals[j][i-1] > vals[j][i]) brkPnts[j]--;
                if(i<n-1 && vals[j][i] > vals[j][i+1]) brkPnts[j]--;
                
                //change the value with modulo;
                vals[j][i] = x % ff[j];
                //add the new break points;
                if(i>0 && vals[j][i-1] > vals[j][i]) brkPnts[j]++;
                if(i<n-1 && vals[j][i] > vals[j][i+1]) brkPnts[j]++;
        
                
            }
        }else{
            int k; cin>>k;
            int g = __gcd(m,k);
            if(g==1){
                cout<<"YES\n"; continue;
            }
            bool ans = false;
            for (int i = 0; i <fctrs; i++)
            {
                if(ff[i]==g){
                    if(brkPnts[i] < m/g){
                        ans = 1; break;
                    }
                }
            }
            if(ans) cout<<"YES\n";
            else cout<<"NO\n";
            
        }
    }

}

vector<int> calculateIndegreeOfDirectedGraph(const vector<vector<int>>& times){
    int n = times.size();
    vector<int> indegree(n, 0);

    for (const auto& edge : times) {
        int v = edge[1] - 1; // convert to 0-based
        indegree[v]++;
    }

    return indegre;

}

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<int> dis(n,0);
    //create adjacy list

    vector<pair<int, int>> adj[n];

    for (auto &t:times)
    {
        int u = t[0]-1;
        int v = t[1]-1;
        int w = t[2];
        adj[u].push_back({v , w});
    }
    
    dis[k] = 0;

    vector<int> indegree = calculateIndegreeOfDirectedGraph(times);

    queue<int> q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0) q.push(i);
    }

    while(!q.empty()){
        int node = q.peek();
        q.pop;

        for(auto &eachNgh: adj[node]){
            int ngh = eachNgh.first;
            int w = eachNgh.second;
            dis[ngh] = max(dis[ngh], w + dis[node]);
        }
    }

    for(int i = 0;i<n;i++){
        if(dis[i]==0 && i!=k) return -1; 
    }

    return dis[n-1];       

}


signed main() {
    FAST_IO;
    TEST
        solve();
    
    return 0;
}