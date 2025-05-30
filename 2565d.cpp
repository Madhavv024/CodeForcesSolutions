#include <bits/stdc++.h>
using namespace std;
 

#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
 
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
 
typedef long long ll;
typedef unsigned long long ull;
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef map<int, int> mii;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<string, int> umap_si;
 
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
 
vector<pll> process_input(int n, int m, ll &psum) {
    vector<pll> v;
    psum = 0;
 
    for (int i = 0; i < n; i++) {
        ll s = 0, p = 0;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            cout<<"x-- "<<x<<"\n";
            s += x;
            p += s;
            cout<<"{ "<<s<<" "<<p<<"}"<<"\n";
        }
        cout<<"{ "<<s<<" "<<p<<"}"<<"\n";
        v.push_back({s, p});
        psum += p;
    }
    
    return v;
}
 
ll compute_extra(const vector<pll> &v, int n, int m) {
    ll ex = 0;
    for (int i = 0; i < n; i++) {
        ex += (n - 1 - i) * v[i].first;
    }
    return ex * m;
}
 
void solve(ll test_case) {
    int n, m;
    cin >> n >> m;
 
    ll psum;
    vector<pll> v = process_input(n, m, psum);
    cout<<"psum=== "<<psum<<"\n";
 
    sort(v.rbegin(), v.rend());

    for(auto &i : v){
        cout<<"elements -- "<<i.first<<" "<<i.second<<"\n";
    }
 
    ll ex = compute_extra(v, n, m);
    cout<<"ex === "<<ex<<"\n";
 
    cout << psum + ex << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t, t1 = 0;
    cin >> t;
    while (t1 < t) {
        solve(t1 + 1);
        t1++;
    }
 
    return 0;
}