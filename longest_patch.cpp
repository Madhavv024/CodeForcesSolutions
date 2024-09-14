#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
//calculate the longest patch

int32_t main()
{
    //write your code here
    int n ; cin>>n;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int num; cin>>num;
        arr.push_back(num);
    }
    int minEle=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minEle = min(minEle, arr[i]);
    }
    int count = 0 , longes_patch = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==minEle) 
            count = 0;
        count++;
        longes_patch = max(count, longes_patch);
    }
    cout<< (n * minEle) + count +1;
    return 0;
}