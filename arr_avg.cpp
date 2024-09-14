#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double solve(int ind, double a[], int n)
{
    if(ind==n){
        return 0;
    }
    return (a[ind]/n) + solve(ind+1,a,n); 

}

int main()
{
    int n;cin>>n;
    double a[n];
    for(int i =0;i<sizeof(a)/sizeof(double);i++){
        cin>>a[i];
    }
    double ans = solve(0,a,n);
    cout<<fixed<<setprecision(6)<<ans<<endl;
}