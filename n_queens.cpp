#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

const int n = 8;
char a[n][n];
int ans = 0;


bool check(int i , int j){
    for(int k = i;k>=0;k--){
        if(a[k][j]=='Q') return false;
    }
    
    int k = i,l=j;

    while(i>=0 && j>=0){
        if(a[i][j] == 'Q') return false;
        i--;
        j--;
    }
    while(k>=0 && l < n){
        if(a[k][l]=='Q')
            return false;
        k--;
        l++;
    }
    return true;
}


void solve(int i){
    if(i==n){
        ans++;
        return;
    }

    for(int j = 0; j< n; j++ ){
        
        if(a[i][j]=='*' || !check(i,j))
        {
            continue;
        }
        
        a[i][j] = 'Q';
        solve(i+1);
        a[i][j] = '.';
    }
}


int32_t main(){

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin>>a[i][j];
        
    solve(0);
    cout<<ans<<endl;
    return 0;
    
}