#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;



int32_t main()
{
    //write your code here
    int n , m;
    cin>>n>>m;
    int arr[n+1][m+1];
    for (int i = 1;i<=n;i++)
    {
        for (int j = 1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int prefix_sum[n+1][m+1];
    for (int i = 1;i<=n;i++)
    {
        for (int j = 1;j<=m;j++)
        {
            prefix_sum[i][j] = prefix_sum[i-1][j] + prefix_sum[i][j-1] + arr[i][j] - prefix_sum[i-1][j-1];
        }
    }
    int q ;  cin>>q;
    while(q--)
    {
        int A ,B , C , D;
        cin>>A>>B>>C>>D;
        int sum = prefix_sum[C][D] - prefix_sum[A-1][D] - prefix_sum[C][B-1] + prefix_sum[A-1][B-1];
        int r = C-A+1;
        int c = D-B+1;
        sum== r*c ? cout<<1<<endl : cout<< 0<<endl;
    }

    return 0;
}