#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

int solve(vector<int> &v , int ind, int n, int sum1 , int sum2){
	if(ind==n) return abs(sum1 - sum2);
	return min(solve(v,ind+1,n,sum1+v[ind],sum2),solve(v,ind+1,n,sum1,sum2+v[ind]));
}

int32_t main()
{
	int n;cin>>n;
	vector<int> v(n);
	int a;
	for (auto &i : v){
		cin>>i;
	}
	cout<<solve(v,0,n,0,0)<<endl;
	return 0;
}