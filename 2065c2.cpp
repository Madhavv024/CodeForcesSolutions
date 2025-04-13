// /*
//     ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
// */
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <bitset>
// #include <cstdlib>
// #include <iomanip>
// using namespace std;
// using ll = long long;
// using lld = long double;
// #define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long long
// #define mod 10000000007
// #define INF 1e18
// #define pi 3.141592653589793238462
// #define pb push_back
// #define ppb pop_back
// #define mp make_pair
// #define TEST int T; cin >> T; while (T--)
// #define MOD(n) n%1000000007
// #define VII vector<pair<int, int>>
// #define VI vector<int>
// #define VS vector<string>
// #define VC vector<char>
// #define VB vector<bool>
// #define all(a) a.begin(),a.end()
// #define FF first
// #define SS second
// #define LONGINT << fixed << setprecision(0)
// #define FOR(i, n) for(long long i=0; i<n; i++)
// #define Radhe ios_base::sync_with_stdio(false);
// #define Krishna cin.tie(NULL); cout.tie(NULL);
// #define VIN(X, N) for(int i=0; i<N; i++){int V; cin >> V; X.push_back(V);};
// #define VOUT(x,X) for(auto x:X) cout << x << " ";
// #define SORT(V) sort(V.begin(), V.end())
// #define REVERSE(V) reverse(V.begin(), V.end())
// #define ADD(V) accumulate(V.begin(), V.end(), 0)
// #define PI 3.1415926535897932384626433832795
// #define endl "\n"
// #define OLD freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
// long long lcm(int a, int b) {return (a / __gcd(a, b)) * b;}
// bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
// int isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}
// int maxfreqof(vector<int>& nums) { int count=0, ans=0; for(int n:nums) { if(count==0) ans = n; (n==ans) ? (count++) : (count--); } return ans; }
// int MEX(set<int> V){ set<int>::iterator j; int i=0; for (j=V.begin(); j!=V.end(); j++, i++) if(*j!=i) return i; return *(V.end())+1; }
// int maxfreq(vector<int> V) { int C=1, MAX=0; SORT(V); int pivot = V[0]; for(int i=1; i<V.size(); i++) { if(V[i]!=pivot) { pivot = V[i]; C=0; } C++; MAX = max(MAX, C); } return MAX; }
// void solve() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     vector<int> b(m);
//     for (int i = 0; i < m; i++) {
//         cin >> b[i];
//     }
//     sort(all(b));
//     a[0] = min(a[0], b[0] - a[0]);
//     for (int i = 1; i < n; i++) {
//         int l = -1, r = m - 1, mi;
//         // int l = 0 , r = m-1 , mi;
//         while (r - l > 1) {
//             // mi = l + (r - l) / 2;
//             mi = (l + r) / 2;
//             if (b[mi] - a[i] >= a[i - 1]) {
//                 r = mi;
//             } else {
//                 l = mi + 1;
//             }
//         }
//         if (b[r] - a[i] >= a[i - 1] and a[i] >= a[i - 1]) {
//             a[i] = min(a[i], b[r] - a[i]);
//         } else if (b[r] - a[i] >= a[i - 1]) {
//             a[i] = b[r] - a[i];
//         } else if (a[i] < a[i - 1]) {
//             cout << "NO\n";
//             return;
//         }
//     }
//     cout << "YES\n";
// }
// signed main() {
//     FAST_IO;
//     TEST
//         solve(); 
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI (3.141592653589)
#define M 1000000007
#define pb push_back
#define f first
#define s second
#define REP(i, x, y) for (int i = x; i < y; i++)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define ps(x,y) fixed<<setprecision(y)<<x
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
 
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl; 
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int,int> mii;
typedef map<ll,ll> mll;
typedef map<char,int> mci;
typedef set<int> st;
 
#ifdef CPH
#define debug(x) cerr << "[" << #x << " : "; _print(x); cerr << "]\n";
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.f); cerr << ","; _print(p.s); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
int findSmallestOrEqual(vi& a,int x)
{
    auto value=lower_bound(all(a),x);
    if(value!=a.end()) return *value;
    else return -1; 
}

void solve()
{
    int n,m; cin>>n>>m;
    vi a(n),b(m);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    sort(all(b));
    int prev=LLONG_MIN;
    for(int i=0;i<n;i++)
    {
        int value=findSmallestOrEqual(b,a[i]+prev);
        if(value!=-1)
        {
            if(a[i]<prev)
            {
                a[i]=value-a[i];
            }
            else a[i]=min(a[i],value-a[i]);
        }
        if(a[i]<prev)
        {
            cout<<"NO\n";
            return;
        }
        prev=a[i];
    }   
    cout<<"YES\n";
 
 
}
 
signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc ; cin>>tc;
    // tc = 1;
    while(tc--)
    {
        solve();
    }
}