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
#define TEST  \
    int T;    \
    cin >> T; \
    while (T--)
#define MOD(n) n % 1000000007
#define VII vector<pair<int, int>>
#define VI vector<int>
#define VS vector<string>
#define VC vector<char>
#define VB vector<bool>
#define FF first
#define SS second
#define LONGINT << fixed << setprecision(0)
#define FOR(i, n) for (long long i = 0; i < n; i++)
#define Radhe ios_base::sync_with_stdio(false);
#define Krishna    \
    cin.tie(NULL); \
    cout.tie(NULL);
#define VIN(X, N)               \
    for (int i = 0; i < N; i++) \
    {                           \
        int V;                  \
        cin >> V;               \
        X.push_back(V);         \
    };
#define VOUT(x, X)   \
    for (auto x : X) \
        cout << x << " ";
#define SORT(V) sort(V.begin(), V.end())
#define REVERSE(V) reverse(V.begin(), V.end())
#define ADD(V) accumulate(V.begin(), V.end(), 0)
#define PI 3.1415926535897932384626433832795
#define endl "\n"
#define OLD                           \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int isprime(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
long long lcm(int a, int b) { return (a / __gcd(a, b)) * b; }
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
int maxfreqof(vector<int> &nums)
{
    int count = 0, ans = 0;
    for (int n : nums)
    {
        if (count == 0)
            ans = n;
        (n == ans) ? (count++) : (count--);
    }
    return ans;
}
int MEX(set<int> V)
{
    set<int>::iterator j;
    int i = 0;
    for (j = V.begin(); j != V.end(); j++, i++)
        if (*j != i)
            return i;
    return *(V.end()) + 1;
}
int maxfreq(vector<int> V)
{
    int C = 1, MAX = 0;
    SORT(V);
    int pivot = V[0];
    for (int i = 1; i < V.size(); i++)
    {
        if (V[i] != pivot)
        {
            pivot = V[i];
            C = 0;
        }
        C++;
        MAX = max(MAX, C);
    }
    return MAX;
}


ll n, a[100009],b,z;

int aa(ll x, ll y)
{
    int ans = 0;
    if (x < 0 && y < 0)
        ans = abs(abs(x) - abs(y));
    else if (x < 0 || y < 0)
        ans = abs(x) + abs(y);
    else
        ans = abs(x - y);
    return ans;
}

int majorityElement(vector<int> v) {
	int high = v.size()/2;
	map<int,int> mp;
	for(int i = 0;i<v.size();i++){
		mp[v[i]]++;
	}
	for(auto &i:mp){
		if(i.second>high){
			return i.first;
		}
	}
	return 0;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
    int x = a[i];
    int mini, maxi;
    if (i == 0) {
      mini = a[i + 1] - x, maxi = a[n - 1] - x;
    } else if (i == n - 1) {
      mini = x - a[i - 1], maxi = x - a[0];
    } else {
      mini = std::min(x - a[i - 1], a[i + 1] - x),
      maxi = std::max(x - a[0], a[n - 1] - x);
    }
    cout<<mini<<" "<<maxi<<"\n";
  }

    return 0;
}
