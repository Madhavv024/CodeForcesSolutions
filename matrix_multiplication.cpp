#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// #define int long long

int solve(int a[], int i, int j){
    if(i==j){
        return 0;
    }
    int ans1 = INT32_MAX;
    for(int k =i;k<=j;k++){
        
    }
}

int32_t main(){
    int n; cin>>n;
    int a[n];
    for(auto &x : a){
        cin>>x;
    }
    cout<<solve(a, 1,n-1);


    return 0;
}
