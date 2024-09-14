#include <iostream>
#include <bits/stdc++.h>
// #define int long long
using namespace std;

int solve(int a, int b){
	if(a==b) return 1;
    if(a>b) return 0;
	return solve(a+1,b) + solve(a+2,b)+solve(a+3,b);
}

int main()
{
	int a;cin>>a;
	int b;cin>>b;
    cout<<solve(a,b);
	return 0;
}