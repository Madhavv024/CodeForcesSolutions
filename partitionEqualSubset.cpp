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
#define VIN(X, N) for(int i=0; i<N; i++){int V; cin >> V; H.push_back(V);};
#define VOUT(x,X) for(auto x:X) cout << x << " ";
#define SORT(V) sort(V.begin(), V.end())
#define REVERSE(V) reverse(V.begin(), V.end())
#define ADD(V) accumulate(V.begin(), V.end(), 0)
#define PI 3.1415926535897932384626433832795
#define endl "\n"
#define OLD freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

int isprime(int n){if(n==1) return 0;for(int i = 2; i <= sqrt(n); i++){if(n % i == 0)return 0;}return 1;}
long long lcm(int a, int b) {return (a / __gcd(a, b)) * b;}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
int maxfreqof(vector<int>& nums) { int count=0, ans=0; for(int n:nums) { if(count==0) ans = n; (n==ans) ? (count++) : (count--); } return ans; }
int MEX(set<int> V){ set<int>::iterator j; int i=0; for (j=V.begin(); j!=V.end(); j++, i++) if(*j!=i) return i; return *(V.end())+1; }
int maxfreq(vector<int> V) { int C=1, MAX=0; SORT(V); int pivot = V[0]; for(int i=1; i<V.size(); i++) { if(V[i]!=pivot) { pivot = V[i]; C=0; } C++; MAX = max(MAX, C); } return MAX; }


bool isSubset(vector<int>& nums , int sum, int ind, int n , vector<vector<bool>> dp){
    if(sum == 0) return dp[ind][sum] = true;
    if(ind == n) return dp[ind][sum] = false;
    if(!dp[ind][sum]){
        return dp[ind][sum];
    }
    if(nums[ind] > sum){
        return dp[ind][sum] = isSubset(nums, sum , ind+1, n, dp);
    }
    return dp[ind][sum] = isSubset(nums, sum-nums[ind], ind+1 , n, dp) || isSubset(nums, sum , ind+1, n, dp);
}

bool canPartition(vector<int>& nums) {
    int sum = 0;
    int n = nums.size() , s = 0 , s2 = 0;
    FOR(i,n){
        sum+=nums[i];
    }
    if(sum & 1){
        return false;
    }
    vector<vector<bool>> dp(n + 1, vector<bool>((sum/2) + 1, false));
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= (sum / 2); j++)
        {
            if(nums[i] > j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j - nums[i]] || dp[i-1][j];
            }
        }
        
    }
    return dp[n][sum/2];
    
    // return isSubset(nums, sum/2, 0 , n, dp);
}

void solve() {
    // Implement your logic here
    vector<int> arr = {1 , 2 ,3,4};
    cout<<(canPartition(arr)) ? "YES" : "NO";
}

signed main() {
    FAST_IO;
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}