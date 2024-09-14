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

int calculate_rotations(const string &s1, const string &s2) {
    int n = s1.size();
    string temp = s2;  
    for (int i = 0; i < n; ++i) {
        if (s1 == temp) {
            return i;  
        }
        
        temp = temp.substr(1) + temp[0];
    }
    return -1;  
}



void solve(){

    int n;
    cin >> n;  
    vector<string> strings(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> strings[i];  
    }

    int len = strings[0].size();  
    int min_moves = INT_MAX;  
    
    for (int i = 0; i < len; ++i) {
        string target = strings[0].substr(i) + strings[0].substr(0, i);
        int current_moves = i;   
        bool valid = true;  

        for (int j = 1; j < n; ++j) {
            int rotations = calculate_rotations(target, strings[j]);
            if (rotations == -1) {
                valid = false;   
                break;
            }
            current_moves += rotations;  
        }

        
        if (valid) {
            min_moves = min(min_moves, current_moves);
        }
    }

    if (min_moves == INT_MAX) {
        cout << -1 << endl;  
    } else {
        cout << min_moves << endl;  
    }
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