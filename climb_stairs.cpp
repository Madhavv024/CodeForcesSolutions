#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sol(int n){
    if(n <= 1) return 1;
    int ans = 0 ;
    for(int i = 1;i<=n;i++){
        ans = ans + sol(n-i);
    }
    return ans;
}

int main(){
    int n = 3;
    cout<<sol(n);
}