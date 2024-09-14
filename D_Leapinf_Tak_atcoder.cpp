#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#include <iostream>
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define PI 3.141592653589793238462
// #define PI 1.0l*acos(-1)
//  #define MOD 1000000007
#define MOD 998244353
#define INF 1e18
#define nl '\n'
#define pb push_back
#define ppb pop_back
#define f first
#define s second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define py cout << "YES" << nl
#define pn cout << "NO" << nl
#define loop(i, a, b) for (int i = a; i <= b; i++)
#define rloop(i, a, b) for (int i = a; i >= b; i--)
#define tc(t) \
    int t;    \
    cin >> t; \
    while (t--)
#define prec(n) fixed << setprecision(n)
#define ini(a, i) memset(a, i, sizeof(a))

#define us unordered_set
#define um unordered_map
#define ll long long
#define ull unsigned long long
#define maxpq priority_queue<int>
#define pii pair<int, int>
#define minpq priority_queue<int, vector<int>, greater<int>>

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x) ;
#endif

// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
void google(int t) { cout << "Case #" << t << ": "; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.f);
    cerr << ",";
    _print(p.s);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

vector<vector<int>> pre(int N)
{
    vector<vector<int>> divs(N);
    loop(i, 1, N - 1)
    {
        for (int j = i; j < N; j += i)
            divs[j].pb(i);
    }
    return divs;
}

vector<int> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<int> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll add(ll x, ll y, ll m)
{
    x %= m;
    y %= m;
    ll res = x + y;
    return res >= m ? res - m : res;
}
ll mul(ll x, ll y, ll m)
{
    x %= m;
    y %= m;
    ll res = x * y;
    return res >= m ? res % m : res;
}
ll sub(ll x, ll y, ll m)
{
    x %= m;
    y %= m;
    ll res = x - y;
    return res < 0 ? res + m : res;
}
ll power(ll x, ll y, ll m)
{
    ll res = 1;
    x %= m;
    while (y)
    {
        if (y & 1)
            res = mul(res, x, m);
        y >>= 1;
        x = mul(x, x, m);
    }
    return res;
}
vector<int> fact(int n)
{
    vector<int> res(n + 1);
    res[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        res[i] = mul(res[i - 1], i, MOD);
    }
    return res;
}
int ncr(int n, int r, vector<int> &res)
{
    int ans = res[n];
    ans = mul(ans, power(res[r], MOD - 2, MOD), MOD);
    ans = mul(ans, power(res[n - r], MOD - 2, MOD), MOD);
    return ans;
}

const int N = 2e5 + 5;

void solve()
{

    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v(k);

    for (auto &i : v)
        cin >> i.f >> i.s;
    debug(v);

    vector<int> prefix(n + 1), ans(n + 1);

    ans[1] = 1;
    // debug(prefix);
    // debug(ans);
    for (int i = 1; i <= n; i++)
    {
        if (i > 2)
        {
            ans[i] = add(ans[i], ans[i - 1], MOD);
        }
        ans[i] = add(ans[i], prefix[i], MOD);
        for (int j = 0; j < k; j++)
        {
            int left = i + v[j].f, right = i + v[j].s + 1;
            if (left <= n)
            {
                prefix[left] = add(prefix[left], ans[i], MOD);
            }
            if (right <= n)
            {
                prefix[right] = sub(prefix[right], ans[i], MOD);
            }
        }
        debug(i);
        debug(prefix);
        // debug(ans);
    }
        debug(ans);
    cout << ans[n];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

#ifndef ONLINE_JUDGE
// freopen("Error.txt", "w", stderr);
#endif

    fio;
    auto start1 = high_resolution_clock::now();
    int t = 1;
    // cin >> t;
    loop(i, 1, t)
    {
        // cout<< "Case #"<< i << ": ";
        solve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);

#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration.count() / 1000 << endl;
#endif
}