#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(int n, int dp[]){
    if(dp[n]!=-1){
        return dp[n];
    }
    else{

        if(n==1){
            return dp[n]=0;
        }
        if(n==2){
            return dp[n]=1;
        }
        else{
            return dp[n] = solve(n-1,dp)+solve(n-2,dp);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int dp[n+1];
    fill(dp,dp+n,-1);
	int ans = solve(n,dp);
    cout<<ans;
}