#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    // write your code here
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n];
        int max_elem = 0;
        int min_elem = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            max_elem = max(a[i], max_elem);
            min_elem = min(a[i], min_elem); 
        }

        int lmin=0;
        int lmax=0;
        for(int i = 0;i<n;++i){
            if(a[i]==max_elem){
                lmax = i+1;
            }
            
            if(a[i]==min_elem){
                lmin = i+1;
            }
        }
        
        int rmax = n-lmax+1;
        int rmin = n-lmin+1;

        int a1 = max(lmin , lmax);
        int a2 = max(rmin, rmax);

        int a3 = min(lmin+rmax , rmin+lmax);

        cout<<min(a3,min(a1,a2))<<endl;
    }

    return 0;
}