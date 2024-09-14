#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int jump(int ind, vector<int> &v){
    if(ind<=0) return 0;
    int ans1 = jump(ind-1,v) + abs(v[ind]-v[ind-1]);
    int ans2 = INT_MAX;
    if(ind>1){
        ans2 = jump(ind-2,v) + abs(v[ind]-v[ind-2]);
    }
    return min(ans1,ans2);

}

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    cout<<jump(v.size()-1,v);
    return 0;
}