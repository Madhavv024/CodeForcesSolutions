#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

int solve(double n){
	if(n<2) return 0;
    return 1 + solve(n/2);
}

int32_t main()
{
	int a;cin>>a;
    cout<<solve(a);
	return 0;
}