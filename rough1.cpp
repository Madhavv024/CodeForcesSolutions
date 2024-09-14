/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    
    vector<int> arr;
    for (int i = 1; i <=3; i++)
    {
        int num; cin>>num;
        arr.push_back(num);
    }
    
    int k =2;
    int sum = 0 ;
    sort(arr.begin() , arr.end());
    for (int i = 0; i < k; i++)
    {
        sum+=arr[arr.size()-1]+i;
    }
    cout<<sum;
    
    

    return 0;
}