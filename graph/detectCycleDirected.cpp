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

bool isConnected(int start , int target , vector<vector<int>> &graph, vector<int> &vis){
    if(start == target) return true;

    vis[start] = 1;

    for(auto ngh : graph[start]){
        if(!vis[ngh]){
            if(isConnected(ngh, target, graph, vis)) return true;
        }
    }
    return false;
}

void union(int a , int b, vector<int> &parent, vector<int> &rank){
    //find rank of both a , b;
    //whichever lower , make it child and higher one as parent;
    // increase the rank of the node added 

    int rootA = find(a , parent) , rootb = find(b, parent);

    if(rootA != rootb){
        if(rank[rootA]<rank[rootb]){
            parent[rootA] = parent[rootb];
        }else if(rank[rootA] > rank[rootb])
        {
            parent[rootb] = parent[rootA];
        }
        else{
            parent[rootb] = rootA;
            rank[a] +=1;
        }        
    }


}

int find(int node, vector<int> &parent){
    if(parent[node]== -1) return node;
    else return parent[node];
}

vector<int> detectCycleWithDSU(int[][] edges){
    vector<int> ans;
    int n = edges.length;
    vector<int> parent(n) , rank(n, 0);

    // making every node its parent;
    for(int i = 0;i<n;i++)parent[i] = -1;

    for(auto edge:edges){
        int start = edge[0] , target = edge[1];
        int pu = find(start) , pv = find(target);

        if(pu == pv) {
            ans.push_back(start);
            ans.push_back(target);
        }else{
            // perform union
            union(start , target , parent, rank);
        }
        
    }
    return ans;
    
}


bool isConnectedBFS(int start, int target, vector<vector<int>> &graph){
    queue<int> q;
    vector<int> vis(n+1, 0);

    q.push(start);
    vis[start] = 1;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int ngh : graph[node]){
            if(!vis[ngh]){
                if(ngh == target){
                    return true;
                }
                vis[ngh] = 1;// to avoid same node to be added multiple times
                q.push(ngh);
                
            }
        }
    }
    return false;

}

void fun(vector<vector<int>> &edges){

    int n = edges.size();
    vector<vector<int>> graph(n);
    vector<int> vis(n , 0);

    for(auto edge: edges){
        int start = edge[0], target = edge[1];
        if(isConnected(start, target, graph, vis)){
            cout<<start<<" "<<target<<"\n";
            break;
        }else{
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
    }

}

void solve() {
    // Implement your logic here
}

signed main() {
    FAST_IO;
    TEST
        solve();
    
    return 0;
}