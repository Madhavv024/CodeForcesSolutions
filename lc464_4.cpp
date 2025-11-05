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

int maxWalls(vector<int>& robots, vector<int>& distance, vector<int>& walls) {
    
    vector<pair<int, int>> robotDist;

    for(int i = 0;i<robots.size();i++){
        robotDist.push_back({robots[i], distance[i]});
    }

    //sorting on the basis of position of robots
    sort(robotDist.begin(), robotDist.end());

    vector<int> robotPosition, robotDistanceRange;

    for (int i = 0; i < robots.size(); i++)
    {
        robotPosition[i] = robotDist[i].first;
        robotDistanceRange[i] = robotDist[i].second;
    }
    
    sort(robots.begin(), robots.end());
    sort(walls.begin(), walls.end());

    int overlappingWall = 0;
    vector<int> nonOverlapWalsPos;
    for(int w:walls){
        if(binary_search(robots.begin(), robots.end(), w)){
            overlappingWall++;
        }else nonOverlapWalsPos.push_back(w);
    }
    
    auto countWalls = [&] (int l , int r) -> int {
        if(l>r) return 0;
        auto itl = lower_bound(nonOverlapWalsPos.begin(), nonOverlapWalsPos.end(), l);
        auto itr = lower_bound(nonOverlapWalsPos.begin(), nonOverlapWalsPos.end(), r);
        return itr - itl;
    }

    int leftEdge = countWalls(robotPosition[0] - robotDistanceRange[0], robotPosition[0] - 1);
    int rightEdge = countWalls(robotPosition[n-1] + 1, robotPosition[n-1] + robotDistanceRange[n-1]);

    vector<int> gainLeft(n-1) , gainRight(n-1), gainBoth(n-1);



}


void solve() {
    
}

signed main() {
    FAST_IO;
    TEST
        solve();
    
    return 0;
}