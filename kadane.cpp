#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

int circularSubarraySum(int arr[], int num)
{
    int max_sum = INT_MIN;
    int minsum = 0 , totalsum = 0, currnt_sum = 0;

    for (int i = 0; i < num; i++)
    {
        totalsum += arr[i];
        currnt_sum += arr[i];
        minsum = min(currnt_sum, minsum);
        if(currnt_sum>0) currnt_sum = 0;
    }
    
    currnt_sum = 0;
    for (int i = 0; i < num; i++)
    {
        currnt_sum += arr[i];
        max_sum = max(currnt_sum , max_sum);
        if(currnt_sum<0) currnt_sum =0;
    }

    if(max_sum<0) return max_sum;
    return max(totalsum-minsum, max_sum);
    
}

int32_t main()
{
    // write your code here
    int n;
    n = 8;
    int a[] = {8,-8,9,-9,10,-11,12};
    cout<<circularSubarraySum(a,n);
    return 0;
}