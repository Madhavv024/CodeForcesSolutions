#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k){
    if(n<=1) {
        return 0;
    }
    else if(n==2){
        if(k==n) return 1;
        return 0;
    }
    if(k<=n/2) return solve(n-1,k);
    else{
        return solve(n-1,(k+1)/2);
    }
}

int main()
{
    //write your code here
    cout<<solve(3,2);
    return 0;
}