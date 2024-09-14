#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool solve(int i, int a[], int n, int sum, int target){
	if(i==n) 
    {
        if(sum==target){
            return true;
        }
        return false;
    }
    return solve(i+1,a,n,sum+a[i],target) || solve(i+1,a,n,sum-a[i],target);
}

int main()
{
	int n;cin>>n;
    int target;cin>>target;
    int a[n];
    for(auto &x:a){
        cin>>x;
    }
    if(n==1){
        if(a[0]==target) cout<<"YES";
        else cout<<"NO";
    }
    else{    
        solve(1,a,n,a[0],target) ? cout<<"YES" : cout<<"NO";
    }
	return 0;
}